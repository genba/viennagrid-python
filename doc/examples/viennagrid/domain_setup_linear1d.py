#!/usr/bin/env python
#-*- coding: utf-8 -*-

from __future__ import print_function

import viennagrid

config = viennagrid.config.linear_1d

domain = viennagrid.Domain(config)
domain.add_vertex(viennagrid.Point(1))
domain.add_vertex(viennagrid.Point(2))
domain.add_vertex(viennagrid.Point(3))
domain.add_vertex(viennagrid.Point(4))

segmentation = viennagrid.Segmentation(domain)
seg0 = segmentation.create_segment()
seg1 = segmentation.create_segment()

v0 = domain.vertices[0]
v1 = domain.vertices[1]
cell = seg0.create_cell(v0, v1)

v0 = domain.vertices[0]
v1 = domain.vertices[2]
cell = seg0.create_cell(v0, v1)

v0 = domain.vertices[1]
v1 = domain.vertices[2]
cell = seg1.create_cell(v0, v1)

v0 = domain.vertices[1]
v1 = domain.vertices[3]
cell = seg1.create_cell(v0, v1)

print('\nDomain has', len(domain.vertices), 'vertices:\n')
for i, vertex in enumerate(domain.vertices):
	print('\tVertex ', i, ': ', 'coordinates', sep='') # TODO: wrap ID and coords, like examples/tutorial/domain_setup
else:
	print()

print('Segmentation has', len(segmentation.segments), 'segments:\n')
for i, segment in enumerate(segmentation.segments):
	print('\tSegment seg', i, ' has ', len(segment.cells), ' cells:\n', sep='')
	for cell in segment.cells:
		print('\t\tCell has', len(cell.vertices), 'vertices:') # TODO: wait until coords of vertices can be read (see previous TODO)
	else:
		print()
