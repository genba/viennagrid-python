#!/usr/bin/env python
#-*- coding: utf-8 -*-

import sys
if len(sys.argv) > 1:
	sys.path.insert(0, sys.argv.pop(1))

import unittest

import viennagrid.wrapper

##################
# LINEAR DOMAINS #
##################

class TestLinearCartesian1D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointCartesian1D(1),
			viennagrid.wrapper.PointCartesian1D(2),
			viennagrid.wrapper.PointCartesian1D(3),
			viennagrid.wrapper.PointCartesian1D(4),
			viennagrid.wrapper.PointCartesian1D(5),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.LinearCartesian1D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.LinearCartesian1D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.make_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.make_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestLinearCartesian2D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointCartesian2D(1, 2),
			viennagrid.wrapper.PointCartesian2D(2, 3),
			viennagrid.wrapper.PointCartesian2D(3, 4),
			viennagrid.wrapper.PointCartesian2D(4, 5),
			viennagrid.wrapper.PointCartesian2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.LinearCartesian2D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.LinearCartesian2D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.make_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.make_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestLinearCartesian3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointCartesian3D(1, 2, 7),
			viennagrid.wrapper.PointCartesian3D(2, 3, 7),
			viennagrid.wrapper.PointCartesian3D(3, 4, 7),
			viennagrid.wrapper.PointCartesian3D(4, 5, 7),
			viennagrid.wrapper.PointCartesian3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.LinearCartesian3D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.LinearCartesian3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.make_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.make_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestLinearCylindrical3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointCylindrical3D(1, 2, 7),
			viennagrid.wrapper.PointCylindrical3D(2, 3, 7),
			viennagrid.wrapper.PointCylindrical3D(3, 4, 7),
			viennagrid.wrapper.PointCylindrical3D(4, 5, 7),
			viennagrid.wrapper.PointCylindrical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.LinearCylindrical3D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.LinearCylindrical3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.make_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.make_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestLinearPolar2D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointPolar2D(1, 2),
			viennagrid.wrapper.PointPolar2D(2, 3),
			viennagrid.wrapper.PointPolar2D(3, 4),
			viennagrid.wrapper.PointPolar2D(4, 5),
			viennagrid.wrapper.PointPolar2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.LinearPolar2D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.LinearPolar2D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.make_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.make_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestLinearSpherical3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointSpherical3D(1, 2, 7),
			viennagrid.wrapper.PointSpherical3D(2, 3, 7),
			viennagrid.wrapper.PointSpherical3D(3, 4, 7),
			viennagrid.wrapper.PointSpherical3D(4, 5, 7),
			viennagrid.wrapper.PointSpherical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.LinearSpherical3D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.LinearSpherical3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.make_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.make_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

######################
# TRIANGULAR DOMAINS #
######################

