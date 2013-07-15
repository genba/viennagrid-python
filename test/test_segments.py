#!/usr/bin/env python
#-*- coding: utf-8 -*-

import sys
if len(sys.argv) > 1:
	sys.path.insert(0, sys.argv.pop(1))

import unittest

import viennagrid_wrapper

#######################
# TRIANGULAR SEGMENTS #
#######################

class TestTriangularCartesian2D_Segment(unittest.TestCase):
	def setUp(self):
		pass

	def test_create_cell(self):
		"""Test method for 'create_cell'."""
		pass

if __name__ == '__main__':
	unittest.main()
