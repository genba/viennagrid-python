#!/usr/bin/env python
#-*- coding: utf-8 -*-

import sys
sys.path += '..'

import unittest

import viennagrid_wrapper

class TestPointCartesian2D(unittest.TestCase):
	def setUp(self):
		self.point = viennagrid_wrapper._PointCartesian2D()
	
	def test_init(self):
		point = viennagrid_wrapper._PointCartesian2D()
		self.assertEqual(self.point.dim, 2)
	
	# def test_init_double(self):
	# 	point = viennagrid_wrapper._PointCartesian2D(1.0, 1.0)
	# 	self.assertEqual(self.point.dim, 2)
	# TODO: fails because 1.0 is float and function signature is double
	
	def test_dimension(self):
		self.assertEqual(self.point.dim, 2)
	
	def test_coord_system(self):
		self.assertEqual(self.point.coord_system, 'cartesian')

class TestPointCartesian3D(unittest.TestCase):
	def setUp(self):
		self.point = viennagrid_wrapper._PointCartesian3D()
	
	def test_init(self):
		point = viennagrid_wrapper._PointCartesian2D()
		self.assertEqual(self.point.dim, 3)
	
	# def test_init_double(self):
	# 	point = viennagrid_wrapper._PointCartesian2D(1.0, 1.0, 1.0)
	# 	self.assertEqual(self.point.dim, 3)
	# TODO: fails because 1.0 is float and function signature is double
	
	def test_dimension(self):
		self.assertEqual(self.point.dim, 3)
	
	def test_coord_system(self):
		self.assertEqual(self.point.coord_system, 'cartesian')

class TestPointCylindical3D(unittest.TestCase):
	def setUp(self):
		self.point = viennagrid_wrapper._PointCylindrical3D()
	
	def test_init(self):
		point = viennagrid_wrapper._PointCylindrical2D()
		self.assertEqual(self.point.dim, 3)
	
	# def test_init_double(self):
	# 	point = viennagrid_wrapper._PointCylindrical2D(1.0, 1.0, 1.0)
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
		point = viennagrid_wrapper._PointSpherical2D()
		self.assertEqual(self.point.dim, 3)
	
	# def test_init_double(self):
	# 	point = viennagrid_wrapper._PointSpherical2D(1.0, 1.0, 1.0)
	# 	self.assertEqual(self.point.dim, 3)
	# TODO: fails because 1.0 is float and function signature is double
	
	def test_dimension(self):
		self.assertEqual(self.point.dim, 3)
	
	def test_coord_system(self):
		self.assertEqual(self.point.coord_system, 'spherical')

if __name__ == '__main__':
	unittest.main()
