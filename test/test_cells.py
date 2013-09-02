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

class TestLinearCartesian1D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.LinearCartesian1D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

class TestLinearCartesian2D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.LinearCartesian2D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

class TestLinearCartesian3D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.LinearCartesian3D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

class TestLinearCylindrical3D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.LinearCylindrical3D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

class TestLinearPolar2D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.LinearPolar2D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

class TestLinearSpherical3D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.LinearSpherical3D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

######################
# TRIANGULAR DOMAINS #
######################

class TestTriangularCartesian2D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.TriangularCartesian2D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
			self.domain.get_vertex(2),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

class TestTriangularCartesian3D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.TriangularCartesian3D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
			self.domain.get_vertex(2),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

class TestTriangularCylindrical3D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.TriangularCylindrical3D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
			self.domain.get_vertex(2),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

class TestTriangularPolar2D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.TriangularPolar2D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
			self.domain.get_vertex(2),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

class TestTriangularSpherical3D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.TriangularSpherical3D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
			self.domain.get_vertex(2),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

#########################
# QUADRILATERAL DOMAINS #
#########################

class TestQuadrilateralCartesian2D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.QuadrilateralCartesian2D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
			self.domain.get_vertex(2),
			self.domain.get_vertex(3),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

class TestQuadrilateralCartesian3D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.QuadrilateralCartesian3D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
			self.domain.get_vertex(2),
			self.domain.get_vertex(3),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

class TestQuadrilateralCylindrical3D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.QuadrilateralCylindrical3D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
			self.domain.get_vertex(2),
			self.domain.get_vertex(3),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

class TestQuadrilateralPolar2D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.QuadrilateralPolar2D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
			self.domain.get_vertex(2),
			self.domain.get_vertex(3),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

class TestQuadrilateralSpherical3D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.QuadrilateralSpherical3D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
			self.domain.get_vertex(2),
			self.domain.get_vertex(3),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

#######################
# TETRAHEDRAL DOMAINS #
#######################

class TestTetrahedralCartesian3D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.TetrahedralCartesian3D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
			self.domain.get_vertex(2),
			self.domain.get_vertex(3),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

class TestTetrahedralCylindrical3D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.TetrahedralCylindrical3D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
			self.domain.get_vertex(2),
			self.domain.get_vertex(3),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

class TestTetrahedralSpherical3D_Cell(unittest.TestCase):
	def setUp(self):
		# Create domain and add vertices
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
		
		# Create a segmentation on the domain
		self.segmentation = viennagrid.wrapper.TetrahedralSpherical3D_Segmentation(self.domain)
		
		# Create a new segment within the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Create a cell in the segment
		cell_vertices = [
			self.domain.get_vertex(0),
			self.domain.get_vertex(1),
			self.domain.get_vertex(2),
			self.domain.get_vertex(3),
		]
		self.num_vertices_per_cell = len(cell_vertices)
		self.cell = self.segment.make_cell(*cell_vertices)
	
	def test_vertices(self):
		"""Test attribute 'vertices' of cell."""
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		self.assertEqual(self.cell.num_vertices, self.num_vertices_per_cell)

if __name__ == '__main__':
	unittest.main()
