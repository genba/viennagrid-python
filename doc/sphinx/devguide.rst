*****************
Developer's guide
*****************

Compiling ViennaGrid for Python
===============================

The first step to getting started developing ViennaGrid for Python is to set up a development environment and compile ViennaGrid for Python. To do this, you must follow the :doc:`install/src` tutorial.

Required knowledge and previous readings
========================================

ViennaGrid for Python is a wrapper around the C++ ViennaGrid library. The low-level part of ViennaGrid for Python is also written in C++ using Boost.Python, its higher-level part is written directly in Python, though. In addition, we use CMake to generate the Makefiles so that ViennaGrid for Python can be compiled.  Besides, all source code versioning is done using Git. Thus, you must be familiar with the following technologies:

* C++
* Python
* Boost.Python
* `ViennaGrid <http://viennagrid.sourceforge.net/>`_
* `CMake <http://www.cmake.org/>`_ (you can visit the online documentation, but the `book Mastering CMake <http://www.cmake.org/cmake/help/book.html>`_ provides a very well structured guidance from basic to more advanced topics)
* `Git <http://git-scm.com/>`_ (there is plenty of documentation on Git, and the `Pro Git book <http://git-scm.com/book>`_ is available online)

The documentation of ViennaGrid for Python is generated using two tools:

* `Sphinx <http://sphinx-doc.org/>`_ (for the vast majority of the documentation)
* `Doxygen <http://www.doxygen.org/>`_ (for documenting the C++ code to support future development)

Finally, you will need to know two other tools if you plan to write tests or package ViennaGrid for Python:

* `distutils <http://docs.python.org/2/library/distutils.html>`_ (to generate the Python distributable package)
* `unittest <http://docs.python.org/2/library/unittest.html>`_ (for testing both :mod:`viennagrid.wrapper` and the high-level module :mod:`viennagrid`)

Logical structure of the project
================================

The Python extension that wraps the code of ViennaGrid to Python is written in C++ using Boost.Python. The C++ source code is under the `src/` directory. This is what users perceive as :mod:`viennagrid.wrapper` after the C++ code has been compiled to a dynamic library. Tests for the wrapper can be found under `tests/` and they are written in Python. We usually call this component the low-level wrapper or simply the wrapper.

In addition to this, there is also "the high-level Python module", which is what we call the set of Python modules :mod:`viennagrid`, :mod:`viennagrid.config`, :mod:`viennagrid.io`, :mod:`viennagrid.algorithms` and :mod:`viennagrid.accessors`. These and :mod:`viennagrid.wrapper` compose the :mod:`viennagrid` Python packaged, which is packed as a *distutils* package whose source code is under the directory `viennagrid-python/`. The source code of the actual Python package (not the *distutils* package) is under `viennagrid-python/viennagrid/`. Tests can be found under `viennagrid-python/viennagrid/tests/`. Throughout the documentation, we refer to this component as the high-level Python module or just the high-level module.

All the documentation of the project can be found under the `doc/` directory. There are three directories under `doc/` :

* `doc/sphinx/`, which contains the Sphinx documentation of the project (what you are reading right now),
* `doc/doxygen/`, which contains the files to generate the Doxygen documentation of the wrapper, and
* `doc/examples/`, which contains example Python scripts that show how to use the ViennaGrid for Python (both :mod:`viennagrid.wrapper` and :mod:`viennagrid`, depending on which one you want to use).

When you build the project, the C++ source code which forms the wrapper gets compiled into a dynamic library or shared object (on UNIX systems, `wrapper.so`) which represents a Python extension (a shared library that defines functions and classes to form a new module that extends the Python module library). Then, the Python package is created by gathering the Python source code files and the wrapper as a shared object, and a distutils package is generated with the Python package and the generated Sphinx documentation.

Source code of the wrapper
--------------------------

The source code of the wrapper can be found in the `src/` directory. The main source code file is `src/wrapper.cpp`, which defines a Boost.Python module and wraps all the functions and classes.

The functions and classes themselves are defined in separate files classified in subdirectories of `src/` according to their functionality and what relation they have to each other. Thus, you will find the domains defined in a subdirectory, segmentations in another one, algorithms in a different subdirectory, and so on.

Besides, there is a single file which is not classified under any subdirectory, because it is just one file and the functionality it provides is not related to any other file. This is `exception.hpp`, which implements a generic exception translator that translates Boost.Python and C++ exceptions into one of Python's built-in exceptions.

Source code of the Python package
---------------------------------

The source code of the Python package is much simpler, because there are fewer files. These source code files can be found under `viennagrid-python/viennagrid/`.

