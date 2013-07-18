#-*- coding: utf-8 -*-

import unittest

import viennagrid

from utils import equal

class TestPoint(unittest.TestCase):
	def test_init(self):
		"""
		Test constructor with all possible argument combinations.
		
		Valid signatures are:
		
		Point(dim)
		Point(coord_system, dim)
		
		Point(x)
		Point(x, coord_system)
		Point(x, dim)
		Point(x, coord_system, dim)
		
		Point(x, y)
		Point(x, y, coord_system)
		Point(x, y, dim)
		Point(x, y, coord_system, dim)
		
		Point(x, y, z)
		Point(x, y, z, coord_system)
		Point(x, y, z, dim)
		Point(x, y, z, coord_system, dim)
		"""
		
		###########################################################################################
		
		"""
		The following signatures must fail:
		
		Point()
		"""
		
		x = 0
		y = 0
		z = 0
		
		self.assertRaises(TypeError, viennagrid.Point)
		
		###########################################################################################
		
		"""
		Test signature:
		
		Point(dim)
		"""
		
		p = viennagrid.Point(dim=1)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 1)
		self.assertTrue(*equal(p.coords[0], x))
		
		p = viennagrid.Point(dim=2)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 2)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		
		p = viennagrid.Point(dim=3)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 3)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		self.assertTrue(*equal(p.coords[2], z))
		
		self.assertRaises(ValueError, viennagrid.Point, dim=0)
		self.assertRaises(ValueError, viennagrid.Point, dim=4)
		self.assertRaises(TypeError, viennagrid.Point, dim='')
		self.assertRaises(TypeError, viennagrid.Point, dim=[])
		self.assertRaises(TypeError, viennagrid.Point, dim=long(1))
		self.assertRaises(TypeError, viennagrid.Point, dim=float(1))
		self.assertRaises(TypeError, viennagrid.Point, dim=complex(1))
		
		###########################################################################################
		
		"""
		Test signature:
		
		Point(coord_system)
		
		This must fail for coord_system=CARTESIAN, because 'dim' is unknown. However, for
		coord_system=POLAR, coord_system=SPHERICAL and coord_system=CYLINDRICAL it
		must work, because 'dim' is unambiguous.
		"""
		
		self.assertRaises(TypeError, viennagrid.Point, coord_system=viennagrid.config.CARTESIAN)
		
		p = viennagrid.Point(coord_system=viennagrid.config.POLAR)
		self.assertEqual(p.coord_system, viennagrid.config.POLAR)
		self.assertEqual(p.dim, 2)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		
		p = viennagrid.Point(coord_system=viennagrid.config.SPHERICAL)
		self.assertEqual(p.coord_system, viennagrid.config.SPHERICAL)
		self.assertEqual(p.dim, 3)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		self.assertTrue(*equal(p.coords[2], z))
		
		p = viennagrid.Point(coord_system=viennagrid.config.CYLINDRICAL)
		self.assertEqual(p.coord_system, viennagrid.config.CYLINDRICAL)
		self.assertEqual(p.dim, 3)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		self.assertTrue(*equal(p.coords[2], z))
		
		self.assertRaises(ValueError, viennagrid.Point, coord_system='')
		self.assertRaises(TypeError, viennagrid.Point, coord_system=[])
		self.assertRaises(TypeError, viennagrid.Point, coord_system=int(1))
		
		###########################################################################################
		
		"""
		Test signature:
		
		Point(coord_system, dim)
		"""
		
		p = viennagrid.Point(coord_system=viennagrid.config.CARTESIAN, dim=1)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 1)
		self.assertTrue(*equal(p.coords[0], x))
		
		p = viennagrid.Point(coord_system=viennagrid.config.CARTESIAN, dim=2)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 2)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		
		p = viennagrid.Point(coord_system=viennagrid.config.CARTESIAN, dim=3)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 3)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		self.assertTrue(*equal(p.coords[2], z))
		
		p = viennagrid.Point(coord_system=viennagrid.config.POLAR, dim=2)
		self.assertEqual(p.coord_system, viennagrid.config.POLAR)
		self.assertEqual(p.dim, 2)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		
		p = viennagrid.Point(coord_system=viennagrid.config.SPHERICAL, dim=3)
		self.assertEqual(p.coord_system, viennagrid.config.SPHERICAL)
		self.assertEqual(p.dim, 3)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		self.assertTrue(*equal(p.coords[2], z))
		
		p = viennagrid.Point(coord_system=viennagrid.config.CYLINDRICAL, dim=3)
		self.assertEqual(p.coord_system, viennagrid.config.CYLINDRICAL)
		self.assertEqual(p.dim, 3)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		self.assertTrue(*equal(p.coords[2], z))
		
		self.assertRaises(ValueError, viennagrid.Point, coord_system=viennagrid.config.CARTESIAN, dim=0)
		self.assertRaises(ValueError, viennagrid.Point, coord_system=viennagrid.config.CARTESIAN, dim=4)
		self.assertRaises(ValueError, viennagrid.Point, coord_system=viennagrid.config.POLAR, dim=1)
		self.assertRaises(ValueError, viennagrid.Point, coord_system=viennagrid.config.POLAR, dim=3)
		self.assertRaises(ValueError, viennagrid.Point, coord_system=viennagrid.config.SPHERICAL, dim=1)
		self.assertRaises(ValueError, viennagrid.Point, coord_system=viennagrid.config.SPHERICAL, dim=2)
		self.assertRaises(ValueError, viennagrid.Point, coord_system=viennagrid.config.SPHERICAL, dim=4)
		self.assertRaises(ValueError, viennagrid.Point, coord_system=viennagrid.config.CYLINDRICAL, dim=1)
		self.assertRaises(ValueError, viennagrid.Point, coord_system=viennagrid.config.CYLINDRICAL, dim=2)
		self.assertRaises(ValueError, viennagrid.Point, coord_system=viennagrid.config.CYLINDRICAL, dim=4)
		
		###########################################################################################
		
		"""
		Test signature:
		
		Point(x)
		"""
		
		x = 15
		y = 83
		z = 49
		
		p = viennagrid.Point(x)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 1)
		self.assertTrue(*equal(p.coords[0], x))
		
		###########################################################################################
		
		"""
		Test signature:
		
		Point(x, dim)
		"""
		
		p = viennagrid.Point(x, dim=1)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 1)
		self.assertTrue(*equal(p.coords[0], x))
		
		self.assertRaises(ValueError, viennagrid.Point, x, dim=0)
		self.assertRaises(ValueError, viennagrid.Point, x, dim=2)
		self.assertRaises(ValueError, viennagrid.Point, x, dim=3)
		
		self.assertRaises(ValueError, viennagrid.Point, x, dim=0)
		self.assertRaises(ValueError, viennagrid.Point, x, dim=4)
		self.assertRaises(TypeError, viennagrid.Point, x, dim='')
		self.assertRaises(TypeError, viennagrid.Point, x, dim=[])
		self.assertRaises(TypeError, viennagrid.Point, x, dim=long(1))
		self.assertRaises(TypeError, viennagrid.Point, x, dim=float(1))
		self.assertRaises(TypeError, viennagrid.Point, x, dim=complex(1))
		
		###########################################################################################
		
		"""
		Test signature:
		
		Point(x, coord_system)
		"""
		
		p = viennagrid.Point(x, coord_system=viennagrid.config.CARTESIAN)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 1)
		self.assertTrue(*equal(p.coords[0], x))
		
		self.assertRaises(TypeError, viennagrid.Point, x, coord_system=viennagrid.config.SPHERICAL)
		self.assertRaises(TypeError, viennagrid.Point, x, coord_system=viennagrid.config.POLAR)
		self.assertRaises(TypeError, viennagrid.Point, x, coord_system=viennagrid.config.CYLINDRICAL)
		
		self.assertRaises(ValueError, viennagrid.Point, x, coord_system='')
		self.assertRaises(TypeError, viennagrid.Point, x, coord_system=[])
		self.assertRaises(TypeError, viennagrid.Point, x, coord_system=int(1))
		
		###########################################################################################
		
		"""
		Test signature:
		
		Point(x, coord_system, dim)
		"""
		
		p = viennagrid.Point(x, coord_system=viennagrid.config.CARTESIAN, dim=1)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 1)
		self.assertTrue(*equal(p.coords[0], x))

		
		self.assertRaises(ValueError, viennagrid.Point, x, coord_system=viennagrid.config.CARTESIAN, dim=0)
		self.assertRaises(ValueError, viennagrid.Point, x, coord_system=viennagrid.config.CARTESIAN, dim=2)
		self.assertRaises(ValueError, viennagrid.Point, x, coord_system=viennagrid.config.CARTESIAN, dim=3)
		
		self.assertRaises(TypeError, viennagrid.Point, x, coord_system=viennagrid.config.SPHERICAL, dim=1)
		self.assertRaises(TypeError, viennagrid.Point, x, coord_system=viennagrid.config.SPHERICAL, dim=2)
		self.assertRaises(TypeError, viennagrid.Point, x, coord_system=viennagrid.config.SPHERICAL, dim=3)
		
		self.assertRaises(TypeError, viennagrid.Point, x, coord_system=viennagrid.config.CYLINDRICAL, dim=1)
		self.assertRaises(TypeError, viennagrid.Point, x, coord_system=viennagrid.config.CYLINDRICAL, dim=2)
		self.assertRaises(TypeError, viennagrid.Point, x, coord_system=viennagrid.config.CYLINDRICAL, dim=3)
		
		self.assertRaises(TypeError, viennagrid.Point, x, coord_system=viennagrid.config.POLAR, dim=1)
		self.assertRaises(TypeError, viennagrid.Point, x, coord_system=viennagrid.config.POLAR, dim=2)
		self.assertRaises(TypeError, viennagrid.Point, x, coord_system=viennagrid.config.POLAR, dim=3)
		
		###########################################################################################
		
		"""
		Test signature:
		
		Point(x, y)
		"""
		
		x = 15
		y = 83
		z = 49
		
		p = viennagrid.Point(x, y)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 2)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		
		###########################################################################################
		
		"""
		Test signature:
		
		Point(x, y, dim)
		"""
		
		p = viennagrid.Point(x, y, dim=2)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 2)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		
		self.assertRaises(ValueError, viennagrid.Point, x, y, dim=3)
		
		self.assertRaises(ValueError, viennagrid.Point, x, y, dim=0)
		self.assertRaises(ValueError, viennagrid.Point, x, y, dim=1)
		self.assertRaises(ValueError, viennagrid.Point, x, y, dim=4)
		self.assertRaises(TypeError, viennagrid.Point, x, y, dim='')
		self.assertRaises(TypeError, viennagrid.Point, x, y, dim=[])
		self.assertRaises(TypeError, viennagrid.Point, x, y, dim=long(1))
		self.assertRaises(TypeError, viennagrid.Point, x, y, dim=float(1))
		self.assertRaises(TypeError, viennagrid.Point, x, y, dim=complex(1))
		
		###########################################################################################
		
		"""
		Test signature:
		
		Point(x, y, coord_system)
		"""
		
		
		p = viennagrid.Point(x, y, coord_system=viennagrid.config.CARTESIAN)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 2)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		
		p = viennagrid.Point(x, y, coord_system=viennagrid.config.POLAR)
		self.assertEqual(p.coord_system, viennagrid.config.POLAR)
		self.assertEqual(p.dim, 2)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		
		self.assertRaises(TypeError, viennagrid.Point, x, y, coord_system=viennagrid.config.SPHERICAL)
		
		self.assertRaises(TypeError, viennagrid.Point, x, y, coord_system=viennagrid.config.CYLINDRICAL)
		
		self.assertRaises(ValueError, viennagrid.Point, x, y, coord_system='')
		self.assertRaises(TypeError, viennagrid.Point, x, y, coord_system=[])
		self.assertRaises(TypeError, viennagrid.Point, x, y, coord_system=int(1))
		
		###########################################################################################
		
		"""
		Test signature:
		
		Point(x, y, coord_system, dim)
		"""
		
		p = viennagrid.Point(x, y, coord_system=viennagrid.config.CARTESIAN, dim=2)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 2)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		
		self.assertRaises(ValueError, viennagrid.Point, x, y, coord_system=viennagrid.config.CARTESIAN, dim=3)
		
		p = viennagrid.Point(x, y, coord_system=viennagrid.config.POLAR, dim=2)
		self.assertEqual(p.coord_system, viennagrid.config.POLAR)
		self.assertEqual(p.dim, 2)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		
		self.assertRaises(TypeError, viennagrid.Point, x, y, coord_system=viennagrid.config.SPHERICAL, dim=3)
		
		self.assertRaises(TypeError, viennagrid.Point, x, y, coord_system=viennagrid.config.CYLINDRICAL, dim=3)
		
		self.assertRaises(ValueError, viennagrid.Point, x, y, coord_system=viennagrid.config.CARTESIAN, dim=1)
		self.assertRaises(ValueError, viennagrid.Point, x, y, coord_system=viennagrid.config.CARTESIAN, dim=4)
		self.assertRaises(ValueError, viennagrid.Point, x, y, coord_system=viennagrid.config.POLAR, dim=1)
		self.assertRaises(ValueError, viennagrid.Point, x, y, coord_system=viennagrid.config.POLAR, dim=3)
		self.assertRaises(TypeError, viennagrid.Point, x, y, coord_system=viennagrid.config.SPHERICAL, dim=1)
		self.assertRaises(TypeError, viennagrid.Point, x, y, coord_system=viennagrid.config.SPHERICAL, dim=2)
		self.assertRaises(TypeError, viennagrid.Point, x, y, coord_system=viennagrid.config.SPHERICAL, dim=4)
		self.assertRaises(TypeError, viennagrid.Point, x, y, coord_system=viennagrid.config.CYLINDRICAL, dim=1)
		self.assertRaises(TypeError, viennagrid.Point, x, y, coord_system=viennagrid.config.CYLINDRICAL, dim=2)
		self.assertRaises(TypeError, viennagrid.Point, x, y, coord_system=viennagrid.config.CYLINDRICAL, dim=4)
		
		###########################################################################################
		
		"""
		Test signature:
		
		Point(x, y, z)
		"""
		
		p = viennagrid.Point(x, y, z)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 3)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		self.assertTrue(*equal(p.coords[2], z))
		
		###########################################################################################
		
		"""
		Test signature:
		
		Point(x, y, z, dim)
		"""
		
		self.assertRaises(ValueError, viennagrid.Point, x, y, z, dim=2)
		
		p = viennagrid.Point(x, y, z, dim=3)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 3)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		self.assertTrue(*equal(p.coords[2], z))
		
		self.assertRaises(ValueError, viennagrid.Point, x, y, z, dim=0)
		self.assertRaises(ValueError, viennagrid.Point, x, y, z, dim=1)
		self.assertRaises(ValueError, viennagrid.Point, x, y, z, dim=4)
		self.assertRaises(TypeError, viennagrid.Point, x, y, z, dim='')
		self.assertRaises(TypeError, viennagrid.Point, x, y, z, dim=[])
		self.assertRaises(TypeError, viennagrid.Point, x, y, z, dim=long(1))
		self.assertRaises(TypeError, viennagrid.Point, x, y, z, dim=float(1))
		self.assertRaises(TypeError, viennagrid.Point, x, y, z, dim=complex(1))
		
		###########################################################################################
		
		"""
		Test signature:
		
		Point(x, y, z, coord_system)
		"""
		
		p = viennagrid.Point(x, y, z, coord_system=viennagrid.config.CARTESIAN)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 3)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		self.assertTrue(*equal(p.coords[2], z))
		
		self.assertRaises(TypeError, viennagrid.Point, x, y, z, coord_system=viennagrid.config.POLAR)
		
		p = viennagrid.Point(x, y, z, coord_system=viennagrid.config.SPHERICAL)
		self.assertEqual(p.coord_system, viennagrid.config.SPHERICAL)
		self.assertEqual(p.dim, 3)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		self.assertTrue(*equal(p.coords[2], z))
		
		p = viennagrid.Point(x, y, z, coord_system=viennagrid.config.CYLINDRICAL)
		self.assertEqual(p.coord_system, viennagrid.config.CYLINDRICAL)
		self.assertEqual(p.dim, 3)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		self.assertTrue(*equal(p.coords[2], z))
		
		self.assertRaises(ValueError, viennagrid.Point, x, y, z, coord_system='')
		self.assertRaises(TypeError, viennagrid.Point, x, y, z, coord_system=[])
		self.assertRaises(TypeError, viennagrid.Point, x, y, z, coord_system=int(1))
		
		###########################################################################################
		
		"""
		Test signature:
		
		Point(x, y, z, coord_system, dim)
		"""
		
		self.assertRaises(ValueError, viennagrid.Point, x, y, z, coord_system=viennagrid.config.CARTESIAN, dim=2)
		
		p = viennagrid.Point(x, y, z, coord_system=viennagrid.config.CARTESIAN, dim=3)
		self.assertEqual(p.coord_system, viennagrid.config.CARTESIAN)
		self.assertEqual(p.dim, 3)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		self.assertTrue(*equal(p.coords[2], z))
		
		self.assertRaises(TypeError, viennagrid.Point, x, y, z, coord_system=viennagrid.config.POLAR, dim=2)
		
		p = viennagrid.Point(x, y, z, coord_system=viennagrid.config.SPHERICAL, dim=3)
		self.assertEqual(p.coord_system, viennagrid.config.SPHERICAL)
		self.assertEqual(p.dim, 3)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		self.assertTrue(*equal(p.coords[2], z))
		
		p = viennagrid.Point(x, y, z, coord_system=viennagrid.config.CYLINDRICAL, dim=3)
		self.assertEqual(p.coord_system, viennagrid.config.CYLINDRICAL)
		self.assertEqual(p.dim, 3)
		self.assertTrue(*equal(p.coords[0], x))
		self.assertTrue(*equal(p.coords[1], y))
		self.assertTrue(*equal(p.coords[2], z))
		
		self.assertRaises(ValueError, viennagrid.Point, x, y, z, coord_system=viennagrid.config.CARTESIAN, dim=1)
		self.assertRaises(ValueError, viennagrid.Point, x, y, z, coord_system=viennagrid.config.CARTESIAN, dim=4)
		self.assertRaises(TypeError, viennagrid.Point, x, y, z, coord_system=viennagrid.config.POLAR, dim=1)
		self.assertRaises(TypeError, viennagrid.Point, x, y, z, coord_system=viennagrid.config.POLAR, dim=3)
		self.assertRaises(ValueError, viennagrid.Point, x, y, z, coord_system=viennagrid.config.SPHERICAL, dim=1)
		self.assertRaises(ValueError, viennagrid.Point, x, y, z, coord_system=viennagrid.config.SPHERICAL, dim=2)
		self.assertRaises(ValueError, viennagrid.Point, x, y, z, coord_system=viennagrid.config.SPHERICAL, dim=4)
		self.assertRaises(ValueError, viennagrid.Point, x, y, z, coord_system=viennagrid.config.CYLINDRICAL, dim=1)
		self.assertRaises(ValueError, viennagrid.Point, x, y, z, coord_system=viennagrid.config.CYLINDRICAL, dim=2)
		self.assertRaises(ValueError, viennagrid.Point, x, y, z, coord_system=viennagrid.config.CYLINDRICAL, dim=4)

if __name__ == '__main__':
	unittest.main()
