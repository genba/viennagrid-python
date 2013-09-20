#-*- coding: utf-8 -*-

import unittest

import viennagrid

###################
# LINEAR SEGMENTS #
###################

class TestSegment_LinearCartesian1D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CARTESIAN, 1)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1),
			viennagrid.Point(2),
			viennagrid.Point(3),
			viennagrid.Point(4),
			viennagrid.Point(5),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segment.cells' and method 'Segment.make_cell'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

class TestSegment_LinearCartesian2D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CARTESIAN, 2)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2),
			viennagrid.Point(2, 2),
			viennagrid.Point(3, 2),
			viennagrid.Point(4, 2),
			viennagrid.Point(5, 2),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

class TestSegment_LinearCartesian3D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CARTESIAN, 3)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2, 3),
			viennagrid.Point(2, 2, 3),
			viennagrid.Point(3, 2, 3),
			viennagrid.Point(4, 2, 3),
			viennagrid.Point(5, 2, 3),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

class TestSegment_LinearCylindrical3D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CYLINDRICAL)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(2, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(3, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(4, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(5, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

class TestSegment_LinearPolar2D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.POLAR)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(2, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(3, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(4, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(5, 2, coord_system=viennagrid.config.POLAR),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

class TestSegment_LinearSpherical3D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.SPHERICAL)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(2, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(3, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(4, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(5, 2, 3, coord_system=viennagrid.config.SPHERICAL),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

#######################
# TRIANGULAR SEGMENTS #
#######################

class TestSegment_TriangularCartesian2D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CARTESIAN, 2)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2),
			viennagrid.Point(2, 2),
			viennagrid.Point(3, 2),
			viennagrid.Point(4, 2),
			viennagrid.Point(5, 2),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

class TestSegment_TriangularCartesian3D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CARTESIAN, 3)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2, 3),
			viennagrid.Point(2, 2, 3),
			viennagrid.Point(3, 2, 3),
			viennagrid.Point(4, 2, 3),
			viennagrid.Point(5, 2, 3),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

class TestSegment_TriangularCylindrical3D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CYLINDRICAL)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(2, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(3, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(4, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(5, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

class TestSegment_TriangularPolar2D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.POLAR)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(2, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(3, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(4, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(5, 2, coord_system=viennagrid.config.POLAR),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

class TestSegment_TriangularSpherical3D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.SPHERICAL)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(2, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(3, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(4, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(5, 2, 3, coord_system=viennagrid.config.SPHERICAL),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

##########################
# QUADRILATERAL SEGMENTS #
##########################

class TestSegment_QuadrilateralCartesian2D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CARTESIAN, 2)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2),
			viennagrid.Point(2, 2),
			viennagrid.Point(3, 2),
			viennagrid.Point(4, 2),
			viennagrid.Point(5, 2),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2], self.domain.vertices[3],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

class TestSegment_QuadrilateralCartesian3D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CARTESIAN, 3)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2, 3),
			viennagrid.Point(2, 2, 3),
			viennagrid.Point(3, 2, 3),
			viennagrid.Point(4, 2, 3),
			viennagrid.Point(5, 2, 3),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2], self.domain.vertices[3],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

class TestSegment_QuadrilateralCylindrical3D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CYLINDRICAL)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(2, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(3, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(4, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(5, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2], self.domain.vertices[3],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

class TestSegment_QuadrilateralPolar2D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.POLAR)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(2, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(3, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(4, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(5, 2, coord_system=viennagrid.config.POLAR),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2], self.domain.vertices[3],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

class TestSegment_QuadrilateralSpherical3D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.SPHERICAL)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(2, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(3, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(4, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(5, 2, 3, coord_system=viennagrid.config.SPHERICAL),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2], self.domain.vertices[3],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

########################
# TETRAHEDRAL SEGMENTS #
########################

class TestSegment_TetrahedralCartesian3D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.CARTESIAN, 3)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2, 3),
			viennagrid.Point(2, 2, 3),
			viennagrid.Point(3, 2, 3),
			viennagrid.Point(4, 2, 3),
			viennagrid.Point(5, 2, 3),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2], self.domain.vertices[3],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

class TestSegment_TetrahedralCylindrical3D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.CYLINDRICAL)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(2, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(3, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(4, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(5, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2], self.domain.vertices[3],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

class TestSegment_TetrahedralSpherical3D(unittest.TestCase):
	def setUp(self):
		# Define domain configuration and create a new domain
		self.config = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.SPHERICAL)
		self.domain = viennagrid.Domain(self.config)
		
		# Add vertices to the domain
		self.vertices = [
			viennagrid.Point(1, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(2, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(3, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(4, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(5, 2, 3, coord_system=viennagrid.config.SPHERICAL),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		# Create a new segmentation of the previously created domain
		self.segmentation = viennagrid.Segmentation(self.domain)
		
		# Create a new segment in the segmentation
		self.segment = self.segmentation.make_segment()
		
		# Variables for cell creation
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2], self.domain.vertices[3],),
		]
		self.num_cells = len(self.cell_vertices)
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
	
	def test_iter(self):
		for cell in self.segment:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
	
	def test_cells(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segment.cells), 0)
		self.assertEqual(self.segment.cells(), [])
		for i, vertices in enumerate(self.cell_vertices):
			self.segment.make_cell(*vertices)
			self.assertEqual(len(self.segment.cells), i+1)
		self.assertEqual(len(self.segment.cells), self.num_cells)
		
		# Test __iter__
		for cell in self.segment.cells:
			self.assertTrue(isinstance(cell, viennagrid.Cell))
		
		# Test __getitem__
		for i in range(0, self.num_cells):
			self.segment.cells[i]

if __name__ == '__main__':
	unittest.main()