Like any other Python package, there is a `__init__.py` file where the fundamental classes of the module :mod:`viennagrid` are defined. More specific functionality is separated in submodules: :mod:`viennagrid.accessors` (`accessors.py`), :mod:`viennagrid.algorithms` (`algorithms.py`), :mod:`viennagrid.config` (`config.py`) and :mod:`viennagrid.io` (`io.py`).

Coding guidelines
=================

Naming conventions
------------------

The following naming conventions are used for the Python code and most of the C++ code:

* Classes: `CamelCase`
* Methods and attributes: `lower_case_with_underscores`
* Variables: `lower_case_with_underscores`
* Functions: `lower_case_with_underscores`
* Constants: `UPPER_CASE_WITH_UNDERSCORES`

There is only one exception to these rules. In the case of C++ wrapped classes, we sometimes use an underscore to separate the class name from a prefix that the class shares with other classes (e.g. `TriangularCartesian3D_Domain`), because they would otherwise be very long. However, for the rest of the code, CamelCase without underscores should be used.

Code indentation and alignment
------------------------------

Indentation in C++ is not as important as it is in Python. Since Python uses indentation to identify code blocks, indentation is vital in Python. `PEP 8 <http://www.python.org/dev/peps/pep-0008/>`_ defines a style guide for Python code, including for indentation, which they recommend to consist of 4 white spaces. However, we consider this too limiting and have opted for another approach for both Python and C++.

Instead of using only tabs or only spaces, we have opted to use both of them, but each one for the purpose they are made for: **tabs are for indentation, spaces are for code alignment**. Following this mixed approach is much better than only using one or the other, because each contributor to the project will be able to customize how they see the code more easily and this will be better for collaboration.

For a more detailed discussion on the reasons to do this, please refer to `Lea Verou's article on Why tabs are clearly superior <http://lea.verou.me/2012/01/why-tabs-are-clearly-superior/>`_. The first reason she gives is grounded in the field of web development, but the rest of them are applicable to any other kind of software project, too.

Whitespace in expressions and statements
----------------------------------------

We use spaces to separate keywords and operators in statements. This usually improves the readability of the code notably. So, instead of writing: ::

	for (i=0;i<n;++i)
		j=j+2;

we write: ::

	for (i = 0; i < n; ++i)
		j = j + 2;

Likewise, particularly for C++, we separate keywords from parenthesis using a single space: ::

	if (var1 == var2)

instead of::

	if(var1==var2)

Curly braces
------------

In C++ code, we prefer curly braces to always be put on a different line, like so::

	if (var1 == var2)
	{
		// code
	}
	
	for (i = 0; i < n; ++i)
	{
		// code
	}

with only two exceptions: when classes or structures have to be defined: ::

	typedef struct {
		// definitions...
	} my_structure;
	
	struct my_structure {
		// definitions...
	};
	
	class MyClass {
		// definitions...
	};

and in `do...while` blocks: ::

	do {
		// code
	} while (condition);

This convention turns out to be particularly useful when a condition must be split accross several lines. Consider, for example, the following code: ::

	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                           ++voeit)
	{
		vertices.append<LinearCartesian1D_Vertex>(LinearCartesian1D_Vertex(*voeit));
	}

If we didn't split this into several lines, it would become a very long line (and less readable), but, if we splitted the line but put the curly brace on the same line though, it wouldn't look very nice either: ::

	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                           ++voeit) {
		vertices.append<LinearCartesian1D_Vertex>(LinearCartesian1D_Vertex(*voeit));
	}

Source code revision control
============================

For revision control we use Git. We try to follow `Vincent Driessen's suggestions for A sucessful Git branching model <http://nvie.com/posts/a-successful-git-branching-model/>`_.

The main branch of the Git repository, where stable releases reside, is the `master` branch. The second most important branch is `devel`, where all development happens. When the changes introduced in the `devel` branch are ready to become stable, `devel` is merged into `master` and development goes on on the `devel` branch for the next release. Under no circumstances should unstable or untested code be committed to `master`.

Though committing directly to `devel` is possible and even desirable when the commit is a small change, it is highly recommended to branch off `devel` and create a topic branch in most of the cases, then merge without fast-forwarding, particularly if your changes won't fit into a single commit, but in several commits instead, or when you are going to introduce a new feature that is not guaranteed to work and will require testing and refining.

Also, try to write commit messages as descriptive as you can, and not to crowd a commit with too many changes, particularly if they are unrelated and can be split into several commits.

Finally, remember to compile and run tests frequently, so that you avoid committing changes that break something or make the software not even compile. If you need to find errors or fix the past commit history, make the most of `git bisect` and `git rebase` (but please be careful not to rebase commits you have already pushed and other have pulled).
