#!/usr/bin/env python
#-*- coding: utf-8 -*-

import sys
sys.path += '..'

import unittest

import viennagrid_wrapper

class TestPointCartesian2D(unittest.TestCase):
	def test_init(self):
		"""Test constructor, and properties 'dim' and 'coords'."""
		point = viennagrid_wrapper._PointCartesian2D()
		self.assertEqual(point.dim, 2)
		self.assertEqual(point.coords[0], 0)
		self.assertEqual(point.coords[1], 0)
	
	def test_init_double(self):
		"""Test constructor with doubles, and properties 'dim' and 'coords'."""
		point = viennagrid_wrapper._PointCartesian2D(2.0, 5.0)
		self.assertEqual(point.dim, 2)
		self.assertEqual(point.coords[0], 2.0)
		self.assertEqual(point.coords[1], 5.0)
	
	def test_coord_system(self):
		"""Test property 'coord_system'."""
		point = viennagrid_wrapper._PointCartesian2D()
		self.assertEqual(point.coord_system, 'cartesian')
	
	def test_get_coord(self):
		"""Test method 'get_coord'."""
		point = viennagrid_wrapper._PointCartesian2D()
		self.assertEqual(point.get_coord(0), 0)
		self.assertEqual(point.get_coord(1), 0)
		
		point = viennagrid_wrapper._PointCartesian2D(2, 5)
		self.assertEqual(point.get_coord(0), 2)
		self.assertEqual(point.get_coord(1), 5)
	
	def test_set_coord(self):
		"""Test method 'set_coord'."""
		point = viennagrid_wrapper._PointCartesian2D()
		self.assertEqual(point.get_coord(0), 0)
		self.assertEqual(point.get_coord(1), 0)
		point.set_coord(0, 5)
		point.set_coord(1, 8)
		self.assertEqual(point.get_coord(0), 5)
		self.assertEqual(point.get_coord(1), 8)
	
	def test_equal(self):
		"""Test operator '=='."""
		p1 = viennagrid_wrapper._PointCartesian2D()
		p2 = viennagrid_wrapper._PointCartesian2D()
		self.assertEqual(p1, p2)
		self.assertEqual(p1.coords[0], 0.0)
		self.assertEqual(p1.coords[1], 0.0)
		self.assertEqual(p2.coords[0], 0.0)
		self.assertEqual(p2.coords[1], 0.0)
		
		p1 = viennagrid_wrapper._PointCartesian2D(2, 1)
		p2 = viennagrid_wrapper._PointCartesian2D(2, 1)
		self.assertEqual(p1, p2)
		self.assertEqual(p1.coords[0], 2.0)
		self.assertEqual(p1.coords[1], 1.0)
		self.assertEqual(p2.coords[0], 2.0)
		self.assertEqual(p2.coords[1], 1.0)
	
	def test_assign(self):
		"""Test operator '='."""
		p1 = viennagrid_wrapper._PointCartesian2D(2, 1)
		p2 = viennagrid_wrapper._PointCartesian2D(1, 2)
		self.assertNotEqual(p1, p2)
		self.assertEqual(p1.coords[0], 2.0)
		self.assertEqual(p1.coords[1], 1.0)
		self.assertEqual(p2.coords[0], 1.0)
		self.assertEqual(p2.coords[1], 2.0)
		p1 = p2
		self.assertEqual(p1, p2)
		self.assertEqual(p1.coords[0], 1.0)
		self.assertEqual(p1.coords[1], 2.0)
		self.assertEqual(p2.coords[0], 1.0)
		self.assertEqual(p2.coords[1], 2.0)
	
	def test_add(self):
		"""Test operator '+' (addition)."""
		p1 = viennagrid_wrapper._PointCartesian2D(2, 1)
		p2 = viennagrid_wrapper._PointCartesian2D(1, 2)
		self.assertNotEqual(p1, p2)
		self.assertEqual(p1.coords[0], 2.0)
		self.assertEqual(p1.coords[1], 1.0)
		self.assertEqual(p2.coords[0], 1.0)
		self.assertEqual(p2.coords[1], 2.0)
		p3 = p2 + p1
		self.assertEqual(p3.coords[0], 3.0)
		self.assertEqual(p3.coords[1], 3.0)
	
	def test_sub(self):
		"""Test operator '-' (subtraction)."""
		p1 = viennagrid_wrapper._PointCartesian2D(2, 1)
		p2 = viennagrid_wrapper._PointCartesian2D(1, 2)
		self.assertNotEqual(p1, p2)
		self.assertEqual(p1.coords[0], 2.0)
		self.assertEqual(p1.coords[1], 1.0)
		self.assertEqual(p2.coords[0], 1.0)
		self.assertEqual(p2.coords[1], 2.0)
		p3 = p2 - p1
		self.assertEqual(p3.coords[0], -1.0)
		self.assertEqual(p3.coords[1], 1.0)
	
	def test_mul(self):
		"""Test operator '*' (multiplication)."""
		p1 = viennagrid_wrapper._PointCartesian2D()
		p2 = viennagrid_wrapper._PointCartesian2D()
		p1 = p1 * 2
		self.assertEqual(p1, p2)
		self.assertEqual(p1.coords[0], 0.0)
		self.assertEqual(p1.coords[1], 0.0)
		
		p1 = viennagrid_wrapper._PointCartesian2D(1, 1)
		p2 = viennagrid_wrapper._PointCartesian2D(2, 2)
		p1 = p1 * 2
		self.assertEqual(p1, p2)
		self.assertEqual(p1.coords[0], 2.0)
		self.assertEqual(p1.coords[1], 2.0)
	
	def test_div(self):
		"""Test operator '/' (division)."""
		p1 = viennagrid_wrapper._PointCartesian2D()
		p2 = viennagrid_wrapper._PointCartesian2D()
		p1 = p1 / 2
		self.assertEqual(p1, p2)
		self.assertEqual(p1.coords[0], 0.0)
		self.assertEqual(p1.coords[1], 0.0)
		
		p1 = viennagrid_wrapper._PointCartesian2D(1, 1)
		p2 = viennagrid_wrapper._PointCartesian2D(0.5, 0.5)
		p1 = p1 / 2
		self.assertEqual(p1, p2)
		self.assertEqual(p1.coords[0], 0.5)
		self.assertEqual(p1.coords[1], 0.5)

