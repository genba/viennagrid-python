import os

from distutils.core import setup

# patch distutils if it can't cope with the "classifiers" or
# "download_url" keywords
from sys import version
if version < '2.2.3':
	from distutils.dist import DistributionMetadata
	DistributionMetadata.classifiers = None
	DistributionMetadata.download_url = None

SETUP_DIR = os.path.split(__file__)[0]

setup(
	name='viennagrid-python',
	version='0.1.0',
	author='Jonan CM',
	author_email='jonancm@gmail.com',
	url='http://genba.github.io/viennagrid-python/',
	description='Python module that provides a wrapper around the ViennaGrid library.',
	long_description=open(os.path.join(SETUP_DIR, 'README.txt')).read(),
	download_url='http://genba.github.io/viennagrid-python/',
	classifiers=[
		'Development Status :: 4 - Beta',
		'Intended Audience :: Developers',
	],
	license='LICENSE.txt',
	package_dir={'': SETUP_DIR},
	packages=['viennagrid', 'viennagrid.test'],
	package_data={'viennagrid': ['viennagrid_wrapper.so']},
	provides=['viennagrid'],
)
