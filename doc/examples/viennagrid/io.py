#!/usr/bin/env python
#-*- coding: utf-8 -*-

from viennagrid import Domain
from viennagrid import config
from viennagrid import io

import os

file_path = os.path.join(os.path.split(__file__)[0], '../data/half-trigate.mesh')

#################
# Netgen reader #
#################

# In case we want to read only the domain information from the mesh file, we would
# just create an empty domain and call the Netgen reader on it with the file path
# where the mesh file can be found.

domain = Domain(config.triangular_3d)
io.read_netgen(file_path, domain)

# In case we want to read not only the domain information, but also the segmentation
# information from the mesh file, we would have to create an empty domain and an
# empty segmentation on that domain, and then call the Netgen reader.

domain = Domain(config.triangular_3d)
segmentation = Segmentation(domain)
io.read_netgen(file_path, domain, segmentation)

##############
# VTK writer #
##############

# In order to write a domain to a VTK file, you just have to call the VTK reader
# specifying the file path and the domain to be written

io.write_vtk('output_file.vtu', domain)

# If you want to write the information of both a domain and a segmentation of that
# domain, you have to specify the segmentation, too:

io.write_vtk('output_file.vtu', domain, segmentation)

#################
# OpenDX writer #
#################

# The OpenDX writer works similarly to the VTK writer, but it doesn't support
# segmentation, so you can only write the information contained in a domain:

io.write_opendx('output_opendx_file.out', domain)
