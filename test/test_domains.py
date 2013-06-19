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
		self.vertices = [
			viennagrid_wrapper._PointCartesian2D(1, 2),
			viennagrid_wrapper._PointCartesian2D(2, 3),
			viennagrid_wrapper._PointCartesian2D(3, 4),
			viennagrid_wrapper._PointCartesian2D(4, 5),
			viennagrid_wrapper._PointCartesian2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
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
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		for i in range(0, self.num_vertices):
			self.assertEqual(self.domain.get_vertex(i), self.vertices[i])
	
	def test_iter_segments(self):
		"""Test method for 'iter_segments'."""
		self.domain.create_segments(self.num_segments)
		segments = [s for s in self.domain.iter_segments]
		self.assertEqual(len(segments), self.num_segments)

	def test_iter_vertices(self):
		"""Test method for 'iter_vertices'."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		vertices = [v for v in self.domain.iter_vertices]
		self.assertEqual(len(vertices), self.num_vertices)

	def test_list_segments(self):
		"""Test method for attiribute 'segments', which returns a Python list."""
		self.domain.create_segments(self.num_segments)
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_list_vertices(self):
		"""Test method for attiribute 'vertices', which returns a Python list."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.domain.vertices[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

class TestTriangularCartesian3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper._PointCartesian3D(1, 2, 7),
			viennagrid_wrapper._PointCartesian3D(2, 3, 7),
			viennagrid_wrapper._PointCartesian3D(3, 4, 7),
			viennagrid_wrapper._PointCartesian3D(4, 5, 7),
			viennagrid_wrapper._PointCartesian3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
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
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		for i in range(0, self.num_vertices):
			self.assertEqual(self.domain.get_vertex(i), self.vertices[i])

	def test_iter_segments(self):
		"""Test method for 'iter_segments'."""
		self.domain.create_segments(self.num_segments)
		segments = [s for s in self.domain.iter_segments]
		self.assertEqual(len(segments), self.num_segments)

	def test_iter_vertices(self):
		"""Test method for 'iter_vertices'."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		vertices = [v for v in self.domain.iter_vertices]
		self.assertEqual(len(vertices), self.num_vertices)

	def test_list_segments(self):
		"""Test method for attiribute 'segments', which returns a Python list."""
		self.domain.create_segments(self.num_segments)
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_list_vertices(self):
		"""Test method for attiribute 'vertices', which returns a Python list."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.domain.vertices[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

class TestTriangularCylindrical3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper._PointCylindrical3D(1, 2, 7),
			viennagrid_wrapper._PointCylindrical3D(2, 3, 7),
			viennagrid_wrapper._PointCylindrical3D(3, 4, 7),
			viennagrid_wrapper._PointCylindrical3D(4, 5, 7),
			viennagrid_wrapper._PointCylindrical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
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
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		for i in range(0, self.num_vertices):
			self.assertEqual(self.domain.get_vertex(i), self.vertices[i])

	def test_iter_segments(self):
		"""Test method for 'iter_segments'."""
		self.domain.create_segments(self.num_segments)
		segments = [s for s in self.domain.iter_segments]
		self.assertEqual(len(segments), self.num_segments)

	def test_iter_vertices(self):
		"""Test method for 'iter_vertices'."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		vertices = [v for v in self.domain.iter_vertices]
		self.assertEqual(len(vertices), self.num_vertices)

	def test_list_segments(self):
		"""Test method for attiribute 'segments', which returns a Python list."""
		self.domain.create_segments(self.num_segments)
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_list_vertices(self):
		"""Test method for attiribute 'vertices', which returns a Python list."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.domain.vertices[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

class TestTriangularPolar2D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper._PointPolar2D(1, 2),
			viennagrid_wrapper._PointPolar2D(2, 3),
			viennagrid_wrapper._PointPolar2D(3, 4),
			viennagrid_wrapper._PointPolar2D(4, 5),
			viennagrid_wrapper._PointPolar2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
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
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		for i in range(0, self.num_vertices):
			self.assertEqual(self.domain.get_vertex(i), self.vertices[i])

	def test_iter_segments(self):
		"""Test method for 'iter_segments'."""
		self.domain.create_segments(self.num_segments)
		segments = [s for s in self.domain.iter_segments]
		self.assertEqual(len(segments), self.num_segments)

	def test_iter_vertices(self):
		"""Test method for 'iter_vertices'."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		vertices = [v for v in self.domain.iter_vertices]
		self.assertEqual(len(vertices), self.num_vertices)

	def test_list_segments(self):
		"""Test method for attiribute 'segments', which returns a Python list."""
		self.domain.create_segments(self.num_segments)
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_list_vertices(self):
		"""Test method for attiribute 'vertices', which returns a Python list."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.domain.vertices[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

class TestTriangularSpherical3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper._PointSpherical3D(1, 2, 7),
			viennagrid_wrapper._PointSpherical3D(2, 3, 7),
			viennagrid_wrapper._PointSpherical3D(3, 4, 7),
			viennagrid_wrapper._PointSpherical3D(4, 5, 7),
			viennagrid_wrapper._PointSpherical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
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
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		for i in range(0, self.num_vertices):
			self.assertEqual(self.domain.get_vertex(i), self.vertices[i])

	def test_iter_segments(self):
		"""Test method for 'iter_segments'."""
		self.domain.create_segments(self.num_segments)
		segments = [s for s in self.domain.iter_segments]
		self.assertEqual(len(segments), self.num_segments)

	def test_iter_vertices(self):
		"""Test method for 'iter_vertices'."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		vertices = [v for v in self.domain.iter_vertices]
		self.assertEqual(len(vertices), self.num_vertices)

	def test_list_segments(self):
		"""Test method for attiribute 'segments', which returns a Python list."""
		self.domain.create_segments(self.num_segments)
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_list_vertices(self):
		"""Test method for attiribute 'vertices', which returns a Python list."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.domain.vertices[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

if __name__ == '__main__':
	unittest.main()
