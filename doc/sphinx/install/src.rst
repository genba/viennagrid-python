.. _installation-from-source:

Installation from source
========================

To install from source, your system must satisfy the following dependencies:

* **CMake 2.6 or greater** (2.8 is preferred)
* **Git** (used by CMake to download the source code of ViennaGrid, which is needed to build the software)
* **Python 2.0 or greater** (2.7 is preferred; Python 3 is not officially supported yet)
* **Python development libraries** (header files) for your Python version
* **Boost.Python** header files and compiled libraries (1.49.0 has been tested, but any recent version should work)
* **A modern C++ compiler** (for development, clang 3.0 has been used)

In case you want to generate the documentation of ViennaGrid for Python, you will also need the following packages:

* **Sphinx** to generate the Sphinx documentation
* **Doxygen** to generate the Sphinx documentation
* **A LaTeX compiler** to build the LaTeX code of the Sphinx and Doxygen documentation

Notice, though, that these packages are optional. If you don't have them, you want be able to generate the documentation, but you will still be able to build ViennaGrid for Python.

Downloading the source code of ViennaGrid for Python
----------------------------------------------------

To download any stable release of ViennaGrid for Python, go to our `GitHub page <http://genba.github.io/viennagrid-python/>`_ and visit the Downloads section. If you prefer to use the latest version from our Git repository (or if you want to develop ViennaGrid for Python), you should rather get the code by cloning the `Git repository <https://github.com/genba/viennagrid-python>`_.

Once you have the source code decompressed on your disk, enter the source code directory, which will be called something like `viennagrid-python` if you cloned the Git repository, or the same name plus a version number if you downloaded the tarball of a stable release (e.g. `viennagrid-python-0.1.0`): ::

	cd viennagrid-python-0.1.0/

Configuring the source code to be built
---------------------------------------

To configure the build process, we will use `CMake <http://www.cmake.org/>`_.

First of all, we need to create a directory where the project will be built. We choose to create a directory called `build` in the root directory of the source code directory, i.e., `viennagrid-python-0.1.0` if you've downloaded the tarball or `viennagrid-python` if you've cloned the Git repository. So, from that directory, we issue the following commands: ::

	mkdir build
	cd build/

From now on, we will execute the rest of the commands from within the `build` directory. To generate the configuration for building the project, use any of the following CMake commands, depending on which of them you've installed and what kind of interface you prefer to use:

* `cmake ..` (command line interface)
* `ccmake ..` (curses interface)
* `cmake-gui ..` (GUI)

If your system satisfies all the software dependencies mentioned above, you shouldn't have to do anything and there shouldn't be any errors to solve. The whole configuration process should have happened without requiring any input from you.

Advanced build configuration
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Selecting components to be built
""""""""""""""""""""""""""""""""

There are some CMake variables that you can use to customize your build settings and what components will be built. Currently, the CMake files are written to do the following:

#. Download the appropriate version of the ViennaGrid source code needed to compile ViennaGrid for Python (target `viennagrid`).
#. Build the Boost.Python wrapper (target `wrapper`).
#. Run unit tests on the Boost.Python wrapper (target `test`).
#. Generate the documentation (target `doc`), which actually performs the following tasks (if the necessary software is installed on your system):
	* Generate the Sphinx documentation as HTML (target `sphinx-html`).
	* Generate the Sphinx documentation as LaTeX and eventually compile it either to DVI or to PDF (target `sphinx-latex`).
	* Generate the Doxygen documentation as HTML and LaTeX, and compile the LaTeX code to either DVI or PDF (target `doxygen`).
#. Build a distutils package (target `package`), which actually relies on one of the following targets:
	* Build a distutils package without documentation (target `packagesrc`).
	* Build a distutils package with documentation (target `packagedoc`).

You can customize the build process in the following manners:

* Disable the generation of the Sphinx LaTeX documentation by setting the option `SPHINX_GENERATE_LATEX_DOC` to false. This is useful if you don't want the LaTeX documentation and thus don't want the build process to take a longer time than needed. Notice that, if you don't have LaTeX installed, this option will be set to false automatically. Otherwise, it will be set to true.
* Disable the compilation of the Sphinx LaTeX documentation by setting the option `SPHINX_COMPILE_LATEX_DOC` to false. In this case, the Sphinx LaTeX documentation will still be generated, but it won't be compiled by default, you'll have to do it by hand instead. This is useful if you want the Sphinx documentation in LaTeX form but don't want the build process to take a longer time to finish. Whenever you want to compile the LaTeX code by hand, you can enter the `doc/sphinx/latex` directory and run `make` from there.
* Disable the generation of the Doxygen documentation by setting the option `DOXYGEN_GENERATE_DOC` to false. This will exclude the target `doxygen` from the target `doc`, which is useful when you don't want to generate the Doxygen documentation (neither in HTML nor in LaTeX form) and thus don't want the build process to take a longer time than needed.
* Disable the compilation of the Doxygen LaTeX documentation by setting the option `DOXYGEN_COMPILE_LATEX_DOC` to false. In this case, the Doxygen LaTeX documentation will still be generated, but it won't be compiled by default, you'll have to do it by hand instead. This is useful if you want the Doxygen documentation in LaTeX form but don't want the build process to take a longer time to finish. Whenever you want to compile the LaTeX code by hand, you can enter the `doc/doxygen/latex` directory and run `make` from there.
* Exclude the Sphinx documentation from the distutils package by setting the option `PACKAGE_INCLUDE_SPHINX_DOC` to false. This will make the target `package` depend only on the target `packagesrc`, which creates a distutils package without documentation. Otherwise, the target `package` will depend on both `packagesrc` and `packagedoc`, thus creating a distutils package with documentation. This is useful if you don't want to spend more time building the documentation or if you have problems with the Sphinx version installed on your system, because it will disable the use of Sphinx at all.

