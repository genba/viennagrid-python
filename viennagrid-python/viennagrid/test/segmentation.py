#-*- coding: utf-8 -*-

import unittest

import viennagrid

########################
# LINEAR SEGMENTATIONS #
########################

class TestSegmentation_LinearCartesian1D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

class TestSegmentation_LinearCartesian2D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

class TestSegmentation_LinearCartesian3D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

class TestSegmentation_LinearCylindrical3D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

class TestSegmentation_LinearPolar2D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

class TestSegmentation_LinearSpherical3D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

############################
# TRIANGULAR SEGMENTATIONS #
############################

class TestSegmentation_TriangularCartesian2D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

class TestSegmentation_TriangularCartesian3D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

class TestSegmentation_TriangularCylindrical3D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

class TestSegmentation_TriangularPolar2D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

class TestSegmentation_TriangularSpherical3D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

###############################
# QUADRILATERAL SEGMENTATIONS #
###############################

class TestSegmentation_QuadrilateralCartesian2D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

class TestSegmentation_QuadrilateralCartesian3D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

class TestSegmentation_QuadrilateralCylindrical3D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

class TestSegmentation_QuadrilateralPolar2D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

class TestSegmentation_QuadrilateralSpherical3D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

#############################
# TETRAHEDRAL SEGMENTATIONS #
#############################

class TestSegmentation_TetrahedralCartesian3D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

class TestSegmentation_TetrahedralCylindrical3D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

class TestSegmentation_TetrahedralSpherical3D(unittest.TestCase):
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
		
		# Define numeric constants to be used when creating segments
		self.num_segments = 10
	
	def test_init(self):
		self.assertEqual(self.segmentation.domain, self.domain)
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
	
	def test_iter(self):
		"""Test magic method 'Segmentation.__iter__'."""
		for segment in self.segmentation:
			self.assertTrue(isinstance(segment, viennagrid.Segment))
	
	def test_segments(self):
		"""Test attribute 'Segmentation.segments' and method 'Segmentation.make_segment'."""
		self.assertEqual(len(self.segmentation.segments), 0)
		self.assertEqual(self.segmentation.segments(), [])
		for i in range(0, self.num_segments):
			self.segmentation.make_segment()
			self.assertEqual(len(self.segmentation.segments), i+1)
		self.assertEqual(len(self.segmentation.segments), self.num_segments)
		
		# Test __iter__
		for seg in self.segmentation.segments:
			self.assertTrue(isinstance(seg, viennagrid.Segment))
		
		# Test __getitem__
		for i in range(0, self.num_segments):
			self.segmentation.segments[i]

if __name__ == '__main__':
	unittest.main()
