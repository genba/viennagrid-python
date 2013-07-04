#!/usr/bin/env python
#-*- coding: utf-8 -*-

import sys
sys.path += '..'

import unittest

import viennagrid_wrapper

from utils import *

######################
# TRIANGULAR DOMAINS #
######################

class TestTriangularCartesian2D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attribute 'num_vertices', and methods 'add_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'add_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that the coordinates of all vertices are correct and that the vertex ID
		# corresponds to the order in which they were added to the domain.
		# This involves 'get_vertex'.
		for i in range(0, self.num_vertices):
			point = self.vertices[i]
			vertex = self.domain.get_vertex(i)
			self.assertEqual(point.dim, vertex.dim)
			for j in range(0, point.dim):
				self.assertTrue(*equal(vertex.coords[j], point.coords[j]))

class TestTriangularCartesian3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attribute 'num_vertices', and methods 'add_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'add_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that the coordinates of all vertices are correct and that the vertex ID
		# corresponds to the order in which they were added to the domain.
		# This involves 'get_vertex'.
		for i in range(0, self.num_vertices):
			point = self.vertices[i]
			vertex = self.domain.get_vertex(i)
			self.assertEqual(point.dim, vertex.dim)
			for j in range(0, point.dim):
				self.assertTrue(*equal(vertex.coords[j], point.coords[j]))

class TestTriangularCylindrical3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attribute 'num_vertices', and methods 'add_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'add_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that the coordinates of all vertices are correct and that the vertex ID
		# corresponds to the order in which they were added to the domain.
		# This involves 'get_vertex'.
		for i in range(0, self.num_vertices):
			point = self.vertices[i]
			vertex = self.domain.get_vertex(i)
			self.assertEqual(point.dim, vertex.dim)
			for j in range(0, point.dim):
				self.assertTrue(*equal(vertex.coords[j], point.coords[j]))

class TestTriangularPolar2D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attribute 'num_vertices', and methods 'add_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'add_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that the coordinates of all vertices are correct and that the vertex ID
		# corresponds to the order in which they were added to the domain.
		# This involves 'get_vertex'.
		for i in range(0, self.num_vertices):
			point = self.vertices[i]
			vertex = self.domain.get_vertex(i)
			self.assertEqual(point.dim, vertex.dim)
			for j in range(0, point.dim):
				self.assertTrue(*equal(vertex.coords[j], point.coords[j]))

class TestTriangularSpherical3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attribute 'num_vertices', and methods 'add_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'add_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that the coordinates of all vertices are correct and that the vertex ID
		# corresponds to the order in which they were added to the domain.
		# This involves 'get_vertex'.
		for i in range(0, self.num_vertices):
			point = self.vertices[i]
			vertex = self.domain.get_vertex(i)
			self.assertEqual(point.dim, vertex.dim)
			for j in range(0, point.dim):
				self.assertTrue(*equal(vertex.coords[j], point.coords[j]))

#########################
# QUADRILATERAL DOMAINS #
#########################

class TestQuadrilateralCartesian2D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attribute 'num_vertices', and methods 'add_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'add_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that the coordinates of all vertices are correct and that the vertex ID
		# corresponds to the order in which they were added to the domain.
		# This involves 'get_vertex'.
		for i in range(0, self.num_vertices):
			point = self.vertices[i]
			vertex = self.domain.get_vertex(i)
			self.assertEqual(point.dim, vertex.dim)
			for j in range(0, point.dim):
				self.assertTrue(*equal(vertex.coords[j], point.coords[j]))

class TestQuadrilateralCartesian3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attribute 'num_vertices', and methods 'add_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'add_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that the coordinates of all vertices are correct and that the vertex ID
		# corresponds to the order in which they were added to the domain.
		# This involves 'get_vertex'.
		for i in range(0, self.num_vertices):
			point = self.vertices[i]
			vertex = self.domain.get_vertex(i)
			self.assertEqual(point.dim, vertex.dim)
			for j in range(0, point.dim):
				self.assertTrue(*equal(vertex.coords[j], point.coords[j]))

class TestQuadrilateralCylindrical3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attribute 'num_vertices', and methods 'add_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'add_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that the coordinates of all vertices are correct and that the vertex ID
		# corresponds to the order in which they were added to the domain.
		# This involves 'get_vertex'.
		for i in range(0, self.num_vertices):
			point = self.vertices[i]
			vertex = self.domain.get_vertex(i)
			self.assertEqual(point.dim, vertex.dim)
			for j in range(0, point.dim):
				self.assertTrue(*equal(vertex.coords[j], point.coords[j]))

class TestQuadrilateralPolar2D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attribute 'num_vertices', and methods 'add_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'add_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that the coordinates of all vertices are correct and that the vertex ID
		# corresponds to the order in which they were added to the domain.
		# This involves 'get_vertex'.
		for i in range(0, self.num_vertices):
			point = self.vertices[i]
			vertex = self.domain.get_vertex(i)
			self.assertEqual(point.dim, vertex.dim)
			for j in range(0, point.dim):
				self.assertTrue(*equal(vertex.coords[j], point.coords[j]))

class TestQuadrilateralSpherical3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attribute 'num_vertices', and methods 'add_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'add_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that the coordinates of all vertices are correct and that the vertex ID
		# corresponds to the order in which they were added to the domain.
		# This involves 'get_vertex'.
		for i in range(0, self.num_vertices):
			point = self.vertices[i]
			vertex = self.domain.get_vertex(i)
			self.assertEqual(point.dim, vertex.dim)
			for j in range(0, point.dim):
				self.assertTrue(*equal(vertex.coords[j], point.coords[j]))

#######################
# TETRAHEDRAL DOMAINS #
#######################

class TestTetrahedralCartesian3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attribute 'num_vertices', and methods 'add_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'add_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that the coordinates of all vertices are correct and that the vertex ID
		# corresponds to the order in which they were added to the domain.
		# This involves 'get_vertex'.
		for i in range(0, self.num_vertices):
			point = self.vertices[i]
			vertex = self.domain.get_vertex(i)
			self.assertEqual(point.dim, vertex.dim)
			for j in range(0, point.dim):
				self.assertTrue(*equal(vertex.coords[j], point.coords[j]))

class TestTetrahedralCylindrical3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attribute 'num_vertices', and methods 'add_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'add_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that the coordinates of all vertices are correct and that the vertex ID
		# corresponds to the order in which they were added to the domain.
		# This involves 'get_vertex'.
		for i in range(0, self.num_vertices):
			point = self.vertices[i]
			vertex = self.domain.get_vertex(i)
			self.assertEqual(point.dim, vertex.dim)
			for j in range(0, point.dim):
				self.assertTrue(*equal(vertex.coords[j], point.coords[j]))

class TestTetrahedralSpherical3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attribute 'num_vertices', and methods 'add_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'add_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that the coordinates of all vertices are correct and that the vertex ID
		# corresponds to the order in which they were added to the domain.
		# This involves 'get_vertex'.
		for i in range(0, self.num_vertices):
			point = self.vertices[i]
			vertex = self.domain.get_vertex(i)
			self.assertEqual(point.dim, vertex.dim)
			for j in range(0, point.dim):
				self.assertTrue(*equal(vertex.coords[j], point.coords[j]))

if __name__ == '__main__':
	unittest.main()
