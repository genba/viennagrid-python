#!/usr/bin/env python

"""
bootstrap.py is a Python script that sets up the environment for development.

To be more precise, bootstrap.py downloads the source code of all libraries
that are necessary for development, namely:

* Boost.Python
* ViennaGrid
* ViennaMesh

For more information on how to run bootstrap.py, call the script without
arguments, or run

	bootstrap.py -h

for help.
"""

import sys
import os
import subprocess
import argparse
# Try to import argcomplete
try:
	import argcomplete
	HAS_ARGCOMPLETE = True
except ImportError:
	HAS_ARGCOMPLETE = False
# Try to import mechanize
try:
	import mechanize
	HAS_MECHANIZE = True
except ImportError:
	HAS_MECHANIZE = False

#######################################
# GLOBAL VARIABLES (DEFAULT SETTINGS) #
#######################################

DEFAULT_BOOST_VERSION  = '1.53.0'
DEFAULT_BOOST_URL      = 'http://downloads.sourceforge.net/project/boost/boost/1.53.0/boost_1_53_0.tar.bz2?r=http%3A%2F%2Fwww.boost.org%2Fusers%2Fhistory%2Fversion_1_53_0.html&ts=1372690752&use_mirror=kent'
DEFAULT_BOOST_FILENAME = 'boost_1_53_0.tar.bz2'

DEFAULT_VIENNAMESH_VERSION  = ''
DEFAULT_VIENNAMESH_URL      = ''
DEFAULT_VIENNAMESH_FILENAME = ''

########################
# FUNCTION DEFINITIONS #
########################

def warning_msg(msg):
	sys.stdout.write(''.join([msg, '\n']))

def error_msg(msg, errno=-1):
	sys.stderr.write(''.join([msg, '\n']))
	sys.exit(errno)

def debug_msg(msg):
	sys.stdout.write(''.join([msg, '\n']))

def prompt(question, choices=[('y', 'yes'), ('n', 'no')], default='y', return_type=bool):
	choice_str = ''
	if choices:
		shorthands = []
		for choice in choices:
			shorthands.append(choice[0])
		choice_str = '[%s]' % '/'.join(shorthands)
	
	sys.stdout.write(''.join(question, choice_str, '\n'))
	answer = raw_input()
	if return_type is bool:
		answer = answer.lower()
		if answer == 'y' or answer == 'yes':
			return_value = True
		elif answer == 'n' or answer == 'no':
			return_value = False
		else:
			return_value = default
	
	return return_value

def run_commad(cmd, debug=False, stdin=None, stdout=None, stderr=None):
	if debug:
		debug_msg(cmd)
	else:
		subprocess.call(cmd, shell=True, stdin=stdin, stdout=stdout, stderr=stderr)

def download_boost(dest_dir, interactive=False, version=False, install=False):
	boost_version = DEFAULT_BOOST_VERSION
	boost_url = DEFAULT_BOOST_URL
	boost_filename = DEFAULT_BOOST_FILENAME
	
	# Try to autodiscover latest Boost version
	if version == 'auto':
		if HAS_MECHANIZE:
			pass
		else:
			warning_msg('Python module "mechanize" not found. Falling back to version %(DEFAULT_BOOST_VERSION)s' % globals())
	# Try to find custom Boost version
	elif version != DEFAULT_BOOST_VERSION:
		if HAS_MECHANIZE:
			pass
		else:
			warning_msg('Python module "mechanize" not found. Falling back to version %(DEFAULT_BOOST_VERSION)s' % globals())
	# else: download default Boost version
	
	# Download Boost
	os.chdir(dest_dir)
	run_commad('wget -c -t inf -O %(boost_filename)s "%(boost_url)s"' % locals())
	run_commad('tar xvjf %(boost_filename)s' % locals())
	run_commad('ln -s %s boost' % boost_filename.replace('.tar.bz2', ''))
	os.chdir('boost')
	run_commad('./bootstrap.sh --with-libraries=python')
	
	# Compile Boost
	run_commad('./b2')
	
	# Install Boost
	if interactive and not install:
		install = prompt('Install Boost?')
	if install:
		run_commad('sudo ./b2 install')

def download_viennamesh(dest_dir, interactive=False):
	pass

#################
# MAIN FUNCTION #
#################

def main(args):
	if not os.path.exists(args.dest_dir):
		os.mkdir(args.dest_dir)
	
	if os.path.isdir(args.dest_dir):
		download_boost(args.dest_dir, args.interactive, args.boost_version, args.install)
		download_viennamesh(args.dest_dir, args.interactive)
	else:
		error_msg('Path "%s" is not a directory' % args.dest_dir)

if __name__ == '__main__':
	parser = argparse.ArgumentParser()
	parser.add_argument('dest_dir', help='Destination directory for libraries')
	parser.add_argument('-i', '--interactive', action='store_true', help='Enable interactive mode')
	parser.add_argument('--boost-version', action='store', metavar='VERSION_NUMBER', default='auto', help='Force Boost version (or autodiscover latest if %(metavar)s=auto)')
	parser.add_argument('-I', '--install', action='store_true', help='Install libraries after compiling')
	
	if HAS_ARGCOMPLETE:
		argcomplete.autocomplete(parser)
	args = parser.parse_args()
	
	main(args)