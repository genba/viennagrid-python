#!/usr/bin/env python
#
# bump-version.py
#
# Change version number in all places that contain the version number
#

import argparse
import subprocess

PROJECT_VERSION    = '0.1.0'  # Current version of the project (ViennaGrid for Python)
BOOST_VERSION      = '1.53.0' # Version of Boost used for development
VIENNAGRID_VERSION = '1.0.1'  # Version of ViennaGrid used for development

def replace_dirs(old_str, new_str, dirs):
	paths = ' '.join(dirs)
	cmd = "perl -p -i -e 's/%(old_str)s/%(new_str)s/g' `ack-grep -l '%(old_str)s' %(paths)s`" % locals()
	subprocess.call(cmd, shell=True)

def replace_file(old_str, new_str, paths):
	cmd = "perl -p -i -e 's/%(old_str)s/%(new_str)s/g' %(paths)s" % locals()
	subprocess.call(cmd, shell=True)

def main(project_version, boost_version, viennagrid_version):
	dirs = ['doc', 'scripts', 'test', 'viennagrid-python']
	old_versions = [PROJECT_VERSION, BOOST_VERSION, VIENNAGRID_VERSION]
	new_versions = [project_version, boost_version, viennagrid_version]
	for old_str, new_str in zip(old_versions, new_versions):
		old_str = old_str.replace('.', '\.')
		new_str = new_str.replace('.', '\.')
		replace_dirs(old_str, new_str, dirs)
		replace_file(old_str, new_str, 'src/wrapper.cpp')
		replace_file(old_str, new_str, 'README.md')
		replace_file(old_str, new_str, 'src/CMakeLists.txt')
	
	old_version_short = '.'.join(PROJECT_VERSION.split('.')[0:2])
	new_version_short = '.'.join(project_version.split('.')[0:2])
	replace_file(old_version_short, new_version_short, 'src/CMakeLists.txt')

if __name__ == "__main__":
	parser = argparse.ArgumentParser()
	parser.add_argument('project_version', help='version number of the next release of ViennaGrid for Python')
	parser.add_argument('boost_version', help='ViennaGrid version number to be used', nargs='?', default=BOOST_VERSION)
	parser.add_argument('viennagrid_version', help='Boost version number to be used', nargs='?', default=VIENNAGRID_VERSION)
	
	args = parser.parse_args()
	
	main(args.project_version, args.boost_version, args.viennagrid_version)
