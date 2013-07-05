#!/usr/bin/env python
#-*- coding: utf-8 -*-

import math

def equal(x, y, tol=0.000000001):
	"""Compare if two real numbers are equal using a tolerance to avoid rounding errors."""
	return math.fabs(x - y) < tol, '%(x)f != %(y)f' % locals()

def point_equal(p1, p2, msg=None):
	are_equal = True
	if p1.dim == p2.dim:
		i = 0
		while are_equal and i < p1.dim:
			if not equal(p1.coords[i], p2.coords[i]):
				are_equal = False
				raise self.failureException('points are not equal')
			i += 1
	else:
		are_equal = False
		raise self.failureException('points are not equal')
	
	return are_equal
