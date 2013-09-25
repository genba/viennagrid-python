# ViennaGrid for Python

ViennaGrid for Python is a Python package that provides a wrapper around [ViennaGrid](http://viennagrid.sourceforge.net "ViennaGrid - C++ Mesh Data Structure Library at High Convenience and Performance"), so that you can use ViennaGrid's capabilities from your Python programs.

The code provided here is version 0.1.0-rc.3 ViennaGrid for Python. This project uses [semantic versioning](http://semver.org "Semantic Versioning 2.0.0-rc.2") for specifying the version number. In brief, this means that it uses version numbers in the form

	X.Y.Z (Major.Minor.Patch)

where the following rules apply:

* Bug fixes not affecting the API increment the patch version.
* Backwards compatible API additions/changes increment the minor version.
* Backwards incompatible API changes increment the major version.

You can download the latest release of ViennaGrid for Python from [ViennaGrid for Python's GitHub repository](https://github.com/genba/viennagrid-python).

## How to use ViennaGrid for Python

If you want to learn how to use ViennaGrid for Python, you should read the Sphinx documentation of the project. The introduction should present the basic concepts of ViennaGrid for Python and the tutorial explains what you need to know to start writing useful programs.

Besides, there are code examples in the source code tree, under `doc/examples/`.

## Compilation instructions

If you want to compile ViennaGrid for Python from source, you may follow the installation instructions in the Sphinx documentation of the project.

Just for quick reference, we will also document it here briefly.

### Dependencies

To compile ViennaGrid for Python, you will need the following software installed on your system:

* **CMake 2.6 or greater** (2.8 is preferred)
* **Python 2.0 or greater** (2.7 is preferred; Python 3 is not officially supported yet)
* **Python development libraries** (header files) for your Python version
* **A modern C++ compiler** (for development, clang 3.0 has been used)
* **Boost.Python** (we have used Boost.Python 1.53.0)

You will also need ViennaGrid 1.1.0, preferrably in the directory `inc/` of the source code tree. Otherwise, you will have to edit the CMakeLists manually to change the path to ViennaGrid.

### Building

Once your system satisfies these dependencias, you can create the build directory and configure the build with CMake. For example:

	mkdir build
	cd build
	ccmake ..

After you generate the Makefiles with CMake, simply type

	make

to build the software.

### Installation

To install the build products, run

	make install

but please notice that you will need administrator privileges to do so.

### Running tests

If you want, you can run some tests on the wrapper with

	make test
