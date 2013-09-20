API reference of :mod:`viennagrid.wrapper`
==========================================

.. module:: viennagrid.wrapper
    :synopsis: Python wrapper around ViennaGrid that provides low-level access to ViennaGrid's functions and classes

Points
------

:mod:`viennagrid.wrapper` supports the following point types:

* cartesian 1D, 2D and 3D
* cylindrical (3-dimensional)
* polar (2-dimensional)
* spherical (3-dimensional)

all of them using double precision.

For each type of point there is a separate class:

* :py:class:`~viennagrid.wrapper.PointCartesian1D` for creating cartesian 1D points
* :py:class:`~viennagrid.wrapper.PointCartesian2D` for creating cartesian 2D points
* :py:class:`~viennagrid.wrapper.PointCartesian3D` for creating cartesian 3D points
* :py:class:`~viennagrid.wrapper.PointCylindrical3D` for creating cylindrical points
* :py:class:`~viennagrid.wrapper.PointPolar2D` for creating polar points
* :py:class:`~viennagrid.wrapper.PointSpherical3D` for creating spherical points

.. autoclass:: PointCartesian1D
    :members:

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

.. LINEAR DOMAINS

.. autoclass:: LinearCartesian1D_Domain
    :members:

.. autoclass:: LinearCartesian2D_Domain
    :members:

.. autoclass:: LinearCartesian3D_Domain
    :members:

.. autoclass:: LinearCylindrical3D_Domain
    :members:

.. autoclass:: LinearPolar2D_Domain
    :members:

.. autoclass:: LinearSpherical3D_Domain
    :members:

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

Segmentations
-------------

.. LINEAR SEGMENTATIONS

.. autoclass:: LinearCartesian1D_Segmentation
    :members:

.. autoclass:: LinearCartesian2D_Segmentation
    :members:

.. autoclass:: LinearCartesian3D_Segmentation
    :members:

.. autoclass:: LinearCylindrical3D_Segmentation
    :members:

.. autoclass:: LinearPolar2D_Segmentation
    :members:

.. autoclass:: LinearSpherical3D_Segmentation
    :members:

.. TRIANGULAR SEGMENTATIONS

.. autoclass:: TriangularCartesian2D_Segmentation
    :members:

.. autoclass:: TriangularCartesian3D_Segmentation
    :members:

.. autoclass:: TriangularCylindrical3D_Segmentation
    :members:

.. autoclass:: TriangularPolar2D_Segmentation
    :members:

.. autoclass:: TriangularSpherical3D_Segmentation
    :members:

.. QUADRILATERAL SEGMENTATIONS

.. autoclass:: QuadrilateralCartesian2D_Segmentation
    :members:

.. autoclass:: QuadrilateralCartesian3D_Segmentation
    :members:

.. autoclass:: QuadrilateralCylindrical3D_Segmentation
    :members:

.. autoclass:: QuadrilateralPolar2D_Segmentation
    :members:

.. autoclass:: QuadrilateralSpherical3D_Segmentation
    :members:

.. TETRAHEDRAL SEGMENTATIONS

.. autoclass:: TetrahedralCartesian3D_Segmentation
    :members:

.. autoclass:: TetrahedralCylindrical3D_Segmentation
    :members:

.. autoclass:: TetrahedralSpherical3D_Segmentation
    :members:

Segments
--------

.. LINEAR SEGMENTS

.. autoclass:: LinearCartesian1D_Segment
    :members:

.. autoclass:: LinearCartesian2D_Segment
    :members:

.. autoclass:: LinearCartesian3D_Segment
    :members:

.. autoclass:: LinearCylindrical3D_Segment
    :members:

.. autoclass:: LinearPolar2D_Segment
    :members:

.. autoclass:: LinearSpherical3D_Segment
    :members:

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

.. LINEAR CELLS

.. autoclass:: LinearCartesian1D_Cell
    :members:

.. autoclass:: LinearCartesian2D_Cell
    :members:

.. autoclass:: LinearCartesian3D_Cell
    :members:

.. autoclass:: LinearCylindrical3D_Cell
    :members:

.. autoclass:: LinearPolar2D_Cell
    :members:

.. autoclass:: LinearSpherical3D_Cell
    :members:

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

Vertices
--------

.. LINEAR VERTICES

.. autoclass:: LinearCartesian1D_Vertex
    :members:

.. autoclass:: LinearCartesian2D_Vertex
    :members:

.. autoclass:: LinearCartesian3D_Vertex
    :members:

.. autoclass:: LinearCylindrical3D_Vertex
    :members:

.. autoclass:: LinearPolar2D_Vertex
    :members:

.. autoclass:: LinearSpherical3D_Vertex
    :members:

.. TRIANGULAR VERTICES

.. autoclass:: TriangularCartesian2D_Vertex
    :members:

