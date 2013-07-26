#!/usr/bin/env python
#-*- coding: utf-8 -*-

import sys
if len(sys.argv) > 1:
	sys.path.insert(0, sys.argv.pop(1))

import unittest

import viennagrid_wrapper

##################
# LINEAR DOMAINS #
##################

class TestLinearCartesian1D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointCartesian1D(1),
			viennagrid_wrapper.PointCartesian1D(2),
			viennagrid_wrapper.PointCartesian1D(3),
			viennagrid_wrapper.PointCartesian1D(4),
			viennagrid_wrapper.PointCartesian1D(5),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.LinearCartesian1D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.LinearCartesian1D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestLinearCartesian2D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointCartesian2D(1, 2),
			viennagrid_wrapper.PointCartesian2D(2, 3),
			viennagrid_wrapper.PointCartesian2D(3, 4),
			viennagrid_wrapper.PointCartesian2D(4, 5),
			viennagrid_wrapper.PointCartesian2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.LinearCartesian2D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.LinearCartesian2D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestLinearCartesian3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointCartesian3D(1, 2, 7),
			viennagrid_wrapper.PointCartesian3D(2, 3, 7),
			viennagrid_wrapper.PointCartesian3D(3, 4, 7),
			viennagrid_wrapper.PointCartesian3D(4, 5, 7),
			viennagrid_wrapper.PointCartesian3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.LinearCartesian3D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.LinearCartesian3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestLinearCylindrical3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointCylindrical3D(1, 2, 7),
			viennagrid_wrapper.PointCylindrical3D(2, 3, 7),
			viennagrid_wrapper.PointCylindrical3D(3, 4, 7),
			viennagrid_wrapper.PointCylindrical3D(4, 5, 7),
			viennagrid_wrapper.PointCylindrical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.LinearCylindrical3D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.LinearCylindrical3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestLinearPolar2D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointPolar2D(1, 2),
			viennagrid_wrapper.PointPolar2D(2, 3),
			viennagrid_wrapper.PointPolar2D(3, 4),
			viennagrid_wrapper.PointPolar2D(4, 5),
			viennagrid_wrapper.PointPolar2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.LinearPolar2D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.LinearPolar2D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestLinearSpherical3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointSpherical3D(1, 2, 7),
			viennagrid_wrapper.PointSpherical3D(2, 3, 7),
			viennagrid_wrapper.PointSpherical3D(3, 4, 7),
			viennagrid_wrapper.PointSpherical3D(4, 5, 7),
			viennagrid_wrapper.PointSpherical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.LinearSpherical3D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.LinearSpherical3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

######################
# TRIANGULAR DOMAINS #
######################

class TestTriangularCartesian2D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointCartesian2D(1, 2),
			viennagrid_wrapper.PointCartesian2D(2, 3),
			viennagrid_wrapper.PointCartesian2D(3, 4),
			viennagrid_wrapper.PointCartesian2D(4, 5),
			viennagrid_wrapper.PointCartesian2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.TriangularCartesian2D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.TriangularCartesian2D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestTriangularCartesian3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointCartesian3D(1, 2, 7),
			viennagrid_wrapper.PointCartesian3D(2, 3, 7),
			viennagrid_wrapper.PointCartesian3D(3, 4, 7),
			viennagrid_wrapper.PointCartesian3D(4, 5, 7),
			viennagrid_wrapper.PointCartesian3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.TriangularCartesian3D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.TriangularCartesian3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestTriangularCylindrical3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointCylindrical3D(1, 2, 7),
			viennagrid_wrapper.PointCylindrical3D(2, 3, 7),
			viennagrid_wrapper.PointCylindrical3D(3, 4, 7),
			viennagrid_wrapper.PointCylindrical3D(4, 5, 7),
			viennagrid_wrapper.PointCylindrical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.TriangularCylindrical3D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.TriangularCylindrical3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestTriangularPolar2D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointPolar2D(1, 2),
			viennagrid_wrapper.PointPolar2D(2, 3),
			viennagrid_wrapper.PointPolar2D(3, 4),
			viennagrid_wrapper.PointPolar2D(4, 5),
			viennagrid_wrapper.PointPolar2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.TriangularPolar2D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.TriangularPolar2D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestTriangularSpherical3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointSpherical3D(1, 2, 7),
			viennagrid_wrapper.PointSpherical3D(2, 3, 7),
			viennagrid_wrapper.PointSpherical3D(3, 4, 7),
			viennagrid_wrapper.PointSpherical3D(4, 5, 7),
			viennagrid_wrapper.PointSpherical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.TriangularSpherical3D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.TriangularSpherical3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

#########################
# QUADRILATERAL DOMAINS #
#########################

