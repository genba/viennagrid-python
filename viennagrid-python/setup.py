from distutils.core import setup

setup(
	name='viennagrid-python',
	version='0.1.0',
	author='Jonan CM',
	author_email='jonancm@gmail.com',
	packages=['viennagrid', 'viennagrid.test'],
	url='http://genba.github.io/viennagrid-python/',
	license='LICENSE.txt',
	description='Python module that provides a wrapper around the ViennaGrid library.',
	long_description=open('README.txt').read(),
)