class TestTriangularCartesian2D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointCartesian2D(1, 2),
			viennagrid.wrapper.PointCartesian2D(2, 3),
			viennagrid.wrapper.PointCartesian2D(3, 4),
			viennagrid.wrapper.PointCartesian2D(4, 5),
			viennagrid.wrapper.PointCartesian2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.TriangularCartesian2D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.TriangularCartesian2D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			v3 = self.domain.get_vertex(2)
			segment.make_cell(v1, v2, v3)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			v3 = self.domain.get_vertex(3)
			segment.make_cell(v1, v2, v3)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestTriangularCartesian3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointCartesian3D(1, 2, 7),
			viennagrid.wrapper.PointCartesian3D(2, 3, 7),
			viennagrid.wrapper.PointCartesian3D(3, 4, 7),
			viennagrid.wrapper.PointCartesian3D(4, 5, 7),
			viennagrid.wrapper.PointCartesian3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.TriangularCartesian3D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.TriangularCartesian3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			v3 = self.domain.get_vertex(2)
			segment.make_cell(v1, v2, v3)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			v3 = self.domain.get_vertex(3)
			segment.make_cell(v1, v2, v3)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestTriangularCylindrical3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointCylindrical3D(1, 2, 7),
			viennagrid.wrapper.PointCylindrical3D(2, 3, 7),
			viennagrid.wrapper.PointCylindrical3D(3, 4, 7),
			viennagrid.wrapper.PointCylindrical3D(4, 5, 7),
			viennagrid.wrapper.PointCylindrical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.TriangularCylindrical3D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.TriangularCylindrical3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			v3 = self.domain.get_vertex(2)
			segment.make_cell(v1, v2, v3)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			v3 = self.domain.get_vertex(3)
			segment.make_cell(v1, v2, v3)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestTriangularPolar2D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointPolar2D(1, 2),
			viennagrid.wrapper.PointPolar2D(2, 3),
			viennagrid.wrapper.PointPolar2D(3, 4),
			viennagrid.wrapper.PointPolar2D(4, 5),
			viennagrid.wrapper.PointPolar2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.TriangularPolar2D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.TriangularPolar2D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			v3 = self.domain.get_vertex(2)
			segment.make_cell(v1, v2, v3)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			v3 = self.domain.get_vertex(3)
			segment.make_cell(v1, v2, v3)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestTriangularSpherical3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointSpherical3D(1, 2, 7),
			viennagrid.wrapper.PointSpherical3D(2, 3, 7),
			viennagrid.wrapper.PointSpherical3D(3, 4, 7),
			viennagrid.wrapper.PointSpherical3D(4, 5, 7),
			viennagrid.wrapper.PointSpherical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.TriangularSpherical3D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.TriangularSpherical3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			v3 = self.domain.get_vertex(2)
			segment.make_cell(v1, v2, v3)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			v3 = self.domain.get_vertex(3)
			segment.make_cell(v1, v2, v3)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

#########################
# QUADRILATERAL DOMAINS #
#########################

class TestQuadrilateralCartesian2D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointCartesian2D(1, 2),
			viennagrid.wrapper.PointCartesian2D(2, 3),
			viennagrid.wrapper.PointCartesian2D(3, 4),
			viennagrid.wrapper.PointCartesian2D(4, 5),
			viennagrid.wrapper.PointCartesian2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.QuadrilateralCartesian2D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.QuadrilateralCartesian2D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			v3 = self.domain.get_vertex(2)
			v4 = self.domain.get_vertex(3)
			segment.make_cell(v1, v2, v3, v4)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			v3 = self.domain.get_vertex(3)
			v4 = self.domain.get_vertex(4)
			segment.make_cell(v1, v2, v3, v4)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestQuadrilateralCartesian3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointCartesian3D(1, 2, 7),
			viennagrid.wrapper.PointCartesian3D(2, 3, 7),
			viennagrid.wrapper.PointCartesian3D(3, 4, 7),
			viennagrid.wrapper.PointCartesian3D(4, 5, 7),
			viennagrid.wrapper.PointCartesian3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.QuadrilateralCartesian3D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.QuadrilateralCartesian3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			v3 = self.domain.get_vertex(2)
			v4 = self.domain.get_vertex(3)
			segment.make_cell(v1, v2, v3, v4)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			v3 = self.domain.get_vertex(3)
			v4 = self.domain.get_vertex(4)
			segment.make_cell(v1, v2, v3, v4)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestQuadrilateralCylindrical3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointCylindrical3D(1, 2, 7),
			viennagrid.wrapper.PointCylindrical3D(2, 3, 7),
			viennagrid.wrapper.PointCylindrical3D(3, 4, 7),
			viennagrid.wrapper.PointCylindrical3D(4, 5, 7),
			viennagrid.wrapper.PointCylindrical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.QuadrilateralCylindrical3D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.QuadrilateralCylindrical3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			v3 = self.domain.get_vertex(2)
			v4 = self.domain.get_vertex(3)
			segment.make_cell(v1, v2, v3, v4)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			v3 = self.domain.get_vertex(3)
			v4 = self.domain.get_vertex(4)
			segment.make_cell(v1, v2, v3, v4)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestQuadrilateralPolar2D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointPolar2D(1, 2),
			viennagrid.wrapper.PointPolar2D(2, 3),
			viennagrid.wrapper.PointPolar2D(3, 4),
			viennagrid.wrapper.PointPolar2D(4, 5),
			viennagrid.wrapper.PointPolar2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.QuadrilateralPolar2D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.QuadrilateralPolar2D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			v3 = self.domain.get_vertex(2)
			v4 = self.domain.get_vertex(3)
			segment.make_cell(v1, v2, v3, v4)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			v3 = self.domain.get_vertex(3)
			v4 = self.domain.get_vertex(4)
			segment.make_cell(v1, v2, v3, v4)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestQuadrilateralSpherical3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointSpherical3D(1, 2, 7),
			viennagrid.wrapper.PointSpherical3D(2, 3, 7),
			viennagrid.wrapper.PointSpherical3D(3, 4, 7),
			viennagrid.wrapper.PointSpherical3D(4, 5, 7),
			viennagrid.wrapper.PointSpherical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.QuadrilateralSpherical3D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.QuadrilateralSpherical3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			v3 = self.domain.get_vertex(2)
			v4 = self.domain.get_vertex(3)
			segment.make_cell(v1, v2, v3, v4)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			v3 = self.domain.get_vertex(3)
			v4 = self.domain.get_vertex(4)
			segment.make_cell(v1, v2, v3, v4)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

