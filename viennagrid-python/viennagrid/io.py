#-*- coding: utf-8 -*-

import viennagrid

class BadFileFormatError(Exception):
	"""Exception raised when the mesh file is not well-formatted and hence cannot be read."""
	pass

def read_netgen(filepath, domain, segmentation=None):
	"""
	Read mesh data from a Netgen file and save the read domain data into the given domain.
	If a segmentation is provided, also save segmentation data into the given segmentation.
	
	:param filepath: Path to the mesh file.
	:type filepath: str
	:param domain: Domain
	:type domain: :class:`viennagrid.Domain`
	:param segmentation: Segmentation
	:type segmentation: :class:`viennagrid.Segmentation`
	:raises: IOError, :exc:`~viennagrid.io.BadFileFormatError`, TypeError
	"""
	
	try:
		if isinstance(domain, viennagrid.Domain):
			domain = domain._domain
	except AttributeError:
		raise TypeError('parameter at position 2 is not a valid domain')
	
	try:
		if isinstance(segmentation, viennagrid.Segmentation):
			segmentation = segmentation._segmentation
	except AttributeError:
		raise TypeError('parameter at position 3 is not a valid segmentation')
	
	try:
		viennagrid.wrapper.read_netgen(filepath, domain, segmentation)
	except RuntimeError, e:
		raise BadFileFormatError(e.message)

def read_vtk(filepath, domain, segmentation=None, accessors={}):
	"""
	Read mesh data from a VTK file and save the read domain data into the given domain.
	If a segmentation is provided, also save segmentation data into the given segmentation.
	
	:param filepath: Path to the mesh file.
	:type filepath: str
	:param domain: Domain
	:type domain: :class:`viennagrid.Domain`
	:param segmentation: Segmentation
	:type segmentation: :class:`viennagrid.Segmentation`
	:param accessors: Accessors to be used to get quantities that should be read from the mesh file,
	                  in the form of a dictionary where keys are the names of the quantities (`str`)
	                  and where the values are accessors (:class:`viennagrid.accessors.Accessor`) or
	                  fields(:class:`viennagrid.accessors.Field`)
	:type accessors: dict
	:raises: IOError, :exc:`~viennagrid.io.BadFileFormatError`, TypeError
	"""
	
	try:
		if isinstance(domain, viennagrid.Domain):
			domain = domain._domain
	except AttributeError:
		raise TypeError('parameter at position 2 is not a valid domain')
	
	try:
		if isinstance(segmentation, viennagrid.Segmentation):
			segmentation = segmentation._segmentation
	except AttributeError:
		raise TypeError('parameter at position 3 is not a valid segmentation')
	
	low_level_accessors = {}
	for quantity_name, accessor in accessors.iteritems():
		low_level_accessors[quantity_name] = accessor._accessor
	
	try:
		viennagrid.wrapper.read_vtk(filepath, domain, segmentation, accessors)
	except RuntimeError, e:
		raise BadFileFormatError(e.message)

def write_opendx(filepath, domain, accessors={}):
	"""
	Write mesh data from the given domain to an OpenDX file.
	
	:param filepath: Path to the mesh file.
	:type filepath: str
	:param domain: Domain
	:type domain: :class:`viennagrid.Domain`
	:param accessors: Accessors to be used to get quantities that should be written to the mesh file,
	                  in the form of a dictionary where keys are the names of the quantities (`str`)
	                  and where the values are accessors (:class:`viennagrid.accessors.Accessor`) or
	                  fields(:class:`viennagrid.accessors.Field`)
	:type accessors: dict
	:raises: IOError, :exc:`~viennagrid.io.BadFileFormatError`, TypeError
	"""
	
	try:
		if isinstance(domain, viennagrid.Domain):
			domain = domain._domain
	except AttributeError:
		raise TypeError('parameter at position 2 is not a valid domain')
	
	low_level_accessors = {}
	for quantity_name, accessor in accessors.iteritems():
		low_level_accessors[quantity_name] = accessor._accessor
	
	try:
		viennagrid.wrapper.write_opendx(filepath, domain, accessors)
	except RuntimeError, e:
		raise BadFileFormatError(e.message)

def write_vtk(filepath, domain, segmentation=None, accessors={}):
	"""
	Write mesh data from the given domain to a VTK file.
	If a segmentation is provided, also write the segmentation data to the file.
	
	:param filepath: Path to the mesh file.
	:type filepath: str
	:param domain: Domain
	:type domain: :class:`viennagrid.Domain`
	:param segmentation: Segmentation
	:type segmentation: :class:`viennagrid.Segmentation`
	:param accessors: Accessors to be used to get quantities that should be written to the mesh file,
	                  in the form of a dictionary where keys are the names of the quantities (`str`)
	                  and where the values are accessors (:class:`viennagrid.accessors.Accessor`) or
	                  fields(:class:`viennagrid.accessors.Field`)
	:type accessors: dict
	:raises: IOError, :exc:`~viennagrid.io.BadFileFormatError`, TypeError
	"""
	
	try:
		if isinstance(domain, viennagrid.Domain):
			domain = domain._domain
	except AttributeError:
		raise TypeError('parameter at position 2 is not a valid domain')
	
	try:
		if isinstance(segmentation, viennagrid.Segmentation):
			segmentation = segmentation._segmentation
	except AttributeError:
		raise TypeError('parameter at position 3 is not a valid segmentation')
	
	low_level_accessors = {}
	for quantity_name, accessor in accessors.iteritems():
		low_level_accessors[quantity_name] = accessor._accessor
	
	try:
		viennagrid.wrapper.write_vtk(filepath, domain, segmentation, accessors)
	except RuntimeError, e:
		raise BadFileFormatError(e.message)
