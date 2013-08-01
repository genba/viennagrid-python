#!/usr/bin/env python

from viennagrid_wrapper import TriangularCartesian2D_Domain as Domain
from viennagrid_wrapper import PointCartesian2D as Point

# Create an empty domain
d = Domain()

d.vertices # This returns an empty list, since there are no vertices yet
d.segments # This returns an empty list, since there are no segments yet

# Add vertices to the domain. These vertices will then be used to define cells.
d.make_vertex(Point(0, 0)) # Vertex with ID #0
d.make_vertex(Point(1, 0)) # Vertex with ID #1
d.make_vertex(Point(2, 0)) # Vertex with ID #2
d.make_vertex(Point(2, 1)) # Vertex with ID #3
d.make_vertex(Point(1, 1)) # Vertex with ID #4
d.make_vertex(Point(0, 1)) # Vertex with ID #5

d.vertices # This returns a list with all the vertices added until now
d.vertices[1].coords # This returns a list with the coordinates of the second vertex that was added

# Create 2 segments in the domain
d.make_segments(2)

d.segments # This returns a list with all the segments created until now (in this case: 2)
d.segments[0].cells # This should return the list of cells in the first segment, but it's empty, because we haven't added any cells yet

# Create 2 cells in the first segment. Since the domain is a triangular domain, cells are triangles.
s0 = d.segments[0]
s0.make_cell(d.vertices[0], d.vertices[1], d.vertices[5]) # Cell with vertices 0-1-5
s0.make_cell(d.vertices[1], d.vertices[4], d.vertices[5]) # Cell with vertices 1-4-5

s0.cells # The list of cells in the segment is no longer empty, now you get two cells
s0.cells[0].vertices # This returns a list of the vertices that form the first cell of segment 0
# Let's see what coordinates do the vertices of cell 0 have
for v in s0.cells[0].vertices:
	print v.coords

# Create 2 cells in the second segment. Since the domain is a triangular domain, cells are triangles.
s1 = d.segments[1]
s1.make_cell(d.vertices[1], d.vertices[2], d.vertices[4]) # Cell with vertices 1-2-4
s1.make_cell(d.vertices[3], d.vertices[2], d.vertices[4]) # Cell with vertices 3-2-4

s1.cells # The list of cells in the segment is no longer empty, now you get two cells
s1.cells[0].vertices # This returns a list of the vertices that form the first cell of segment 1
# Let's see what coordinates do the vertices of cell 0 have
for v in s1.cells[0].vertices:
	print v.coords
