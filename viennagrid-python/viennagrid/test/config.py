#-*- coding: utf-8 -*-

import unittest

import viennagrid

class TestConfiguration(unittest.TestCase):
	def test_init(self):
		"""
		Test constructor with all possible argument combinations.
		"""
		
		###########################################################################################
		
		"""
		Test signature:
		
		Configuration(cell_tag, coord_system_tag)
		"""
		for cell_tag in viennagrid.config.CELL_TAGS:
			for coord_system in viennagrid.config.COORD_SYSTEM_TAGS:
				if coord_system == viennagrid.config.CARTESIAN:
					self.assertRaises(TypeError, viennagrid.config.Configuration, cell_tag, coord_system)
				else:
					cfg = viennagrid.config.Configuration(cell_tag, coord_system)
					self.assertEqual(cfg.numeric_type, 'double')
					self.assertEqual(cfg.coord_system_tag, coord_system)
					self.assertEqual(cfg.cell_tag, cell_tag)
					self.assertEqual(cfg.dim, viennagrid.config.SUPPORTED_DIMENSIONS[coord_system][0])
		
		###########################################################################################
		
		"""
		Test signature:
		
		Configuration(cell_tag, coord_system_tag, dim)
		"""
		for cell_tag in viennagrid.config.CELL_TAGS:
			for coord_system in viennagrid.config.COORD_SYSTEM_TAGS:
				for dim in viennagrid.config.SUPPORTED_DIMENSIONS[coord_system]:
					cfg = viennagrid.config.Configuration(cell_tag, coord_system, dim)
					self.assertEqual(cfg.numeric_type, 'double')
					self.assertEqual(cfg.coord_system_tag, coord_system)
					self.assertEqual(cfg.cell_tag, cell_tag)
					self.assertEqual(cfg.dim, dim)
		
		###########################################################################################
		
		self.assertRaises(ValueError, viennagrid.config.Configuration, 'unknown cell tag', viennagrid.config.CARTESIAN)
		self.assertRaises(ValueError, viennagrid.config.Configuration, 'unknown cell tag', viennagrid.config.CARTESIAN, dim=2)
		self.assertRaises(ValueError, viennagrid.config.Configuration, viennagrid.config.TRIANGLE_TAG, 'unknown coord system')
		self.assertRaises(ValueError, viennagrid.config.Configuration, viennagrid.config.TRIANGLE_TAG, 'unknown coord system', dim=2)
		self.assertRaises(ValueError, viennagrid.config.Configuration, viennagrid.config.TRIANGLE_TAG, viennagrid.config.CARTESIAN, dim=1)
		self.assertRaises(ValueError, viennagrid.config.Configuration, viennagrid.config.TRIANGLE_TAG, viennagrid.config.CARTESIAN, dim=4)
		self.assertRaises(ValueError, viennagrid.config.Configuration, viennagrid.config.TRIANGLE_TAG, viennagrid.config.CYLINDRICAL, dim=1)
		self.assertRaises(ValueError, viennagrid.config.Configuration, viennagrid.config.TRIANGLE_TAG, viennagrid.config.CYLINDRICAL, dim=2)
		self.assertRaises(ValueError, viennagrid.config.Configuration, viennagrid.config.TRIANGLE_TAG, viennagrid.config.CYLINDRICAL, dim=4)
		self.assertRaises(ValueError, viennagrid.config.Configuration, viennagrid.config.TRIANGLE_TAG, viennagrid.config.POLAR, dim=1)
		self.assertRaises(ValueError, viennagrid.config.Configuration, viennagrid.config.TRIANGLE_TAG, viennagrid.config.POLAR, dim=4)
		self.assertRaises(ValueError, viennagrid.config.Configuration, viennagrid.config.TRIANGLE_TAG, viennagrid.config.SPHERICAL, dim=1)
		self.assertRaises(ValueError, viennagrid.config.Configuration, viennagrid.config.TRIANGLE_TAG, viennagrid.config.SPHERICAL, dim=2)
		self.assertRaises(ValueError, viennagrid.config.Configuration, viennagrid.config.TRIANGLE_TAG, viennagrid.config.SPHERICAL, dim=4)
		
		###########################################################################################
		
		self.assertEqual(viennagrid.config.linear_2d.numeric_type, 'double')
		self.assertEqual(viennagrid.config.linear_2d.coord_system_tag, viennagrid.config.CARTESIAN)
		self.assertEqual(viennagrid.config.linear_2d.cell_tag, viennagrid.config.LINE_TAG)
		self.assertEqual(viennagrid.config.linear_2d.dim, 2)
		
		self.assertEqual(viennagrid.config.linear_3d.numeric_type, 'double')
		self.assertEqual(viennagrid.config.linear_3d.coord_system_tag, viennagrid.config.CARTESIAN)
		self.assertEqual(viennagrid.config.linear_3d.cell_tag, viennagrid.config.LINE_TAG)
		self.assertEqual(viennagrid.config.linear_3d.dim, 3)
		
		self.assertEqual(viennagrid.config.triangular_2d.numeric_type, 'double')
		self.assertEqual(viennagrid.config.triangular_2d.coord_system_tag, viennagrid.config.CARTESIAN)
		self.assertEqual(viennagrid.config.triangular_2d.cell_tag, viennagrid.config.TRIANGLE_TAG)
		self.assertEqual(viennagrid.config.triangular_2d.dim, 2)
		
		self.assertEqual(viennagrid.config.triangular_3d.numeric_type, 'double')
		self.assertEqual(viennagrid.config.triangular_3d.coord_system_tag, viennagrid.config.CARTESIAN)
		self.assertEqual(viennagrid.config.triangular_3d.cell_tag, viennagrid.config.TRIANGLE_TAG)
		self.assertEqual(viennagrid.config.triangular_3d.dim, 3)
		
		self.assertEqual(viennagrid.config.tetrahedral_3d.numeric_type, 'double')
		self.assertEqual(viennagrid.config.tetrahedral_3d.coord_system_tag, viennagrid.config.CARTESIAN)
		self.assertEqual(viennagrid.config.tetrahedral_3d.cell_tag, viennagrid.config.TETRAHEDRON_TAG)
		self.assertEqual(viennagrid.config.tetrahedral_3d.dim, 3)
		
		self.assertEqual(viennagrid.config.quadrilateral_2d.numeric_type, 'double')
		self.assertEqual(viennagrid.config.quadrilateral_2d.coord_system_tag, viennagrid.config.CARTESIAN)
		self.assertEqual(viennagrid.config.quadrilateral_2d.cell_tag, viennagrid.config.QUADRILATERAL_TAG)
		self.assertEqual(viennagrid.config.quadrilateral_2d.dim, 2)
		
		self.assertEqual(viennagrid.config.quadrilateral_3d.numeric_type, 'double')
		self.assertEqual(viennagrid.config.quadrilateral_3d.coord_system_tag, viennagrid.config.CARTESIAN)
		self.assertEqual(viennagrid.config.quadrilateral_3d.cell_tag, viennagrid.config.QUADRILATERAL_TAG)
		self.assertEqual(viennagrid.config.quadrilateral_3d.dim, 3)
		
		self.assertEqual(viennagrid.config.hexahedral_3d.numeric_type, 'double')
		self.assertEqual(viennagrid.config.hexahedral_3d.coord_system_tag, viennagrid.config.CARTESIAN)
		self.assertEqual(viennagrid.config.hexahedral_3d.cell_tag, viennagrid.config.HEXAHEDRON_TAG)
		self.assertEqual(viennagrid.config.hexahedral_3d.dim, 3)
	
	def test_point_type(self):
		##########
		# LINEAR #
		##########
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CARTESIAN, dim=2)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointCartesian2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CARTESIAN, dim=3)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointCartesian3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointCylindrical3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.POLAR, dim=2)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointPolar2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.SPHERICAL, dim=3)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointSpherical3D)
		
		##############
		# TRIANGULAR #
		##############
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CARTESIAN, dim=2)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointCartesian2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CARTESIAN, dim=3)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointCartesian3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointCylindrical3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.POLAR, dim=2)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointPolar2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.SPHERICAL, dim=3)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointSpherical3D)
		
		#################
		# QUADRILATERAL #
		#################
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CARTESIAN, dim=2)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointCartesian2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CARTESIAN, dim=3)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointCartesian3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointCylindrical3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.POLAR, dim=2)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointPolar2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.SPHERICAL, dim=3)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointSpherical3D)
		
		###############
		# TETRAHEDRAL #
		###############
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.CARTESIAN, dim=2)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointCartesian2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.CARTESIAN, dim=3)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointCartesian3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointCylindrical3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.POLAR, dim=2)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointPolar2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.SPHERICAL, dim=3)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointSpherical3D)
		
		##############
		# HEXAHEDRAL #
		##############
		
		cfg = viennagrid.config.Configuration(viennagrid.config.HEXAHEDRON_TAG, viennagrid.config.CARTESIAN, dim=2)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointCartesian2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.HEXAHEDRON_TAG, viennagrid.config.CARTESIAN, dim=3)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointCartesian3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.HEXAHEDRON_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointCylindrical3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.HEXAHEDRON_TAG, viennagrid.config.POLAR, dim=2)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointPolar2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.HEXAHEDRON_TAG, viennagrid.config.SPHERICAL, dim=3)
		point_type = cfg.point_type
		self.assertIs(point_type, viennagrid.wrapper.PointSpherical3D)
	
	def test_domain_type(self):
		##########
		# LINEAR #
		##########
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CARTESIAN, dim=2)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.LinearCartesian2D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CARTESIAN, dim=3)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.LinearCartesian3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.LinearCylindrical3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.POLAR, dim=2)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.LinearPolar2D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.SPHERICAL, dim=3)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.LinearSpherical3D_Domain)
		
		##############
		# TRIANGULAR #
		##############
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CARTESIAN, dim=2)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.TriangularCartesian2D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CARTESIAN, dim=3)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.TriangularCartesian3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.TriangularCylindrical3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.POLAR, dim=2)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.TriangularPolar2D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.SPHERICAL, dim=3)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.TriangularSpherical3D_Domain)
		
		#################
		# QUADRILATERAL #
		#################
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CARTESIAN, dim=2)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.QuadrilateralCartesian2D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CARTESIAN, dim=3)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.QuadrilateralCartesian3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.QuadrilateralCylindrical3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.POLAR, dim=2)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.QuadrilateralPolar2D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.SPHERICAL, dim=3)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.QuadrilateralSpherical3D_Domain)
		
		###############
		# TETRAHEDRAL #
		###############
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.CARTESIAN, dim=3)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.TetrahedralCartesian3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.TetrahedralCylindrical3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.SPHERICAL, dim=3)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.TetrahedralSpherical3D_Domain)
		
		##############
		# HEXAHEDRAL #
		##############
		"""
		cfg = viennagrid.config.Configuration(viennagrid.config.HEXAHEDRON_TAG, viennagrid.config.CARTESIAN, dim=3)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.HexahedralCartesian3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.HEXAHEDRON_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.HexahedralCylindrical3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.HEXAHEDRON_TAG, viennagrid.config.SPHERICAL, dim=3)
		domain_type = cfg.domain_type
		self.assertIs(domain_type, viennagrid.wrapper.HexahedralSpherical3D_Domain)
		"""
		# TODO: this fails because hexahedral domains are not implemented yet, and thus the classes don't exist
	
	def test_create_point(self):
		##########
		# LINEAR #
		##########
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CARTESIAN, dim=2)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointCartesian2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CARTESIAN, dim=3)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointCartesian3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointCylindrical3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.POLAR, dim=2)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointPolar2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.SPHERICAL, dim=3)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointSpherical3D)
		
		##############
		# TRIANGULAR #
		##############
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CARTESIAN, dim=2)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointCartesian2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CARTESIAN, dim=3)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointCartesian3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointCylindrical3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.POLAR, dim=2)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointPolar2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.SPHERICAL, dim=3)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointSpherical3D)
		
		#################
		# QUADRILATERAL #
		#################
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CARTESIAN, dim=2)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointCartesian2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CARTESIAN, dim=3)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointCartesian3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointCylindrical3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.POLAR, dim=2)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointPolar2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.SPHERICAL, dim=3)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointSpherical3D)
		
		###############
		# TETRAHEDRAL #
		###############
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.CARTESIAN, dim=2)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointCartesian2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.CARTESIAN, dim=3)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointCartesian3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointCylindrical3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.POLAR, dim=2)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointPolar2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.SPHERICAL, dim=3)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointSpherical3D)
		
		##############
		# HEXAHEDRAL #
		##############
		
		cfg = viennagrid.config.Configuration(viennagrid.config.HEXAHEDRON_TAG, viennagrid.config.CARTESIAN, dim=2)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointCartesian2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.HEXAHEDRON_TAG, viennagrid.config.CARTESIAN, dim=3)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointCartesian3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.HEXAHEDRON_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointCylindrical3D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.HEXAHEDRON_TAG, viennagrid.config.POLAR, dim=2)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointPolar2D)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.HEXAHEDRON_TAG, viennagrid.config.SPHERICAL, dim=3)
		point = cfg.create_point()
		self.assertIsInstance(point, viennagrid.wrapper.PointSpherical3D)
	
	def test_create_domain(self):
		##########
		# LINEAR #
		##########
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CARTESIAN, dim=2)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.LinearCartesian2D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CARTESIAN, dim=3)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.LinearCartesian3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.LinearCylindrical3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.POLAR, dim=2)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.LinearPolar2D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.LINE_TAG, viennagrid.config.SPHERICAL, dim=3)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.LinearSpherical3D_Domain)
		
		##############
		# TRIANGULAR #
		##############
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CARTESIAN, dim=2)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.TriangularCartesian2D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CARTESIAN, dim=3)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.TriangularCartesian3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.TriangularCylindrical3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.POLAR, dim=2)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.TriangularPolar2D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TRIANGLE_TAG, viennagrid.config.SPHERICAL, dim=3)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.TriangularSpherical3D_Domain)
		
		#################
		# QUADRILATERAL #
		#################
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CARTESIAN, dim=2)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.QuadrilateralCartesian2D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CARTESIAN, dim=3)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.QuadrilateralCartesian3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.QuadrilateralCylindrical3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.POLAR, dim=2)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.QuadrilateralPolar2D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.QUADRILATERAL_TAG, viennagrid.config.SPHERICAL, dim=3)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.QuadrilateralSpherical3D_Domain)
		
		###############
		# TETRAHEDRAL #
		###############
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.CARTESIAN, dim=3)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.TetrahedralCartesian3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.TetrahedralCylindrical3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.TETRAHEDRON_TAG, viennagrid.config.SPHERICAL, dim=3)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.TetrahedralSpherical3D_Domain)
		
		##############
		# HEXAHEDRAL #
		##############
		"""
		cfg = viennagrid.config.Configuration(viennagrid.config.HEXAHEDRON_TAG, viennagrid.config.CARTESIAN, dim=3)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.HexahedralCartesian3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.HEXAHEDRON_TAG, viennagrid.config.CYLINDRICAL, dim=3)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.HexahedralCylindrical3D_Domain)
		
		cfg = viennagrid.config.Configuration(viennagrid.config.HEXAHEDRON_TAG, viennagrid.config.SPHERICAL, dim=3)
		domain = cfg.create_domain()
		self.assertIsInstance(domain, viennagrid.wrapper.HexahedralSpherical3D_Domain)
		"""
		# TODO: this fails because hexahedral domains are not implemented yet, and thus the classes don't exist

if __name__ == '__main__':
	unittest.main()
