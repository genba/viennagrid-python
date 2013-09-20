#!/usr/bin/env python
# 
# This example shows how to read and write mesh files using the low-level ViennaGrid
# wrapper for Python (viennagrid.wrapper).

from __future__ import print_function

# In this example, we will set up a domain of triangles in the cartesian 3D
# space from the contents of a Netgen mesh file.
# 
# For that purpose, we need to define a domain and, eventually, also a segmentation
# (in case we want to read segmentation data from the mesh file), and we need the
# Netgen reader function, too.
# 
# In addition, we will then write the read domain and segmentation to a VTK file
# and also to an OpenDX file. Thus, we will need the VTK writer and the OpenDX writer
# functions, too.
# 
# (Notice that the 'read_netgen' function and all other I/O functions
# work with any type of domain and segmentation without name change.)

from viennagrid.wrapper import TriangularCartesian3D_Domain as Domain
from viennagrid.wrapper import TriangularCartesian3D_Segmentation as Segmentation
from viennagrid.wrapper import read_netgen, write_vtk, write_opendx

import os

file_path = os.path.join(os.path.split(__file__)[0], '../data/half-trigate.mesh')

#################
# Netgen reader #
#################

# In case we want to read only the domain information from the mesh file, we would
# just create an empty domain and call the Netgen reader on it with the file path
# where the mesh file can be found.

domain = Domain()
read_netgen(file_path, domain)

# In case we want to read not only the domain information, but also the segmentation
# information from the mesh file, we would have to create an empty domain and an
# empty segmentation on that domain, and then call the Netgen reader.

domain = Domain()
segmentation = Segmentation(domain)
read_netgen(file_path, domain, segmentation)

##############
# VTK writer #
##############

# In order to write a domain to a VTK file, you just have to call the VTK reader
# specifying the file path and the domain to be written

write_vtk('output_file.vtu', domain)

# If you want to write the information of both a domain and a segmentation of that
# domain, you have to specify the segmentation, too:

write_vtk('output_file.vtu', domain, segmentation)

#################
# OpenDX writer #
#################

# The OpenDX writer works similarly to the VTK writer, but it doesn't support
# segmentation, so you can only write the information contained in a domain:

write_opendx('output_opendx_file.out', domain)
