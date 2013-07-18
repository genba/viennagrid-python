#-*- coding: utf-8 -*-

import viennagrid_wrapper as wrapper

import config

class Point(object):
	"""docstring for Point"""
	def __init__(self, *args, **kwargs):
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
		return self._point.coords
	
	@property
	def coord_system(self):
		return self._point.coord_system
	
	@property
	def dim(self):
		return self._point.dim
	
	def __add__(self, other):
		return self._point + other._point
	
	def __sub__(self, other):
		return self._point - other._point
	
	def __mul__(self, scalar):
		return self._point * scalar
	
	def __div__(self, scalar):
		return self._point / scalar
	
	def __neg__(self):
		return -self._point
	
	def __getattr__(self, attr):
		return self._point.__getattribute__(attr)

class Domain(object):
	"""docstring for Domain"""
	def __init__(self, config):
		super(Domain, self).__init__()
		self._config = config
		self._domain = config.create_domain()
	
	@property
	def config(self):
		return self._config
	
	@property
	def vertices(self):
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
	
	def add_vertex(self, point):
		if isinstance(point._point, self.config.point_type):
			self._domain.add_vertex(point._point)
		else:
			raise TypeError('wrong point type') # TODO: make error message more descriptive
	
	def __iter__(self):
		for vertex in self._domain.vertices:
			yield Vertex(vertex)
	
	def read_netgen(self, path):
		return self._domain.read_netgen(path)
	
	def read_vtk(self, path):
		return self._domain.read_vtk(path)
	
	def write_opendx(self, path):
		return self._domain.write_opendx(path)
	
	def write_vtk(self, path):
		return self._domain.write_vtk(path)
	
	def _create_segmentation(self):
		return self.config.create_segmentation(self._domain)

class Segmentation(object):
	def __init__(self, domain):
		super(Segmentation, self).__init__()
		self._domain = domain
		self._segmentation = domain._create_segmentation()
	
	@property
	def domain(self):
		return self._domain
	
	@property
	def segments(self):
		class SegmentList(object):
			def __init__(self, segment_list):
				self._segment_list = segment_list
			def __call__(self):
				return [Segment(seg) for seg in self._segment_list]
			def __len__(self):
				return len(self._segment_list)
			def __iter__(self):
				for seg in self._segment_list:
					yield Segment(seg)
			def __getitem__(self, index):
				return Segment(self._segment_list[index])
		return SegmentList(self._segmentation.segments)
	
	def create_segment(self):
		return Segment(self._segmentation.create_segment())
	
	def __iter__(self):
		for segment in self._segmentation.segments:
			yield Segment(segment)

class Segment(object):
	def __init__(self, segment):
		super(Segment, self).__init__()
		self._segment = segment
	
	@property
	def cells(self):
		class CellList(object):
			def __init__(self, cell_list):
				self._cell_list = cell_list
			def __call__(self):
				return [Cell(c) for c in self._cell_list]
			def __len__(self):
				return len(self._cell_list)
			def __iter__(self):
				for c in self._cell_list:
					yield Cell(c)
			def __getitem__(self, index):
				return Cell(self._cell_list[index])
		return CellList(self._segment.cells)
	
	def create_cell(self, *args, **kwargs):
		vertices = [vertex._vertex for vertex in args]
		return Cell(self._segment.create_cell(*vertices))
	
	def __iter__(self):
		for cell in self._segment.cells:
			yield Cell(cell)

class Cell(object):
	def __init__(self, cell):
		super(Cell, self).__init__()
		self._cell = cell
	
	@property
	def vertices(self):
		class VertexList(object):
			def __init__(self, vertex_list):
				self._vertex_list = vertex_list
			def __call__(self):
				return [Vertex(v) for v in self._vertex_list]
			def __len__(self):
				return len(self._vertex_list)
			def __iter__(self):
				for v in self._vertex_list:
					yield Vertex(v)
			def __getitem__(self, index):
				return Vertex(self._vertex_list[index])
		return VertexList(self._cell.vertices)
	
	def __iter__(self):
		for vertex in self._cell.vertices:
			yield Vertex(vertex)

class Vertex(object):
	def __init__(self, vertex):
		super(Vertex, self).__init__()
		self._vertex = vertex
