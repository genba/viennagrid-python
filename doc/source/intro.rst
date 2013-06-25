Introduction
============

*ViennaGrid for Python* is a set of Python modules that make the functionality of `ViennaGrid <http://viennagrid.sourceforge.net/>`_ accessible to Python programmers.

As ViennaGrid's website explains, *ViennaGrid is a C++ library designed for the handling of structured and unstructured meshes in arbitrary spatial dimensions using different coordinate systems*. However, the Python interface has some limitations regarding the supported spatial dimensions: you can no longer handle meshes in arbitrary dimensions; instead, it is limited to 2D and 3D meshes, but this should suffice for the vast majority of applications.

In short, *ViennaGrid for Python* enables you to define and work with 2D and 3D meshes based on triangles, quadrilaterals, tetrahedrals and hexahedrals using cartesian, polar, cylindrical or spherical coordinates.

*ViennaGrid for Python* consists of two Python modules:

1. `viennagrid_wrapper`
2. `viennagrid`

`viennagrid_wrapper` is the low-level module that wraps ViennaGrid's C++ classes and functions to Python. On the other hand, `viennagrid` is a higher-level module that provides a more Pythonic interface to ViennaGrid, and which is actually relies on `viennagrid_wrapper` to provide its functionality.

In general, you will want to use `viennagrid` instead of `viennagrid_wrapper`. However, there may be some circumstances under which you may prefer to use `viennagrid_wrapper` directly. We will look into this with further detail in the :doc:`tutorial`.
