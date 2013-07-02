# ViennaGrid for Python

ViennaGrid for Python is a Python module that provides a wrapper around [ViennaGrid](http://viennagrid.sourceforge.net "ViennaGrid - C++ Mesh Data Structure Library at High Convenience and Performance"), so that you can use ViennaGrid's capabilities from your Python programs.

The code provided here is version 0.1.0 ViennaGrid for Python. This project uses [semantic versioning](http://semver.org "Semantic Versioning 2.0.0-rc.2") for specifying the version number. In brief, this means that it uses version numbers in the form

	X.Y.Z (Major.Minor.Patch)

where the following rules apply:

* Bug fixes not affecting the API increment the patch version.
* Backwards compatible API additions/changes increment the minor version.
* Backwards incompatible API changes increment the major version.

You can download the latest release of ViennaGrid for Python from [ViennaGrid for Python's GitHub page](http://genba.github.io/viennagrid-python/ "ViennaGrid for Python by genba").

Links:

* Website: http://genba.github.io/viennagrid-python/
* GitHub repository: https://github.com/genba/viennagrid-python
* Package on PyPI: http://pypi.python.org/pypi/viennagrid-python

## Compilation instructions

### Installing dependencies

In order to build ViennaGrid for Python, you will need the following additional software:

* a compiler toolset, typically gcc (we have used gcc 4.7.2)
* Python 2.7 (binary files)
* Python's development files (header files)
* Boost 1.53.0: source code of the Boost library
* bjam: a built utility for building software which uses Boost (comes with Boost 1.53.0)

(The software versions specified above are the version that we have used. You may use other versions, but we do not assure that everything will work with other versions of the software.)

If you use a Linux system as your development environment like we do (we use Debian Sid), you may install the first three items in the list using the package management system. Boost and bjam may also be available in your package manager, but we will install the latest version from source.

The vast majority of the Boost library is header-only. This means that you usually do not need to compile and install it. However, since we will be using Boost.Python and Boost.Python requires to be compiled, we will have to compile it (but we will only compile the Boost.Python component and no other components, in order to keep the compilation time short).

Let's get into the following steps with some more detail:

1. Installing a compiler toolset
2. Installing Python
3. Installing Boost and bjam

#### Installing a compiler toolset

Since ViennaGrid for Python is written in C++, you will need a compiler with C++ support. The GNU Compiler Collection (gcc) supports C++, but, if you are using Debian or a similar Linux distribution, chances are that you have to explicitly install the g++ package:

	sudo apt-get install g++

This should suffice for you to be able to compile C++ programs on your machine.

If you want to check what version of g++ you have installed, run

	g++ --version

#### Installing Python

In any modern UNIX system, Python will be installed by default. However, you will need to install Python's header files for the version of Python installed in your system.

On Debian, you can install both Python and its header files with

	sudo apt-cache install python python-dev

If you are using one of the latest releases, this will install Python 2.7 or later. Otherwise, make sure to check what Python version you install. One way to check what Python version you have installed is to run the command

	python --version

or just

	python -V

#### Installing Boost and bjam

Go to the [Boost web site](http://www.boost.org/ "Boost C++ Libraries") and download the latest version. The last version at the time of this writing is [Boost 1.53.0](http://www.boost.org/users/history/version_1_53_0.html "Version 1.53.0").

We will download the UNIX version compressed with bz2. Once you have downloaded it, unpack it with

	tar xvjf boost_1_53_0.tar.bz2

an create a symbolic link:

	ln -s boost_1_53_0 boost

The vast majority of the Boost library can be used without building, but Boost.Python is one of the few parts that require building it. Thus, we will have to configure Boost to build the Python component:

	cd boost
	./bootstrap.sh --with-libraries=python

And now we can proceed to building Boost and installing it in our system:

	./b2
	sudo ./b2 install

### Compiling the source code

In order to compile ViennaGrid for Python, two files are needed:

1. `boost-build.jam`
2. `Jamroot`

These two files describe how the project should be built. They are the bjam equivalent of a Makefile. Notice that you must specify the path to the Boost source code in both the `Jamroot` and the `boost-build.jam` files. Since we have installed Boost into the root directory of ViennaGrid for Python's source code and created a symbolic link called `boost`, these files point the Boost installation directory to `./boost`. If you install Boost into another directory, you will have to change this path in both files.

	boost/bjam include=ViennaGrid include=ViennaGrid/external

Alternatively, you can use the provided `Makefile` by running the command

	make

Running this is equivalent to running bjam. In fact, running bjam like explained before is what the `Makefile` specifies to do.

The advantage of having the `Makefile` is that it also provides a target to clean the build files:

	make clean

### Running tests

bjam already runs the tests upon compilation, but, if you want to run the tests again separately, you simply have to issue the command

	python test/test.py
