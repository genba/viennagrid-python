API reference of :mod:`viennagrid`
==================================

:mod:`viennagrid` --- Fundamental classes for mesh representation
-----------------------------------------------------------------

.. module:: viennagrid
	:synopsis: High-level classes for mesh representation

.. autoclass:: Point

	.. automethod:: __init__
	.. autoattribute:: coords
	.. autoattribute:: coord_system
	.. autoattribute:: dim
	.. automethod:: __add__
	.. automethod:: __sub__
	.. automethod:: __mul__
	.. automethod:: __div__
	.. automethod:: __neg__
	.. automethod:: __getattr__

.. autoclass:: Domain

	.. automethod:: __init__
	.. autoattribute:: config
	.. autoattribute:: vertices
	.. autoattribute:: cells
	.. automethod:: make_vertex
	.. automethod:: make_cell
	.. automethod:: __iter__

.. autoclass:: Segmentation

	.. automethod:: __init__
	.. autoattribute:: domain
	.. autoattribute:: segments
	.. automethod:: make_segment
	.. automethod:: __iter__

.. autoclass:: Segment

	.. automethod:: __init__
	.. autoattribute:: cells
	.. automethod:: make_cell
	.. automethod:: __iter__

.. autoclass:: Cell

	.. automethod:: __init__
	.. autoattribute:: vertices
	.. autoattribute:: facets
	.. autoattribute:: edges
	.. automethod:: __iter__

.. autoclass:: Vertex

	.. automethod:: __init__
	.. automethod:: to_point

.. autoclass:: Facet

	.. automethod:: __init__

.. autoclass:: Edge

	.. automethod:: __init__

:mod:`viennagrid.config` --- Configuration classes for domain definition
------------------------------------------------------------------------

.. automodule:: viennagrid.config
	:members:
	:undoc-members:
	:synopsis: Configuration classes for domain definition

.. _coordinate-system-tags:

Coordinate system tags and supported dimensions
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. data:: CARTESIAN

	String that identifies the cartesian coordinate system. Its value is the string `'cartesian'`.

.. data:: POLAR

	String that identifies the polar coordinate system. Its value is the string `'polar'`.

.. data:: SPHERICAL

	String that identifies the spherical coordinate system. Its value is the string `'spherical'`.

.. data:: CYLINDRICAL

	String that identifies the cylindrical coordinate system. Its value is the string `'cylindrical'`.

.. data:: COORD_SYSTEM_TAGS

	Tuple that contains all the supported coordinate system tags. The definition is as follows. ::

		COORD_SYSTEM_TAGS = (CARTESIAN, POLAR, SPHERICAL, CYLINDRICAL)

.. data:: SUPPORTED_DIMENSIONS

	Dictionary where the key is a coordinate system tag and the value is a tuple containing all supported dimensions for the given coordinate system. The definition is as follows. ::

		SUPPORTED_DIMENSIONS = {
			CARTESIAN:      (1, 2, 3),
			CYLINDRICAL:    (3,),
			POLAR:          (2,),
			SPHERICAL:      (3,),
		}

.. _cell-tags:

Cell tags
^^^^^^^^^

.. data:: LINE_TAG

	String that identifies the given cell. Its value is the string `'linear'`.

.. data:: TRIANGLE_TAG

	String that identifies the given cell. Its value is the string `'triangular'`.

.. data:: TETRAHEDRON_TAG

	String that identifies the given cell. Its value is the string `'tetrahedral'`.

.. data:: QUADRILATERAL_TAG

	String that identifies the given cell. Its value is the string `'quadrilateral'`.

.. data:: HEXAHEDRON_TAG

	String that identifies the given cell. Its value is the string `'hexahedral'`.

.. data:: CELL_TAGS

	Tuple that contains all the supported cell tags. The definition is as follows. ::
	
		CELL_TAGS = (LINE_TAG, TRIANGLE_TAG, TETRAHEDRON_TAG, QUADRILATERAL_TAG, HEXAHEDRON_TAG)

Common configurations
^^^^^^^^^^^^^^^^^^^^^

.. data:: linear_1d

	Instance of class :class:`~viennagrid.config.Configuration` that holds the configuration of a linear domain of cartesian 1D points. This is exactly the same as: ::
	
		Configuration(LINE_TAG, CARTESIAN, 1)

.. data:: linear_2d

	Instance of class :class:`~viennagrid.config.Configuration` that holds the configuration of a linear domain of cartesian 2D points. This is exactly the same as: ::
	
		Configuration(LINE_TAG, CARTESIAN, 2)

.. data:: linear_3d

	Instance of class :class:`~viennagrid.config.Configuration` that holds the configuration of a linear domain of cartesian 3D points. This is exactly the same as: ::
	
		Configuration(LINE_TAG, CARTESIAN, 3)

.. data:: triangular_2d

	Instance of class :class:`~viennagrid.config.Configuration` that holds the configuration of a triangular domain of cartesian 2D points. This is exactly the same as: ::
	
		Configuration(TRIANGLE_TAG, CARTESIAN, 2)

.. data:: triangular_3d

	Instance of class :class:`~viennagrid.config.Configuration` that holds the configuration of a triangular domain of cartesian 3D points. This is exactly the same as: ::
	
		Configuration(TRIANGLE_TAG, CARTESIAN, 3)

.. data:: tetrahedral_3d

	Instance of class :class:`~viennagrid.config.Configuration` that holds the configuration of a tetrahedral domain of cartesian 3D points. This is exactly the same as: ::
	
		Configuration(TETRAHEDRON_TAG, CARTESIAN, 3)

.. data:: quadrilateral_2d

	Instance of class :class:`~viennagrid.config.Configuration` that holds the configuration of a quadrilateral domain of cartesian 2D points. This is exactly the same as: ::
	
		Configuration(QUADRILATERAL_TAG, CARTESIAN, 2)

.. data:: quadrilateral_3d

	Instance of class :class:`~viennagrid.config.Configuration` that holds the configuration of a quadrilateral domain of cartesian 3D points. This is exactly the same as: ::
	
		Configuration(QUADRILATERAL_TAG, CARTESIAN, 3)

.. data:: hexahedral_3d

	Instance of class :class:`~viennagrid.config.Configuration` that holds the configuration of a hexahedral domain of cartesian 3D points. This is exactly the same as: ::
	
		Configuration(HEXAHEDRON_TAG, CARTESIAN, 3)

:mod:`viennagrid.algorithms` --- Common algorithms on mesh elements
-------------------------------------------------------------------

.. automodule:: viennagrid.algorithms
	:members:
	:undoc-members:
	:synopsis: Common algorithms on mesh elements

:mod:`viennagrid.io` --- Input/output functions
-----------------------------------------------

.. automodule:: viennagrid.io
	:members:
	:undoc-members:
	:synopsis: Input/output functions

:mod:`viennagrid.accessors` --- Interface for storing scalar quantities in meshes
---------------------------------------------------------------------------------

.. automodule:: viennagrid.accessors
	:members:
	:undoc-members:
	:synopsis: Interface for storing scalar quantities in meshes
