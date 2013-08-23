#-*- coding: utf-8 -*-

import wrapper
import config

version = wrapper.version
VERSION = version()

class Point(object):
	"""Wrapper class that represents a point of any supported coordinate system and dimension."""
	
	def __init__(self, *args, **kwargs):
		"""
		Define a new point specifying its coordinate system, dimension and, optionally, coordinates.
		
		The supported signatures are as follows:
		"""
		
		super(Point, self).__init__()
		
		_coords = None
		_coord_system = None
		_dim = None
		
		# Extract coordinate system tag from keyword arguments or use default (cartesian)
		try:
			_coord_system = kwargs['coord_system']
		except KeyError:
			_coord_system = config.CARTESIAN
		else:
			if not isinstance(_coord_system, str):
				raise TypeError('Coordinate system tag must be a string.')
			if _coord_system not in config.COORD_SYSTEM_TAGS:
				raise ValueError('Unknown coordinate system tag.')
		
		# If point coordinates (2 or 3 positional arguments) have been specified, store coordinates
		# and imply dimension of the space.
		if len(args) in config.SUPPORTED_DIMENSIONS[_coord_system]:
			for i, elem in enumerate(args):
				if not isinstance(elem, (int, long, float, complex)):
					raise TypeError('Coordinate %(i)d is non-numeric. Point coordinates must be numeric.' % locals())
			_coords = args
			_dim = len(args)
			
			# Check if keyword argument 'dim' matches number of positional arguments (point coordinates).
			# If it matches or has not been specified, ignore. If it does not match, raise an exception.
			try:
				dim = kwargs['dim']
			except KeyError:
				pass
			else:
				if not isinstance(dim, int):
					raise TypeError('Dimension must be an integer.')
				if dim != _dim:
					raise ValueError('Keyword argument "dim" does not match number of positional arguments.')
				_dim = dim
		# If no positional arguments have been specified, initialize coordinates to zero and extract
		# dimension from keyword arguments. If no dimension has been specified, raise an exception.
		elif not args:
			try:
				dim = kwargs['dim']
			except KeyError:
				if len(config.SUPPORTED_DIMENSIONS[_coord_system]) == 1:
					_dim = config.SUPPORTED_DIMENSIONS[_coord_system][0]
				else:
					raise TypeError('Space dimension has not been specified. You must either specify the dimension or the point coordinates.')
			else:
				if not isinstance(dim, int):
					raise TypeError('Dimension must be an integer.')
				if dim not in config.SUPPORTED_DIMENSIONS[_coord_system]:
					coord_system_name = _coord_system
					supported_dims = ', '.join(str(x) for x in config.SUPPORTED_DIMENSIONS[_coord_system])
					raise ValueError('Unsupported dimension. Only the following dimensions are supported for %(coord_system_name)s points: %(supported_dims)s.' % locals())
				_dim = dim
			_coords = [0 for i in range(0, _dim)]
		# If an invalid number of positional arguments has been provided, raise an exception
		else:
			coord_system_name = _coord_system
			supported_dims = ', '.join(['0'] + [str(x) for x in config.SUPPORTED_DIMENSIONS[_coord_system]])
			raise TypeError('Point() for %(coord_system_name)s points must take any of the following numbers of positional arguments: %(supported_dims)s.' % locals())
		
		classname = ''.join(['Point', _coord_system.title(), str(_dim), 'D'])
		PointType = wrapper.__getattribute__(classname)
		self._point = PointType(*_coords)
	
	@property
	def coords(self):
		"""Return a list containing the coordinates of the point."""
		return self._point.coords
	
	@property
	def coord_system(self):
		"""Return the coordinate system tag of the point as seen in :mod:`viennagrid.config`."""
		return self._point.coord_system
	
	@property
	def dim(self):
		"""Return the integer dimension of the space where the point is defined."""
		return self._point.dim
	
	def __add__(self, other):
		"""Add two points."""
		return self._point + other._point
	
	def __sub__(self, other):
		"""Subtract two points."""
		return self._point - other._point
	
	def __mul__(self, scalar):
		"""Multiply a point by a scalar number (coordinate-wise)."""
		return self._point * scalar
	
	def __div__(self, scalar):
		"""Divide a point by a scalar number (coordinate-wise)."""
		return self._point / scalar
	
	def __neg__(self):
		"""Negate a point (i.e. negate each coordinate of the point)."""
		return -self._point
	
	def __getattr__(self, attr):
		"""
		If the requested attribute is not present in this class, try to get it from
		the low-level point class. This serves the purpose of calling the methods for
		coordinate system conversion and norm computation:
		
		* to_cartesian()
		* to_cylindrical()
		* to_polar()
		* to_spherical()
		* norm_1()
		* norm_2()
		* norm_inf()
		
		Please, notice that not of all these methods are present in all point classes,
		but only the applicable ones.
		"""
		return self._point.__getattribute__(attr)

