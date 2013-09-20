# Scripts for the development of ViennaGrid for Python

This directory contains useful scripts to assist you during the development of ViennaGrid for Python:

* `bootstrap.py`: This script helps you set up a development environment to compile ViennaGrid for Python.
* `clean_backup_files.sh`: This script removes all the UNIX backup files (files ended in a tilde: '*~') from the source code directory tree.
* `bisect_build_and_test.sh` and `bisect_test.py`: These scripts are used to test that the C++ code is successfully compiled and that the resulting Python extension can be imported into Python. This is pretty useful when there is a bug in the code that prevents it from compiling or from being imported, but you don't know where it is, and you wish to find the it using `git bisect`. To do that, just mark the good and bad commits with `git bisect good` and `git bisect bad`, respectively, and use the script `bisect_build_and_test.sh` to test each commit (by running `git bisect run bisect_build_and_test.sh`). After a while, Git will show you the commit that introduced the bug.
* `run_examples.sh`: This script runs all the example programs from `doc/examples/viennagrid_wrapper` and `doc/examples/viennagrid_wrapper` in order to test that they all run successfully and that there are no errors during their execution.
* `bump_version.py`: This script updates all version number (both of the project and of the dependencies) to a newer version number in all the files of the repository.
