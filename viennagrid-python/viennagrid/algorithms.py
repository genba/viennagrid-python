#-*- coding: utf-8 -*-

import viennagrid

_SUPPORTED_NORMS = ('1', '2', 'inf')

def inner_prod(point1, point2):
	"""
	Compute the inner product of two vectors (represented by points).
	
	:param point1: First point
	:type point1: :class:`viennagrid.Point` (or any point class from :mod:`viennagrid.wrapper`)
	:param point2: Second point
	:type point2: :class:`viennagrid.Point` (or any point class from :mod:`viennagrid.wrapper`)
	
	:returns: float --- the result of the inner product
	:raises: TypeError
	"""
	if isinstance(point1, viennagrid.Point):
		point1 = point1._point
	if isinstance(point2, viennagrid.Point):
		point2 = point2._point
	# Try to get method 'inner_prod' from 'point1'. If it doesn't have the method,
	# it means it's not a cartesian point. Thus, convert to cartesian coordinates
	# and get the method. If it still doesn't have the method, raise an exception.
	try:
		inner_prod_fn = point1.__getattribute__('inner_prod')
	except AttributeError:
		casted_pnt1 = point1.to_cartesian()
		try:
			inner_prod_fn = casted_pnt1.__getattribute__('inner_prod')
		except AttributeError:
			raise TypeError('point1 has no method named inner_prod')
	else:
		casted_pnt1 = point1
	
	# If point types are equal, simply calculate the inner product. If they're not
	# equal, try to convert 'point2' to the type of 'point1'. If types are still
	# different, it means that both points are of incompatible types
	# (i.e. incompatible dimensions).
	if casted_pnt1.__class__ is point2.__class__:
		return inner_prod_fun(point2)
	else:
		casted_pnt2 = point2.to_cartesian()
		if casted_pnt1.__class__ is casted_pnt2.__class__:
			return inner_prod_fun(casted_pnt2)
		else:
			raise TypeError('incompatible point types')

def cross_prod(point1, point2):
	"""
	Compute the cross product of two vectors (represented by points).
	
	:param point1: First point
	:type point1: :class:`viennagrid.Point` (or any point class from :mod:`viennagrid.wrapper`)
	:param point2: Second point
	:type point2: :class:`viennagrid.Point` (or any point class from :mod:`viennagrid.wrapper`)
	
	:returns: :class:`viennagrid.Point` --- the result of the cross product
	:raises: TypeError
	"""
	if isinstance(point1, viennagrid.Point):
		point1 = point1._point
	if isinstance(point2, viennagrid.Point):
		point2 = point2._point
	# Try to get method 'cross_prod' from 'point1'. If it doesn't have the method,
	# it means it's not a cartesian point. Thus, convert to cartesian coordinates
	# and get the method. If it still doesn't have the method, raise an exception.
	try:
		cross_prod_fn = point1.__getattribute__('cross_prod')
	except AttributeError:
		casted_pnt1 = point1.to_cartesian()
		try:
			cross_prod_fn = casted_pnt1.__getattribute__('cross_prod')
		except AttributeError:
			raise TypeError('point1 has no method named cross_prod')
	else:
		casted_pnt1 = point1
	
	# If point types are equal, simply calculate the cross product. If they're not
	# equal, try to convert 'point2' to the type of 'point1'. If types are still
	# different, it means that both points are of incompatible types
	# (i.e. incompatible dimensions).
	if casted_pnt1.__class__ is point2.__class__:
		return viennagrid.Point(cross_prod_fn(point2))
	else:
		casted_pnt2 = point2.to_cartesian()
		if casted_pnt1.__class__ is casted_pnt2.__class__:
			return viennagrid.Point(cross_prod_fn(casted_pnt2))
		else:
			raise TypeError('incompatible point types')

def norm(point, norm_type=2):
	"""
	Compute the norm of a vector (represented by a point).
	
	:param point: Point
	:type point: :class:`viennagrid.Point` (or any point class from :mod:`viennagrid.wrapper`)
	
	:param norm_type: Norm to calculate (at this time only 1, 2 and 'inf' are supported).
	:type norm_type: int or str
	
	:returns: float --- the norm of the vector
	:raises: ValueError
	"""
	norm_type = str(norm_type)
	if norm_type in _SUPPORTED_NORMS:
		norm_fn = viennagrid.wrapper.__getattribute__('norm_%(norm_type)s' % locals())
		return norm_fn(point)
	else:
		raise ValueError('unsupported norm type: %(norm_type)s')

def apply_voronoi(dom):
	"""
	Compute Voronoi information of the given domain.
	
	:param dom: Domain
	:type dom: :class:`viennagrid.Domain` or any of the domain classes of :mod:`viennagrid.wrapper`
	"""
	if isinstance(dom, viennagrid.Domain):
		dom = dom._domain
	viennagrid.wrapper.apply_voronoi(dom)

