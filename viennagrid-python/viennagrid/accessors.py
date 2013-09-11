#-*- coding: utf-8 -*-

import wrapper as _wrapper
import config as _config

CELL_ACCESSOR = 'cell'
VERTEX_ACCESSOR = 'vertex'

class Accessor(object):
	"""Wrapper class that represents an accessor for vertices or cells."""
	def __init__(self, accessor_type, domain_config):
		super(Accessor, self).__init__()
		self._config = domain_config
		try:
			self._accessor = domain_config.make_accessor(accessor_type)
		except AttributeError:
			raise ValueError('unknown accessor type: %(accessor_type)s' % locals())
	
	def get_value(self, elem):
		"""
		Get the value corresponding to the element (vertex or cell) associated with the accessor.
		
		:param elem: the vertex or cell whose value should be returned
		:type elem: :class:`viennagrid.Vertex` or :class:`viennagrid.Cell` (or any vertex or cell type from :mod:`viennagrid.wrapper`)
		
		:returns: float --- the value corresponding to the element
		"""
		if isinstance(elem, Vertex):
			elem = elem._vertex
		elif isinstance(elem, cell):
			elem = elem._cell
		return self._accessor.get_value(elem)
	
	def set_value(self, elem, new_value):
		"""
		Set the value corresponding to the element (vertex or cell) associated with the accessor.
		
		:param elem: the vertex or cell whose value should be set
		:type elem: :class:`viennagrid.Vertex` or :class:`viennagrid.Cell` (or any vertex or cell type from :mod:`viennagrid.wrapper`)
		:param new_value: the new value to asssign to the element
		:type new_value: float
		"""
		if isinstance(elem, Vertex):
			elem = elem._vertex
		elif isinstance(elem, cell):
			elem = elem._cell
		self._accessor.set_value(elem, new_value)

class Field(object):
	"""Wrapper class that represents a field accessor for vertices or cells."""
	def __init__(self, accessor_type, domain_config, default_value):
		"""
		Create a new field accessor object.
		
		:param accessor_type: Type of element to be accessed by the field accessor.
		:type accessor_type: str (:attr:`viennagrid.accessors.CELL_ACCESSOR` or :attr:`viennagrid.accessors.VERTEX_ACCESSOR`)
		:param domain_config: Configuration of the domain.
		:type domain_config: :class:`viennagrid.config.Configuration`
		:param default_value: Default value that will be returned by the accessor if the element is not present in the accessor's containerr.
		:type default_value: float
		"""
		super(Accessor, self).__init__()
		self._config = domain_config
		try:
			self._accessor = domain_config.make_accessor(accessor_type)
		except AttributeError:
			raise ValueError('unknown accessor type: %(accessor_type)s' % locals())
	
	def get_value(self, elem):
		"""
		Get the value corresponding to the element (vertex or cell) associated with the field accessor.
		
		:param elem: the vertex or cell whose value should be returned
		:type elem: :class:`viennagrid.Vertex` or :class:`viennagrid.Cell` (or any vertex or cell type from :mod:`viennagrid.wrapper`)
		
		:returns: float --- the value corresponding to the element
		"""
		if isinstance(elem, Vertex):
			elem = elem._vertex
		elif isinstance(elem, cell):
			elem = elem._cell
		return self._accessor.get_value(elem)
	
	def set_value(self, elem, new_value):
		"""
		Set the value corresponding to the element (vertex or cell) associated with the field accessor.
		
		:param elem: the vertex or cell whose value should be set
		:type elem: :class:`viennagrid.Vertex` or :class:`viennagrid.Cell` (or any vertex or cell type from :mod:`viennagrid.wrapper`)
		:param new_value: the new value to asssign to the element
		:type new_value: float
		"""
		if isinstance(elem, Vertex):
			elem = elem._vertex
		elif isinstance(elem, cell):
			elem = elem._cell
		self._accessor.set_value(elem, new_value)
