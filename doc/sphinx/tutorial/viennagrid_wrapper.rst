Using :mod:`viennagrid.wrapper`
===============================

A mesh in ViennaGrid is composed of **cells** which, in turn, are defined by their **vertices**. All of the objects that conform the mesh are stored in a container called **domain**. In addition, a domain may be subdivided into **segments**.

When a domain is defined, all the points that will act as vertices of any cells must be added to the domain. Then, a segmentation object can be created to specify how a domain should be subdivided, and cells can be created within the segments from the vertices that already belong to the domain.

Please, refer to `ViennaGrid's PDF manual <http://viennagrid.sourceforge.net/viennagrid-manual-current.pdf>`_ for further information.

Choosing the appropriate type of domain
---------------------------------------

When using :mod:`viennagrid.wrapper`, as opposed to :mod:`viennagrid`, you must take into account what type of points and domains you need to use. *ViennaGrid for Python* supports the following point types:

* cartesian 1D, 2D and 3D
* cylindrical (3-dimensional)
* polar (2-dimensional)
* spherical (3-dimensional)

all of them using double precision.

In addition, the type of cells (and, thus, of domains and segments) consists in the combination of any of the point types with any of the following topological elements:

* lines
* triangles
* quadrilaterals
* tetrahedra

Hence, you will have to choose what type of points and domains you are going to use depending on your application. In the :doc:`../apiref/viennagrid_wrapper`, you can consult more information on the classes available, but for the sake of this tutorial, please note that you have the following point types available:

* :py:class:`~viennagrid.wrapper.PointCartesian1D` for creating cartesian 1D points
* :py:class:`~viennagrid.wrapper.PointCartesian2D` for creating cartesian 2D points
* :py:class:`~viennagrid.wrapper.PointCartesian3D` for creating cartesian 3D points
* :py:class:`~viennagrid.wrapper.PointCylindrical3D` for creating cylindrical points
* :py:class:`~viennagrid.wrapper.PointPolar2D` for creating polar points
* :py:class:`~viennagrid.wrapper.PointSpherical3D` for creating spherical points

and as many classes for domains, segments and cells as combinations there are of the types of cell with the different types of point. For example, for a triangular mesh, you have the following domain classes:

* :py:class:`~viennagrid.wrapper.TriangularCartesian2D_Domain` for creating triangular domains of cartesian 2D points
* :py:class:`~viennagrid.wrapper.TriangularCartesian3D_Domain` for creating triangular domains of cartesian 3D points
* :py:class:`~viennagrid.wrapper.TriangularCylindrical3D_Domain` for creating triangular domains of cylindrical points
* :py:class:`~viennagrid.wrapper.TriangularPolar2D_Domain` for creating triangular domains of polar points
* :py:class:`~viennagrid.wrapper.TriangularSpherical3D_Domain` for creating triangular domains of spherical points

Defining a domain
-----------------

For our example, we will consider the domain presented in chapter 4 of `ViennaGrid's PDF manual <http://viennagrid.sourceforge.net/viennagrid-manual-current.pdf>`_:

This domain is a triangular domain in the cartesian 2D space which contains 5 vertices and which is subdivided into 2 segments, whereas each segment has two cells.

We thus start by defining a triangular domain of cartesian 2D points: ::

    from viennagrid.wrapper import TriangularCartesian2D_Domain as Domain
    d = Domain()

Adding vertices to a domain
---------------------------

The next step would be to add to the domain the vertices that will form our cells. To see what vertices are contained in the domain, you can use the read-only attribute :py:attr:`~viennagrid.wrapper.TriangularCartesian2D_Domain.vertices`: ::

    >>> d.vertices
    []

If you run this code, you will get an empty list, as you have seen in the interpreter output above, because we haven't added any vertices to the domain yet.

To add vertices, we need to import the appropriate type of point (in our case: :py:class:`~viennagrid.wrapper.PointCartesian2D`) and use the method :py:meth:`~viennagrid.wrapper.TriangularCartesian2D_Domain.make_vertex`, which accepts as its only parameter the point you want to add as a vertex.

Let's add to the domain all the vertices that we need to define our cells: ::

    from viennagrid.wrapper import PointCartesian2D as Point
    d.make_vertex(Point(0, 0)) # Vertex with ID #0
    d.make_vertex(Point(1, 0)) # Vertex with ID #1
    d.make_vertex(Point(2, 0)) # Vertex with ID #2
    d.make_vertex(Point(2, 1)) # Vertex with ID #3
    d.make_vertex(Point(1, 1)) # Vertex with ID #4
    d.make_vertex(Point(0, 1)) # Vertex with ID #5

When you add a vertex to the domain, the vertex gets a unique ID which corresponds to its index in the list of vertices of the domain, as the comments on the right side indicate.

