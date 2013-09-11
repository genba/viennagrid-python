#!/usr/bin/env python
# 
# This example shows how to save quantities associated to cells and vertices
# using the low-level ViennaGrid wrapper for Python (viennagrid.wrapper).

from __future__ import print_function

from viennagrid.wrapper import TriangularCartesian2D_Domain as Domain
from viennagrid.wrapper import TriangularCartesian2D_Segmentation as Segmentation
from viennagrid.wrapper import PointCartesian2D as Point

from viennagrid.wrapper import TriangularCartesian2D_Cell_Accessor as CellAccessor

from viennagrid.wrapper import surface

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

# Create a segmentation of the domain
segmentation = Segmentation(domain)

# Create 2 segments in the segmentation of the domain
seg0 = segmentation.make_segment()
seg1 = segmentation.make_segment()

# Create 2 cells in the first segment. Since the domain is a triangular domain,
# cells are triangles and three vertices must be specified to create a cell.
seg0.make_cell(domain.get_vertex(0), domain.get_vertex(1), domain.get_vertex(5))
seg0.make_cell(domain.get_vertex(1), domain.get_vertex(4), domain.get_vertex(5))

# Create 2 cells in the second segment. This time, we will use variable to
# make the code shorter.
seg1.make_cell(domain.get_vertex(1), domain.get_vertex(2), domain.get_vertex(4))
seg1.make_cell(domain.get_vertex(3), domain.get_vertex(2), domain.get_vertex(4))

# Create a new accessor for the cells of the domain and save for each cell
# its surface.
cell_surface_accessor = CellAccessor()
# For each cell of the domain, we calculate its surface and store the surface
# of the cell using the accessor. To do that, we call the 'set_value' method
# of the accessor specifying the cell and the value that we want to assign to
# the cell.
for cell in domain.cells:
	cell_surface_accessor.set_value(cell, surface(cell))
# Now we want to read the value corresponding to each cell stored in the accessor.
# Since the cells that have a value stored in the accessor are all the cells of the
# domain, we simply iterate over the cells of the domain and get the value stored
# in the accessor for that cell using the 'get_value' method of the accessor.
for i, cell in enumerate(domain.cells):
	value = cell_surface_accessor.get_value(cell)
	print('Cell #%(i)d has surface %(value)f' % locals())