class Domain(object):
	"""Wrapper class that represents a domain of any supported domain configuration."""
	def __init__(self, config):
		"""
		Create a new domain with the given configuration.
		
		:param config: Configuration on which the new domain should be based.
		:type config: :class:`viennagrid.config.Configuration`
		"""
		super(Domain, self).__init__()
		self._config = config
		self._domain = config.make_domain()
	
	@property
	def config(self):
		"""
		Return the configuration object of this domain (instance of
		:class:`viennagrid.config.Configuration`).
		"""
		return self._config
	
	@property
	def vertices(self):
		"""
		Return an object that allows accessing the list of all vertices contained in the domain.
		
		This object provides the following methods:
		
		.. method:: __call__()
		
			This returns a Python list containing all the vertices of the domain, in ascendent order of indices: ::
			
				vertex_list = domain.vertices()
		
		.. method:: __len__()
		
			This allows you to get  the number of vertices in the domain as though it were a Python list: ::
			
				num_vertices = len(domain.vertices)
		
		.. method:: __iter__()
		
			This allows you to get an iterator over the vertices of the domain like this: ::
			
				iterator = iter(domain.vertices)
		
		.. method:: __getitem__(index)
		
			This allows you to access each vertex by its index using bracket notation: ::
			
				v0 = domain.vertices[0]
		"""
		class VertexList(object):
			def __init__(self, domain):
				self._domain = domain
			def __call__(self):
				return [Vertex(v) for v in self._domain.vertices]
			def __len__(self):
				return self._domain.num_vertices
			def __iter__(self):
				for i in range(0, len(self)):
					yield Vertex(self._domain.get_vertex(i))
			def __getitem__(self, index):
				return Vertex(self._domain.get_vertex(index))
		return VertexList(self._domain)
	
	def make_vertex(self, point):
		"""
		Create a new vertex in the domain with the coordinates of the given point and return it.
		
		The point and its coordinates will be copied, the point will not be referenced itself.
		Instead, a new point will be created.
		
		:param point: Point on which to base the vertex.
		:type point: :class:`viennagrid.Point`
		
		:returns: A :class:`~viennagrid.Vertex` object --- the newly created vertex
		"""
		if isinstance(point._point, self.config.point_type):
			return self._domain.make_vertex(point._point)
		else:
			raise TypeError('wrong point type') # TODO: make error message more descriptive
	
	def __iter__(self):
		"""
		Return a generator object to iterate over all the vertices contained in the domain.
		
		:returns: A generator over all the vertices of the domain
		"""
		for vertex in self._domain.vertices:
			yield Vertex(vertex)
	
	def read_netgen(self, path):
		"""
		Read domain and segmentation data from the Netgen file found at the given path.
		
		:param path: Path to the file
		:type path: str
		
		.. note::
			This method still doesn't work because it's not fully implemented in ViennaGrid.
		"""
		return self._domain.read_netgen(path)
	
	def read_vtk(self, path):
		"""
		Read domain and segmentation data from the VTK file found at the given path.
		
		:param path: Path to the file
		:type path: str
		
		.. note::
			This method still doesn't work because it's not fully implemented in ViennaGrid.
		"""
		return self._domain.read_vtk(path)
	
	def write_opendx(self, path):
		"""
		Write domain and segmentation data to the OpenDX file found at the given path.
		
		:param path: Path to the file
		:type path: str
		
		.. note::
			This method still doesn't work because it's not fully implemented in ViennaGrid.
		"""
		return self._domain.write_opendx(path)
	
	def write_vtk(self, path):
		"""
		Write domain and segmentation data to the VTK file found at the given path.
		
		:param path: Path to the file
		:type path: str
		
		.. note::
			This method still doesn't work because it's not fully implemented in ViennaGrid.
		"""
		return self._domain.write_vtk(path)
	
	def _make_segmentation(self):
		"""
		Create a new segmentation object and return.
		This is a helper method intended for internal use only.
		"""
		return self.config.make_segmentation(self._domain)