Now that we've added vertices to our domain, we will get a non-empty list whenever we read the attribute :py:attr:`~viennagrid.wrapper.TriangularCartesian2D_Domain.vertices`. If you've followed the tutorial so far, you will get an output similar to this one (although the memory addresses of the objects may be different in your case): ::

    >>> d.vertices
     [<viennagrid.wrapper.PointCartesian2D object at 0x7f15f8362c80>,
      <viennagrid.wrapper.PointCartesian2D object at 0x7f15f8362cf8>,
      <viennagrid.wrapper.PointCartesian2D object at 0x7f15f8362d70>,
      <viennagrid.wrapper.PointCartesian2D object at 0x7f15f8362de8>,
      <viennagrid.wrapper.PointCartesian2D object at 0x7f15f8362e60>,
      <viennagrid.wrapper.PointCartesian2D object at 0x7f15f8362ed8>]

Just for fun, you can attempt to get information on any of the vertices. For example, you could try to get the coordinates of the fourth vertex by doing this:

    >>> v = d.vertices[3]
    >>> v.to_point().coords
    [2.0, 1.0]

Subdividing a domain into segments
----------------------------------

Now that we have a domain and vertices in it, we proceed to create a segmentation object that will define how the domain is divided into segments. When we do this, we must tell the segmentation to what domain it will correspond: ::

    from viennagrid.wrapper import TriangularCartesian2D_Segmentation as Segmentation
    s = Segmentation(d)

Similar to what we did before with the vertices of the domain, we can get a list of the segments contained in a segmentation by using the attribute :py:attr:`~viennagrid.wrapper.TriangularCartesian2D_Segmentation.segments`: ::

    >>> d.segments
    []

Like before, this will return an empty list, since we haven't created any segments in the segmentation yet.

To create addittional segments in a segmentation, we use the method :py:meth:`~viennagrid.wrapper.TriangularCartesian2D_Segmentation.make_segment`: ::

    seg0 = s.make_segment()

This method will create a new segment in the segmentation, and will return the newly created segment object.

We will proceed to create a second segment: ::

    seg1 = s.make_segment()

Now there should be two segments in our segmentation, which we can check by reading the attribute :py:attr:`~viennagrid.wrapper.TriangularCartesian2D_Segmentation.segments` again: ::

    >>> s.segments
    [<viennagrid.wrapper.TriangularCartesian2D_Segment object at 0x258cfc0>,
     <viennagrid.wrapper.TriangularCartesian2D_Segment object at 0x258d880>]

Creating cells within a segment
-------------------------------

To finish with domain setup, the only remaining step is to create cells from the vertices we've added and store the newly created cells in a segment within the domain. For that purpose, we use the method :py:meth:`~viennagrid.wrapper.TriangularCartesian2D_Segment.make_cell`, passing as parameters the vertices that form the cell in the appropriate order: ::

    seg0.make_cell(d.vertices[0], d.vertices[1], d.vertices[5]) # Cell with vertices 0-1-5
    seg0.make_cell(d.vertices[1], d.vertices[4], d.vertices[5]) # Cell with vertices 1-4-5

.. note::

    Please, note that you have to pass the vertices from the domain! It will not work if you pass vertices different than those in the domain!

    However, if you get the vertices from the domain and store them in other variables or pass them as parameters, it will still work, since the reference to the original vertex is preserved.

Thanks to :py:meth:`~viennagrid.wrapper.TriangularCartesian2D_Segment.make_cell`, the cells are now created and stored in the segment. If you want, you can check that they're there by reading the :py:attr:`~viennagrid.wrapper.TriangularCartesian2D_Segment.cells` attribute: ::

    >>> seg0.cells
    [<viennagrid.wrapper.TriangularCartesian2D_Cell object at 0x7f15f833d1a0>,
     <viennagrid.wrapper.TriangularCartesian2D_Cell object at 0x7f15f833d4b0>]

Now, you could even ask what vertices form any of the cells stored within the segment: ::

    >>> seg0.cells[0].vertices
    [<viennagrid.wrapper.PointCartesian2D object at 0x7f15f8362f50>,
     <viennagrid.wrapper.PointCartesian2D object at 0x7f15f836f050>,
     <viennagrid.wrapper.PointCartesian2D object at 0x7f15f836f0c8>]

and even show the coordinates of the cell's vertices: ::

    >>> for v in seg0.cells[0].vertices:
    ...     print v.to_point().coords
    ...
    [0.0, 0.0]
    [1.0, 0.0]
    [0.0, 1.0]

What to do next
---------------

You can find code examples on how to use :mod:`viennagrid.wrapper` in the source code of ViennaGrid for Python, under the directory `doc/examples/viennagrid_wrapper/`.

Once you have your domain set up, you can apply to it any algorithm from :mod:`viennagrid.wrapper`, associate scalar quantities to elements of the domain using accessors, or write the domain to a mesh file for data persistence with the I/O functions from :mod:`viennagrid.wrapper`. For more information on how to use them, take a look at the :doc:`../apiref/viennagrid_wrapper` and the aforementioned code examples.
