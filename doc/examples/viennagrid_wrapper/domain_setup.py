#!/usr/bin/env python
# 
# This example shows how to set up a domain using the low-level ViennaGrid
# wrapper for Python (viennagrid.wrapper).

from __future__ import print_function

# In this example, we will set up a domain of triangles in the cartesian 2D
# space. To do that, we have to import the appropriate data types for, whose
# name is usually preceeded by a prefix formed by the type of cell (Triangular),
# the coordinate system (Cartesian) and the space dimension (2D).
# 
# Because a name formed like that is very long, it is not very handy to import
# it as is, so we will rather rename the imported objects on rename, in order
# to make the names shorter.

from viennagrid.wrapper import TriangularCartesian2D_Domain as Domain
from viennagrid.wrapper import TriangularCartesian2D_Segmentation as Segmentation
from viennagrid.wrapper import PointCartesian2D as Point

# Create an empty domain

domain = Domain()

# Add vertices to the domain. These vertices will then be used to define
# cells.

domain.make_vertex(Point(0, 0)) # Vertex with ID #0
domain.make_vertex(Point(1, 0)) # Vertex with ID #1
domain.make_vertex(Point(2, 0)) # Vertex with ID #2
domain.make_vertex(Point(2, 1)) # Vertex with ID #3
domain.make_vertex(Point(1, 1)) # Vertex with ID #4
domain.make_vertex(Point(0, 1)) # Vertex with ID #5

# This returns a list with all the vertices added until now

domain.vertices

# You could thus get a vertex by accessing the right position of the list,
# like this (in order to get the first vertex that was added to the domain):

v0 = domain.vertices[0]

# However, using 'domain.vertices' requires that the list be fully created
# every time the 'vertices' property of 'domain' is accessed. If the domain
# contains a lot of vertices, this will be highly inefficient.
# 
# Getting the list will be good if you want to iterate over all vertices, but
# if you want to access only one vertex, use the 'get_vertex' method instead:

v0 = domain.get_vertex(0)

# Vertices are of type 'TriangularCartesian2D_Vertex' in this case, which
# can be converted to the corresponding point type (in this case:
# 'PointCartesian2D'). Once we have the point, we can get its coordinates:

p = v0.to_point()
p.coords

# Create a segmentation of the domain

segmentation = Segmentation(domain)

# Create 2 segments in the segmentation of the domain

seg0 = segmentation.make_segment()
seg1 = segmentation.make_segment()

# This returns a list with all the segments created until now (in this case 2)

segmentation.segments

# Create 2 cells in the first segment. Since the domain is a triangular domain,
# cells are triangles and three vertices must be specified to create a cell.

seg0.make_cell(domain.get_vertex(0), domain.get_vertex(1), domain.get_vertex(5))
seg0.make_cell(domain.get_vertex(1), domain.get_vertex(4), domain.get_vertex(5))

# This returns the list of cells in the first segment

seg0.cells

# This returns a list of the vertices that form the first cell of segment 0

seg0.cells[0].vertices

# Create 2 cells in the second segment. This time, we will use variable to
# make the code easier to read.

v1 = domain.get_vertex(1)
v2 = domain.get_vertex(2)
v3 = domain.get_vertex(4)
seg1.make_cell(v1, v2, v3)

v1 = domain.get_vertex(3)
v2 = domain.get_vertex(2)
v3 = domain.get_vertex(4)
seg1.make_cell(v1, v2, v3)

# This returns the list of cells in the second segment

seg1.cells

# This returns a list of the vertices that form the first cell of segment 1

seg1.cells[0].vertices

# Let's see what cells are contained in each segment

print()
for seg_no, seg in enumerate(segmentation.segments):
	print('Segment #%(seg_no)s:\n' % locals())
	for cell_no, cell in enumerate(seg.cells):
		vertices = ', '.join(str(vertex.to_point().coords) for vertex in cell.vertices)
		print('\tCell #%(cell_no)s has vertices %(vertices)s' % locals())
	print()
