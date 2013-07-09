#!/usr/bin/env python
#-*- coding: utf-8 -*-

import math

def equal(x, y, tol=0.000000001):
	"""Compare if two real numbers are equal using a tolerance to avoid rounding errors."""
	return math.fabs(x - y) < tol, '%(x)f != %(y)f' % locals()
