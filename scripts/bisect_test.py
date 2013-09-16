#!/usr/bin/env python
#-*- coding: utf-8 -*-
#
# This script tries to import the wrapper.
# If this succeeds, the script will return 0.
# If there is an error importing the wrapper, the script will return 1.

import sys
import os

os.chdir('build/lib')
try:
	import wrapper
except ImportError:
	sys.exit(1)
else:
	sys.exit(0)
