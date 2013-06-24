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

if __name__ == '__main__':
	unittest.main()
