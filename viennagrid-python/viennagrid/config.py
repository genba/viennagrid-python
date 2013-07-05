#-*- coding: utf-8 -*-

##########################
# COORDINATE SYSTEM TAGS #
##########################

CARTESIAN   = 'cartesian'
POLAR       = 'polar'
SPHERICAL   = 'spherical'
CYLINDRICAL = 'cylindrical'

COORD_SYSTEM_TAGS = (CARTESIAN, POLAR, SPHERICAL, CYLINDRICAL)

########################
# SUPPORTED DIMENSIONS #
########################

SUPPORTED_DIMENSIONS = {
	CARTESIAN:      (2, 3),
	CYLINDRICAL:    (3,),
	POLAR:          (2,),
	SPHERICAL:      (3,),
}
