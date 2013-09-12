#!/usr/bin/env python
#-*- coding: utf-8 -*-

import viennagrid
# The Python package viennagrid provides the following submodules:
# 
# viennagrid.config        (domain configuration classes)
# viennagrid.algorithms    (algorithms to run on meshes)
# viennagrid.io            (I/O functions for reading and writing mesh files)
# viennagrid.wrapper       (contains the wrapper classes)

# In order to create a domain, we must create a domain configuration class, which is an object
# that contains the basic information to define a domain type:
# 
# * cell tag                 (which cell the mesh will be based on)
# * coordinate system tag    (which coordinate system to use for the space in which topological elements are defined)
# * dimension                (which dimension to use for the space in which topological elements are defined)

# A configuration class for domains of lines in cartetsian 1d space would be thus defined as follows:
config = viennagrid.config.Configuration(viennagrid.config.LINE_TAG,
                                         viennagrid.config.CARTESIAN,
                                         dim=1)
# However, for some very common configuration classes, viennagrid.config provides an already initialized
# object, so that you don't need to create it. Thus, you could alternatively do:
config = viennagrid.config.linear_1d

# Create a domain and add 4 vertices to it
domain = viennagrid.Domain(config)
domain.make_vertex(viennagrid.Point(1))
domain.make_vertex(viennagrid.Point(2))
domain.make_vertex(viennagrid.Point(3))
domain.make_vertex(viennagrid.Point(4))

domain.vertices()     # array of all vertices in the domain
len(domain.vertices)  # number of segments in the domain
iter(domain.vertices) # iterator over the elements of the array
domain.vertices[i]    # get vertex i from the domain

domain.cells()     # array of all cells in the domain
len(domain.cells)  # number of segments in the domain
iter(domain.cells) # iterator over the elements of the array
domain.cells[i]    # get cell i from the domain

# The actual interface for defining points behaves as follows:
# 
# Point([x, [y, [z]]], coord_system, dim)
# 
# x,y,z are the coordinates of the point and can be omitted; either coord_system or dim (or both) must be specified in that case
# 
# If coord_system is omitted, cartesian is assumed.
# 
# If dim is omitted for cartesian points, an exception will be raised, because the dimension cannot be inferred.
# 
# However, if dim is omitted for coordinate system which only allow a specific dim value (i.e. polar, cylindrical and spherical)
# the dimension is inferred from the coordinate system.
# 
# All possible combinations are as follows:

