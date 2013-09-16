#!/usr/bin/env python
# 
# This example shows how to use the different algorithms provided by
# the low-level ViennaGrid wrapper for Python (viennagrid.wrapper).

from __future__ import print_function

# In this example, we will set up a domain of triangles in the cartesian 2D
# space from the contents of a Netgen mesh file.
# 
# For that purpose, we need to define a domain and, eventually, also a segmentation
# (in case we want to read segmentation data from the mesh file), and we need the
# Netgen reader function, too.
# 
# (Notice that the 'read_netgen' function and all other I/O functions
# work with any type of domain and segmentation without name change.)

from viennagrid import Domain, Point, Segmentation
from viennagrid import config
from viennagrid.algorithms import *

####################################
# Domain setup
####################################

domain = Domain(config.triangular_2d)

p0 = Point(0, 0)
p1 = Point(1, 0)
p2 = Point(2, 0)
p3 = Point(2, 1)
p4 = Point(1, 1)
p5 = Point(0, 1)

domain.make_vertex(p0) # Vertex with ID #0
domain.make_vertex(p1) # Vertex with ID #1
domain.make_vertex(p2) # Vertex with ID #2
domain.make_vertex(p3) # Vertex with ID #3
domain.make_vertex(p4) # Vertex with ID #4
domain.make_vertex(p5) # Vertex with ID #5

segmentation = Segmentation(domain)

seg0 = segmentation.make_segment()
seg1 = segmentation.make_segment()

cell_00 = seg0.make_cell(domain.vertices[0], domain.vertices[1], domain.vertices[5])
cell_01 = seg0.make_cell(domain.vertices[1], domain.vertices[4], domain.vertices[5])

cell_10 = seg1.make_cell(domain.vertices[1], domain.vertices[2], domain.vertices[4])
cell_11 = seg1.make_cell(domain.vertices[3], domain.vertices[2], domain.vertices[4])

####################################
# apply_voronoi
####################################

apply_voronoi(domain)

####################################
# cell_refine
####################################

def predicate(cell):
	return True

cell_refine(domain, segmentation, predicate)

####################################
# centroid
####################################

point = centroid(cell_00)

####################################
# circumcenter
####################################

point = circumcenter(cell_00)

####################################
# is_boundary
####################################

facet = cell_00.facets[0]
edge = cell_00.edges[0]
vertex = cell_00.vertices[0]

segment = seg0

is_boundary(domain, facet)
is_boundary(domain, edge)
is_boundary(domain, vertex)

is_boundary(segment, facet)
is_boundary(segment, edge)
is_boundary(segment, vertex)

####################################
# is_interface
####################################

segment0 = seg0
segment1 = seg1

facet = cell_00.facets[0]
edge = cell_00.edges[0]
vertex = cell_00.vertices[0]

is_interface(segment0, segment1, facet)
is_interface(segment0, segment1, edge)
is_interface(segment0, segment1, vertex)

####################################
# refine
####################################

def predicate(edge):
	return True

refined_domain, refined_segmentation = refine(domain, segmentation, predicate)

####################################
# refine_uniformly
####################################

refined_domain, refined_segmentation = refine_uniformly(domain, segmentation)

####################################
# scale
####################################

scale(domain, 2.5)

####################################
# spanned_volume
####################################

vol = spanned_volume(p0, p1, p5)
vol = spanned_volume(*[vertex.to_point() for vertex in cell_00.vertices])

####################################
# surface
####################################

cell = cell_00

sur = surface(cell)
sur = surface(domain)
sur = surface(segment)

####################################
# volume
####################################

vol = volume(cell)
vol = volume(domain)
vol = volume(segment)
