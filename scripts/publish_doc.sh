#!/bin/sh
#
# This script builds the documentation and prepares it
# to be uploaded to the GitHub page of the project.
#
# After running this script, you'll have to commit the
# changes and push tge branch to the GitHub repository.

cd build
make doc
cd ..
git checkout gh-pages

mkdir -p doc

# Copy HTML documentation to GitHub page
rm -rf doc/sphinx
rm -rf doc/doxygen
cp -Rv build/doc/sphinx/html/ doc/sphinx
cp -Rv build/doc/doxygen/html/ doc/doxygen
rm doc/sphinx/.buildinfo
rm doc/sphinx/objects.inv

# Rename problematic directories
perl -p -i -e 's/_static/static/g' `ack-grep -l _static doc/sphinx`
perl -p -i -e 's/_sources/sources/g' `ack-grep -l _sources doc/sphinx`
perl -p -i -e 's/_modules/modules/g' `ack-grep -l _modules doc/sphinx`
mv -v doc/sphinx/_static doc/sphinx/static
mv -v doc/sphinx/_sources doc/sphinx/sources
mv -v doc/sphinx/_modules doc/sphinx/modules
