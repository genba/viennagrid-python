#!/bin/sh

run_example()
{
	echo "Running $1 ..."
	python "$1"
	echo "Finished"
}

for script in `ls doc/examples/viennagrid_wrapper/*.py`; do
	run_example $script
done

for script in `ls doc/examples/viennagrid/*.py`; do
	run_example $script
done
