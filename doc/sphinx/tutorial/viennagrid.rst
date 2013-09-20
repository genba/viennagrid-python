Using :mod:`viennagrid`
=======================

A mesh in ViennaGrid is composed of **cells** which, in turn, are defined by their **vertices**. All of the objects that conform the mesh are stored in a container called **domain**. In addition, a domain may be subdivided into **segments**.

When a domain is defined, all the points that will act as vertices of any cells must be added to the domain. Then, a segmentation object can be created to specify how a domain should be subdivided, and cells can be created within the segments from the vertices that already belong to the domain.

Please, refer to `ViennaGrid's PDF manual <http://viennagrid.sourceforge.net/viennagrid-manual-current.pdf>`_ for further information.

Defining a domain
-----------------

For our example, we will consider the domain presented in chapter 4 of `ViennaGrid's PDF manual <http://viennagrid.sourceforge.net/viennagrid-manual-current.pdf>`_:

This domain is a triangular domain in the cartesian 2D space which contains 5 vertices and which is subdivided into 2 segments, whereas each segment has two cells.

In order to define a domain with the high-level module :mod:`viennagrid`, you must first create a :class:`~viennagrid.config.Configuration` object that specified the configuration of the domain, i.e., the coordinate system, the dimension of the space and the type of the cells that the domain will contain. Since the :class:`~viennagrid.config.Configuration` class is in the module :mod:`viennagrid.config`, you must import it first. You can then create the configuration object like this: ::

    from viennagrid import config
    cfg = config.Configuration(config.TRIANGLE_TAG, config.CARTESIAN, 2)

where the first parameter indicates the cell type, the second indicates the coordinate system and the third indicates the dimension.

Notice that we use constants defined in :mod:`viennagrid.config` to pass parameters to this function. All constants for the cell tag parameter are described in the section :ref:`cell-tags` and all constants for the coordinate system tag are described in the section :ref:`coordinate-system-tags` of the API reference.

Once the configuration object is created, we can proceed to define a triangular domain of cartesian 2D points based on that configuration: ::

    import viennagrid
    d = viennagrid.Domain(cfg)

Adding vertices to a domain
---------------------------

The next step would be to add to the domain the vertices that will form our cells. To see what vertices are contained in the domain, you can use the read-only attribute :py:attr:`~viennagrid.Domain.vertices`: ::

    >>> d.vertices()
    []

If you run this code, you will get an empty list, as you have seen in the interpreter output above, because we haven't added any vertices to the domain yet.

To add vertices, we need to create points with the :py:class:`~viennagrid.Point` class and use the method :py:meth:`~viennagrid.Domain.make_vertex`, which accepts as its only parameter the point you want to add as a vertex.

Let's add to the domain all the vertices that we need to define our cells: ::

    d.make_vertex(viennagrid.Point(0, 0)) # Vertex with ID #0
    d.make_vertex(viennagrid.Point(1, 0)) # Vertex with ID #1
    d.make_vertex(viennagrid.Point(2, 0)) # Vertex with ID #2
    d.make_vertex(viennagrid.Point(2, 1)) # Vertex with ID #3
    d.make_vertex(viennagrid.Point(1, 1)) # Vertex with ID #4
    d.make_vertex(viennagrid.Point(0, 1)) # Vertex with ID #5

When you add a vertex to the domain, the vertex gets a unique ID which corresponds to its index in the list of vertices of the domain, as the comments on the right side indicate.

Now that we've added vertices to our domain, we will get a non-empty list whenever we read the attribute :py:attr:`~viennagrid.Domain.vertices`. If you've followed the tutorial so far, you will get an output similar to this one (although the memory addresses of the objects may be different in your case): ::

    >>> d.vertices()
    [<viennagrid.Vertex at 0x34c0e10>,
     <viennagrid.Vertex at 0x34c0d10>,
     <viennagrid.Vertex at 0x34c0bd0>,
     <viennagrid.Vertex at 0x34c0c10>,
     <viennagrid.Vertex at 0x34c0d90>,
     <viennagrid.Vertex at 0x34c0dd0>]

Just for fun, you can attempt to get information on any of the vertices. For example, you could try to get the coordinates of the fourth vertex by doing this:

    >>> v = d.vertices[3]
    >>> v.to_point().coords
    [2.0, 1.0]

Subdividing a domain into segments
----------------------------------

Now that we have a domain and vertices in it, we proceed to create a segmentation object that will define how the domain is divided into segments. When we do this, we must tell the segmentation to what domain it will correspond: ::

    s = viennagrid.Segmentation(d)

Similar to what we did before with the vertices of the domain, we can get a list of the segments contained in a segmentation by using the attribute :py:attr:`~viennagrid.Segmentation.segments`: ::

    >>> s.segments()
    []

Like before, this will return an empty list, since we haven't created any segments in the segmentation yet.

To create addittional segments in a segmentation, we use the method :py:meth:`~viennagrid.Segmentation.make_segment`: ::

    seg0 = s.make_segment()

This method will create a new segment in the segmentation, and will return the newly created segment object.

We will proceed to create a second segment: ::

    seg1 = s.make_segment()

Now there should be two segments in our segmentation, which we can check by reading the attribute :py:attr:`~viennagrid.wrapper.TriangularCartesian2D_Segmentation.segments` again: ::

    >>> s.segments()
    [<viennagrid.Segment at 0x34c0f10>, <viennagrid.Segment at 0x34c0f50>]

Creating cells within a segment
-------------------------------

To finish with domain setup, the only remaining step is to create cells from the vertices we've added and store the newly created cells in a segment within the domain. For that purpose, we use the method :py:meth:`~viennagrid.Segment.make_cell`, passing as parameters the vertices that form the cell in the appropriate order: ::

    seg0.make_cell(d.vertices[0], d.vertices[1], d.vertices[5]) # Cell with vertices 0-1-5
    seg0.make_cell(d.vertices[1], d.vertices[4], d.vertices[5]) # Cell with vertices 1-4-5

.. note::

    Please, note that you have to pass the vertices from the domain! It will not work if you pass vertices different than those in the domain!

    However, if you get the vertices from the domain and store them in other variables or pass them as parameters, it will still work, since the reference to the original vertex is preserved.

Thanks to :py:meth:`~viennagrid.Segment.make_cell`, the cells are now created and stored in the segment. If you want, you can check that they're there by reading the :py:attr:`~viennagrid.Segment.cells` attribute: ::

    >>> seg0.cells()
    [<viennagrid.Cell at 0x34c0f90>, <viennagrid.Cell at 0x34cf210>]

Now, you could even ask what vertices form any of the cells stored within the segment: ::

    >>> seg0.cells[0].vertices()
    [<viennagrid.Vertex at 0x34cf790>,
     <viennagrid.Vertex at 0x34cf050>,
     <viennagrid.Vertex at 0x34cf0d0>]

and even show the coordinates of the cell's vertices: ::

    >>> for v in seg0.cells[0].vertices:
    ...     print v.to_point().coords
    ...
    [0.0, 0.0]
    [1.0, 0.0]
    [0.0, 1.0]

What to do next
---------------

You can find code examples on how to use :mod:`viennagrid` in the source code of ViennaGrid for Python, under the directory `doc/examples/viennagrid/`.

Once you have your domain set up, you can apply to it any algorithm from :mod:`viennagrid.algorithms`, associate scalar quantities to elements of the domain with :mod:`viennagrid.accessors`, or write the domain to a mesh file for data persistence using :mod:`viennagrid.io`. For more information on how to use them, take a look at the :doc:`../apiref/viennagrid` and the aforementioned code examples.
