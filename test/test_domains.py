#!/usr/bin/env python
#-*- coding: utf-8 -*-

import sys
sys.path += '..'

import unittest

import viennagrid_wrapper

######################
# TRIANGULAR DOMAINS #
######################

class TestTriangularCartesian2D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.domain = viennagrid_wrapper._TriangularCartesian2D_Domain()
	
	def test_create_segments(self):
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)
	
	def test_add_vertex(self):
		v = viennagrid_wrapper._PointCartesian2D()
		self.domain.add_vertex(v)

class TestTriangularCartesian3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.domain = viennagrid_wrapper._TriangularCartesian3D_Domain()
	
	def test_create_segments(self):
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)
	
	def test_add_vertex(self):
		v = viennagrid_wrapper._PointCartesian3D()
		self.domain.add_vertex(v)

class TestTriangularCylindrical3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.domain = viennagrid_wrapper._TriangularCylindrical3D_Domain()
	
	def test_create_segments(self):
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)
	
	def test_add_vertex(self):
		v = viennagrid_wrapper._PointCylindrical3D()
		self.domain.add_vertex(v)

class TestTriangularPolar2D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.domain = viennagrid_wrapper._TriangularPolar2D_Domain()
	
	def test_create_segments(self):
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)
	
	def test_add_vertex(self):
		v = viennagrid_wrapper._PointPolar2D()
		self.domain.add_vertex(v)

class TestTriangularSpherical3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.domain = viennagrid_wrapper._TriangularSpherical3D_Domain()
	
	def test_create_segments(self):
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)
	
	def test_add_vertex(self):
		v = viennagrid_wrapper._PointSpherical3D()
		self.domain.add_vertex(v)

if __name__ == '__main__':
	unittest.main()