# specifying only dimension:
p = viennagrid.Point(dim=D)                                                      # cartesian of dimension D = {1, 2, 3}, coords set to 0
# secifying only coord_system:
p = viennagrid.Point(coord_system=viennagrid.config.POLAR)                       # polar of dimension 2, coords set to (0, 0)
p = viennagrid.Point(coord_system=viennagrid.config.SPHERICAL)                   # spherical of dimension 3, coords set to (0, 0)
p = viennagrid.Point(coord_system=viennagrid.config.CYLINDRICAL)                 # cylindrical of dimension 3, coords set to (0, 0)
p = viennagrid.Point(coord_system=viennagrid.config.CARTESIAN)                   # raises an exception, becaus dim is not specified
# specifying both coord_system and dimension:
p = viennagrid.Point(coord_system=viennagrid.config.CARTESIAN,   dim=D)          # cartesian of dimension D = {1, 2, 3}, coords set to 0
p = viennagrid.Point(coord_system=viennagrid.config.POLAR,       dim=2)          # polar of dimension 2, coords set to (0, 0); if dim != 2, raises an exception
p = viennagrid.Point(coord_system=viennagrid.config.SPHERICAL,   dim=3)          # spherical of dimension 3, coords set to (0, 0); if dim != 3, raises an exception
p = viennagrid.Point(coord_system=viennagrid.config.CYLINDRICAL, dim=3)          # cylindrical of dimension 3, coords set to (0, 0); if dim != 3, raises an exception
# also specifying the coordinates (1d):
p = viennagrid.Point(x)                                                          # cartesian 1d with coords (x)
p = viennagrid.Point(x, dim=1)                                                   # cartesian 1d with coords (x); if dim != 1, raises an exception
p = viennagrid.Point(x, coord_system=viennagrid.config.CARTESIAN)                # cartesian 1d with coords (x)
p = viennagrid.Point(x, coord_system=viennagrid.config.CARTESIAN, dim=1)         # cartesian 1d with coords (x); if dim != 1, raises an exception
# also specifying the coordinates (2d):
p = viennagrid.Point(x, y)                                                       # cartesian 2d with coords (x, y)
p = viennagrid.Point(x, y, dim=2)                                                # cartesian 2d with coords (x, y); if dim != 2, raises an exception
p = viennagrid.Point(x, y, coord_system=viennagrid.config.CARTESIAN)             # cartesian 2d with coords (x, y)
p = viennagrid.Point(x, y, coord_system=viennagrid.config.POLAR)                 # polar 2d with coords (x, y)
p = viennagrid.Point(x, y, coord_system=viennagrid.config.CARTESIAN, dim=2)      # cartesian 2d with coords (x, y); if dim != 2, raises an exception
p = viennagrid.Point(x, y, coord_system=viennagrid.config.POLAR,     dim=2)      # polar 2d with coords (x, y); if dim != 2, raises an exception
# also specifying the coordinates (3d):
p = viennagrid.Point(x, y, z)                                                    # cartesian 3d with coords (x, y, z)
p = viennagrid.Point(x, y, z, dim=3)                                             # cartesian 3d with coords (x, y, z); if dim != 3, raises an exception
p = viennagrid.Point(x, y, z, coord_system=viennagrid.config.CARTESIAN)          # cartesian 3d with coords (x, y, z)
p = viennagrid.Point(x, y, z, coord_system=viennagrid.config.SPHERICAL)          # spherical 3d with coords (x, y, z)
p = viennagrid.Point(x, y, z, coord_system=viennagrid.config.CYLINDRICAL)        # cylindrical 3d with coords (x, y, z)
p = viennagrid.Point(x, y, z, coord_system=viennagrid.config.CARTESIAN,   dim=3) # cartesian 3d with coords (x, y, z); if dim != 3, raises an exception
p = viennagrid.Point(x, y, z, coord_system=viennagrid.config.SPHERICAL,   dim=3) # spherical 3d with coords (x, y, z); if dim != 3, raises an exception
p = viennagrid.Point(x, y, z, coord_system=viennagrid.config.CYLINDRICAL, dim=3) # cylindrical 3d with coords (x, y, z); if dim != 3, raises an exception

# Create a segmentation on the domain with 2 segments in it
segmentation = viennagrid.Segmentation(domain)
seg0 = segmentation.make_segment()
seg1 = segmentation.make_segment()

# To get information on the segments of a segmentation, the following
# methods and attributes are available:
# 
segmentation.segments()     # array of all segments in the domain
len(segmentation.segments)  # number of segments in the domain
iter(segmentation.segments) # iterator over the elements of the array
segmentation.segments[i]    # get segment i

# Create cell #0 in seg0
v0 = domain.vertices[0]
v1 = domain.vertices[1]
cell = seg0.make_cell(v0, v1)
# Create cell #1 in seg0
v0 = domain.vertices[0]
v1 = domain.vertices[2]
cell = seg0.make_cell(v0, v1)

# To get information on the cells of a segment, the following
# methods and attributes are available:
# 
seg0.cells()     # array of all cells in the segment
len(seg0.cells)  # number of cells in the segment
iter(seg0.cells) # iterator over the elements of the array
seg0.cells[i]    # get element i of the array

# Create cell #0 in seg1
v0 = domain.vertices[1]
v1 = domain.vertices[2]
cell = seg1.make_cell(v0, v1)
# Create cell #1 in seg1
v0 = domain.vertices[1]
v1 = domain.vertices[3]
cell = seg1.make_cell(v0, v1)

# To get information on the vertices of a cell, the following
# methods and attributes are available:
# 
cell.vertices()     # array of all the vertices of the cell
len(cell.vertices)  # number of vertices of the cell
iter(cell.vertices) # iterator over the elements of the array
cell.vertices[i]    # get vertex i of the cell
