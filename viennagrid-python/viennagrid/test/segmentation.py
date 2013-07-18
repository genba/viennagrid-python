#-*- coding: utf-8 -*-

import unittest

import viennagrid

########################
# LINEAR SEGMENTATIONS #
########################

class TestSegmentation_LinearCartesian1D(unittest.TestCase):
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
		for point in self.vertices:
			self.domain.add_vertex(point)

class TestSegmentation_LinearCartesian2D(unittest.TestCase):
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
		for point in self.vertices:
			self.domain.add_vertex(point)

class TestSegmentation_LinearCartesian3D(unittest.TestCase):
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
		for point in self.vertices:
			self.domain.add_vertex(point)

class TestSegmentation_LinearCylindrical3D(unittest.TestCase):
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
		for point in self.vertices:
			self.domain.add_vertex(point)

class TestSegmentation_LinearPolar2D(unittest.TestCase):
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
		for point in self.vertices:
			self.domain.add_vertex(point)

class TestSegmentation_LinearSpherical3D(unittest.TestCase):
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
		for point in self.vertices:
			self.domain.add_vertex(point)

############################
# TRIANGULAR SEGMENTATIONS #
############################

class TestSegmentation_TriangularCartesian2D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CARTESIAN, 2)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2),
			viennagrid.Point(2, 2),
			viennagrid.Point(3, 2),
			viennagrid.Point(4, 2),
			viennagrid.Point(5, 2),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.add_vertex(point)

class TestSegmentation_TriangularCartesian3D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CARTESIAN, 3)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2, 3),
			viennagrid.Point(2, 2, 3),
			viennagrid.Point(3, 2, 3),
			viennagrid.Point(4, 2, 3),
			viennagrid.Point(5, 2, 3),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.add_vertex(point)

class TestSegmentation_TriangularCylindrical3D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CYLINDRICAL)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(2, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(3, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(4, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(5, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.add_vertex(point)

class TestSegmentation_TriangularPolar2D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.POLAR)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(2, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(3, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(4, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(5, 2, coord_system=viennagrid.config.POLAR),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.add_vertex(point)

class TestSegmentation_TriangularSpherical3D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.SPHERICAL)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(2, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(3, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(4, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(5, 2, 3, coord_system=viennagrid.config.SPHERICAL),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.add_vertex(point)

###############################
# QUADRILATERAL SEGMENTATIONS #
###############################

class TestSegmentation_QuadrilateralCartesian2D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CARTESIAN, 2)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2),
			viennagrid.Point(2, 2),
			viennagrid.Point(3, 2),
			viennagrid.Point(4, 2),
			viennagrid.Point(5, 2),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.add_vertex(point)

class TestSegmentation_QuadrilateralCartesian3D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CARTESIAN, 3)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2, 3),
			viennagrid.Point(2, 2, 3),
			viennagrid.Point(3, 2, 3),
			viennagrid.Point(4, 2, 3),
			viennagrid.Point(5, 2, 3),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.add_vertex(point)

class TestSegmentation_QuadrilateralCylindrical3D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CYLINDRICAL)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(2, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(3, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(4, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(5, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.add_vertex(point)

class TestSegmentation_QuadrilateralPolar2D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.POLAR)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(2, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(3, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(4, 2, coord_system=viennagrid.config.POLAR),
			viennagrid.Point(5, 2, coord_system=viennagrid.config.POLAR),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.add_vertex(point)

class TestSegmentation_QuadrilateralSpherical3D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.SPHERICAL)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(2, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(3, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(4, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(5, 2, 3, coord_system=viennagrid.config.SPHERICAL),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.add_vertex(point)

#############################
# TETRAHEDRAL SEGMENTATIONS #
#############################

class TestSegmentation_TetrahedralCartesian3D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.CARTESIAN, 3)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2, 3),
			viennagrid.Point(2, 2, 3),
			viennagrid.Point(3, 2, 3),
			viennagrid.Point(4, 2, 3),
			viennagrid.Point(5, 2, 3),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.add_vertex(point)

class TestSegmentation_TetrahedralCylindrical3D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.CYLINDRICAL)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(2, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(3, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(4, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
			viennagrid.Point(5, 2, 3, coord_system=viennagrid.config.CYLINDRICAL),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.add_vertex(point)

class TestSegmentation_TetrahedralSpherical3D(unittest.TestCase):
	def setUp(self):
		self.config = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.SPHERICAL)
		self.domain = viennagrid.Domain(self.config)
		self.vertices = [
			viennagrid.Point(1, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(2, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(3, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(4, 2, 3, coord_system=viennagrid.config.SPHERICAL),
			viennagrid.Point(5, 2, 3, coord_system=viennagrid.config.SPHERICAL),
		]
		self.num_vertices = len(self.vertices)
		for point in self.vertices:
			self.domain.add_vertex(point)

if __name__ == '__main__':
	unittest.main()
