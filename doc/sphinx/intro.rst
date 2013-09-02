************
Introduction
************

*ViennaGrid for Python* is a set of Python modules that make the functionality of `ViennaGrid <http://viennagrid.sourceforge.net/>`_ accessible to Python programmers.

As ViennaGrid's website explains, *ViennaGrid is a C++ library designed for the handling of structured and unstructured meshes in arbitrary spatial dimensions using different coordinate systems*. However, the Python interface has some limitations regarding the supported spatial dimensions: you can no longer handle meshes in arbitrary dimensions; instead, it is limited to 2D and 3D meshes, but this should suffice for the vast majority of applications.

In short, *ViennaGrid for Python* enables you to define and work with 1D, 2D and 3D meshes based on lines, triangles, quadrilaterals, tetrahedrals and hexahedrals using cartesian, polar, cylindrical or spherical coordinates.

*ViennaGrid for Python* consists of two Python modules that can be used separately:

1. :mod:`viennagrid.wrapper`
2. :mod:`viennagrid`

:mod:`viennagrid.wrapper` is the low-level module that wraps ViennaGrid's C++ classes and functions to Python. On the other hand, :mod:`viennagrid` is a higher-level module that provides a more Pythonic interface to ViennaGrid, and which actually relies on :mod:`viennagrid.wrapper` to provide its functionality.

In general, you will want to use :mod:`viennagrid` instead of :mod:`viennagrid.wrapper`. However, there may be some circumstances under which you may prefer to use :mod:`viennagrid.wrapper` directly. We will look into this with further detail in the :doc:`tutorial`.