class Segmentation(object):
	"""Wrapper class that represents a segmentation of a wrapped domain."""
	def __init__(self, domain):
		"""
		Create a new segmentation of the given domain.
		
		:param domain: Domain on which to base the segmentation.
		:type domain: :class:`viennagrid.Domain`
		"""
		super(Segmentation, self).__init__()
		self._domain = domain
		self._segmentation = domain._make_segmentation()
	
	@property
	def domain(self):
		"""Return the domain to which this segmentation corresponds."""
		return self._domain
	
	@property
	def segments(self):
		"""
		Return an object that allows accessing the list of all segments contained in the segmentation.
		
		This object provides the following methods:
		
		.. method:: __call__()
		
			This returns a Python list containing all the segments of the segmentation, in ascendent order of indices: ::
			
				segment_list = segmentation.segments()
		
		.. method:: __len__()
		
			This allows you to get  the number of segments in the segmentation as though it were a Python list: ::
			
				num_segments = len(segmentation.segments)
		
		.. method:: __iter__()
		
			This allows you to get an iterator over the segments of the segmentation like this: ::
			
				iterator = iter(segmentation.segments)
		
		.. method:: __getitem__(index)
		
			This allows you to access each segment by its index using bracket notation: ::
			
				s0 = segmentation.segments[0]
		"""
		class SegmentList(object):
			def __init__(self, segmentation):
				self._segmentation = segmentation
			def __call__(self):
				return [Segment(seg) for seg in self._segmentation.segments]
			def __len__(self):
				return self._segmentation.num_segments
			def __iter__(self):
				for seg in self._segmentation.segments:
					yield Segment(seg)
			def __getitem__(self, index):
				return Segment(self._segmentation.segments[index])
		return SegmentList(self._segmentation)
	
	def make_segment(self):
		"""
		Create a new segment in the segmentation and return it.
		
		:returns: A :class:`~viennagrid.Segment` object --- the newly created segment
		"""
		return Segment(self._segmentation.make_segment())
	
	def __iter__(self):
		"""
		Return a generator object to iterate over all the segments contained in the segmentation.
		
		:returns: A generator over all the segments of the segmentation
		"""
		for segment in self._segmentation.segments:
			yield Segment(segment)

class Segment(object):
	"""Wrapper class that represents a segment contained in a segmentation."""
	def __init__(self, segment):
		"""
		Create a new segment based on the given low-level ViennaGrid segment.
		
		:param segment: Low-level ViennaGrid segment to be wrapped in this high-level object.
		:type segment: Low-level segment type from :mod:`viennagrid.wrapper`
		"""
		super(Segment, self).__init__()
		self._segment = segment
	
	@property
	def cells(self):
		"""
		Return an object that allows accessing the list of all cells contained in the segment.
		
		This object provides the following methods:
		
		.. method:: __call__()
		
			This returns a Python list containing all the cells of the segment, in ascendent order of indices: ::
			
				cell_list = segment.cells()
		
		.. method:: __len__()
		
			This allows you to get  the number of cells in the segment as though it were a Python list: ::
			
				num_cells = len(segment.cells)
		
		.. method:: __iter__()
		
			This allows you to get an iterator over the cells of the segment like this: ::
			
				iterator = iter(segment.cells)
		
		.. method:: __getitem__(index)
		
			This allows you to access each cell by its index using bracket notation: ::
			
				s0 = segment.cells[0]
		"""
		class CellList(object):
			def __init__(self, segment):
				self._segment = segment
			def __call__(self):
				return [Cell(c) for c in self._segment.cells]
			def __len__(self):
				return self._segment.num_cells
			def __iter__(self):
				for c in self._segment.cells:
					yield Cell(c)
			def __getitem__(self, index):
				return Cell(self._segment.cells[index])
		return CellList(self._segment)
	
	def make_cell(self, *args, **kwargs):
		"""
		Create a new cell in the segment and return it.
		
		As positional parameters you must pass as many vertices (:class:`~viennagrid.Vertex` objects) as needed to define a cell of the type and dimension of the domain.
		
		:returns: A :class:`~viennagrid.Cell` object --- the newly created cell
		"""
		vertices = [vertex._vertex for vertex in args]
		return Cell(self._segment.make_cell(*vertices))
	
	def __iter__(self):
		"""
		Return a generator object to iterate over all the cells contained in the segment.
		
		:returns: A generator over all the cells of the segment
		"""
		for cell in self._segment.cells:
			yield Cell(cell)

