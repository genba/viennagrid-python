#-*- coding: utf-8 -*-

import unittest

import viennagrid

################
# LINEAR CELLS #
################

class TestCell_LinearCartesian1D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

class TestCell_LinearCartesian2D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

class TestCell_LinearCartesian3D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

class TestCell_LinearCylindrical3D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

class TestCell_LinearPolar2D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

class TestCell_LinearSpherical3D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

####################
# TRIANGULAR CELLS #
####################

class TestCell_TriangularCartesian2D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

class TestCell_TriangularCartesian3D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

class TestCell_TriangularCylindrical3D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

class TestCell_TriangularPolar2D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

class TestCell_TriangularSpherical3D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

#######################
# QUADRILATERAL CELLS #
#######################

class TestCell_QuadrilateralCartesian2D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2], self.domain.vertices[3],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

class TestCell_QuadrilateralCartesian3D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2], self.domain.vertices[3],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

class TestCell_QuadrilateralCylindrical3D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2], self.domain.vertices[3],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

class TestCell_QuadrilateralPolar2D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2], self.domain.vertices[3],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

class TestCell_QuadrilateralSpherical3D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2], self.domain.vertices[3],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

#####################
# TETRAHEDRAL CELLS #
#####################

class TestCell_TetrahedralCartesian3D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2], self.domain.vertices[3],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

class TestCell_TetrahedralCylindrical3D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2], self.domain.vertices[3],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

class TestCell_TetrahedralSpherical3D(unittest.TestCase):
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
		
		# Create cells in the segment
		self.cell_vertices = [
			(self.domain.vertices[0], self.domain.vertices[1], self.domain.vertices[2], self.domain.vertices[3],),
		]
		self.num_cells = len(self.cell_vertices)
		for vertices in self.cell_vertices:
			self.cell = self.segment.make_cell(*vertices)
		self.num_vertices_per_cell = len(self.cell_vertices[0])
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
	
	def test_iter(self):
		for vertex in self.cell:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
	
	def test_vertices(self):
		self.assertEqual(len(self.cell.vertices), self.num_vertices_per_cell)
		
		# Test __iter__
		for vertex in self.cell.vertices:
			self.assertTrue(isinstance(vertex, viennagrid.Vertex))
		
		# Test __getitem__
		for i in range(0, self.num_vertices_per_cell):
			self.cell.vertices[i]

if __name__ == '__main__':
	unittest.main()
