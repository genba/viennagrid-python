#!/usr/bin/env python
#-*- coding: utf-8 -*-

import sys
if len(sys.argv) > 1:
	sys.path.insert(0, sys.argv.pop(1))

import unittest

import viennagrid_wrapper

from utils import *

##################
# LINEAR DOMAINS #
##################

class TestLinearCartesian1D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

class TestLinearCartesian2D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

class TestLinearCartesian3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

class TestLinearCylindrical3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

class TestLinearPolar2D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

class TestLinearSpherical3D_Domain(unittest.TestCase):
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
	
	def test_vertices(self):
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

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
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

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
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

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
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

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
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

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
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

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
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

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
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

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
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

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
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

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
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

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
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

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
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

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
		"""Test attributes 'num_vertices' and 'vertices', and methods 'add_vertex' and 'get_vertex'."""
		
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
		
		# Check that 'get_vertex' doesn't fail.
		for i in range(0, self.num_vertices):
			vertex = self.domain.get_vertex(i)
		
		# Check that 'vertices' returns the correct amount of vertices.
		self.assertEqual(len(self.vertices), len(self.domain.vertices))
	
	@unittest.skip('test fails: mesh-file cannot be opened')
	def test_read_netgen(self):
		"""Test method 'read_netgen'."""
		
		file_path = 'meshfiles/sshape2d.mesh'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_netgen(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test fails: pvd-file cannot be opened and last assert is not true for the other files')
	def test_read_vtk(self):
		"""Test method 'read_vtk'."""
		
		#file_path = 'meshfiles/multi_segment_tri_0.vtu'
		#file_path = 'meshfiles/multi_segment_tri_1.vtu'
		file_path = 'meshfiles/multi_segment_tri_main.pvd'
		
		# There must be no verrtices in the domain, since the file has not been read yet
		# and no vertices have been added.
		self.assertEqual(self.domain.num_vertices, 0)
		# Call reader
		self.domain.read_vtk(file_path)
		# Now the number of vertices must be greater than zero, because the domain has
		# been initialized according to the contents of the mesh file that has just been
		# read (provided that the mesh file contains at least one vertex).
		self.assertTrue(self.domain.num_vertices > 0)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_opendx(self):
		"""Test method 'writer_opendx'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_opendx(file_path)
	
	@unittest.skip('test case not finished: file-path and a way to check the file contents are still missing')
	def test_writer_vtk(self):
		"""Test method 'writer_vtk'."""
		
		file_path = ''
		
		# Add vertices to the domain
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		
		# Call writer
		self.domain.writer_vtk(file_path)

if __name__ == '__main__':
	unittest.main()
