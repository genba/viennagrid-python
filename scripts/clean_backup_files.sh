#!/bin/sh
for f in `find ./src -iname '*~'`; do
	rm -v "$f"
done
