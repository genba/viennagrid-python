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
	:type domain: :class:`viennagrid.Domain` or any domain class from :mod:`viennagrid.wrapper`
	:param segmentation: Segmentation
	:type segmentation: :class:`viennagrid.Segmentation` or any segmentation class from :mod:`viennagrid.wrapper`
	:raises: IOError, BadFileFormatError
	"""
	
	if isinstance(domain, viennagrid.Domain):
		domain = domain._domain
	
	if isinstance(segmentation, viennagrid.Segmentation):
		segmentation = segmentation._segmentation
	
	try:
		viennagrid.wrapper.read_netgen(filepath, domain, segmentation)
	except RuntimeError, e:
		raise BadFileFormatError(e.message)

def read_vtk(filepath, domain, segmentation=None):
	"""
	Read mesh data from a VTK file and save the read domain data into the given domain.
	If a segmentation is provided, also save segmentation data into the given segmentation.
	
	:param filepath: Path to the mesh file.
	:type filepath: str
	:param domain: Domain
	:type domain: :class:`viennagrid.Domain` or any domain class from :mod:`viennagrid.wrapper`
	:param segmentation: Segmentation
	:type segmentation: :class:`viennagrid.Segmentation` or any segmentation class from :mod:`viennagrid.wrapper`
	:raises: IOError, BadFileFormatError
	"""
	
	if isinstance(domain, viennagrid.Domain):
		domain = domain._domain
	
	if isinstance(segmentation, viennagrid.Segmentation):
		segmentation = segmentation._segmentation
	
	try:
		viennagrid.wrapper.read_vtk(filepath, domain, segmentation)
	except RuntimeError, e:
		raise BadFileFormatError(e.message)

def write_opendx(filepath, domain):
	"""
	Write mesh data from the given domain to an OpenDX file.
	
	:param filepath: Path to the mesh file.
	:type filepath: str
	:param domain: Domain
	:type domain: :class:`viennagrid.Domain` or any domain class from :mod:`viennagrid.wrapper`
	:raises: IOError, BadFileFormatError
	"""
	
	if isinstance(domain, viennagrid.Domain):
		domain = domain._domain
	
	try:
		viennagrid.wrapper.write_opendx(filepath, domain)
	except RuntimeError, e:
		raise BadFileFormatError(e.message)

def write_vtk(filepath, domain, segmentation=None):
	"""
	Write mesh data from the given domain to a VTK file.
	If a segmentation is provided, also write the segmentation data to the file.
	
	:param filepath: Path to the mesh file.
	:type filepath: str
	:param domain: Domain
	:type domain: :class:`viennagrid.Domain` or any domain class from :mod:`viennagrid.wrapper`
	:param segmentation: Segmentation
	:type segmentation: :class:`viennagrid.Segmentation` or any segmentation class from :mod:`viennagrid.wrapper`
	:raises: IOError, BadFileFormatError
	"""
	
	if isinstance(domain, viennagrid.Domain):
		domain = domain._domain
	
	if isinstance(segmentation, viennagrid.Segmentation):
		segmentation = segmentation._segmentation
	
	try:
		viennagrid.wrapper.write_vtk(filepath, domain, segmentation)
	except RuntimeError, e:
		raise BadFileFormatError(e.message)
