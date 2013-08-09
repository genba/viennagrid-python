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
	
	sys.stdout.write(' '.join([question, choice_str, '']))
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

def download_boost(dest_dir, interactive=False, version=False, install=False, force=False):
	boost_version = DEFAULT_BOOST_VERSION
	boost_url = DEFAULT_BOOST_URL
	boost_filename = DEFAULT_BOOST_FILENAME
	
	# Try to autodiscover latest Boost version
	if version == 'auto':
		if HAS_MECHANIZE:
			pass
		else:
			warning_msg('Python module "mechanize" not found. Falling back to version %(DEFAULT_BOOST_VERSION)s.' % globals())
	# Try to find custom Boost version
	elif version != DEFAULT_BOOST_VERSION:
		if HAS_MECHANIZE:
			pass
		else:
			warning_msg('Python module "mechanize" not found. Falling back to version %(DEFAULT_BOOST_VERSION)s.' % globals())
	# else: download default Boost version
	
	# Download Boost
	if interactive:
		download = prompt('Download Boost?')
	else:
		download = True
	if download:
		os.chdir(dest_dir)
		run_commad('wget -c -t inf -O %(boost_filename)s "%(boost_url)s"' % locals())
		run_commad('tar xvjf "%(boost_filename)s"' % locals())
		run_commad('ln -s "%s" boost' % boost_filename.replace('.tar.bz2', ''))
		os.chdir('boost')
		run_commad('./bootstrap.sh --with-libraries=python')
		os.chdir('../..')
	
	# Compile Boost
	if interactive:
		do_compilation = prompt('Compile Boost?')
	else:
		do_compilation = True
	if do_compilation:
		os.chdir(dest_dir)
		os.chdir('boost')
		run_commad('./b2')
		os.chdir('../..')
	
	# Install Boost
	if interactive and not install:
		install = prompt('Install Boost?')
	if install:
		os.chdir(dest_dir)
		os.chdir('boost')
		run_commad('sudo ./b2 install')
		# FIXME: What do we do when sudo is not installed / set up (e.g. Debian)?
		os.chdir('../..')

def update_git_submodules(interactive=False):
	if interactive:
		update_submodules = prompt('Update Git submodules?')
	else:
		update_submodules = True
	
	if update_submodules:
		run_commad('git submodule init')
		run_commad('git submodule update')

def create_virtualenv(dest_dir, requirements=None, interactive=False, force=False):
	if interactive:
		create_virtualenv = prompt('Create virtual environment?')
	else:
		create_virtualenv = True
	
	if create_virtualenv:
		if os.path.exists(dest_dir):
			warning_msg('Destination path for virtual environment already exists.')
			if not force:
				create_virtualenv = prompt('Overwrite virtual environment?')
		else:
			os.mkdir(dest_dir)
		
		if create_virtualenv:
			run_commad('virtualenv --distribute --no-site-packages "%(dest_dir)s"' % locals())
			# FIXME: What do we do when virtualenv is not installed? Must check if it is.
			if requirements and os.path.isfile(requirements):
				run_commad('%(dest_dir)s/bin/activate && pip install -r "%(requirements)s"' % locals())

def create_build_dir(dest_dir, interactive=False, force=False):
	if interactive:
		create_build_dir = prompt('Create build directory?')
	else:
		create_build_dir = True
	
	if create_build_dir:
		if os.path.exists(dest_dir):
			warning_msg('Destination path for build directory already exists.')
			if not force:
				create_build_dir = prompt('Overwrite build directory?')
		else:
			os.mkdir(dest_dir)

def checkout_branch(remote_branch, interactive=False):
	if interactive:
		do_checkout = prompt('Check out branch %(remote_branch)s?' % locals())
	else:
		do_checkout = True
	
	if do_checkout:
		splitted = remote_branch.split('/')
		if len(splitted) == 1:
			remote = 'origin'
			branch = splitted[1]
		elif len(splitted) == 2:
			remote = splitted[0]
			branch = splitted[1]
		else:
			ValueError('invalid branch reference: %(remote_branch)s' % locals())
		run_commad('git checkout -b %(branch)s %(remote)s/%(branch)s' % locals())

#################
# MAIN FUNCTION #
#################

def main(args):
	# If destination directory for libraries does not exist, create it
	if not os.path.exists(args.dest_dir):
		os.mkdir(args.dest_dir)
	
	# If destination path for libraries is a directory, download Boost
	if os.path.isdir(args.dest_dir):
		download_boost(args.dest_dir, install=args.install,
		                              version=args.boost_version,
		                              interactive=args.interactive,
		                              force=args.force)
	# If destination path exists but is not a directory, show an error message and exit
	else:
		error_msg('Path "%s" is not a directory' % args.dest_dir)
	
	# Download ViennaGrid (update Git submodules)
	update_git_submodules(interactive=args.interactive)
	
	# If destination for virtual environment has been provided, create the virtual environment.
	# If it hasn't been provided, don't do anything.
	if args.virtualenv_dest:
		create_virtualenv(args.virtualenv_dest, requirements=args.requirement,
		                                        interactive=args.interactive,
		                                        force=args.force)
	
	# Checkout development branch
	checkout_branch(args.remote_branch, interactive=args.interactive)

	# Create build directory
	if args.build_dir:
		create_build_dir(args.build_dir, interactive=args.interactive, force=args.force)

if __name__ == '__main__':
	parser = argparse.ArgumentParser()
	parser.add_argument('dest_dir', help='Destination directory for libraries')
	parser.add_argument('-i', '--interactive', action='store_true', help='Enable interactive mode')
	parser.add_argument('--boost-version', action='store', metavar='VERSION_NUMBER', default='auto', help='Force Boost version (or autodiscover latest if %(metavar)s=auto)')
	parser.add_argument('-I', '--install', action='store_true', help='Install libraries after compiling')
	parser.add_argument('-e', '--environment', action='store', dest='virtualenv_dest', default='env', help='Destination path for the Python virtual environment')
	parser.add_argument('-r', '--requirement', action='store', default=None, help='Install all packages listed in the requirements file to the virtual environment using pip')
	parser.add_argument('-c', '--checkout', metavar='remote_branch', action='store', default='origin/master', dest='remote_branch', help='Check out given remote branch to start development on that branch')
	parser.add_argument('-f', '--force', action='store_true', help='Force overwrite existing files')
	parser.add_argument('-b', '--build-dir', action='store', default=None, help='build directory for CMake')
	
	if HAS_ARGCOMPLETE:
		argcomplete.autocomplete(parser)
	args = parser.parse_args()
	
	main(args)
