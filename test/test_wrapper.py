#!/usr/bin/env python
#-*- coding: utf-8 -*-

import sys
if len(sys.argv) > 1:
	sys.path.insert(0, sys.argv.pop(1))

import unittest

import viennagrid.wrapper

class TestWrapper(unittest.TestCase):
	def setUp(self):
		pass
	
	def test_version(self):
		self.assertEqual(viennagrid.wrapper.version(), '0.1.0-rc.3')

if __name__ == '__main__':
	unittest.main()
