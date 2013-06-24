#!/usr/bin/env python
#-*- coding: utf-8 -*-

import sys
sys.path += '..'

import unittest

import viennagrid_wrapper

class TestAlgorithmsCartesian2D(unittest.TestCase):
	def setUp(self):
		pass
	
	def test_inner_prod(self):
		ax = 2
		ay = 5
		a = viennagrid_wrapper.PointCartesian2D(ax, ay)
		
		bx = 8
		by = 4
		b = viennagrid_wrapper.PointCartesian2D(bx, by)
		
		res = a.inner_prod(b)
		self.assertEqual(res, ax * bx + ay * by)
		
		res = b.inner_prod(a)
		self.assertEqual(res, ax * bx + ay * by)

class TestAlgorithmsCartesian2D(unittest.TestCase):
	def setUp(self):
		pass
	
	def test_inner_prod(self):
		ax = 2
		ay = 5
		az = 10
		a = viennagrid_wrapper.PointCartesian3D(ax, ay, az)
		
		bx = 8
		by = 4
		bz = 123
		b = viennagrid_wrapper.PointCartesian3D(bx, by, bz)
		
		res = a.inner_prod(b)
		self.assertEqual(res, ax * bx + ay * by + az * bz)
		
		res = b.inner_prod(a)
		self.assertEqual(res, ax * bx + ay * by + az * bz)
	
	def test_cross_prod(self):
		a = viennagrid_wrapper.PointCartesian3D(1, 0, 0)
		b = viennagrid_wrapper.PointCartesian3D(0, 1, 0)
		
		res = a.cross_prod(b)
		self.assertEqual(res.coords, [0, 0, 1])
		
		res = a.cross_prod(b)
		self.assertEqual(res.coords, [0, 0, 1])

if __name__ == '__main__':
	unittest.main()
