#!/usr/bin/env python
#-*- coding: utf-8 -*-

import sys
if len(sys.argv) > 1:
	sys.path.insert(0, sys.argv.pop(1))

from test_wrapper import *
from test_points import *
from test_domains import *
from test_cells import *
from test_algorithms import *

if __name__ == '__main__':
	unittest.main()