def centroid(cell):
	"""
	Compute the centroid of the given cell.
	
	:param cell: Cell whose centroid should be computed
	:type cell: :class:`viennagrid.Cell` or any of the cell classes of :mod:`viennagrid.wrapper`
	
	:returns: :class:`viennagrid.Point` --- the centroid of the cell
	"""
	if isinstance(cell, viennagrid.Cell):
		cell = cell._cell
	return viennagrid.Point(viennagrid.wrapper.centroid(cell))

def cell_refine(dom, seg, predicate):
	"""
	Refine all cells of the given domain and segmentation which match a given predicate.
	
	:param dom: Domain to refine
	:type dom: :class:`viennagrid.Domain` or any of the domain classes of :mod:`viennagrid.wrapper`
	:param seg: Segmentation of the domain to refine
	:type seg: :class:`viennagrid.Segmentation` or any of the segmentation classes of :mod:`viennagrid.wrapper`
	
	:returns: A two-element tuple containing the output domain and segmentation after the refinement.
	"""
	if isinstance(dom, viennagrid.Domain):
		dom = dom._domain
	if isinstance(seg, viennagrid.Segmentation):
		seg = seg._segmentation
	refined_result = viennagrid.wrapper.cell_refine(dom, seg, predicate)
	refined_domain = viennagrid.Domain(dom.config)
	refined_domain._domain = refined_result[0]
	refined_segmentation = viennagrid.Segmentation(refined_domain)
	refined_segmentation._segmentation = refined_result[1]
	return (refined_domain, refined_segmentation)

def circumcenter(cell):
	"""
	Compute the circumcenter of the given cell.
	
	:param cell: Cell whose circumcenter should be computed
	:type cell: :class:`viennagrid.Cell` or any of the cell classes of :mod:`viennagrid.wrapper`
	
	:returns: :class:`viennagrid.Point` --- the circumcenter of the cell
	"""
	if isinstance(cell, viennagrid.Cell):
		cell = cell._cell
	return viennagrid.Point(viennagrid.wrapper.circumcenter(cell))

def is_boundary(domseg, boundary_elem):
	"""
	Check if the given element is a boundary element of the given domain or segment.
	
	:param domseg: Domain or segment
	:type domseg: :class:`viennagrid.Domain` (or any domain class from :mod:`viennagrid.wrapper`), or :class:`viennagrid.Segment` (or any segment class from :mod:`viennagrid.wrapper`)
	:param boundary_elem: Element of which to check if its a boundary element of the given domain or segment. The element can be a facet, and edge or a vertex.
	:type boundary_elem: :class:`viennagrid.Facet`, :class:`viennagrid.Edge` or :class:`viennagrid.Vertex` (or any facet, edge or vertex class from :mod:`viennagrid.wrapper`)
	
	:returns: bool --- True if the given element is a boundary element of the given domain or segment; False otherwise.
	"""
	if isinstance(domseg, viennagrid.Domain):
		domseg = domseg._domain
	elif isinstance(domseg, viennagrid.Segment):
		domseg = domseg._segment
	
	if isinstance(interface_elem, viennagrid.Facet):
		interface_elem = interface_elem._facet
	elif isinstance(interface_elem, viennagrid.Edge):
		interface_elem = interface_elem._edge
	elif isinstance(interface_elem, viennagrid.Vertex):
		interface_elem = interface_elem._vertex
	
	return viennagrid.wrapper.is_boundary(domseg, interface_elem)

def is_interface(seg0, seg1, interface_elem):
	"""
	Check if the given element is an interface element of the two given segments.
	
	:param seg0: First segment
	:type seg0: :class:`viennagrid.Segment` (or any segment class from :mod:`viennagrid.wrapper`)
	:param seg1: Second segment
	:type seg1: :class:`viennagrid.Segment` (or any segment class from :mod:`viennagrid.wrapper`)
	:param interface_elem: Element of which to check if its an interface element of the given segments. The element can be a facet, and edge or a vertex.
	:type interface_elem: :class:`viennagrid.Facet`, :class:`viennagrid.Edge` or :class:`viennagrid.Vertex` (or any facet, edge or vertex class from :mod:`viennagrid.wrapper`)
	
	:returns: bool --- True if the given element is an interface element of the given segments; False otherwise.
	"""
	if isinstance(seg0, viennagrid.Segment):
		seg0 = seg0._segment
	
	if isinstance(seg1, viennagrid.Segment):
		seg1 = seg1._segment
	
	if isinstance(boundary_elem, viennagrid.Facet):
		boundary_elem = boundary_elem._facet
	elif isinstance(boundary_elem, viennagrid.Edge):
		boundary_elem = boundary_elem._edge
	elif isinstance(boundary_elem, viennagrid.Vertex):
		boundary_elem = boundary_elem._vertex
	
	return viennagrid.wrapper.is_interface(seg0, seg1, boundary_elem)

