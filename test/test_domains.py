#!/usr/bin/env python
#-*- coding: utf-8 -*-

import sys
if len(sys.argv) > 1:
	sys.path.insert(0, sys.argv.pop(1))

import unittest

import viennagrid.wrapper

from utils import *

##################
# LINEAR DOMAINS #
##################

class TestLinearCartesian1D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		self.domain.make_cell(v1, v2)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		self.domain.make_cell(v1, v2)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

class TestLinearCartesian2D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		self.domain.make_cell(v1, v2)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		self.domain.make_cell(v1, v2)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

class TestLinearCartesian3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		self.domain.make_cell(v1, v2)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		self.domain.make_cell(v1, v2)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

class TestLinearCylindrical3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		self.domain.make_cell(v1, v2)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		self.domain.make_cell(v1, v2)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

class TestLinearPolar2D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		self.domain.make_cell(v1, v2)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		self.domain.make_cell(v1, v2)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

class TestLinearSpherical3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		self.domain.make_cell(v1, v2)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		self.domain.make_cell(v1, v2)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

######################
# TRIANGULAR DOMAINS #
######################

class TestTriangularCartesian2D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		v3 = self.domain.get_vertex(2)
		self.domain.make_cell(v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		v3 = self.domain.get_vertex(3)
		self.domain.make_cell(v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

class TestTriangularCartesian3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		v3 = self.domain.get_vertex(2)
		self.domain.make_cell(v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		v3 = self.domain.get_vertex(3)
		self.domain.make_cell(v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

class TestTriangularCylindrical3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		v3 = self.domain.get_vertex(2)
		self.domain.make_cell(v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		v3 = self.domain.get_vertex(3)
		self.domain.make_cell(v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

class TestTriangularPolar2D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		v3 = self.domain.get_vertex(2)
		self.domain.make_cell(v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		v3 = self.domain.get_vertex(3)
		self.domain.make_cell(v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

class TestTriangularSpherical3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		v3 = self.domain.get_vertex(2)
		self.domain.make_cell(v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		v3 = self.domain.get_vertex(3)
		self.domain.make_cell(v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

#########################
# QUADRILATERAL DOMAINS #
#########################

class TestQuadrilateralCartesian2D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		v3 = self.domain.get_vertex(2)
		v4 = self.domain.get_vertex(3)
		self.domain.make_cell(v1, v2, v3, v4)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		v3 = self.domain.get_vertex(3)
		v4 = self.domain.get_vertex(4)
		self.domain.make_cell(v1, v2, v3, v4)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

class TestQuadrilateralCartesian3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		v3 = self.domain.get_vertex(2)
		v4 = self.domain.get_vertex(3)
		self.domain.make_cell(v1, v2, v3, v4)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		v3 = self.domain.get_vertex(3)
		v4 = self.domain.get_vertex(4)
		self.domain.make_cell(v1, v2, v3, v4)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

class TestQuadrilateralCylindrical3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		v3 = self.domain.get_vertex(2)
		v4 = self.domain.get_vertex(3)
		self.domain.make_cell(v1, v2, v3, v4)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		v3 = self.domain.get_vertex(3)
		v4 = self.domain.get_vertex(4)
		self.domain.make_cell(v1, v2, v3, v4)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

class TestQuadrilateralPolar2D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		v3 = self.domain.get_vertex(2)
		v4 = self.domain.get_vertex(3)
		self.domain.make_cell(v1, v2, v3, v4)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		v3 = self.domain.get_vertex(3)
		v4 = self.domain.get_vertex(4)
		self.domain.make_cell(v1, v2, v3, v4)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

class TestQuadrilateralSpherical3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		v3 = self.domain.get_vertex(2)
		v4 = self.domain.get_vertex(3)
		self.domain.make_cell(v1, v2, v3, v4)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		v3 = self.domain.get_vertex(3)
		v4 = self.domain.get_vertex(4)
		self.domain.make_cell(v1, v2, v3, v4)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

#######################
# TETRAHEDRAL DOMAINS #
#######################

class TestTetrahedralCartesian3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		v3 = self.domain.get_vertex(2)
		v4 = self.domain.get_vertex(3)
		self.domain.make_cell(v1, v2, v3, v4)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		v3 = self.domain.get_vertex(3)
		v4 = self.domain.get_vertex(4)
		self.domain.make_cell(v1, v2, v3, v4)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

class TestTetrahedralCylindrical3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		v3 = self.domain.get_vertex(2)
		v4 = self.domain.get_vertex(3)
		self.domain.make_cell(v1, v2, v3, v4)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		v3 = self.domain.get_vertex(3)
		v4 = self.domain.get_vertex(4)
		self.domain.make_cell(v1, v2, v3, v4)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

class TestTetrahedralSpherical3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'make_vertex' and 'get_vertex'."""
		
		# After domain creation, there must be no vertices,
		# since no vertices have been added to the domain.
		self.assertEqual(self.domain.num_vertices, 0)
		
		# Add vertices to the domain. After adding each vertex, check that 'num_vertices'
		# returns the exact amount of vertices in the domain.
		# This involves 'make_vertex'.
		for i, point in enumerate(self.vertices):
			self.domain.make_vertex(point)
			self.assertEqual(self.domain.num_vertices, i+1)
		# Check that the total amount of vertices added matches 'num_vertices' at the end.
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	def test_make_cell(self):
		"""Test method 'make_cell' and attribute 'cells' of class 'Domain'."""
		
		for point in self.vertices:
			self.domain.make_vertex(point)
		
		self.assertEqual(len(self.domain.cells), 0)
		self.assertEqual(self.domain.num_cells, 0)
		
		v1 = self.domain.get_vertex(0)
		v2 = self.domain.get_vertex(1)
		v3 = self.domain.get_vertex(2)
		v4 = self.domain.get_vertex(3)
		self.domain.make_cell(v1, v2, v3, v4)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(self.domain.num_cells, 1)
		
		v1 = self.domain.get_vertex(1)
		v2 = self.domain.get_vertex(2)
		v3 = self.domain.get_vertex(3)
		v4 = self.domain.get_vertex(4)
		self.domain.make_cell(v1, v2, v3, v4)
		self.assertEqual(len(self.domain.cells), 2)
		self.assertEqual(self.domain.num_cells, 2)

if __name__ == '__main__':
	unittest.main()
