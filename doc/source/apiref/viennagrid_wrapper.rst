API reference of viennagrid_wrapper
***********************************

.. toctree::
    :maxdepth: 2

.. automodule:: viennagrid_wrapper
    :synopsis: Python wrapper around ViennaGrid that provides low-level access to ViennaGrid's functions and classes from Python

Free functions
==============

.. autofunction:: version

Points
======

`viennagrid_wrapper` supports the following point types:

* cartesian 2D and 3D
* cylindrical (3-dimensional)
* polar (2-dimensional)
* spherical (3-dimensional)

all of them using double precision.

For each type of point there is a separate class:

* :py:class:`~viennagrid_wrapper.PointCartesian2D` for creating cartesian 2D points
* :py:class:`~viennagrid_wrapper.PointCartesian3D` for creating cartesian 3D points
* :py:class:`~viennagrid_wrapper.PointCylindrical3D` for creating cylindrical points
* :py:class:`~viennagrid_wrapper.PointPolar2D` for creating polar points
* :py:class:`~viennagrid_wrapper.PointSpherical3D` for creating spherical points

.. autoclass:: PointCartesian2D
    :members:

.. autoclass:: PointCartesian3D
    :members:

.. autoclass:: PointCylindrical3D
    :members:

.. autoclass:: PointPolar2D
    :members:

.. autoclass:: PointSpherical3D
    :members:

Domains
=======

.. autoclass:: TriangularCartesian2D_Domain
    :members:

.. autoclass:: TriangularCartesian3D_Domain
    :members:

.. autoclass:: TriangularCylindrical3D_Domain
    :members:

.. autoclass:: TriangularPolar2D_Domain
    :members:

.. autoclass:: TriangularSpherical3D_Domain
    :members:

Segments
========

.. autoclass:: TriangularCartesian2D_Segment
    :members:

.. autoclass:: TriangularCartesian3D_Segment
    :members:

.. autoclass:: TriangularCylindrical3D_Segment
    :members:

.. autoclass:: TriangularPolar2D_Segment
    :members:

.. autoclass:: TriangularSpherical3D_Segment
    :members:

Cells
=====

.. autoclass:: TriangularCartesian2D_Cell
    :members:

.. autoclass:: TriangularCartesian3D_Cell
    :members:

.. autoclass:: TriangularCylindrical3D_Cell
    :members:

.. autoclass:: TriangularPolar2D_Cell
    :members:

.. autoclass:: TriangularSpherical3D_Cell
    :members:
