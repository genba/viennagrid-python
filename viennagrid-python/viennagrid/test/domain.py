#-*- coding: utf-8 -*-

import unittest

import viennagrid

class TestDomain_LinearCartesian1D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CARTESIAN, 1)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1),
			viennagrid.Point(2),
			viennagrid.Point(3),
			viennagrid.Point(4),
			viennagrid.Point(5),
		]
		self.num_vertices = len(self.vertices)
	
	def test_init(self):
		self.assertEqual(self.domain.config, self.config)
		self.assertEqual(self.domain.vertices(), [])
		self.assertEqual(len(self.domain.vertices), 0)
		for vertex in self.domain.vertices:
			pass
		# self.assertRaises(IndexError, self.domain.vertices.__getitem__, 0) # FIXME: doesn't raise, because get_vertex doesn't raise
		# self.assertEqual(self.domain.vertices[0:1], [])
		# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
		# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
	
	def test_vertices(self):
		self.assertEqual(self.domain.vertices(), [])
		self.assertEqual(len(self.domain.vertices), 0)
		for vertex in self.domain.vertices:
			pass
		# self.assertRaises(IndexError, self.domain.vertices.__getitem__, 0) # FIXME: doesn't raise, because get_vertex doesn't raise
		# self.assertEqual(self.domain.vertices[0:1], [])
		# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
		# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
		
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			
			# self.assertEqual(self.domain.vertices(), self.vertices[0:i+1]) # FIXME: objects are not equal
			self.assertEqual(len(self.domain.vertices), i+1)
			
			it1 = iter(self.domain.vertices)
			it2 = iter(self.vertices)
			exit_loop = False
			count = 0
			while not exit_loop:
				try:
					v1 = it1.next()
					v2 = it2.next()
				except StopIteration:
					exit_loop = True
				else:
					count += 1
			self.assertEqual(count, len(self.domain.vertices))
			
			# self.assertRaises(IndexError, self.domain.vertices.__getitem__, self.num_vertices) # FIXME: doesn't raise, because get_vertex doesn't raise
			# self.assertEqual(self.domain.vertices[0:1], [])
			# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
			# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
		
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
	
	def test_iter(self):
		count = 0
		for vertex in self.domain:
			count += 1
		self.assertEqual(count, len(self.domain.vertices))

class TestDomain_LinearCartesian2D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CARTESIAN, 2)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2),
			viennagrid.Point(2, 2),
			viennagrid.Point(3, 2),
			viennagrid.Point(4, 2),
			viennagrid.Point(5, 2),
		]
		self.num_vertices = len(self.vertices)
	
	def test_init(self):
		self.assertEqual(self.domain.config, self.config)
		self.assertEqual(self.domain.vertices(), [])
		self.assertEqual(len(self.domain.vertices), 0)
		for vertex in self.domain.vertices:
			pass
		# self.assertRaises(IndexError, self.domain.vertices.__getitem__, 0) # FIXME: doesn't raise, because get_vertex doesn't raise
		# self.assertEqual(self.domain.vertices[0:1], [])
		# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
		# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
	
	def test_vertices(self):
		self.assertEqual(self.domain.vertices(), [])
		self.assertEqual(len(self.domain.vertices), 0)
		for vertex in self.domain.vertices:
			pass
		# self.assertRaises(IndexError, self.domain.vertices.__getitem__, 0) # FIXME: doesn't raise, because get_vertex doesn't raise
		# self.assertEqual(self.domain.vertices[0:1], [])
		# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
		# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
		
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			
			# self.assertEqual(self.domain.vertices(), self.vertices[0:i+1]) # FIXME: objects are not equal
			self.assertEqual(len(self.domain.vertices), i+1)
			
			it1 = iter(self.domain.vertices)
			it2 = iter(self.vertices)
			exit_loop = False
			count = 0
			while not exit_loop:
				try:
					v1 = it1.next()
					v2 = it2.next()
				except StopIteration:
					exit_loop = True
				else:
					count += 1
			self.assertEqual(count, len(self.domain.vertices))
			
			# self.assertRaises(IndexError, self.domain.vertices.__getitem__, self.num_vertices) # FIXME: doesn't raise, because get_vertex doesn't raise
			# self.assertEqual(self.domain.vertices[0:1], [])
			# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
			# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
		
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
	
	def test_iter(self):
		count = 0
		for vertex in self.domain:
			count += 1
		self.assertEqual(count, len(self.domain.vertices))

class TestDomain_LinearCartesian3D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CARTESIAN, 3)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2, 3),
			viennagrid.Point(2, 2, 3),
			viennagrid.Point(3, 2, 3),
			viennagrid.Point(4, 2, 3),
			viennagrid.Point(5, 2, 3),
		]
		self.num_vertices = len(self.vertices)
	
	def test_init(self):
		self.assertEqual(self.domain.config, self.config)
		self.assertEqual(self.domain.vertices(), [])
		self.assertEqual(len(self.domain.vertices), 0)
		for vertex in self.domain.vertices:
			pass
		# self.assertRaises(IndexError, self.domain.vertices.__getitem__, 0) # FIXME: doesn't raise, because get_vertex doesn't raise
		# self.assertEqual(self.domain.vertices[0:1], [])
		# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
		# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
	
	def test_vertices(self):
		self.assertEqual(self.domain.vertices(), [])
		self.assertEqual(len(self.domain.vertices), 0)
		for vertex in self.domain.vertices:
			pass
		# self.assertRaises(IndexError, self.domain.vertices.__getitem__, 0) # FIXME: doesn't raise, because get_vertex doesn't raise
		# self.assertEqual(self.domain.vertices[0:1], [])
		# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
		# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
		
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			
			# self.assertEqual(self.domain.vertices(), self.vertices[0:i+1]) # FIXME: objects are not equal
			self.assertEqual(len(self.domain.vertices), i+1)
			
			it1 = iter(self.domain.vertices)
			it2 = iter(self.vertices)
			exit_loop = False
			count = 0
			while not exit_loop:
				try:
					v1 = it1.next()
					v2 = it2.next()
				except StopIteration:
					exit_loop = True
				else:
					count += 1
			self.assertEqual(count, len(self.domain.vertices))
			
			# self.assertRaises(IndexError, self.domain.vertices.__getitem__, self.num_vertices) # FIXME: doesn't raise, because get_vertex doesn't raise
			# self.assertEqual(self.domain.vertices[0:1], [])
			# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
			# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
		
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
	
	def test_iter(self):
		count = 0
		for vertex in self.domain:
			count += 1
		self.assertEqual(count, len(self.domain.vertices))

class TestDomain_LinearCylindrical3D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CYLINDRICAL)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(2, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(3, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(4, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(5, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
		]
		self.num_vertices = len(self.vertices)
	
	def test_init(self):
		self.assertEqual(self.domain.config, self.config)
		self.assertEqual(self.domain.vertices(), [])
		self.assertEqual(len(self.domain.vertices), 0)
		for vertex in self.domain.vertices:
			pass
		# self.assertRaises(IndexError, self.domain.vertices.__getitem__, 0) # FIXME: doesn't raise, because get_vertex doesn't raise
		# self.assertEqual(self.domain.vertices[0:1], [])
		# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
		# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
	
	def test_vertices(self):
		self.assertEqual(self.domain.vertices(), [])
		self.assertEqual(len(self.domain.vertices), 0)
		for vertex in self.domain.vertices:
			pass
		# self.assertRaises(IndexError, self.domain.vertices.__getitem__, 0) # FIXME: doesn't raise, because get_vertex doesn't raise
		# self.assertEqual(self.domain.vertices[0:1], [])
		# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
		# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
		
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			
			# self.assertEqual(self.domain.vertices(), self.vertices[0:i+1]) # FIXME: objects are not equal
			self.assertEqual(len(self.domain.vertices), i+1)
			
			it1 = iter(self.domain.vertices)
			it2 = iter(self.vertices)
			exit_loop = False
			count = 0
			while not exit_loop:
				try:
					v1 = it1.next()
					v2 = it2.next()
				except StopIteration:
					exit_loop = True
				else:
					count += 1
			self.assertEqual(count, len(self.domain.vertices))
			
			# self.assertRaises(IndexError, self.domain.vertices.__getitem__, self.num_vertices) # FIXME: doesn't raise, because get_vertex doesn't raise
			# self.assertEqual(self.domain.vertices[0:1], [])
			# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
			# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
		
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
	
	def test_iter(self):
		count = 0
		for vertex in self.domain:
			count += 1
		self.assertEqual(count, len(self.domain.vertices))

class TestDomain_LinearPolar2D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.POLAR)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(2, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(3, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(4, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(5, 2, coord_system=viennagrid.config.POLAR),
		]
		self.num_vertices = len(self.vertices)
	
	def test_init(self):
		self.assertEqual(self.domain.config, self.config)
		self.assertEqual(self.domain.vertices(), [])
		self.assertEqual(len(self.domain.vertices), 0)
		for vertex in self.domain.vertices:
			pass
		# self.assertRaises(IndexError, self.domain.vertices.__getitem__, 0) # FIXME: doesn't raise, because get_vertex doesn't raise
		# self.assertEqual(self.domain.vertices[0:1], [])
		# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
		# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
	
	def test_vertices(self):
		self.assertEqual(self.domain.vertices(), [])
		self.assertEqual(len(self.domain.vertices), 0)
		for vertex in self.domain.vertices:
			pass
		# self.assertRaises(IndexError, self.domain.vertices.__getitem__, 0) # FIXME: doesn't raise, because get_vertex doesn't raise
		# self.assertEqual(self.domain.vertices[0:1], [])
		# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
		# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
		
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			
			# self.assertEqual(self.domain.vertices(), self.vertices[0:i+1]) # FIXME: objects are not equal
			self.assertEqual(len(self.domain.vertices), i+1)
			
			it1 = iter(self.domain.vertices)
			it2 = iter(self.vertices)
			exit_loop = False
			count = 0
			while not exit_loop:
				try:
					v1 = it1.next()
					v2 = it2.next()
				except StopIteration:
					exit_loop = True
				else:
					count += 1
			self.assertEqual(count, len(self.domain.vertices))
			
			# self.assertRaises(IndexError, self.domain.vertices.__getitem__, self.num_vertices) # FIXME: doesn't raise, because get_vertex doesn't raise
			# self.assertEqual(self.domain.vertices[0:1], [])
			# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
			# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
		
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
	
	def test_iter(self):
		count = 0
		for vertex in self.domain:
			count += 1
		self.assertEqual(count, len(self.domain.vertices))

class TestDomain_LinearSpherical3D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.SPHERICAL)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(2, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(3, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(4, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(5, 2, 3, coord_system=viennagrid.config.SPHERICAL),
		]
		self.num_vertices = len(self.vertices)
	
	def test_init(self):
		self.assertEqual(self.domain.config, self.config)
		self.assertEqual(self.domain.vertices(), [])
		self.assertEqual(len(self.domain.vertices), 0)
		for vertex in self.domain.vertices:
			pass
		# self.assertRaises(IndexError, self.domain.vertices.__getitem__, 0) # FIXME: doesn't raise, because get_vertex doesn't raise
		# self.assertEqual(self.domain.vertices[0:1], [])
		# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
		# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
	
	def test_vertices(self):
		self.assertEqual(self.domain.vertices(), [])
		self.assertEqual(len(self.domain.vertices), 0)
		for vertex in self.domain.vertices:
			pass
		# self.assertRaises(IndexError, self.domain.vertices.__getitem__, 0) # FIXME: doesn't raise, because get_vertex doesn't raise
		# self.assertEqual(self.domain.vertices[0:1], [])
		# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
		# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
		
		for i, point in enumerate(self.vertices):
			self.domain.add_vertex(point)
			
			# self.assertEqual(self.domain.vertices(), self.vertices[0:i+1]) # FIXME: objects are not equal
			self.assertEqual(len(self.domain.vertices), i+1)
			
			it1 = iter(self.domain.vertices)
			it2 = iter(self.vertices)
			exit_loop = False
			count = 0
			while not exit_loop:
				try:
					v1 = it1.next()
					v2 = it2.next()
				except StopIteration:
					exit_loop = True
				else:
					count += 1
			self.assertEqual(count, len(self.domain.vertices))
			
			# self.assertRaises(IndexError, self.domain.vertices.__getitem__, self.num_vertices) # FIXME: doesn't raise, because get_vertex doesn't raise
			# self.assertEqual(self.domain.vertices[0:1], [])
			# self.assertEqual(self.domain.vertices.__getitem__(slice(0, 1)), [])
			# self.assertRaises(ArgumentError, self.domain.vertices.__getitem__, slice(0, 1)) # slices are not supported
		
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
	
	def test_iter(self):
		count = 0
		for vertex in self.domain:
			count += 1
		self.assertEqual(count, len(self.domain.vertices))

if __name__ == '__main__':
	unittest.main()
