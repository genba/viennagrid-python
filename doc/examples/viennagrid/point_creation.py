#!/usr/bin/env python
#-*- coding: utf-8 -*-
#
# This example shows all the possible signatures for the constructor of points
#
# The class Point represents an abstract point, i.e., the same class is used for
# any type of point, no matter if it is cartesian, polar, 2d, 3d, ...
# This class is defined in the module viennagrid.
#
# In order to be able to specify a coordinate system when consctructing a Point
# object, the following coordinate system tags are provided under viennagrid.config:
#
#    - CARTESIAN
#    - POLAR
#    - CYLINDRICAL
#    - SPHERICAL
#
# which are just Python strings that identify the coordinate system, so that you can
# use in your program either viennagrid.config.POLAR or just write the string 'polar'.

import viennagrid

#######################################################################################
# Examples for the following signatures:
#
# viennagrid.Point(dim)
# viennagrid.Point(coord_system, dim)
#######################################################################################

# Define a cartesian 2D point
#
# When no coordinates are given, coordinates are set to 0.0
# When coordinate system is omitted, cartesian is assumed
# Supported dimensions are 2 and 3
p = viennagrid.Point(dim=2)

# Define a cartesian 3D point
#
# If no coordinates are given, coordinates are set to 0.0
# Supported dimensions are 2 and 3 for cartesian points,
# 2 for polar, and 3 for spherical and cylindrical.
p = viennagrid.Point(coord_system=viennagrid.config.CARTESIAN, dim=3)

#######################################################################################
# Examples for the following signatures:
#
# viennagrid.Point(x, y)
# viennagrid.Point(x, y, coord_system)
# viennagrid.Point(x, y, dim)
# viennagrid.Point(x, y, coord_system, dim)
#######################################################################################

# Define coordinates to define an example point
x = 15
y = 28
z = 43

# Define a cartesian point with coordinates x, y
#
# When coordinate system tag is omitted, cartesian is assumed
# Dimension is implied from positional arguments:
# two coordinates are specified, thus, a 2d point is defined
p = viennagrid.Point(x, y)

# Define a polar point with coordinates x, y
#
# Dimension is implied from positional arguments:
# two coordinates are specified, thus, a 2d point is defined
#
# Only cartesian and polar points are accepted. If CYLINDRICAL
# or SPHERICAL are provided as coordinate system tag, a ValueError
# exception will be raised, because cylindrical and spherical points
# are 3-dimensional.
p = viennagrid.Point(x, y, coord_system=viennagrid.config.POLAR)

# dim can be specified, but it is redundant, and it must match
# the number of position arguments (in this case, 2).
# Otherwise, a TypeError exception will be raised.
# If the coordinate system tag is omitted, cartesian is assumed.
p = viennagrid.Point(x, y, dim=2)
p = viennagrid.Point(x, y, coord_system=viennagrid.config.POLAR, dim=2)

#######################################################################################
# Examples for the following signatures:
#
# viennagrid.Point(x, y, z)
# viennagrid.Point(x, y, z, coord_system)
# viennagrid.Point(x, y, z, dim)
# viennagrid.Point(x, y, z, coord_system, dim)
#######################################################################################

# Define a point with coordinates x, y, z
#
# When coordinate system tag is omitted, cartesian is assumed
# Dimension is implied from positional arguments:
# three coordinates are specified, thus, a 3d point is defined
p = viennagrid.Point(x, y, z)

# Define a cylindrical point with coordinates x, y, z
#
# Dimension is implied from positional arguments:
# two coordinates are specified, thus, a 2d point is defined
#
# CARTESIAN, CYLINDRICAL and SPHERICAL are accepted as coordinate system tag
# If POLAR is provided, a ValueError exception will be raised, because polar
# points are 2-dimensional.
p = viennagrid.Point(x, y, z, coord_system=viennagrid.config.CYLINDRICAL)

# dim can be specified, but it is redundant, and it must match
# the number of position arguments (in this case, 3).
# Otherwise, a TypeError exception will be raised.
# If the coordinate system tag is omitted, cartesian is assumed.
p = viennagrid.Point(x, y, z, dim=3)
p = viennagrid.Point(x, y, z, coord_system=viennagrid.config.SPHERICAL, dim=3)
