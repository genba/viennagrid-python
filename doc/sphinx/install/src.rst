.. _installation-from-source:

Installation from source
========================

To install from source, your system must satisfy the following dependencies:

* **CMake 2.6 or greater** (2.8 is preferred)
* **Python 2.0 or greater** (2.7 is preferred; Python 3 is not supported yet)
* **Python development libraries** (header files) for your Python version
* **A modern C++ compiler** (any recent version of g++ or clang will do a good job)

`Boost.Python <http://www.boost.org/>`_ (1.53.0 or greater) and `ViennaGrid <http://viennagrid.sourceforge.net/>`_ (1.1.0 or greater) are also required to compile ViennaGrid for Python, but, if you don't have them, you can follow the steps in section :ref:`setting-up-devel-environ` to install them. On the other hand, if you already have them, you can skip directly to section :ref:`configuring-source` (provided that you don't want to create a virtual environment, which is done in section :ref:`setting-up-devel-environ`).

Downloading the source code of ViennaGrid for Python
----------------------------------------------------

To download any stable release of ViennaGrid for Python, go to our `GitHub page <http://genba.github.io/viennagrid-python/>`_ and visit the Downloads section. If you prefer to use the latest version from our Git repository (or if you want to develop ViennaGrid for Python), you should rather get the code by cloning the `Git repository <https://github.com/genba/viennagrid-python>`_.

Once you have the source code decompressed on your disk, enter the source code directory, which will be called something like `viennagrid-python` if you cloned the Git repository, or the same name plus a version number if you downloaded the tarball of a stable release (e.g. `viennagrid-python-0.1.0`): ::

	cd viennagrid-python-0.1.0/

.. _setting-up-devel-environ:

Setting up the development environment
--------------------------------------

Before compiling ViennaGrid for Python, you must set up a development environment.

In order to set up a development environment for ViennaGrid for Python, we must do the following:

#. Download and install Boost.Python
#. Download the source code of ViennaGrid
#. Optionally, create a Python virtual environment

To set up a development environment, you can choose to do either a :ref:`manual-setup` or an :ref:`automatic-setup` using a script provided with the source code of ViennaGrid for Python.

.. _manual-setup:

Manual setup
^^^^^^^^^^^^

