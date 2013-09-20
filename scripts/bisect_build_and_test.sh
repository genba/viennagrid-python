#!/bin/sh
#
# Shell script that checks if the project compiles (for use with 'git bisect')
#
# This shell script builds the project and runs a tiny Python script that
# imports the wrapper. If the wrapper is imported without any problems,
# the script will return 0. If there is any problem when importing the
# wrapper, the script will return 1. This way, 'git bisect' will know
# when there is an error and when there isn't.

cd build
make
cd ..
python scripts/bisect_test.py