Configuring the build type
""""""""""""""""""""""""""

The build type is a very important thing to configure, because it will affect the built time and the later software performance.

We can distinguish two main build types: debug and release. If you intend to build the software (eventually, a stable version of it) for use in production or to package it for distribution, a release build is the best option. However, if you plan to develop ViennaGrid for Python, a debug build will be better.

The differences between both types are mainly that release build are optimized for greater execution speed and don't contain debug symbols (for smaller executable size). On the other hand, a debug build will have no optimizations at all (hence, the executable will be bigger and slower), but it will contain debug information, which is ideal for development, since you most likely will have to debug at some point.

To select the build type, you must set a value for the option `CMAKE_BUILD_TYPE`. If you want a release build, set the value of this option to `Release`. If you want a debug build, set it to `Debug`.

There are other build types apart from these two. If you want a release build with debug symbols, set the option to `RelWithDebInfo` (this will have some code optimizations for increased execution speed, but still contain information for debugging). If you want a realease build with the minimum code size possible, use `MinSizeRel` instead.

For more information on how to use CMake, visit http://www.cmake.org/. There's also a very good book titled `Mastering CMake <http://www.cmake.org/cmake/help/book.html>`_, which dedicates a whole chapter to explain CMake's installation and usage for building software.

.. _building-source:

Building the source code
------------------------

Once you have configured the project using CMake, you can build the whole project from the `build` directory by issuing the command: ::

	make

This will build the low-level wrapper (written in C++ with Boost.Python) as a shared library and place the object file into `build/lib/`, and the Python distribution package (created with `distutils <http://docs.python.org/2/library/distutils.html>`_) will be placed in `build/viennagrid-python/`. Inside that directory, you'll find the `setup.py` script, the source code of the Python package `viennagrid` and, inside the package, a copy of the shared library.

Notice, however, that inside those directories there are additional files used to build the distribution package. If you want the final source distribution package, it can be found under `build/viennagrid-python/dist/` as a compressed file (the file format will depend on what operating system you've built the project on).

Installing the software
-----------------------

You have two options to install ViennaGrid for Python:

#. Install ViennaGrid for Python directly to your system, or
#. Install ViennaGrid for Python into a Python virtual environment.

If you want to install a stable version for production, go ahead with the first option. On the other hand, if you plan to test a new version or to develop ViennaGrid for Python itself, you'd better do the second.

Installing the software to your system
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

In order to install the Python package you can just run ::

	make install

Please notice that you'll need administration privileges to do this.

This will install the source distribution package with the Sphinx documentation to your Python installation. This command is preferred to running ::

	python setup.py install

from the directory `build/viennagrid-python`, even though they should have exactly the same effect.

Installing the software into a Python virtual environment
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Installing the software into a virtual environment is optional, but it provides a bunch of advantages. If you don't do it, ViennaGrid for Python will be installed into your system's Python installation, which is actually desireable for stable releases of ViennaGrid for Python. However, if you are installing an unstable release or want to develop ViennaGrid for Python, you probably don't want it to mess with your system's Python installation and break something [#it-shouldnt-break]_ . In that case, you should create a Python virtual environment to isolate any changes. When you install the build products of ViennaGrid for Python, they will be installed into this virtual environment and it won't affect the rest of your system at all, thus not breaking anything in your system's Python installation and all the software that depends on it. Furthermore, this will allow you to keep different versions of ViennaGrid for Python installed on your system, since you can install different versions to different virtual environments, and a different version into your system's Python installation.

To create a virtual environment, you need the Python package `virtualenv <https://pypi.python.org/pypi/virtualenv>`_. If you don't have it, install it from your system's package manager or using `pip <https://pypi.python.org/pypi/pip>`_: ::

	pip install virtualenv

Once you have `virtualenv` installed, move to the directory where you want to place the virtual environment (if you want, you can safely keep this inside the source code directory of ViennaGrid for Python) and create a new directory, which is where your virtual environment will be installed. We will call it `env`: ::

	mkdir env

Finally, create the virtual environment and activate it for your current terminal session: ::

	virtualenv --no-site-packages env/
	source env/bin/activate

Now that you've entered the virtual environment (with the `source`) command, you can install the Python package as explained before, by issuing the command ::

	make install

but this time the command will install the package into your newly created virtual environment, not your system's Python installation.

If you want to learn more about `virtualenv` or `pip`, visit their respective documentation sites:

* `virtualenv documentation <http://www.virtualenv.org/>`_
* `pip documentation <http://www.pip-installer.org/>`_

.. [#it-shouldnt-break] Doing this shouldn't actually break anything in your Python installation itself, but, if you have another version of ViennaGrid for Python installed, you may end up with version problems. This is what would actually get broken: if you have software that depends on one version of ViennaGrid for Python and you install a newer version which is not backwards-compatible, your software will stop working.

Running tests
-------------

You can run the test for the wrapper by issuing the command ::

	make test
