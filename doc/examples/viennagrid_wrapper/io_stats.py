#!/usr/bin/env python
# 
# This example shows is like the readers and writers example ('io.py'),
# but this one also calculates some statistics on the elapsed time, the
# number of vertices an cells read, etc.

from __future__ import print_function

# In this example, we will set up a domain of triangles in the cartesian 3D
# space from the contents of a Netgen mesh file.
# 
# For that purpose, we need to define a domain and, eventually, also a segmentation
# (in case we want to read segmentation data from the mesh file), and we need the
# Netgen reader function, too.
# 
# (Notice that the 'read_netgen' function and all other I/O functions
# work with any type of domain and segmentation without name change.)

from viennagrid.wrapper import TriangularCartesian3D_Domain as Domain
from viennagrid.wrapper import TriangularCartesian3D_Segmentation as Segmentation
from viennagrid.wrapper import read_netgen

import time

import os

file_path = os.path.join(os.path.split(__file__)[0], '../data/half-trigate.mesh')

# In case we want to read only the domain information from the mesh file, we would
# just create an empty domain and call the Netgen reader on it with the file path
# where the mesh file can be found.

domain = Domain()

start_time = time.time()

read_netgen(file_path, domain)

end_time = time.time()
elapsed_time = end_time - start_time

print('Elapsed time: ', elapsed_time, ' seconds (', elapsed_time / 60, 'minutes )', sep='')
print('Read domain with', domain.num_vertices, 'vertices and', domain.num_cells, 'cells')

# In case we want to read not only the domain information, but also the segmentation
# information from the mesh file, we would have to create an empty domain and an
# empty segmentation on that domain, and then call the Netgen reader.

domain = Domain()
segmentation = Segmentation(domain)

start_time = time.time()

read_netgen(file_path, domain, segmentation)

end_time = time.time()
elapsed_time = end_time - start_time

print('Elapsed time: ', elapsed_time, ' seconds (', elapsed_time / 60, 'minutes )', sep='')
print('Read domain with', domain.num_vertices, 'vertices and', domain.num_cells, 'cells')
print('Read segmentation with', segmentation.num_segments, 'segmets')
for i, seg in enumerate(segmentation.segments):
	print('Segment #', i, ' contains ', seg.num_cells, ' cells', sep='')