class Cell(object):
	"""Wrapper class that represents a cell."""
	def __init__(self, cell):
		"""
		Create a new cell based on the given low-level ViennaGrid cell.
		
		:param cell: Low-level ViennaGrid cell to be wrapped in this high-level object.
		:type cell: Low-level cell type from :mod:`viennagrid.wrapper`
		"""
		super(Cell, self).__init__()
		self._cell = cell
	
	@property
	def vertices(self):
		"""
		Return an object that allows accessing the list of all vertices that form the cell.
		
		This object provides the following methods:
		
		.. method:: __call__()
		
			This returns a Python list containing all the vertices of the cell, in ascendent order of indices: ::
			
				vertex_list = cell.vertices()
		
		.. method:: __len__()
		
			This allows you to get  the number of vertices in the cell as though it were a Python list: ::
			
				num_vertices = len(cell.vertices)
		
		.. method:: __iter__()
		
			This allows you to get an iterator over the vertices of the cell like this: ::
			
				iterator = iter(cell.vertices)
		
		.. method:: __getitem__(index)
		
			This allows you to access each vertex by its index using bracket notation: ::
			
				s0 = cell.vertices[0]
		"""
		class VertexList(object):
			def __init__(self, cell):
				self.cell = cell
			def __call__(self):
				return [Vertex(v) for v in self._cell.vertices]
			def __len__(self):
				return self._cell.num_vertices
			def __iter__(self):
				for v in self._cell.vertices:
					yield Vertex(v)
			def __getitem__(self, index):
				return Vertex(self._cell.vertices[index])
		return VertexList(self._cell)
	
	def __iter__(self):
		"""
		Return a generator object to iterate over all the vertices that form the cell.
		
		:returns: A generator over all the vertices of the cell
		"""
		for vertex in self._cell.vertices:
			yield Vertex(vertex)

class Vertex(object):
	"""Wrapper class that represents a vertex."""
	def __init__(self, vertex):
		"""
		Create a new vertex based on the given low-level ViennaGrid vertex.
		
		:param vertex: Low-level ViennaGrid vertex to be wrapped in this high-level object.
		:type vertex: Low-level vertex type from :mod:`viennagrid.wrapper`
		"""
		super(Vertex, self).__init__()
		self._vertex = vertex

class Facet(object):
	"""Wrapper class that represents a facet of a cell."""
	def __init__(self, facet):
		"""
		Create a new facet based on the given low-level ViennaGrid facet.
		
		:param facet: Low-level ViennaGrid facet to be wrapped in this high-level object.
		:type facet: Low-level facet type from :mod:`viennagrid.wrapper`
		"""
		super(Facet, self).__init__()
		self._facet = facet

class Edge(object):
	"""Wrapper class that represents an edge of a cell."""
	def __init__(self, edge):
		"""
		Create a new edge based on the given low-level ViennaGrid edge.
		
		:param edge: Low-level ViennaGrid edge to be wrapped in this high-level object.
		:type edge: Low-level edge type from :mod:`viennagrid.wrapper`
		"""
		super(Edge, self).__init__()
		self._edge = edge