.. autoclass:: TriangularCartesian3D_Vertex
    :members:

.. autoclass:: TriangularCylindrical3D_Vertex
    :members:

.. autoclass:: TriangularPolar2D_Vertex
    :members:

.. autoclass:: TriangularSpherical3D_Vertex
    :members:

.. QUADRILATERAL VERTICES

.. autoclass:: QuadrilateralCartesian2D_Vertex
    :members:

.. autoclass:: QuadrilateralCartesian3D_Vertex
    :members:

.. autoclass:: QuadrilateralCylindrical3D_Vertex
    :members:

.. autoclass:: QuadrilateralPolar2D_Vertex
    :members:

.. autoclass:: QuadrilateralSpherical3D_Vertex
    :members:

.. TETRAHEDRAL VERTICES

.. autoclass:: TetrahedralCartesian3D_Vertex
    :members:

.. autoclass:: TetrahedralCylindrical3D_Vertex
    :members:

.. autoclass:: TetrahedralSpherical3D_Vertex
    :members:

Facets
------

.. LINEAR FACETS

.. autoclass:: LinearCartesian1D_Facet
    :members:

.. autoclass:: LinearCartesian2D_Facet
    :members:

.. autoclass:: LinearCartesian3D_Facet
    :members:

.. autoclass:: LinearCylindrical3D_Facet
    :members:

.. autoclass:: LinearPolar2D_Facet
    :members:

.. autoclass:: LinearSpherical3D_Facet
    :members:

.. TRIANGULAR FACETS

.. autoclass:: TriangularCartesian2D_Facet
    :members:

.. autoclass:: TriangularCartesian3D_Facet
    :members:

.. autoclass:: TriangularCylindrical3D_Facet
    :members:

.. autoclass:: TriangularPolar2D_Facet
    :members:

.. autoclass:: TriangularSpherical3D_Facet
    :members:

.. QUADRILATERAL FACETS

.. autoclass:: QuadrilateralCartesian2D_Facet
    :members:

.. autoclass:: QuadrilateralCartesian3D_Facet
    :members:

.. autoclass:: QuadrilateralCylindrical3D_Facet
    :members:

.. autoclass:: QuadrilateralPolar2D_Facet
    :members:

.. autoclass:: QuadrilateralSpherical3D_Facet
    :members:

.. TETRAHEDRAL FACETS

.. autoclass:: TetrahedralCartesian3D_Facet
    :members:

.. autoclass:: TetrahedralCylindrical3D_Facet
    :members:

.. autoclass:: TetrahedralSpherical3D_Facet
    :members:

Edges
-----

.. LINEAR EDGES

.. autoclass:: LinearCartesian1D_Edge
    :members:

.. autoclass:: LinearCartesian2D_Edge
    :members:

.. autoclass:: LinearCartesian3D_Edge
    :members:

.. autoclass:: LinearCylindrical3D_Edge
    :members:

.. autoclass:: LinearPolar2D_Edge
    :members:

.. autoclass:: LinearSpherical3D_Edge
    :members:

.. TRIANGULAR EDGES

.. autoclass:: TriangularCartesian2D_Edge
    :members:

.. autoclass:: TriangularCartesian3D_Edge
    :members:

.. autoclass:: TriangularCylindrical3D_Edge
    :members:

.. autoclass:: TriangularPolar2D_Edge
    :members:

.. autoclass:: TriangularSpherical3D_Edge
    :members:

.. QUADRILATERAL EDGES

.. autoclass:: QuadrilateralCartesian2D_Edge
    :members:

.. autoclass:: QuadrilateralCartesian3D_Edge
    :members:

.. autoclass:: QuadrilateralCylindrical3D_Edge
    :members:

.. autoclass:: QuadrilateralPolar2D_Edge
    :members:

.. autoclass:: QuadrilateralSpherical3D_Edge
    :members:

.. TETRAHEDRAL EDGES

.. autoclass:: TetrahedralCartesian3D_Edge
    :members:

.. autoclass:: TetrahedralCylindrical3D_Edge
    :members:

.. autoclass:: TetrahedralSpherical3D_Edge
    :members:

Free functions
--------------

.. autofunction:: version

Input/output functions
^^^^^^^^^^^^^^^^^^^^^^

.. autofunction:: read_netgen
.. autofunction:: read_vtk
.. autofunction:: write_opendx
.. autofunction:: write_vtk

Algorithms
^^^^^^^^^^

.. autofunction:: apply_voronoi
.. autofunction:: cell_refine
.. autofunction:: centroid
.. autofunction:: circumcenter
.. autofunction:: is_boundary
.. autofunction:: is_interface
.. autofunction:: refine
.. autofunction:: refine_uniformly
.. autofunction:: scale
.. autofunction:: spanned_volume
.. autofunction:: surface
.. autofunction:: volume