class TestPointCartesian3D(unittest.TestCase):
	def test_init(self):
		"""Test constructor, and properties 'dim' and 'coords'."""
		point = viennagrid_wrapper._PointCartesian3D()
		self.assertEqual(point.dim, 3)
		self.assertEqual(point.coords[0], 0)
		self.assertEqual(point.coords[1], 0)
		self.assertEqual(point.coords[2], 0)
	
	def test_init_double(self):
		"""Test constructor with doubles, and properties 'dim' and 'coords'."""
		point = viennagrid_wrapper._PointCartesian3D(2.0, 5.0, 4.0)
		self.assertEqual(point.dim, 3)
		self.assertEqual(point.coords[0], 2.0)
		self.assertEqual(point.coords[1], 5.0)
		self.assertEqual(point.coords[2], 4.0)
	
	def test_coord_system(self):
		"""Test property 'coord_system'."""
		point = viennagrid_wrapper._PointCartesian3D()
		self.assertEqual(point.coord_system, 'cartesian')
	
	def test_get_coord(self):
		"""Test method 'get_coord'."""
		point = viennagrid_wrapper._PointCartesian3D()
		self.assertEqual(point.get_coord(0), 0)
		self.assertEqual(point.get_coord(1), 0)
		self.assertEqual(point.get_coord(2), 0)
		
		point = viennagrid_wrapper._PointCartesian3D(2, 5, 4)
		self.assertEqual(point.get_coord(0), 2)
		self.assertEqual(point.get_coord(1), 5)
		self.assertEqual(point.get_coord(2), 4)
	
	def test_set_coord(self):
		"""Test method 'set_coord'."""
		point = viennagrid_wrapper._PointCartesian3D()
		self.assertEqual(point.get_coord(0), 0)
		self.assertEqual(point.get_coord(1), 0)
		self.assertEqual(point.get_coord(2), 0)
		point.set_coord(0, 5)
		point.set_coord(1, 8)
		point.set_coord(2, 9)
		self.assertEqual(point.get_coord(0), 5)
		self.assertEqual(point.get_coord(1), 8)
		self.assertEqual(point.get_coord(2), 9)
	
	def test_equal(self):
		"""Test operator '=='."""
		p1 = viennagrid_wrapper._PointCartesian3D()
		p2 = viennagrid_wrapper._PointCartesian3D()
		self.assertEqual(p1, p2)
		self.assertEqual(p1.coords[0], 0.0)
		self.assertEqual(p1.coords[1], 0.0)
		self.assertEqual(p1.coords[2], 0.0)
		self.assertEqual(p2.coords[0], 0.0)
		self.assertEqual(p2.coords[1], 0.0)
		self.assertEqual(p2.coords[2], 0.0)
		
		p1 = viennagrid_wrapper._PointCartesian3D(2, 1, 4)
		p2 = viennagrid_wrapper._PointCartesian3D(2, 1, 4)
		self.assertEqual(p1, p2)
		self.assertEqual(p1.coords[0], 2.0)
		self.assertEqual(p1.coords[1], 1.0)
		self.assertEqual(p1.coords[2], 4.0)
		self.assertEqual(p2.coords[0], 2.0)
		self.assertEqual(p2.coords[1], 1.0)
		self.assertEqual(p2.coords[2], 4.0)
	
	def test_assign(self):
		"""Test operator '='."""
		p1 = viennagrid_wrapper._PointCartesian3D(2, 1, 3)
		p2 = viennagrid_wrapper._PointCartesian3D(1, 2, 4)
		self.assertNotEqual(p1, p2)
		self.assertEqual(p1.coords[0], 2.0)
		self.assertEqual(p1.coords[1], 1.0)
		self.assertEqual(p1.coords[2], 3.0)
		self.assertEqual(p2.coords[0], 1.0)
		self.assertEqual(p2.coords[1], 2.0)
		self.assertEqual(p2.coords[2], 4.0)
		p1 = p2
		self.assertEqual(p1, p2)
		self.assertEqual(p1.coords[0], 1.0)
		self.assertEqual(p1.coords[1], 2.0)
		self.assertEqual(p1.coords[2], 4.0)
		self.assertEqual(p2.coords[0], 1.0)
		self.assertEqual(p2.coords[1], 2.0)
		self.assertEqual(p2.coords[2], 4.0)
	
	def test_add(self):
		"""Test operator '+' (addition)."""
		p1 = viennagrid_wrapper._PointCartesian3D(2, 1, 3)
		p2 = viennagrid_wrapper._PointCartesian3D(1, 2, 4)
		self.assertNotEqual(p1, p2)
		self.assertEqual(p1.coords[0], 2.0)
		self.assertEqual(p1.coords[1], 1.0)
		self.assertEqual(p1.coords[2], 3.0)
		self.assertEqual(p2.coords[0], 1.0)
		self.assertEqual(p2.coords[1], 2.0)
		self.assertEqual(p2.coords[2], 4.0)
		p3 = p2 + p1
		self.assertEqual(p3.coords[0], 3.0)
		self.assertEqual(p3.coords[1], 3.0)
		self.assertEqual(p3.coords[2], 7.0)
	
	def test_sub(self):
		"""Test operator '-' (subtraction)."""
		p1 = viennagrid_wrapper._PointCartesian3D(2, 1, 3)
		p2 = viennagrid_wrapper._PointCartesian3D(1, 2, 4)
		self.assertNotEqual(p1, p2)
		self.assertEqual(p1.coords[0], 2.0)
		self.assertEqual(p1.coords[1], 1.0)
		self.assertEqual(p1.coords[2], 3.0)
		self.assertEqual(p2.coords[0], 1.0)
		self.assertEqual(p2.coords[1], 2.0)
		self.assertEqual(p2.coords[2], 4.0)
		p3 = p2 - p1
		self.assertEqual(p3.coords[0], -1.0)
		self.assertEqual(p3.coords[1], 1.0)
		self.assertEqual(p3.coords[2], 1.0)
	
	def test_mul(self):
		"""Test operator '*' (multiplication)."""
		p1 = viennagrid_wrapper._PointCartesian3D()
		p2 = viennagrid_wrapper._PointCartesian3D()
		p1 = p1 * 2
		self.assertEqual(p1, p2)
		self.assertEqual(p1.coords[0], 0.0)
		self.assertEqual(p1.coords[1], 0.0)
		self.assertEqual(p1.coords[2], 0.0)
		
		p1 = viennagrid_wrapper._PointCartesian3D(1, 1, 1)
		p2 = viennagrid_wrapper._PointCartesian3D(2, 2, 2)
		p1 = p1 * 2
		self.assertEqual(p1, p2)
		self.assertEqual(p1.coords[0], 2.0)
		self.assertEqual(p1.coords[1], 2.0)
		self.assertEqual(p1.coords[2], 2.0)
	
	def test_div(self):
		"""Test operator '/' (division)."""
		p1 = viennagrid_wrapper._PointCartesian3D()
		p2 = viennagrid_wrapper._PointCartesian3D()
		p1 = p1 / 2
		self.assertEqual(p1, p2)
		self.assertEqual(p1.coords[0], 0.0)
		self.assertEqual(p1.coords[1], 0.0)
		self.assertEqual(p1.coords[2], 0.0)
		
		p1 = viennagrid_wrapper._PointCartesian3D(1, 1, 1)
		p2 = viennagrid_wrapper._PointCartesian3D(0.5, 0.5, 0.5)
		p1 = p1 / 2
		self.assertEqual(p1, p2)
		self.assertEqual(p1.coords[0], 0.5)
		self.assertEqual(p1.coords[1], 0.5)
		self.assertEqual(p1.coords[2], 0.5)

