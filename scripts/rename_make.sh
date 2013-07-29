#!/bin/sh

perl -p -i -e 's/create_/make_/g' `ack-grep -l create_ src`
perl -p -i -e 's/create_/make_/g' `ack-grep -l create_ doc`
perl -p -i -e 's/create_/make_/g' `ack-grep -l create_ test`
perl -p -i -e 's/create_/make_/g' `ack-grep -l create_ viennagrid-python`

perl -p -i -e 's/add_vertex/make_vertex/g' `ack-grep -l add_vertex src`
perl -p -i -e 's/add_vertex/make_vertex/g' `ack-grep -l add_vertex doc`
perl -p -i -e 's/add_vertex/make_vertex/g' `ack-grep -l add_vertex test`
perl -p -i -e 's/add_vertex/make_vertex/g' `ack-grep -l add_vertex viennagrid-python`
