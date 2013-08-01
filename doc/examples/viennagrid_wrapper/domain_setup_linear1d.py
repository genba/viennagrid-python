#!/usr/bin/env python
#-*- coding: utf-8 -*-

from __future__ import print_function

from viennagrid_wrapper import LinearCartesian1D_Domain as Domain
from viennagrid_wrapper import LinearCartesian1D_Segmentation as Segmentation
from viennagrid_wrapper import PointCartesian1D as Point

# Create a domain and add 4 vertices to it
domain = Domain()
domain.make_vertex(Point(1))
domain.make_vertex(Point(2))
domain.make_vertex(Point(3))
domain.make_vertex(Point(4))

# Create a segmentation on the domain with 2 segments in it
segmentation = Segmentation(domain)
seg0 = segmentation.make_segment()
seg1 = segmentation.make_segment()

# Create cell #1 in seg0
v1 = domain.vertices[0] # alternatively: domain.get_vertex(0), which may exhibit an improved preformance
v2 = domain.vertices[1] # alternatively: domain.get_vertex(1), which may exhibit an improved preformance
cell = seg0.make_cell(v1, v2)
# Create cell #2 in seg0
v1 = domain.vertices[2] # alternatively: domain.get_vertex(2), which may exhibit an improved preformance
v2 = domain.vertices[3] # alternatively: domain.get_vertex(3), which may exhibit an improved preformance
cell = seg0.make_cell(v1, v2)

# Create cell #1 in seg1
v1 = domain.vertices[0] # alternatively: domain.get_vertex(0), which may exhibit an improved preformance
v2 = domain.vertices[1] # alternatively: domain.get_vertex(1), which may exhibit an improved preformance
cell = seg1.make_cell(v1, v2)
# Create cell #2 in seg1
v1 = domain.vertices[2] # alternatively: domain.get_vertex(2), which may exhibit an improved preformance
v2 = domain.vertices[3] # alternatively: domain.get_vertex(3), which may exhibit an improved preformance
cell = seg1.make_cell(v1, v2)

print('\nDomain has', len(domain.vertices), 'vertices:\n')
for i, vertex in enumerate(domain.vertices):
	print('\tVertex ', i, ': ' , vertex, sep='')
else:
	print()

print('Segmentation has', len(segmentation.segments), 'segments:\n')
for i, segment in enumerate(segmentation.segments):
	print('\tSegment seg', i, ' has ', len(segment.cells), ' cells:\n', sep='')
	for cell in segment.cells:
		print('\t\tCell has', len(cell.vertices), 'vertices:\n')
		for vertex in cell.vertices:
			print('\t\t\t', vertex)
		else:
			print()
	else:
		print()
