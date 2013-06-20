#!/usr/bin/env python
#-*- coding: utf-8 -*-

import sys
sys.path += '..'

import unittest

import viennagrid_wrapper

class TestWrapper(unittest.TestCase):
	def setUp(self):
		pass
	
	def test_version(self):
		self.assertEqual(viennagrid_wrapper.version(), '0.1.0')

if __name__ == '__main__':
	unittest.main()
