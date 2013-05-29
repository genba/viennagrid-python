#!/usr/bin/env python
#-*- coding: utf-8 -*-

import sys
sys.path += '..'

import unittest

import viennawrapper

class TestWrapper(unittest.TestCase):
	def setUp(self):
		pass
	
	def test_version(self):
		self.assertEqual(viennawrapper.version(), '0.1')

if __name__ == '__main__':
	unittest.main()
