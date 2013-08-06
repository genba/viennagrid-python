API reference of :mod:`viennagrid.wrapper`
==========================================

.. module:: viennagrid.wrapper
    :synopsis: Python wrapper around ViennaGrid that provides low-level access to ViennaGrid's functions and classes

Free functions
--------------

.. autofunction:: version

Points
------

:mod:`viennagrid.wrapper` supports the following point types:

* cartesian 2D and 3D
* cylindrical (3-dimensional)
* polar (2-dimensional)
* spherical (3-dimensional)

all of them using double precision.

For each type of point there is a separate class:

* :py:class:`~viennagrid.wrapper.PointCartesian2D` for creating cartesian 2D points
* :py:class:`~viennagrid.wrapper.PointCartesian3D` for creating cartesian 3D points
* :py:class:`~viennagrid.wrapper.PointCylindrical3D` for creating cylindrical points
* :py:class:`~viennagrid.wrapper.PointPolar2D` for creating polar points
* :py:class:`~viennagrid.wrapper.PointSpherical3D` for creating spherical points

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
-------

.. TRIANGULAR DOMAINS

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

.. QUADRILATERAL DOMAINS

.. autoclass:: QuadrilateralCartesian2D_Domain
    :members:

.. autoclass:: QuadrilateralCartesian3D_Domain
    :members:

.. autoclass:: QuadrilateralCylindrical3D_Domain
    :members:

.. autoclass:: QuadrilateralPolar2D_Domain
    :members:

.. autoclass:: QuadrilateralSpherical3D_Domain
    :members:

.. TETRAHEDRAL DOMAINS

.. autoclass:: TetrahedralCartesian3D_Domain
    :members:

.. autoclass:: TetrahedralCylindrical3D_Domain
    :members:

.. autoclass:: TetrahedralSpherical3D_Domain
    :members:

Segments
--------

.. TRIANGULAR SEGMENTS

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

.. QUADRILATERAL SEGMENTS

.. autoclass:: QuadrilateralCartesian2D_Segment
    :members:

.. autoclass:: QuadrilateralCartesian3D_Segment
    :members:

.. autoclass:: QuadrilateralCylindrical3D_Segment
    :members:

.. autoclass:: QuadrilateralPolar2D_Segment
    :members:

.. autoclass:: QuadrilateralSpherical3D_Segment
    :members:

.. TETRAHEDRAL SEGMENTS

.. autoclass:: TetrahedralCartesian3D_Segment
    :members:

.. autoclass:: TetrahedralCylindrical3D_Segment
    :members:

.. autoclass:: TetrahedralSpherical3D_Segment
    :members:

Cells
-----

.. TRIANGULAR CELLS

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

.. QUADRILATERAL CELLS

.. autoclass:: QuadrilateralCartesian2D_Cell
    :members:

.. autoclass:: QuadrilateralCartesian3D_Cell
    :members:

.. autoclass:: QuadrilateralCylindrical3D_Cell
    :members:

.. autoclass:: QuadrilateralPolar2D_Cell
    :members:

.. autoclass:: QuadrilateralSpherical3D_Cell
    :members:

.. TETRAHEDRAL CELLS

.. autoclass:: TetrahedralCartesian3D_Cell
    :members:

.. autoclass:: TetrahedralCylindrical3D_Cell
    :members:

.. autoclass:: TetrahedralSpherical3D_Cell
    :members:
