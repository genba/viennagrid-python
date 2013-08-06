Installation from source
========================

To install from source, your system must satisfy the following dependencies:

* **CMake 2.6 or greater** (2.8 is preferred)
* **Python 2.0 or greater** (2.7 is preferred; Python 3 is not supported yet)
* **Python development libraries** (header files) for your Python version
* **A modern C++ compiler** (any recent version of g++ or clang would be appropriate)

`Boost.Python <http://www.boost.org/>`_ (1.53.0 or greater) and `ViennaGrid <http://viennagrid.sourceforge.net/>`_ (1.0.1 or greater) are also required to compile ViennaGrid for Python, but, if you don't have them, you can follow the steps in section :ref:`installing-boost-python-viennagrid` to install them. On the other hand, if you already have them, you can skip that section.

Downloading the source code
---------------------------

.. _installing-boost-python-viennagrid:

Installing Boost.Python and ViennaGrid
--------------------------------------

To install Boost.Python and ViennaGrid, and to do other tasks to set up a full development environment, you can choose either the manual installation or the automatic installation. Both ways are detailed in the following sections.

Manual installation
^^^^^^^^^^^^^^^^^^^

Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod
tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,
quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo
consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse
cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non
proident, sunt in culpa qui officia deserunt mollit anim id est laborum.

Automatic installation
^^^^^^^^^^^^^^^^^^^^^^

Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod
tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,
quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo
consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse
cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non
proident, sunt in culpa qui officia deserunt mollit anim id est laborum.

Configuring the source code to be built
---------------------------------------

To configure the source code, we will use CMake.

First of all, we need to create a directory where the project will be built. We choose to create a directory called `build` in the root directory of the source code, i.e., `viennagrid-python-0.1.0` if you've downloaded the tarball or `viennagrid-python` if you've cloned the Git repository. So, from that directory, we issue the following commands: ::

	mkdir build
	cd build

From now on, we will execute the rest of the commands from within the `build` directory. To generate the configuration for building the project, just any of the following CMake commands, depending on which of them you've installed:

* `cmake ..`
* `ccmake ..`
* `cmake-gui ..`

For more information on how to use CMake, visit http://www.cmake.org/. There's also a very good book titled `Mastering CMake <http://www.cmake.org/cmake/help/book.html>`_, which dedicated a whole chapter to explain CMake's installation and usage for building software.

Building the source code
------------------------

make

The shared library will be generated under `build/lib/`, and the Python distribution package will be placed in `build/viennagrid-python/`. Inside that directory, you'll find the `setup.py` script, the source code of the Python package `viennagrid` and, inside the package, a copy of the shared library.

Notice, however, that inside those directories there are addition files used to build the distribution package. If you want the final source distribution package, it can be found under `build/viennagrid-python/dist/`.

Installing the software
-----------------------

In order to install the Python package you can just run ::

	make install

as superuser.

This will install the source distribution package with the Sphinx documentation to your Python installation.
