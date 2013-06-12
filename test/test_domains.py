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
		"""Test methods 'create_segments' and 'get_segment'."""
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)
		
		segments = []
		for i in range(0, self.domain.num_segments):
			segments.append(self.domain.get_segment(i))
			self.assertTrue(isinstance(segments[i], viennagrid_wrapper._TriangularCartesian2D_Segment))
	
	def test_add_vertex(self):
		"""Test methods 'add_vertex' and 'get_vertex'."""
		v = viennagrid_wrapper._PointCartesian2D()
		self.domain.add_vertex(v)
		self.assertEqual(self.domain.get_vertex(0), v)

class TestTriangularCartesian3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.domain = viennagrid_wrapper._TriangularCartesian3D_Domain()
	
	def test_create_segments(self):
		"""Test methods 'create_segments' and 'get_segment'."""
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)
		
		segments = []
		for i in range(0, self.domain.num_segments):
			segments.append(self.domain.get_segment(i))
			self.assertTrue(isinstance(segments[i], viennagrid_wrapper._TriangularCartesian3D_Segment))
	
	def test_add_vertex(self):
		"""Test methods 'add_vertex' and 'get_vertex'."""
		v = viennagrid_wrapper._PointCartesian3D()
		self.domain.add_vertex(v)
		self.assertEqual(self.domain.get_vertex(0), v)

class TestTriangularCylindrical3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.domain = viennagrid_wrapper._TriangularCylindrical3D_Domain()
	
	def test_create_segments(self):
		"""Test methods 'create_segments' and 'get_segment'."""
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)
		
		segments = []
		for i in range(0, self.domain.num_segments):
			segments.append(self.domain.get_segment(i))
			self.assertTrue(isinstance(segments[i], viennagrid_wrapper._TriangularCylindrical3D_Segment))
	
	def test_add_vertex(self):
		"""Test methods 'add_vertex' and 'get_vertex'."""
		v = viennagrid_wrapper._PointCylindrical3D()
		self.domain.add_vertex(v)
		self.assertEqual(self.domain.get_vertex(0), v)

class TestTriangularPolar2D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.domain = viennagrid_wrapper._TriangularPolar2D_Domain()
	
	def test_create_segments(self):
		"""Test methods 'create_segments' and 'get_segment'."""
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)
		
		segments = []
		for i in range(0, self.domain.num_segments):
			segments.append(self.domain.get_segment(i))
			self.assertTrue(isinstance(segments[i], viennagrid_wrapper._TriangularPolar2D_Segment))
	
	def test_add_vertex(self):
		"""Test methods 'add_vertex' and 'get_vertex'."""
		v = viennagrid_wrapper._PointPolar2D()
		self.domain.add_vertex(v)
		self.assertEqual(self.domain.get_vertex(0), v)

class TestTriangularSpherical3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.domain = viennagrid_wrapper._TriangularSpherical3D_Domain()
	
	def test_create_segments(self):
		"""Test methods 'create_segments' and 'get_segment'."""
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)
		
		segments = []
		for i in range(0, self.domain.num_segments):
			segments.append(self.domain.get_segment(i))
			self.assertTrue(isinstance(segments[i], viennagrid_wrapper._TriangularSpherical3D_Segment))
	
	def test_add_vertex(self):
		"""Test methods 'add_vertex' and 'get_vertex'."""
		v = viennagrid_wrapper._PointSpherical3D()
		self.domain.add_vertex(v)
		self.assertEqual(self.domain.get_vertex(0), v)

if __name__ == '__main__':
	unittest.main()
