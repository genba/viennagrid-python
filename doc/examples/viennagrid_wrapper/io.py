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
# (Notice that the 'read_netgen' function and all other I/O functions
# work with any type of domain and segmentation without name change.)

from viennagrid.wrapper import TriangularCartesian3D_Domain as Domain
from viennagrid.wrapper import TriangularCartesian3D_Segmentation as Segmentation
from viennagrid.wrapper import read_netgen

# In case we want to read only the domain information from the mesh file, we would
# just create an empty domain and call the Netgen reader on it with the file path
# where the mesh file can be found.

domain = Domain()
read_netgen('../data/half-trigate.mesh', domain)

# In case we want to read not only the domain information, but also the segmentation
# information from the mesh file, we would have to create an empty domain and an
# empty segmentation on that domain, and then call the Netgen reader.

domain = Domain()
segmentation = Segmentation(domain)
read_netgen('../data/half-trigate.mesh', domain, segmentation)
