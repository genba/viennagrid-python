************
Introduction
************

*ViennaGrid for Python* is a set of Python modules that make the functionality of `ViennaGrid <http://viennagrid.sourceforge.net/>`_ accessible to Python programmers.

As `ViennaGrid's website <http://viennagrid.sourceforge.net/>`_ explains, *ViennaGrid is a C++ library designed for the handling of structured and unstructured meshes in arbitrary spatial dimensions using different coordinate systems*. However, the Python interface has some limitations regarding the supported spatial dimensions: you can no longer handle meshes in arbitrary dimensions; instead, it is limited to 2D and 3D meshes, but this should suffice for the vast majority of applications.

In short, *ViennaGrid for Python* enables you to define and work with meshes based on lines, triangles, quadrilaterals and tetrahedra using cartesian (1D, 2D and 3D), polar (2D), cylindrical (3D) or spherical (3D) coordinates.

*ViennaGrid for Python* is based on two Python modules that should be considered separately:

1. :mod:`viennagrid.wrapper`
2. :mod:`viennagrid`

:mod:`viennagrid.wrapper` is the low-level module that wraps ViennaGrid's C++ classes and functions to Python. On the other hand, :mod:`viennagrid` is a higher-level module that provides a more Pythonic interface to ViennaGrid, and which actually relies on :mod:`viennagrid.wrapper` to provide its functionality.

Even though we are talking only about :mod:`viennagrid` as a Python module, ViennaGrid for Python is actually a Python package which consists of the following modules:

- :mod:`viennagrid`
- :mod:`viennagrid.accessors`
- :mod:`viennagrid.algorithms`
- :mod:`viennagrid.config`
- :mod:`viennagrid.io`
- :mod:`viennagrid.wrapper`

However, we refer only to :mod:`viennagrid` and :mod:`viennagrid.wrapper` because we want to mark the difference between them, and we include the rest of the modules with :mod:`viennagrid` when we speak, because all of them provide a high-level interface (excepting :mod:`viennagrid.wrapper`).

In general, you will want to use :mod:`viennagrid` instead of :mod:`viennagrid.wrapper`. However, there may be some circumstances under which you may prefer to use :mod:`viennagrid.wrapper` directly. We will look into this with further detail in the :doc:`tutorial`.