def refine(dom, seg, predicate):
	"""
	Refine all edges of the given domain and segmentation which match a given predicate.
	
	:param dom: Domain to refine
	:type dom: :class:`viennagrid.Domain` or any of the domain classes of :mod:`viennagrid.wrapper`
	:param seg: Segmentation of the domain to refine
	:type seg: :class:`viennagrid.Segmentation` or any of the segmentation classes of :mod:`viennagrid.wrapper`
	
	:returns: A two-element tuple containing the output domain and segmentation after the refinement.
	"""
	if isinstance(dom, viennagrid.Domain):
		dom = dom._domain
	if isinstance(seg, viennagrid.Segmentation):
		seg = seg._segmentation
	refined_result = viennagrid.wrapper.refine(dom, seg, predicate)
	refined_domain = viennagrid.Domain(dom.config)
	refined_domain._domain = refined_result[0]
	refined_segmentation = viennagrid.Segmentation(refined_domain)
	refined_segmentation._segmentation = refined_result[1]
	return (refined_domain, refined_segmentation)

def refine_uniformly(dom, seg):
	"""
	Refine all edges of the given domain and segmentation.
	
	:param dom: Domain to refine
	:type dom: :class:`viennagrid.Domain` or any of the domain classes of :mod:`viennagrid.wrapper`
	:param seg: Segmentation of the domain to refine
	:type seg: :class:`viennagrid.Segmentation` or any of the segmentation classes of :mod:`viennagrid.wrapper`
	
	:returns: A two-element tuple containing the output domain and segmentation after the refinement."""
	if isinstance(dom, viennagrid.Domain):
		dom = dom._domain
	if isinstance(seg, viennagrid.Segmentation):
		seg = seg._segmentation
	refined_result = viennagrid.wrapper.refine_uniformly(dom, seg)
	refined_domain = viennagrid.Domain(dom.config)
	refined_domain._domain = refined_result[0]
	refined_segmentation = viennagrid.Segmentation(refined_domain)
	refined_segmentation._segmentation = refined_result[1]
	return (refined_domain, refined_segmentation)

def surface(elem):
	"""
	Calculate the surface of the given element.
	
	:param elem: Element whose surface should be calculated.
	:type elem: :class:`viennagrid.Cell`, :class:`viennagrid.Domain` or :class:`viennagrid.Segment`
	
	:returns: float --- the surface of the cell, domain or segment
	"""
	if isinstance(elem, viennagrid.Cell):
		elem = elem._elem
	elif isinstance(elem, viennagrid.Domain):
		elem = elem._domain
	elif isinstance(elem, viennagrid.Segment):
		elem = elem._segment
	return viennagrid.wrapper.surface(elem)

def volume(elem):
	"""
	Calculate the volume of the given element.
	
	:param elem: Element whose volume should be calculated.
	:type elem: :class:`viennagrid.Cell`, :class:`viennagrid.Domain` or :class:`viennagrid.Segment`
	
	:returns: float --- the volume of the cell, domain or segment
	"""
	if isinstance(elem, viennagrid.Cell):
		elem = elem._elem
	elif isinstance(elem, viennagrid.Domain):
		elem = elem._domain
	elif isinstance(elem, viennagrid.Segment):
		elem = elem._segment
	return viennagrid.wrapper.volume(elem)

def scale(dom, factor):
	"""
	Scale a domain by a given factor.
	
	:param dom: Domain to be scaled
	:type dom: :class:`viennagrid.Domain` or any domain class from :mod:`viennagrid.wrapper`
	:param factor: Scale factor
	:type factor: float
	"""
	if isinstance(dom, viennagrid.Domain):
		dom = dom._domain
	viennagrid.wrapper.scale(dom, factor)

def spanned_volume(*args):
	"""
	Calculate the volume spanned by a set of points.
	
	As arguments you have to pass an arbitrary number of points (either :class:`viennagrid.Point` objects
	or instances of any point class from :mod:`viennagrid.wrapper`).
	
	:returns: float --- the volume spanned by the set of points
	"""
	
	point_list = []
	
	for point in args:
		# If the point is a high-level point, get the low-level point
		if isinstance(point, viennagrid.Point):
			point = point._point
		
		# If point is not cartesian, convert it
		if point.coord_system != 'cartesian':
			point = point.to_cartesian()
		
		# Append the point to the list
		point_list.append(point)
	
	return viennagrid.wrapper.spanned_volume(point_list)