class TestPointCylindical3D(unittest.TestCase):
	def setUp(self):
		self.point = viennagrid_wrapper._PointCylindrical3D()
	
	def test_init(self):
		point = viennagrid_wrapper._PointCylindrical3D()
		self.assertEqual(self.point.dim, 3)
	
	# def test_init_double(self):
	# 	point = viennagrid_wrapper._PointCylindrical3D(1.0, 1.0, 1.0)
	# 	self.assertEqual(self.point.dim, 3)
	# TODO: fails because 1.0 is float and function signature is double
	
	def test_dimension(self):
		self.assertEqual(self.point.dim, 3)
	
	def test_coord_system(self):
		self.assertEqual(self.point.coord_system, 'cylindrical')

class TestPointPolar2D(unittest.TestCase):
	def setUp(self):
		self.point = viennagrid_wrapper._PointPolar2D()
	
	def test_init(self):
		point = viennagrid_wrapper._PointPolar2D()
		self.assertEqual(self.point.dim, 2)
	
	# def test_init_double(self):
	# 	point = viennagrid_wrapper._PointPolar2D(1.0, 1.0)
	# 	self.assertEqual(self.point.dim, 2)
	# TODO: fails because 1.0 is float and function signature is double
	
	def test_dimension(self):
		self.assertEqual(self.point.dim, 2)
	
	def test_coord_system(self):
		self.assertEqual(self.point.coord_system, 'polar')

class TestPointSpherical3D(unittest.TestCase):
	def setUp(self):
		self.point = viennagrid_wrapper._PointSpherical3D()
	
	def test_init(self):
		point = viennagrid_wrapper._PointSpherical3D()
		self.assertEqual(self.point.dim, 3)
	
	# def test_init_double(self):
	# 	point = viennagrid_wrapper._PointSpherical3D(1.0, 1.0, 1.0)
	# 	self.assertEqual(self.point.dim, 3)
	# TODO: fails because 1.0 is float and function signature is double
	
	def test_dimension(self):
		self.assertEqual(self.point.dim, 3)
	
	def test_coord_system(self):
		self.assertEqual(self.point.coord_system, 'spherical')

if __name__ == '__main__':
	unittest.main()