#######################
# TETRAHEDRAL DOMAINS #
#######################

class TestTetrahedralCartesian3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointCartesian3D(1, 2, 7),
			viennagrid.wrapper.PointCartesian3D(2, 3, 7),
			viennagrid.wrapper.PointCartesian3D(3, 4, 7),
			viennagrid.wrapper.PointCartesian3D(4, 5, 7),
			viennagrid.wrapper.PointCartesian3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.TetrahedralCartesian3D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.TetrahedralCartesian3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			v3 = self.domain.get_vertex(2)
			v4 = self.domain.get_vertex(3)
			segment.make_cell(v1, v2, v3, v4)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			v3 = self.domain.get_vertex(3)
			v4 = self.domain.get_vertex(4)
			segment.make_cell(v1, v2, v3, v4)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestTetrahedralCylindrical3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointCylindrical3D(1, 2, 7),
			viennagrid.wrapper.PointCylindrical3D(2, 3, 7),
			viennagrid.wrapper.PointCylindrical3D(3, 4, 7),
			viennagrid.wrapper.PointCylindrical3D(4, 5, 7),
			viennagrid.wrapper.PointCylindrical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.TetrahedralCylindrical3D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.TetrahedralCylindrical3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			v3 = self.domain.get_vertex(2)
			v4 = self.domain.get_vertex(3)
			segment.make_cell(v1, v2, v3, v4)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			v3 = self.domain.get_vertex(3)
			v4 = self.domain.get_vertex(4)
			segment.make_cell(v1, v2, v3, v4)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestTetrahedralSpherical3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid.wrapper.PointSpherical3D(1, 2, 7),
			viennagrid.wrapper.PointSpherical3D(2, 3, 7),
			viennagrid.wrapper.PointSpherical3D(3, 4, 7),
			viennagrid.wrapper.PointSpherical3D(4, 5, 7),
			viennagrid.wrapper.PointSpherical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid.wrapper.TetrahedralSpherical3D_Domain()
		for point in self.vertices:
			self.domain.make_vertex(point)
		self.segmentation = viennagrid.wrapper.TetrahedralSpherical3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_make_segment(self):
		"""Test method 'make_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			v3 = self.domain.get_vertex(2)
			v4 = self.domain.get_vertex(3)
			segment.make_cell(v1, v2, v3, v4)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			v3 = self.domain.get_vertex(3)
			v4 = self.domain.get_vertex(4)
			segment.make_cell(v1, v2, v3, v4)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

if __name__ == '__main__':
	unittest.main()
