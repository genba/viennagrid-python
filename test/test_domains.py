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

class TestTriangularCartesian3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.domain = viennagrid_wrapper._TriangularCartesian3D_Domain()
	
	def test_create_segments(self):
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)

class TestTriangularCylindrical3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.domain = viennagrid_wrapper._TriangularCylindrical3D_Domain()
	
	def test_create_segments(self):
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)

class TestTriangularPolar2D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.domain = viennagrid_wrapper._TriangularPolar2D_Domain()
	
	def test_create_segments(self):
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)

class TestTriangularSpherical3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.domain = viennagrid_wrapper._TriangularSpherical3D_Domain()
	
	def test_create_segments(self):
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)

if __name__ == '__main__':
	unittest.main()
