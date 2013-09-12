# Code examples of `viennagrid`

This directory contains code examples on how to use `viennagrid` and the other modules related to it (`viennagrid.config`, `viennagrid.algorithms`, `viennagrid.accessors` and`viennagrid.io`).

In general, you will prefer to use `viennagrid` over `viennagrid.wrapper`, since `viennagrid` provides a higher-level interface which is more powerful and comfortable to use.

These are all currently available examples in the suggested order of reading:

* `domain_setup.py`: Shows you how to setup a mesh by defining a domain and a segmentation, with vertices, segments and cells. It also shows commonly used attributes and methods on the aforementioned objects.
* `algorithms.py`: Shows you how to apply algorithms to different mesh objects (domains, segments, cells, vertices) in order to process the mesh or to compute relevant information.
* `accessors.py`: Shows you how to assign scalar data to vertices and cells. This can be then used to store relevant information which can also be read/written from/to mesh files using ViennaGrid's readers and writers.
* `io.py`: Shows you how to read and write mesh files using ViennaGrid's readers and writers. It also shows how to read/write scalar data from vertices and the cells from/to the mesh file.