class TestQuadrilateralCartesian2D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointCartesian2D(1, 2),
			viennagrid_wrapper.PointCartesian2D(2, 3),
			viennagrid_wrapper.PointCartesian2D(3, 4),
			viennagrid_wrapper.PointCartesian2D(4, 5),
			viennagrid_wrapper.PointCartesian2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.QuadrilateralCartesian2D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.QuadrilateralCartesian2D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestQuadrilateralCartesian3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointCartesian3D(1, 2, 7),
			viennagrid_wrapper.PointCartesian3D(2, 3, 7),
			viennagrid_wrapper.PointCartesian3D(3, 4, 7),
			viennagrid_wrapper.PointCartesian3D(4, 5, 7),
			viennagrid_wrapper.PointCartesian3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.QuadrilateralCartesian3D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.QuadrilateralCartesian3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestQuadrilateralCylindrical3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointCylindrical3D(1, 2, 7),
			viennagrid_wrapper.PointCylindrical3D(2, 3, 7),
			viennagrid_wrapper.PointCylindrical3D(3, 4, 7),
			viennagrid_wrapper.PointCylindrical3D(4, 5, 7),
			viennagrid_wrapper.PointCylindrical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.QuadrilateralCylindrical3D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.QuadrilateralCylindrical3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestQuadrilateralPolar2D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointPolar2D(1, 2),
			viennagrid_wrapper.PointPolar2D(2, 3),
			viennagrid_wrapper.PointPolar2D(3, 4),
			viennagrid_wrapper.PointPolar2D(4, 5),
			viennagrid_wrapper.PointPolar2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.QuadrilateralPolar2D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.QuadrilateralPolar2D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestQuadrilateralSpherical3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointSpherical3D(1, 2, 7),
			viennagrid_wrapper.PointSpherical3D(2, 3, 7),
			viennagrid_wrapper.PointSpherical3D(3, 4, 7),
			viennagrid_wrapper.PointSpherical3D(4, 5, 7),
			viennagrid_wrapper.PointSpherical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.QuadrilateralSpherical3D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.QuadrilateralSpherical3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

#######################
# TETRAHEDRAL DOMAINS #
#######################

class TestTetrahedralCartesian3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointCartesian3D(1, 2, 7),
			viennagrid_wrapper.PointCartesian3D(2, 3, 7),
			viennagrid_wrapper.PointCartesian3D(3, 4, 7),
			viennagrid_wrapper.PointCartesian3D(4, 5, 7),
			viennagrid_wrapper.PointCartesian3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.TetrahedralCartesian3D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.TetrahedralCartesian3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestTetrahedralCylindrical3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointCylindrical3D(1, 2, 7),
			viennagrid_wrapper.PointCylindrical3D(2, 3, 7),
			viennagrid_wrapper.PointCylindrical3D(3, 4, 7),
			viennagrid_wrapper.PointCylindrical3D(4, 5, 7),
			viennagrid_wrapper.PointCylindrical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.TetrahedralCylindrical3D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.TetrahedralCylindrical3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

class TestTetrahedralSpherical3D_Segmentation(unittest.TestCase):
	def setUp(self):
		self.vertices = [
			viennagrid_wrapper.PointSpherical3D(1, 2, 7),
			viennagrid_wrapper.PointSpherical3D(2, 3, 7),
			viennagrid_wrapper.PointSpherical3D(3, 4, 7),
			viennagrid_wrapper.PointSpherical3D(4, 5, 7),
			viennagrid_wrapper.PointSpherical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.TetrahedralSpherical3D_Domain()
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.segmentation = viennagrid_wrapper.TetrahedralSpherical3D_Segmentation(self.domain)
		self.num_segments = 5
	
	def test_create_segment(self):
		"""Test method 'create_segment' and attribute 'segments' of class 'Segmentation'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.num_segments, 0)
		for i in range(0, self.num_segments):
			self.segmentation.create_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
			self.assertEqual(self.segmentation.num_segments, i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		self.assertEqual(self.segmentation.num_segments, self.num_segments)
	
	def test_create_cell(self):
		"""Test method 'create_cell' and attribute 'cells' of class 'Segment'."""
		for segment in self.segmentation.segments:
			self.assertEqual(len(segment.cells), 0)
			self.assertEqual(segment.num_cells, 0)
			
			v1 = self.domain.get_vertex(0)
			v2 = self.domain.get_vertex(1)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 1)
			self.assertEqual(segment.num_cells, 1)
			
			v1 = self.domain.get_vertex(1)
			v2 = self.domain.get_vertex(2)
			segment.create_cell(v1, v2)
			self.assertEqual(len(segment.cells), 2)
			self.assertEqual(segment.num_cells, 2)

if __name__ == '__main__':
	unittest.main()