Downloading and installing Boost.Python
"""""""""""""""""""""""""""""""""""""""

If the package manager of your operating system provides packages for Boost.Python, you may install it from the packages, but please notice that the development of ViennaGrid for Python 0.1.0 was done using Boost 1.53.0. While a later version of Boost may work nicely, we cannot grant that a previous version will work without problems.

If you prefer to install Boost.Python from source, you'll have to download Boost from http://www.boost.org/. In general, you don't need to compile Boost to use it, excepting when you use some of the few modules that require compilation. Boost.Python is one of those modules. Thus, we will have to compile it.

For the development of ViennaGrid for Python, we use the convention to place all libraries that ViennaGrid for Python needs into the `inc` directory under the source code root directory (in our example, `viennagrid-python-0.1.0`), but you may choose to place Boost anywhere in your system. If you install Boost after compiling it, the place where its source code is located on disk won't matter and CMake (our configuration utility) will be able to find it. However, if you decide not to install Boost (which is totally fine), you'll have to provide the full path to CMake when we configure the project for building.

That being said, we can proceed to fetch the Boost tarball from http://www.boost.org/ and decompress it. Since we used the bzipped version of Boost 1.53.0 for development: ::

	tar xvjf boost_1_53_0.tar.bz2

Now, we must enter the decompressed directory and configure Boost to be built with the Boost.Python library: ::

	cd boost_1_53_0/
	./bootstrap.sh --with-libraries=python

After the configuration has finished, we compile Boost.Python by issuing the command: ::

	./b2

When compilation has finished, the compilation script will show us the paths where Boost's header files and shared libraries are located, respectively. If you decide not to install Boost on your system, you'll have to note these to paths to tell CMake where Boost is on your disk.

Finally, if you decide to install Boost.Python after all, you can do it like this (but please notice that you need administrator priviledges for this): ::

	./b2 install

If you need more information on how to build Boost.Python, visit the `Boost documentation <http://www.boost.org/doc/>`_.

Getting ViennaGrid
""""""""""""""""""

To download a stable version of ViennaGrid, visit http://viennagrid.sourceforge.net/. At this time, the CMake configuration of ViennaGrid for Python is not able to find ViennaGrid if it's outside of the `inc` directory mentioned above. Thus, you'll have to download and decompress ViennaGrid to that directory.

If you prefer to use the latest development version from `ViennaGrid's GitHub repository <https://github.com/viennagrid/viennagrid-dev>`_, you'll have to clone that repository to `inc` and, since the resulting directory will be called `viennagrid-dev`, you'll have to rename it to just `viennagrid` for CMake to find it. All this can be done in a single command, if you want: ::

	git clone git@github.com:viennagrid/viennagrid-dev.git viennagrid

However, if you've cloned ViennaGrid for Python from the Git repository, you don't need to download or clone anything, because the ViennaGrid repository is included as a submodule. Thus, the only thing you'll have to do is update the submodules from within the source code directory of ViennaGrid for Python: ::

	git submodules update

Creating a Python virtual environment
"""""""""""""""""""""""""""""""""""""

As said before, this step is optional. If you don't do it, ViennaGrid for Python will be installed into your system's Python installation, which is actually desireable for stable releases of ViennaGrid for Python. However, if you are installing an unstable release or want to develop ViennaGrid for Python, you probably don't want it to mess with your system's Python installation and break something. In that case, you should create a Python virtual environment to isolate any changes. When you install the build products of ViennaGrid for Python, they will be installed into this virtual environment and it won't affect the rest of your system at all, thus not breaking anything in your system's Python installation and all the software that depends on it. Furthermore, this will allow you to keep different versions of ViennaGrid for Python installed on your system, since you can install different versions to different virtual environments, and a different version into your system's Python installation.

To create a virtual environment, you need the Python package `virtualenv <https://pypi.python.org/pypi/virtualenv>`_. If you don't have it, install it from your system's package manager or using `pip <https://pypi.python.org/pypi/pip>`_: ::

	pip install virtualenv

Once you have `virtualenv` installed, move to the directory where you want to place the virtual environment (if you want, you can safely keep this inside the source code directory of ViennaGrid for Python) and create a new directory, which is where your virtual environment will be installed. We will call it `env`: ::

	mkdir env

Finally, create the virtual environment and activate it for your current terminal session: ::

	virtualenv --no-site-packages env/
	source env/bin/activate

If you want to learn more about `virtualenv` or `pip`, visit their respective documentation sites:

* `virtualenv documentation <http://www.virtualenv.org/>`_
* `pip documentation <http://www.pip-installer.org/>`_

You're now ready to go on with :ref:`configuring-source`.

.. _automatic-setup:

Automatic setup
^^^^^^^^^^^^^^^

In the source code directory of ViennaGrid for Python, there is a directory called `scripts` that contains scripts that are useful for the development of ViennaGrid for Python. One of these scripts is a Python script named `bootstrap.py`.

This script can be used to automatically set up a development environment for ViennaGrid for Python. If you call it passing the destination directory for libraries as a parameter (let's say, `inc`) ::

	./scripts/bootstrap.py inc/

it will download and compile Boost.Python, and get the latest ViennaGrid version from the GitHub repository.

If you also want to install Boost.Python to your system, add the `-I` option (notice that `sudo` must be configured on your system for this to work): ::

	./scripts/bootstrap.py inc/ -I

If you want to set up a virtual environment under `env`, add the `-e` option: ::

	./scripts/bootstrap.py inc/ -e env/

If you want the script to ask you before doing anything, you can enter the interactive mode with the `-i` option: ::

	./scripts/bootstrap.py inc/ -i

To get more information on how to use the bootstrap script, use the `--help` command line argument: ::

	./scripts/bootstrap.py --help

.. _configuring-source:

Configuring the source code to be built
---------------------------------------

To configure the source code, we will use `CMake <http://www.cmake.org/>`_.

First of all, we need to create a directory where the project will be built. We choose to create a directory called `build` in the root directory of the source code, i.e., `viennagrid-python-0.1.0` if you've downloaded the tarball or `viennagrid-python` if you've cloned the Git repository. So, from that directory, we issue the following commands: ::

	mkdir build
	cd build/

From now on, we will execute the rest of the commands from within the `build` directory. To generate the configuration for building the project, use any of the following CMake commands, depending on which of them you've installed and what kind of interface you prefer to use:

* `cmake ..` (command line interface)
* `ccmake ..` (curses interface)
* `cmake-gui ..` (GUI)

If you've set up the development environment as explained above and installed Boost.Python to your system, you shouln't have to do anything and there shouldn't be any errors to solve. The whole configuration process should have happened without requiring any input from you.

However, if you haven't installed Boost to your system, you'll get a CMake error message stating that it could not find Boost.Python and you'll have to provide its location manually. After that re-run the configuration tool again and everything should work fine now and you can proceed to :ref:`building-source`.

For more information on how to use CMake, visit http://www.cmake.org/. There's also a very good book titled `Mastering CMake <http://www.cmake.org/cmake/help/book.html>`_, which dedicated a whole chapter to explain CMake's installation and usage for building software.

.. _building-source:

Building the source code
------------------------

Once you've configured the project using CMake, you can build the whole project from the `build` directory by issuing the command: ::

	make

This will build the low-level wrapper (written in C++ with Boost.Python) as a shared library and place the object file into `build/lib/`, and the Python distribution package (created with `distutils <http://docs.python.org/2/library/distutils.html>`_) will be placed in `build/viennagrid-python/`. Inside that directory, you'll find the `setup.py` script, the source code of the Python package `viennagrid` and, inside the package, a copy of the shared library.

Notice, however, that inside those directories there are additional files used to build the distribution package. If you want the final source distribution package, it can be found under `build/viennagrid-python/dist/` as a compressed file (the file format will depend on what operating system you've built the project on).

Installing the software
-----------------------

In order to install the Python package you can just run ::

	make install

Please notice that you'll need administration privileges to do this.

This will install the source distribution package with the Sphinx documentation to your Python installation. This command is preferred to running ::

	python setup.py install

from the directory `build/viennagrid-python`, even though they should have exactly the same effect.
