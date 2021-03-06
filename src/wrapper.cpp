/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include <boost/python.hpp>
using namespace boost::python;

#include "points/cartesian.hpp"
#include "points/cylindrical.hpp"
#include "points/polar.hpp"
#include "points/spherical.hpp"

#include "domains/linear.hpp"
#include "domains/triangular.hpp"
#include "domains/quadrilateral.hpp"
#include "domains/tetrahedral.hpp"

#include "segmentations/linear.hpp"
#include "segmentations/triangular.hpp"
#include "segmentations/quadrilateral.hpp"
#include "segmentations/tetrahedral.hpp"

#include "segments/linear.hpp"
#include "segments/triangular.hpp"
#include "segments/quadrilateral.hpp"
#include "segments/tetrahedral.hpp"

#include "cells/linear.hpp"
#include "cells/triangular.hpp"
#include "cells/quadrilateral.hpp"
#include "cells/tetrahedral.hpp"

#include "vertices/linear.hpp"
#include "vertices/triangular.hpp"
#include "vertices/quadrilateral.hpp"
#include "vertices/tetrahedral.hpp"

#include "edges/linear.hpp"
#include "edges/triangular.hpp"
#include "edges/quadrilateral.hpp"
#include "edges/tetrahedral.hpp"

#include "facets/linear.hpp"
#include "facets/triangular.hpp"
#include "facets/quadrilateral.hpp"
#include "facets/tetrahedral.hpp"

#include "accessors/linear.hpp"
#include "accessors/triangular.hpp"
#include "accessors/quadrilateral.hpp"
#include "accessors/tetrahedral.hpp"

#include "fields/linear.hpp"
#include "fields/triangular.hpp"
#include "fields/quadrilateral.hpp"
#include "fields/tetrahedral.hpp"

#include "algorithms/apply_voronoi.hpp"
#include "algorithms/cell_centroid.hpp"
#include "algorithms/cell_circumcenter.hpp"
#include "algorithms/cell_refine.hpp"
#include "algorithms/cell_surface.hpp"
#include "algorithms/cell_volume.hpp"
#include "algorithms/domain_surface.hpp"
#include "algorithms/domain_volume.hpp"
#include "algorithms/is_boundary.hpp"
#include "algorithms/is_interface.hpp"
#include "algorithms/refine.hpp"
#include "algorithms/refine_uniformly.hpp"
#include "algorithms/scale.hpp"
#include "algorithms/segment_surface.hpp"
#include "algorithms/segment_volume.hpp"
#include "algorithms/spanned_volume.hpp"

#include "io/read_netgen.hpp"
#include "io/read_vtk.hpp"
#include "io/write_opendx.hpp"
#include "io/write_vtk.hpp"

#include "exception_translator.hpp"

#include <viennagrid/io/helper.hpp>
using namespace viennagrid::io;

char const * version()
{
	return "0.1.0-rc.5";
}

BOOST_PYTHON_MODULE(wrapper)
{
	def("version", version, "Return the version number of the wrapper.");

	/*************************
	 * EXCEPTION TRANSLATORS *
	 *************************/

	register_exception_translator<cannot_open_file_exception>(ExceptionTranslator<cannot_open_file_exception>(PyExc_IOError));
	register_exception_translator<bad_file_format_exception>(ExceptionTranslator<bad_file_format_exception>(PyExc_RuntimeError));
	
	/***********************
	 * WRAPPERS FOR POINTS *
	 ***********************/
	
	// CARTESIAN 1D
	
	class_<PointCartesian1D>("PointCartesian1D")
		.def(init<double>())
		.add_property("dim", &PointCartesian1D::get_dimension, "Read-only property that returns the dimension of the space where the point is defined.")
		.add_property("coord_system", &PointCartesian1D::get_coord_system, "Read-only property that returns the coordinate system of the space where the point is defined.")
		.add_property("coords", &PointCartesian1D::get_coord_list, "Read-only property that returns a list containing all the coordinates of the point.")
		.def("get_coord", &PointCartesian1D::get_coord, "Get the value of the coordinate at given index in the coordinate list.")
		.def("set_coord", &PointCartesian1D::set_coord, "Set the value of the coordinate at given index in the coordinate list.")
		.def(self + self) // "Add two points."
		.def(self - self) // "Subtract two points."
		.def(self * double()) // "Multiply a point by a scalar (the result is the product of each coordinate by the scalar)."
		.def(self / double()) // "Divide a point by a scalar (the result is the division of each coordinate by the scalar)."
		.def(-self)
		.def("inner_prod", &PointCartesian1D::inner_prod)
		.def("norm_1", &PointCartesian1D::norm_1)
		.def("norm_2", &PointCartesian1D::norm_2)
		.def("norm_inf", &PointCartesian1D::norm_inf)
	;
	
	// CARTESIAN 2D
	
	class_<PointCartesian2D>("PointCartesian2D")
		.def(init<double, double>())
		.add_property("dim", &PointCartesian2D::get_dimension, "Read-only property that returns the dimension of the space where the point is defined.")
		.add_property("coord_system", &PointCartesian2D::get_coord_system, "Read-only property that returns the coordinate system of the space where the point is defined.")
		.add_property("coords", &PointCartesian2D::get_coord_list, "Read-only property that returns a list containing all the coordinates of the point.")
		.def("get_coord", &PointCartesian2D::get_coord, "Get the value of the coordinate at given index in the coordinate list.")
		.def("set_coord", &PointCartesian2D::set_coord, "Set the value of the coordinate at given index in the coordinate list.")
		.def(self + self) // "Add two points."
		.def(self - self) // "Subtract two points."
		.def(self * double()) // "Multiply a point by a scalar (the result is the product of each coordinate by the scalar)."
		.def(self / double()) // "Divide a point by a scalar (the result is the division of each coordinate by the scalar)."
		.def(-self)
		.def("inner_prod", &PointCartesian2D::inner_prod)
		.def("to_polar", &PointCartesian2D::to_polar)
		.def("norm_1", &PointCartesian2D::norm_1)
		.def("norm_2", &PointCartesian2D::norm_2)
		.def("norm_inf", &PointCartesian2D::norm_inf)
	;
	
	// CARTESIAN 3D
	
	class_<PointCartesian3D>("PointCartesian3D")
		.def(init<double, double, double>())
		.add_property("dim", &PointCartesian3D::get_dimension, "Read-only property that returns the dimension of the space where the point is defined.")
		.add_property("coord_system", &PointCartesian3D::get_coord_system, "Read-only property that returns the coordinate system of the space where the point is defined.")
		.add_property("coords", &PointCartesian3D::get_coord_list, "Read-only property that returns a list containing all the coordinates of the point.")
		.def("get_coord", &PointCartesian3D::get_coord, "Get the value of the coordinate at given index in the coordinate list.")
		.def("set_coord", &PointCartesian3D::set_coord, "Set the value of the coordinate at given index in the coordinate list.")
		.def(self + self) // "Add two points."
		.def(self - self) // "Subtract two points."
		.def(self * double()) // "Multiply a point by a scalar (the result is the product of each coordinate by the scalar)."
		.def(self / double()) // "Divide a point by a scalar (the result is the division of each coordinate by the scalar)."
		.def(-self)
		.def("inner_prod", &PointCartesian3D::inner_prod)
		.def("cross_prod", &PointCartesian3D::cross_prod)
		.def("to_cylindrical", &PointCartesian3D::to_cylindrical)
		.def("to_spherical", &PointCartesian3D::to_spherical)
		.def("norm_1", &PointCartesian3D::norm_1)
		.def("norm_2", &PointCartesian3D::norm_2)
		.def("norm_inf", &PointCartesian3D::norm_inf)
	;
	
	// CYLINDRICAL (3D)
	
	class_<PointCylindrical3D>("PointCylindrical3D")
		.def(init<double, double, double>())
		.add_property("dim", &PointCylindrical3D::get_dimension, "Read-only property that returns the dimension of the space where the point is defined.")
		.add_property("coord_system", &PointCylindrical3D::get_coord_system, "Read-only property that returns the coordinate system of the space where the point is defined.")
		.add_property("coords", &PointCylindrical3D::get_coord_list, "Read-only property that returns a list containing all the coordinates of the point.")
		.def("get_coord", &PointCylindrical3D::get_coord, "Get the value of the coordinate at given index in the coordinate list.")
		.def("set_coord", &PointCylindrical3D::set_coord, "Set the value of the coordinate at given index in the coordinate list.")
		.def(self + self) // "Add two points."
		.def(self - self) // "Subtract two points."
		.def(self * double()) // "Multiply a point by a scalar (the result is the product of each coordinate by the scalar)."
		.def(self / double()) // "Divide a point by a scalar (the result is the division of each coordinate by the scalar)."
		.def(-self)
		.def("to_cartesian", &PointCylindrical3D::to_cartesian)
		.def("to_spherical", &PointCylindrical3D::to_spherical)
		.def("norm_1", &PointCylindrical3D::norm_1)
		.def("norm_2", &PointCylindrical3D::norm_2)
		.def("norm_inf", &PointCylindrical3D::norm_inf)
	;
	
	// POLAR (2D)
	
	class_<PointPolar2D>("PointPolar2D")
		.def(init<double, double>())
		.add_property("dim", &PointPolar2D::get_dimension, "Read-only property that returns the dimension of the space where the point is defined.")
		.add_property("coord_system", &PointPolar2D::get_coord_system, "Read-only property that returns the coordinate system of the space where the point is defined.")
		.add_property("coords", &PointPolar2D::get_coord_list, "Read-only property that returns a list containing all the coordinates of the point.")
		.def("get_coord", &PointPolar2D::get_coord, "Get the value of the coordinate at given index in the coordinate list.")
		.def("set_coord", &PointPolar2D::set_coord, "Set the value of the coordinate at given index in the coordinate list.")
		.def(self + self) // "Add two points."
		.def(self - self) // "Subtract two points."
		.def(self * double()) // "Multiply a point by a scalar (the result is the product of each coordinate by the scalar)."
		.def(self / double()) // "Divide a point by a scalar (the result is the division of each coordinate by the scalar)."
		.def(-self)
		.def("to_cartesian", &PointPolar2D::to_cartesian)
		.def("norm_1", &PointPolar2D::norm_1)
		.def("norm_2", &PointPolar2D::norm_2)
		.def("norm_inf", &PointPolar2D::norm_inf)
	;
	
	// SPHERICAL (3D)
	
	class_<PointSpherical3D>("PointSpherical3D")
		.def(init<double, double, double>())
		.add_property("dim", &PointSpherical3D::get_dimension, "Read-only property that returns the dimension of the space where the point is defined.")
		.add_property("coord_system", &PointSpherical3D::get_coord_system, "Read-only property that returns the coordinate system of the space where the point is defined.")
		.add_property("coords", &PointSpherical3D::get_coord_list, "Read-only property that returns a list containing all the coordinates of the point.")
		.def("get_coord", &PointSpherical3D::get_coord, "Get the value of the coordinate at given index in the coordinate list.")
		.def("set_coord", &PointSpherical3D::set_coord, "Set the value of the coordinate at given index in the coordinate list.")
		.def(self + self) // "Add two points."
		.def(self - self) // "Subtract two points."
		.def(self * double()) // "Multiply a point by a scalar (the result is the product of each coordinate by the scalar)."
		.def(self / double()) // "Divide a point by a scalar (the result is the division of each coordinate by the scalar)."
		.def(-self)
		.def("to_cartesian", &PointSpherical3D::to_cartesian)
		.def("to_cylindrical", &PointSpherical3D::to_cylindrical)
		.def("norm_1", &PointSpherical3D::norm_1)
		.def("norm_2", &PointSpherical3D::norm_2)
		.def("norm_inf", &PointSpherical3D::norm_inf)
	;
	
	/**********************
	 * LINEAR DOMAINS *
	 **********************/
	
	class_<LinearCartesian1D_Domain>("LinearCartesian1D_Domain")
		.add_property("num_vertices", &LinearCartesian1D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &LinearCartesian1D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &LinearCartesian1D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &LinearCartesian1D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &LinearCartesian1D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &LinearCartesian1D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearCartesian1D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	class_<LinearCartesian2D_Domain>("LinearCartesian2D_Domain")
		.add_property("num_vertices", &LinearCartesian2D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &LinearCartesian2D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &LinearCartesian2D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &LinearCartesian2D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &LinearCartesian2D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &LinearCartesian2D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearCartesian2D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	class_<LinearCartesian3D_Domain>("LinearCartesian3D_Domain")
		.add_property("num_vertices", &LinearCartesian3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &LinearCartesian3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &LinearCartesian3D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &LinearCartesian3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &LinearCartesian3D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &LinearCartesian3D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearCartesian3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	class_<LinearCylindrical3D_Domain>("LinearCylindrical3D_Domain")
		.add_property("num_vertices", &LinearCylindrical3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &LinearCylindrical3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &LinearCylindrical3D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &LinearCylindrical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &LinearCylindrical3D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &LinearCylindrical3D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearCylindrical3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	class_<LinearPolar2D_Domain>("LinearPolar2D_Domain")
		.add_property("num_vertices", &LinearPolar2D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &LinearPolar2D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &LinearPolar2D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &LinearPolar2D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &LinearPolar2D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &LinearPolar2D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearPolar2D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	class_<LinearSpherical3D_Domain>("LinearSpherical3D_Domain")
		.add_property("num_vertices", &LinearSpherical3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &LinearSpherical3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &LinearSpherical3D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &LinearSpherical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &LinearSpherical3D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &LinearSpherical3D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearSpherical3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	/************************
	 * LINEAR SEGMENTATIONS *
	 ************************/
	
	class_<LinearCartesian1D_Segmentation>("LinearCartesian1D_Segmentation", init<LinearCartesian1D_Domain &>())
		.add_property("num_segments", &LinearCartesian1D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &LinearCartesian1D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &LinearCartesian1D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	class_<LinearCartesian2D_Segmentation>("LinearCartesian2D_Segmentation", init<LinearCartesian2D_Domain &>())
		.add_property("num_segments", &LinearCartesian2D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &LinearCartesian2D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &LinearCartesian2D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	class_<LinearCartesian3D_Segmentation>("LinearCartesian3D_Segmentation", init<LinearCartesian3D_Domain &>())
		.add_property("num_segments", &LinearCartesian3D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &LinearCartesian3D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &LinearCartesian3D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	class_<LinearCylindrical3D_Segmentation>("LinearCylindrical3D_Segmentation", init<LinearCylindrical3D_Domain &>())
		.add_property("num_segments", &LinearCylindrical3D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &LinearCylindrical3D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &LinearCylindrical3D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	class_<LinearPolar2D_Segmentation>("LinearPolar2D_Segmentation", init<LinearPolar2D_Domain &>())
		.add_property("num_segments", &LinearPolar2D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &LinearPolar2D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &LinearPolar2D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	class_<LinearSpherical3D_Segmentation>("LinearSpherical3D_Segmentation", init<LinearSpherical3D_Domain &>())
		.add_property("num_segments", &LinearSpherical3D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &LinearSpherical3D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &LinearSpherical3D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	/*******************
	 * LINEAR SEGMENTS *
	 *******************/
	
	class_<LinearCartesian1D_Segment>("LinearCartesian1D_Segment", init<LinearCartesian1D_Segment_t &, LinearCartesian1D_Segmentation &>())
		.add_property("num_cells", &LinearCartesian1D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &LinearCartesian1D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearCartesian1D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<LinearCartesian2D_Segment>("LinearCartesian2D_Segment", init<LinearCartesian2D_Segment_t &, LinearCartesian2D_Segmentation &>())
		.add_property("num_cells", &LinearCartesian2D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &LinearCartesian2D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearCartesian2D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<LinearCartesian3D_Segment>("LinearCartesian3D_Segment", init<LinearCartesian3D_Segment_t &, LinearCartesian3D_Segmentation &>())
		.add_property("num_cells", &LinearCartesian3D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &LinearCartesian3D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearCartesian3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<LinearCylindrical3D_Segment>("LinearCylindrical3D_Segment", init<LinearCylindrical3D_Segment_t &, LinearCylindrical3D_Segmentation &>())
		.add_property("num_cells", &LinearCylindrical3D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &LinearCylindrical3D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearCylindrical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<LinearPolar2D_Segment>("LinearPolar2D_Segment", init<LinearPolar2D_Segment_t &, LinearPolar2D_Segmentation &>())
		.add_property("num_cells", &LinearPolar2D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &LinearPolar2D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearPolar2D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<LinearSpherical3D_Segment>("LinearSpherical3D_Segment", init<LinearSpherical3D_Segment_t &, LinearSpherical3D_Segmentation &>())
		.add_property("num_cells", &LinearSpherical3D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &LinearSpherical3D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearSpherical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	/****************
	 * LINEAR CELLS *
	 ****************/
	
	class_<LinearCartesian1D_Cell>("LinearCartesian1D_Cell", init<LinearCartesian1D_Cell_t &>())
		.add_property("num_vertices", &LinearCartesian1D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &LinearCartesian1D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &LinearCartesian1D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
	;
	
	class_<LinearCartesian2D_Cell>("LinearCartesian2D_Cell", init<LinearCartesian2D_Cell_t &>())
		.add_property("num_vertices", &LinearCartesian2D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &LinearCartesian2D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &LinearCartesian2D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
	;
	
	class_<LinearCartesian3D_Cell>("LinearCartesian3D_Cell", init<LinearCartesian3D_Cell_t &>())
		.add_property("num_vertices", &LinearCartesian3D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &LinearCartesian3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &LinearCartesian3D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
	;
	
	class_<LinearCylindrical3D_Cell>("LinearCylindrical3D_Cell", init<LinearCylindrical3D_Cell_t &>())
		.add_property("num_vertices", &LinearCylindrical3D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &LinearCylindrical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &LinearCylindrical3D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
	;
	
	class_<LinearPolar2D_Cell>("LinearPolar2D_Cell", init<LinearPolar2D_Cell_t &>())
		.add_property("num_vertices", &LinearPolar2D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &LinearPolar2D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &LinearPolar2D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
	;
	
	class_<LinearSpherical3D_Cell>("LinearSpherical3D_Cell", init<LinearSpherical3D_Cell_t &>())
		.add_property("num_vertices", &LinearSpherical3D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &LinearSpherical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &LinearSpherical3D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
	;
	
	/*******************
	 * LINEAR VERTICES *
	 *******************/
	
	class_<LinearCartesian1D_Vertex>("LinearCartesian1D_Vertex", init<LinearCartesian1D_Vertex_t &>())
		.def("to_point", &LinearCartesian1D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	class_<LinearCartesian2D_Vertex>("LinearCartesian2D_Vertex", init<LinearCartesian2D_Vertex_t &>())
		.def("to_point", &LinearCartesian2D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	class_<LinearCartesian3D_Vertex>("LinearCartesian3D_Vertex", init<LinearCartesian3D_Vertex_t &>())
		.def("to_point", &LinearCartesian3D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	class_<LinearCylindrical3D_Vertex>("LinearCylindrical3D_Vertex", init<LinearCylindrical3D_Vertex_t &>())
		.def("to_point", &LinearCylindrical3D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	class_<LinearPolar2D_Vertex>("LinearPolar2D_Vertex", init<LinearPolar2D_Vertex_t &>())
		.def("to_point", &LinearPolar2D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	class_<LinearSpherical3D_Vertex>("LinearSpherical3D_Vertex", init<LinearSpherical3D_Vertex_t &>())
		.def("to_point", &LinearSpherical3D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	/****************
	 * LINEAR EDGES *
	 ****************/
	
	class_<LinearCartesian1D_Edge>("LinearCartesian1D_Edge", init<LinearCartesian1D_Edge_t &>())
	;
	
	class_<LinearCartesian2D_Edge>("LinearCartesian2D_Edge", init<LinearCartesian2D_Edge_t &>())
	;
	
	class_<LinearCartesian3D_Edge>("LinearCartesian3D_Edge", init<LinearCartesian3D_Edge_t &>())
	;
	
	class_<LinearCylindrical3D_Edge>("LinearCylindrical3D_Edge", init<LinearCylindrical3D_Edge_t &>())
	;
	
	class_<LinearPolar2D_Edge>("LinearPolar2D_Edge", init<LinearPolar2D_Edge_t &>())
	;
	
	class_<LinearSpherical3D_Edge>("LinearSpherical3D_Edge", init<LinearSpherical3D_Edge_t &>())
	;
	
	/*****************
	 * LINEAR FACETS *
	 *****************/
	
	class_<LinearCartesian1D_Facet>("LinearCartesian1D_Facet", init<LinearCartesian1D_Facet_t &>())
	;
	
	class_<LinearCartesian2D_Facet>("LinearCartesian2D_Facet", init<LinearCartesian2D_Facet_t &>())
	;
	
	class_<LinearCartesian3D_Facet>("LinearCartesian3D_Facet", init<LinearCartesian3D_Facet_t &>())
	;
	
	class_<LinearCylindrical3D_Facet>("LinearCylindrical3D_Facet", init<LinearCylindrical3D_Facet_t &>())
	;
	
	class_<LinearPolar2D_Facet>("LinearPolar2D_Facet", init<LinearPolar2D_Facet_t &>())
	;
	
	class_<LinearSpherical3D_Facet>("LinearSpherical3D_Facet", init<LinearSpherical3D_Facet_t &>())
	;
	
	/***************************
	 * LINEAR VERTEX ACCESSORS *
	 ***************************/
	
	class_<LinearCartesian1D_Vertex_Accessor>("LinearCartesian1D_Vertex_Accessor")
		.def("get_value", &LinearCartesian1D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &LinearCartesian1D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<LinearCartesian2D_Vertex_Accessor>("LinearCartesian2D_Vertex_Accessor")
		.def("get_value", &LinearCartesian2D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &LinearCartesian2D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<LinearCartesian3D_Vertex_Accessor>("LinearCartesian3D_Vertex_Accessor")
		.def("get_value", &LinearCartesian3D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &LinearCartesian3D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<LinearCylindrical3D_Vertex_Accessor>("LinearCylindrical3D_Vertex_Accessor")
		.def("get_value", &LinearCylindrical3D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &LinearCylindrical3D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<LinearPolar2D_Vertex_Accessor>("LinearPolar2D_Vertex_Accessor")
		.def("get_value", &LinearPolar2D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &LinearPolar2D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<LinearSpherical3D_Vertex_Accessor>("LinearSpherical3D_Vertex_Accessor")
		.def("get_value", &LinearSpherical3D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &LinearSpherical3D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	/*************************
	 * LINEAR CELL ACCESSORS *
	 *************************/
	
	class_<LinearCartesian1D_Cell_Accessor>("LinearCartesian1D_Cell_Accessor")
		.def("get_value", &LinearCartesian1D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &LinearCartesian1D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	class_<LinearCartesian2D_Cell_Accessor>("LinearCartesian2D_Cell_Accessor")
		.def("get_value", &LinearCartesian2D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &LinearCartesian2D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	class_<LinearCartesian3D_Cell_Accessor>("LinearCartesian3D_Cell_Accessor")
		.def("get_value", &LinearCartesian3D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &LinearCartesian3D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	class_<LinearCylindrical3D_Cell_Accessor>("LinearCylindrical3D_Cell_Accessor")
		.def("get_value", &LinearCylindrical3D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &LinearCylindrical3D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	class_<LinearPolar2D_Cell_Accessor>("LinearPolar2D_Cell_Accessor")
		.def("get_value", &LinearPolar2D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &LinearPolar2D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	class_<LinearSpherical3D_Cell_Accessor>("LinearSpherical3D_Cell_Accessor")
		.def("get_value", &LinearSpherical3D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &LinearSpherical3D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	/************************
	 * LINEAR VERTEX FIELDS *
	 ************************/
	
	class_<LinearCartesian1D_Vertex_Field>("LinearCartesian1D_Vertex_Field", init<double>())
		.def("get_value", &LinearCartesian1D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &LinearCartesian1D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<LinearCartesian2D_Vertex_Field>("LinearCartesian2D_Vertex_Field", init<double>())
		.def("get_value", &LinearCartesian2D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &LinearCartesian2D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<LinearCartesian3D_Vertex_Field>("LinearCartesian3D_Vertex_Field", init<double>())
		.def("get_value", &LinearCartesian3D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &LinearCartesian3D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<LinearCylindrical3D_Vertex_Field>("LinearCylindrical3D_Vertex_Field", init<double>())
		.def("get_value", &LinearCylindrical3D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &LinearCylindrical3D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<LinearPolar2D_Vertex_Field>("LinearPolar2D_Vertex_Field", init<double>())
		.def("get_value", &LinearPolar2D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &LinearPolar2D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<LinearSpherical3D_Vertex_Field>("LinearSpherical3D_Vertex_Field", init<double>())
		.def("get_value", &LinearSpherical3D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &LinearSpherical3D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	/**********************
	 * LINEAR CELL FIELDS *
	 **********************/
	
	class_<LinearCartesian1D_Cell_Field>("LinearCartesian1D_Cell_Field", init<double>())
		.def("get_value", &LinearCartesian1D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &LinearCartesian1D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	class_<LinearCartesian2D_Cell_Field>("LinearCartesian2D_Cell_Field", init<double>())
		.def("get_value", &LinearCartesian2D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &LinearCartesian2D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	class_<LinearCartesian3D_Cell_Field>("LinearCartesian3D_Cell_Field", init<double>())
		.def("get_value", &LinearCartesian3D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &LinearCartesian3D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	class_<LinearCylindrical3D_Cell_Field>("LinearCylindrical3D_Cell_Field", init<double>())
		.def("get_value", &LinearCylindrical3D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &LinearCylindrical3D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	class_<LinearPolar2D_Cell_Field>("LinearPolar2D_Cell_Field", init<double>())
		.def("get_value", &LinearPolar2D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &LinearPolar2D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	class_<LinearSpherical3D_Cell_Field>("LinearSpherical3D_Cell_Field", init<double>())
		.def("get_value", &LinearSpherical3D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &LinearSpherical3D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	/**********************
	 * TRIANGULAR DOMAINS *
	 **********************/
	
	class_<TriangularCartesian2D_Domain>("TriangularCartesian2D_Domain")
		.add_property("num_vertices", &TriangularCartesian2D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &TriangularCartesian2D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &TriangularCartesian2D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &TriangularCartesian2D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &TriangularCartesian2D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &TriangularCartesian2D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularCartesian2D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	class_<TriangularCartesian3D_Domain>("TriangularCartesian3D_Domain")
		.add_property("num_vertices", &TriangularCartesian3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &TriangularCartesian3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &TriangularCartesian3D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &TriangularCartesian3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &TriangularCartesian3D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &TriangularCartesian3D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularCartesian3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	class_<TriangularCylindrical3D_Domain>("TriangularCylindrical3D_Domain")
		.add_property("num_vertices", &TriangularCylindrical3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &TriangularCylindrical3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &TriangularCylindrical3D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &TriangularCylindrical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &TriangularCylindrical3D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &TriangularCylindrical3D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularCylindrical3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	class_<TriangularPolar2D_Domain>("TriangularPolar2D_Domain")
		.add_property("num_vertices", &TriangularPolar2D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &TriangularPolar2D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &TriangularPolar2D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &TriangularPolar2D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &TriangularPolar2D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &TriangularPolar2D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularPolar2D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	class_<TriangularSpherical3D_Domain>("TriangularSpherical3D_Domain")
		.add_property("num_vertices", &TriangularSpherical3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &TriangularSpherical3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &TriangularSpherical3D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &TriangularSpherical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &TriangularSpherical3D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &TriangularSpherical3D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularSpherical3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	/****************************
	 * TRIANGULAR SEGMENTATIONS *
	 ****************************/
	
	class_<TriangularCartesian2D_Segmentation>("TriangularCartesian2D_Segmentation", init<TriangularCartesian2D_Domain &>())
		.add_property("num_segments", &TriangularCartesian2D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &TriangularCartesian2D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &TriangularCartesian2D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	class_<TriangularCartesian3D_Segmentation>("TriangularCartesian3D_Segmentation", init<TriangularCartesian3D_Domain &>())
		.add_property("num_segments", &TriangularCartesian3D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &TriangularCartesian3D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &TriangularCartesian3D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	class_<TriangularCylindrical3D_Segmentation>("TriangularCylindrical3D_Segmentation", init<TriangularCylindrical3D_Domain &>())
		.add_property("num_segments", &TriangularCylindrical3D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &TriangularCylindrical3D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &TriangularCylindrical3D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	class_<TriangularPolar2D_Segmentation>("TriangularPolar2D_Segmentation", init<TriangularPolar2D_Domain &>())
		.add_property("num_segments", &TriangularPolar2D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &TriangularPolar2D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &TriangularPolar2D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	class_<TriangularSpherical3D_Segmentation>("TriangularSpherical3D_Segmentation", init<TriangularSpherical3D_Domain &>())
		.add_property("num_segments", &TriangularSpherical3D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &TriangularSpherical3D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &TriangularSpherical3D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	/***********************
	 * TRIANGULAR SEGMENTS *
	 ***********************/
	
	class_<TriangularCartesian2D_Segment>("TriangularCartesian2D_Segment", init<TriangularCartesian2D_Segment_t &, TriangularCartesian2D_Segmentation &>())
		.add_property("num_cells", &TriangularCartesian2D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &TriangularCartesian2D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularCartesian2D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TriangularCartesian3D_Segment>("TriangularCartesian3D_Segment", init<TriangularCartesian3D_Segment_t &, TriangularCartesian3D_Segmentation &>())
		.add_property("num_cells", &TriangularCartesian3D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &TriangularCartesian3D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularCartesian3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TriangularCylindrical3D_Segment>("TriangularCylindrical3D_Segment", init<TriangularCylindrical3D_Segment_t &, TriangularCylindrical3D_Segmentation &>())
		.add_property("num_cells", &TriangularCylindrical3D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &TriangularCylindrical3D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularCylindrical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TriangularPolar2D_Segment>("TriangularPolar2D_Segment", init<TriangularPolar2D_Segment_t &, TriangularPolar2D_Segmentation &>())
		.add_property("num_cells", &TriangularPolar2D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &TriangularPolar2D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularPolar2D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TriangularSpherical3D_Segment>("TriangularSpherical3D_Segment", init<TriangularSpherical3D_Segment_t &, TriangularSpherical3D_Segmentation &>())
		.add_property("num_cells", &TriangularSpherical3D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &TriangularSpherical3D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularSpherical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	/********************
	 * TRIANGULAR CELLS *
	 ********************/
	
	class_<TriangularCartesian2D_Cell>("TriangularCartesian2D_Cell", init<TriangularCartesian2D_Cell_t &>())
		.add_property("num_vertices", &TriangularCartesian2D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &TriangularCartesian2D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &TriangularCartesian2D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
		.add_property("edges", &TriangularCartesian2D_Cell::get_edges, "Read-only property that returns a list containing all the edges that form the cell.")
	;
	
	class_<TriangularCartesian3D_Cell>("TriangularCartesian3D_Cell", init<TriangularCartesian3D_Cell_t &>())
		.add_property("num_vertices", &TriangularCartesian3D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &TriangularCartesian3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &TriangularCartesian3D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
		.add_property("edges", &TriangularCartesian3D_Cell::get_edges, "Read-only property that returns a list containing all the edges that form the cell.")
	;
	
	class_<TriangularCylindrical3D_Cell>("TriangularCylindrical3D_Cell", init<TriangularCylindrical3D_Cell_t &>())
		.add_property("num_vertices", &TriangularCylindrical3D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &TriangularCylindrical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &TriangularCylindrical3D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
		.add_property("edges", &TriangularCylindrical3D_Cell::get_edges, "Read-only property that returns a list containing all the edges that form the cell.")
	;
	
	class_<TriangularPolar2D_Cell>("TriangularPolar2D_Cell", init<TriangularPolar2D_Cell_t &>())
		.add_property("num_vertices", &TriangularPolar2D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &TriangularPolar2D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &TriangularPolar2D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
		.add_property("edges", &TriangularPolar2D_Cell::get_edges, "Read-only property that returns a list containing all the edges that form the cell.")
	;
	
	class_<TriangularSpherical3D_Cell>("TriangularSpherical3D_Cell", init<TriangularSpherical3D_Cell_t &>())
		.add_property("num_vertices", &TriangularSpherical3D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &TriangularSpherical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &TriangularSpherical3D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
		.add_property("edges", &TriangularSpherical3D_Cell::get_edges, "Read-only property that returns a list containing all the edges that form the cell.")
	;
	
	/***********************
	 * TRIANGULAR VERTICES *
	 ***********************/
	
	class_<TriangularCartesian2D_Vertex>("TriangularCartesian2D_Vertex", init<TriangularCartesian2D_Vertex_t &>())
		.def("to_point", &TriangularCartesian2D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	class_<TriangularCartesian3D_Vertex>("TriangularCartesian3D_Vertex", init<TriangularCartesian3D_Vertex_t &>())
		.def("to_point", &TriangularCartesian3D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	class_<TriangularCylindrical3D_Vertex>("TriangularCylindrical3D_Vertex", init<TriangularCylindrical3D_Vertex_t &>())
		.def("to_point", &TriangularCylindrical3D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	class_<TriangularPolar2D_Vertex>("TriangularPolar2D_Vertex", init<TriangularPolar2D_Vertex_t &>())
		.def("to_point", &TriangularPolar2D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	class_<TriangularSpherical3D_Vertex>("TriangularSpherical3D_Vertex", init<TriangularSpherical3D_Vertex_t &>())
		.def("to_point", &TriangularSpherical3D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	/********************
	 * TRIANGULAR EDGES *
	 ********************/
	
	class_<TriangularCartesian2D_Edge>("TriangularCartesian2D_Edge", init<TriangularCartesian2D_Edge_t &>())
	;
	
	class_<TriangularCartesian3D_Edge>("TriangularCartesian3D_Edge", init<TriangularCartesian3D_Edge_t &>())
	;
	
	class_<TriangularCylindrical3D_Edge>("TriangularCylindrical3D_Edge", init<TriangularCylindrical3D_Edge_t &>())
	;
	
	class_<TriangularPolar2D_Edge>("TriangularPolar2D_Edge", init<TriangularPolar2D_Edge_t &>())
	;
	
	class_<TriangularSpherical3D_Edge>("TriangularSpherical3D_Edge", init<TriangularSpherical3D_Edge_t &>())
	;
	
	/*********************
	 * TRIANGULAR FACETS *
	 *********************/
	
	class_<TriangularCartesian2D_Facet>("TriangularCartesian2D_Facet", init<TriangularCartesian2D_Facet_t &>())
	;
	
	class_<TriangularCartesian3D_Facet>("TriangularCartesian3D_Facet", init<TriangularCartesian3D_Facet_t &>())
	;
	
	class_<TriangularCylindrical3D_Facet>("TriangularCylindrical3D_Facet", init<TriangularCylindrical3D_Facet_t &>())
	;
	
	class_<TriangularPolar2D_Facet>("TriangularPolar2D_Facet", init<TriangularPolar2D_Facet_t &>())
	;
	
	class_<TriangularSpherical3D_Facet>("TriangularSpherical3D_Facet", init<TriangularSpherical3D_Facet_t &>())
	;
	
	/*******************************
	 * TRIANGULAR VERTEX ACCESSORS *
	 *******************************/
	
	class_<TriangularCartesian2D_Vertex_Accessor>("TriangularCartesian2D_Vertex_Accessor")
		.def("get_value", &TriangularCartesian2D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &TriangularCartesian2D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<TriangularCartesian3D_Vertex_Accessor>("TriangularCartesian3D_Vertex_Accessor")
		.def("get_value", &TriangularCartesian3D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &TriangularCartesian3D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<TriangularCylindrical3D_Vertex_Accessor>("TriangularCylindrical3D_Vertex_Accessor")
		.def("get_value", &TriangularCylindrical3D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &TriangularCylindrical3D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<TriangularPolar2D_Vertex_Accessor>("TriangularPolar2D_Vertex_Accessor")
		.def("get_value", &TriangularPolar2D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &TriangularPolar2D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<TriangularSpherical3D_Vertex_Accessor>("TriangularSpherical3D_Vertex_Accessor")
		.def("get_value", &TriangularSpherical3D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &TriangularSpherical3D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	/*****************************
	 * TRIANGULAR CELL ACCESSORS *
	 *****************************/
	
	class_<TriangularCartesian2D_Cell_Accessor>("TriangularCartesian2D_Cell_Accessor")
		.def("get_value", &TriangularCartesian2D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &TriangularCartesian2D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	class_<TriangularCartesian3D_Cell_Accessor>("TriangularCartesian3D_Cell_Accessor")
		.def("get_value", &TriangularCartesian3D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &TriangularCartesian3D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	class_<TriangularCylindrical3D_Cell_Accessor>("TriangularCylindrical3D_Cell_Accessor")
		.def("get_value", &TriangularCylindrical3D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &TriangularCylindrical3D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	class_<TriangularPolar2D_Cell_Accessor>("TriangularPolar2D_Cell_Accessor")
		.def("get_value", &TriangularPolar2D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &TriangularPolar2D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	class_<TriangularSpherical3D_Cell_Accessor>("TriangularSpherical3D_Cell_Accessor")
		.def("get_value", &TriangularSpherical3D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &TriangularSpherical3D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	/****************************
	 * TRIANGULAR VERTEX FIELDS *
	 ****************************/
	
	class_<TriangularCartesian2D_Vertex_Field>("TriangularCartesian2D_Vertex_Field", init<double>())
		.def("get_value", &TriangularCartesian2D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &TriangularCartesian2D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<TriangularCartesian3D_Vertex_Field>("TriangularCartesian3D_Vertex_Field", init<double>())
		.def("get_value", &TriangularCartesian3D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &TriangularCartesian3D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<TriangularCylindrical3D_Vertex_Field>("TriangularCylindrical3D_Vertex_Field", init<double>())
		.def("get_value", &TriangularCylindrical3D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &TriangularCylindrical3D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<TriangularPolar2D_Vertex_Field>("TriangularPolar2D_Vertex_Field", init<double>())
		.def("get_value", &TriangularPolar2D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &TriangularPolar2D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<TriangularSpherical3D_Vertex_Field>("TriangularSpherical3D_Vertex_Field", init<double>())
		.def("get_value", &TriangularSpherical3D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &TriangularSpherical3D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	/**************************
	 * TRIANGULAR CELL FIELDS *
	 **************************/
	
	class_<TriangularCartesian2D_Cell_Field>("TriangularCartesian2D_Cell_Field", init<double>())
		.def("get_value", &TriangularCartesian2D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &TriangularCartesian2D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	class_<TriangularCartesian3D_Cell_Field>("TriangularCartesian3D_Cell_Field", init<double>())
		.def("get_value", &TriangularCartesian3D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &TriangularCartesian3D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	class_<TriangularCylindrical3D_Cell_Field>("TriangularCylindrical3D_Cell_Field", init<double>())
		.def("get_value", &TriangularCylindrical3D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &TriangularCylindrical3D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	class_<TriangularPolar2D_Cell_Field>("TriangularPolar2D_Cell_Field", init<double>())
		.def("get_value", &TriangularPolar2D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &TriangularPolar2D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	class_<TriangularSpherical3D_Cell_Field>("TriangularSpherical3D_Cell_Field", init<double>())
		.def("get_value", &TriangularSpherical3D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &TriangularSpherical3D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	/*************************
	 * QUADRILATERAL DOMAINS *
	 *************************/
	
	class_<QuadrilateralCartesian2D_Domain>("QuadrilateralCartesian2D_Domain")
		.add_property("num_vertices", &QuadrilateralCartesian2D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &QuadrilateralCartesian2D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &QuadrilateralCartesian2D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &QuadrilateralCartesian2D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &QuadrilateralCartesian2D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &QuadrilateralCartesian2D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralCartesian2D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	class_<QuadrilateralCartesian3D_Domain>("QuadrilateralCartesian3D_Domain")
		.add_property("num_vertices", &QuadrilateralCartesian3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &QuadrilateralCartesian3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &QuadrilateralCartesian3D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &QuadrilateralCartesian3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &QuadrilateralCartesian3D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &QuadrilateralCartesian3D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralCartesian3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	class_<QuadrilateralCylindrical3D_Domain>("QuadrilateralCylindrical3D_Domain")
		.add_property("num_vertices", &QuadrilateralCylindrical3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &QuadrilateralCylindrical3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &QuadrilateralCylindrical3D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &QuadrilateralCylindrical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &QuadrilateralCylindrical3D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &QuadrilateralCylindrical3D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralCylindrical3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	class_<QuadrilateralPolar2D_Domain>("QuadrilateralPolar2D_Domain")
		.add_property("num_vertices", &QuadrilateralPolar2D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &QuadrilateralPolar2D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &QuadrilateralPolar2D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &QuadrilateralPolar2D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &QuadrilateralPolar2D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &QuadrilateralPolar2D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralPolar2D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	class_<QuadrilateralSpherical3D_Domain>("QuadrilateralSpherical3D_Domain")
		.add_property("num_vertices", &QuadrilateralSpherical3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &QuadrilateralSpherical3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &QuadrilateralSpherical3D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &QuadrilateralSpherical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &QuadrilateralSpherical3D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &QuadrilateralSpherical3D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralSpherical3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	/*******************************
	 * QUADRILATERAL SEGMENTATIONS *
	 *******************************/
	
	class_<QuadrilateralCartesian2D_Segmentation>("QuadrilateralCartesian2D_Segmentation", init<QuadrilateralCartesian2D_Domain &>())
		.add_property("num_segments", &QuadrilateralCartesian2D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &QuadrilateralCartesian2D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &QuadrilateralCartesian2D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	class_<QuadrilateralCartesian3D_Segmentation>("QuadrilateralCartesian3D_Segmentation", init<QuadrilateralCartesian3D_Domain &>())
		.add_property("num_segments", &QuadrilateralCartesian3D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &QuadrilateralCartesian3D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &QuadrilateralCartesian3D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	class_<QuadrilateralCylindrical3D_Segmentation>("QuadrilateralCylindrical3D_Segmentation", init<QuadrilateralCylindrical3D_Domain &>())
		.add_property("num_segments", &QuadrilateralCylindrical3D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &QuadrilateralCylindrical3D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &QuadrilateralCylindrical3D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	class_<QuadrilateralPolar2D_Segmentation>("QuadrilateralPolar2D_Segmentation", init<QuadrilateralPolar2D_Domain &>())
		.add_property("num_segments", &QuadrilateralPolar2D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &QuadrilateralPolar2D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &QuadrilateralPolar2D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	class_<QuadrilateralSpherical3D_Segmentation>("QuadrilateralSpherical3D_Segmentation", init<QuadrilateralSpherical3D_Domain &>())
		.add_property("num_segments", &QuadrilateralSpherical3D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &QuadrilateralSpherical3D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &QuadrilateralSpherical3D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	/**************************
	 * QUADRILATERAL SEGMENTS *
	 **************************/
	
	class_<QuadrilateralCartesian2D_Segment>("QuadrilateralCartesian2D_Segment", init<QuadrilateralCartesian2D_Segment_t &, QuadrilateralCartesian2D_Segmentation &>())
		.add_property("num_cells", &QuadrilateralCartesian2D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &QuadrilateralCartesian2D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralCartesian2D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<QuadrilateralCartesian3D_Segment>("QuadrilateralCartesian3D_Segment", init<QuadrilateralCartesian3D_Segment_t &, QuadrilateralCartesian3D_Segmentation &>())
		.add_property("num_cells", &QuadrilateralCartesian3D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &QuadrilateralCartesian3D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralCartesian3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<QuadrilateralCylindrical3D_Segment>("QuadrilateralCylindrical3D_Segment", init<QuadrilateralCylindrical3D_Segment_t &, QuadrilateralCylindrical3D_Segmentation &>())
		.add_property("num_cells", &QuadrilateralCylindrical3D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &QuadrilateralCylindrical3D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralCylindrical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<QuadrilateralPolar2D_Segment>("QuadrilateralPolar2D_Segment", init<QuadrilateralPolar2D_Segment_t &, QuadrilateralPolar2D_Segmentation &>())
		.add_property("num_cells", &QuadrilateralPolar2D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &QuadrilateralPolar2D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralPolar2D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<QuadrilateralSpherical3D_Segment>("QuadrilateralSpherical3D_Segment", init<QuadrilateralSpherical3D_Segment_t &, QuadrilateralSpherical3D_Segmentation &>())
		.add_property("num_cells", &QuadrilateralSpherical3D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &QuadrilateralSpherical3D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralSpherical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	/***********************
	 * QUADRILATERAL CELLS *
	 ***********************/
	
	class_<QuadrilateralCartesian2D_Cell>("QuadrilateralCartesian2D_Cell", init<QuadrilateralCartesian2D_Cell_t &>())
		.add_property("num_vertices", &QuadrilateralCartesian2D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &QuadrilateralCartesian2D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &QuadrilateralCartesian2D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
		.add_property("edges", &QuadrilateralCartesian2D_Cell::get_edges, "Read-only property that returns a list containing all the edges that form the cell.")
	;
	
	class_<QuadrilateralCartesian3D_Cell>("QuadrilateralCartesian3D_Cell", init<QuadrilateralCartesian3D_Cell_t &>())
		.add_property("num_vertices", &QuadrilateralCartesian3D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &QuadrilateralCartesian3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &QuadrilateralCartesian3D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
		.add_property("edges", &QuadrilateralCartesian3D_Cell::get_edges, "Read-only property that returns a list containing all the edges that form the cell.")
	;
	
	class_<QuadrilateralCylindrical3D_Cell>("QuadrilateralCylindrical3D_Cell", init<QuadrilateralCylindrical3D_Cell_t &>())
		.add_property("num_vertices", &QuadrilateralCylindrical3D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &QuadrilateralCylindrical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &QuadrilateralCylindrical3D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
		.add_property("edges", &QuadrilateralCylindrical3D_Cell::get_edges, "Read-only property that returns a list containing all the edges that form the cell.")
	;
	
	class_<QuadrilateralPolar2D_Cell>("QuadrilateralPolar2D_Cell", init<QuadrilateralPolar2D_Cell_t &>())
		.add_property("num_vertices", &QuadrilateralPolar2D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &QuadrilateralPolar2D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &QuadrilateralPolar2D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
		.add_property("edges", &QuadrilateralPolar2D_Cell::get_edges, "Read-only property that returns a list containing all the edges that form the cell.")
	;
	
	class_<QuadrilateralSpherical3D_Cell>("QuadrilateralSpherical3D_Cell", init<QuadrilateralSpherical3D_Cell_t &>())
		.add_property("num_vertices", &QuadrilateralSpherical3D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &QuadrilateralSpherical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &QuadrilateralSpherical3D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
		.add_property("edges", &QuadrilateralSpherical3D_Cell::get_edges, "Read-only property that returns a list containing all the edges that form the cell.")
	;
	
	/**************************
	 * QUADRILATERAL VERTICES *
	 **************************/
	
	class_<QuadrilateralCartesian2D_Vertex>("QuadrilateralCartesian2D_Vertex", init<QuadrilateralCartesian2D_Vertex_t &>())
		.def("to_point", &QuadrilateralCartesian2D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	class_<QuadrilateralCartesian3D_Vertex>("QuadrilateralCartesian3D_Vertex", init<QuadrilateralCartesian3D_Vertex_t &>())
		.def("to_point", &QuadrilateralCartesian3D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	class_<QuadrilateralCylindrical3D_Vertex>("QuadrilateralCylindrical3D_Vertex", init<QuadrilateralCylindrical3D_Vertex_t &>())
		.def("to_point", &QuadrilateralCylindrical3D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	class_<QuadrilateralPolar2D_Vertex>("QuadrilateralPolar2D_Vertex", init<QuadrilateralPolar2D_Vertex_t &>())
		.def("to_point", &QuadrilateralPolar2D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	class_<QuadrilateralSpherical3D_Vertex>("QuadrilateralSpherical3D_Vertex", init<QuadrilateralSpherical3D_Vertex_t &>())
		.def("to_point", &QuadrilateralSpherical3D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	/***********************
	 * QUADRILATERAL EDGES *
	 ***********************/
	
	class_<QuadrilateralCartesian2D_Edge>("QuadrilateralCartesian2D_Edge", init<QuadrilateralCartesian2D_Edge_t &>())
	;
	
	class_<QuadrilateralCartesian3D_Edge>("QuadrilateralCartesian3D_Edge", init<QuadrilateralCartesian3D_Edge_t &>())
	;
	
	class_<QuadrilateralCylindrical3D_Edge>("QuadrilateralCylindrical3D_Edge", init<QuadrilateralCylindrical3D_Edge_t &>())
	;
	
	class_<QuadrilateralPolar2D_Edge>("QuadrilateralPolar2D_Edge", init<QuadrilateralPolar2D_Edge_t &>())
	;
	
	class_<QuadrilateralSpherical3D_Edge>("QuadrilateralSpherical3D_Edge", init<QuadrilateralSpherical3D_Edge_t &>())
	;
	
	/************************
	 * QUADRILATERAL FACETS *
	 ************************/
	
	class_<QuadrilateralCartesian2D_Facet>("QuadrilateralCartesian2D_Facet", init<QuadrilateralCartesian2D_Facet_t &>())
	;
	
	class_<QuadrilateralCartesian3D_Facet>("QuadrilateralCartesian3D_Facet", init<QuadrilateralCartesian3D_Facet_t &>())
	;
	
	class_<QuadrilateralCylindrical3D_Facet>("QuadrilateralCylindrical3D_Facet", init<QuadrilateralCylindrical3D_Facet_t &>())
	;
	
	class_<QuadrilateralPolar2D_Facet>("QuadrilateralPolar2D_Facet", init<QuadrilateralPolar2D_Facet_t &>())
	;
	
	class_<QuadrilateralSpherical3D_Facet>("QuadrilateralSpherical3D_Facet", init<QuadrilateralSpherical3D_Facet_t &>())
	;
	
	/**********************************
	 * QUADRILATERAL VERTEX ACCESSORS *
	 **********************************/
	
	class_<QuadrilateralCartesian2D_Vertex_Accessor>("QuadrilateralCartesian2D_Vertex_Accessor")
		.def("get_value", &QuadrilateralCartesian2D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &QuadrilateralCartesian2D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<QuadrilateralCartesian3D_Vertex_Accessor>("QuadrilateralCartesian3D_Vertex_Accessor")
		.def("get_value", &QuadrilateralCartesian3D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &QuadrilateralCartesian3D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<QuadrilateralCylindrical3D_Vertex_Accessor>("QuadrilateralCylindrical3D_Vertex_Accessor")
		.def("get_value", &QuadrilateralCylindrical3D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &QuadrilateralCylindrical3D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<QuadrilateralPolar2D_Vertex_Accessor>("QuadrilateralPolar2D_Vertex_Accessor")
		.def("get_value", &QuadrilateralPolar2D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &QuadrilateralPolar2D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<QuadrilateralSpherical3D_Vertex_Accessor>("QuadrilateralSpherical3D_Vertex_Accessor")
		.def("get_value", &QuadrilateralSpherical3D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &QuadrilateralSpherical3D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	/********************************
	 * QUADRILATERAL CELL ACCESSORS *
	 ********************************/
	
	class_<QuadrilateralCartesian2D_Cell_Accessor>("QuadrilateralCartesian2D_Cell_Accessor")
		.def("get_value", &QuadrilateralCartesian2D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &QuadrilateralCartesian2D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	class_<QuadrilateralCartesian3D_Cell_Accessor>("QuadrilateralCartesian3D_Cell_Accessor")
		.def("get_value", &QuadrilateralCartesian3D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &QuadrilateralCartesian3D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	class_<QuadrilateralCylindrical3D_Cell_Accessor>("QuadrilateralCylindrical3D_Cell_Accessor")
		.def("get_value", &QuadrilateralCylindrical3D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &QuadrilateralCylindrical3D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	class_<QuadrilateralPolar2D_Cell_Accessor>("QuadrilateralPolar2D_Cell_Accessor")
		.def("get_value", &QuadrilateralPolar2D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &QuadrilateralPolar2D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	class_<QuadrilateralSpherical3D_Cell_Accessor>("QuadrilateralSpherical3D_Cell_Accessor")
		.def("get_value", &QuadrilateralSpherical3D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &QuadrilateralSpherical3D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	/*******************************
	 * QUADRILATERAL VERTEX FIELDS *
	 *******************************/
	
	class_<QuadrilateralCartesian2D_Vertex_Field>("QuadrilateralCartesian2D_Vertex_Field", init<double>())
		.def("get_value", &QuadrilateralCartesian2D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &QuadrilateralCartesian2D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<QuadrilateralCartesian3D_Vertex_Field>("QuadrilateralCartesian3D_Vertex_Field", init<double>())
		.def("get_value", &QuadrilateralCartesian3D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &QuadrilateralCartesian3D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<QuadrilateralCylindrical3D_Vertex_Field>("QuadrilateralCylindrical3D_Vertex_Field", init<double>())
		.def("get_value", &QuadrilateralCylindrical3D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &QuadrilateralCylindrical3D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<QuadrilateralPolar2D_Vertex_Field>("QuadrilateralPolar2D_Vertex_Field", init<double>())
		.def("get_value", &QuadrilateralPolar2D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &QuadrilateralPolar2D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<QuadrilateralSpherical3D_Vertex_Field>("QuadrilateralSpherical3D_Vertex_Field", init<double>())
		.def("get_value", &QuadrilateralSpherical3D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &QuadrilateralSpherical3D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	/*****************************
	 * QUADRILATERAL CELL FIELDS *
	 *****************************/
	
	class_<QuadrilateralCartesian2D_Cell_Field>("QuadrilateralCartesian2D_Cell_Field", init<double>())
		.def("get_value", &QuadrilateralCartesian2D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &QuadrilateralCartesian2D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	class_<QuadrilateralCartesian3D_Cell_Field>("QuadrilateralCartesian3D_Cell_Field", init<double>())
		.def("get_value", &QuadrilateralCartesian3D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &QuadrilateralCartesian3D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	class_<QuadrilateralCylindrical3D_Cell_Field>("QuadrilateralCylindrical3D_Cell_Field", init<double>())
		.def("get_value", &QuadrilateralCylindrical3D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &QuadrilateralCylindrical3D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	class_<QuadrilateralPolar2D_Cell_Field>("QuadrilateralPolar2D_Cell_Field", init<double>())
		.def("get_value", &QuadrilateralPolar2D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &QuadrilateralPolar2D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	class_<QuadrilateralSpherical3D_Cell_Field>("QuadrilateralSpherical3D_Cell_Field", init<double>())
		.def("get_value", &QuadrilateralSpherical3D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &QuadrilateralSpherical3D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	/*************************
	 * TETRAHEDRAL DOMAINS *
	 *************************/
	
	class_<TetrahedralCartesian3D_Domain>("TetrahedralCartesian3D_Domain")
		.add_property("num_vertices", &TetrahedralCartesian3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &TetrahedralCartesian3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &TetrahedralCartesian3D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &TetrahedralCartesian3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &TetrahedralCartesian3D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &TetrahedralCartesian3D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &TetrahedralCartesian3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	class_<TetrahedralCylindrical3D_Domain>("TetrahedralCylindrical3D_Domain")
		.add_property("num_vertices", &TetrahedralCylindrical3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &TetrahedralCylindrical3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &TetrahedralCylindrical3D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &TetrahedralCylindrical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &TetrahedralCylindrical3D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &TetrahedralCylindrical3D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &TetrahedralCylindrical3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	class_<TetrahedralSpherical3D_Domain>("TetrahedralSpherical3D_Domain")
		.add_property("num_vertices", &TetrahedralSpherical3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &TetrahedralSpherical3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices in the domain.")
		.def("make_vertex", &TetrahedralSpherical3D_Domain::make_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &TetrahedralSpherical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.add_property("num_cells", &TetrahedralSpherical3D_Domain::num_cells, "Read-only property that returns the number of cells in the domain.")
		.def("make_cell", &TetrahedralSpherical3D_Domain::make_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("cells", &TetrahedralSpherical3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain.")
	;
	
	/*****************************
	 * TETRAHEDRAL SEGMENTATIONS *
	 *****************************/
	
	class_<TetrahedralCartesian3D_Segmentation>("TetrahedralCartesian3D_Segmentation", init<TetrahedralCartesian3D_Domain &>())
		.add_property("num_segments", &TetrahedralCartesian3D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &TetrahedralCartesian3D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &TetrahedralCartesian3D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	class_<TetrahedralCylindrical3D_Segmentation>("TetrahedralCylindrical3D_Segmentation", init<TetrahedralCylindrical3D_Domain &>())
		.add_property("num_segments", &TetrahedralCylindrical3D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &TetrahedralCylindrical3D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &TetrahedralCylindrical3D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	class_<TetrahedralSpherical3D_Segmentation>("TetrahedralSpherical3D_Segmentation", init<TetrahedralSpherical3D_Domain &>())
		.add_property("num_segments", &TetrahedralSpherical3D_Segmentation::num_segments, "Read-only property that returns the number of segments in the segmentation.")
		.def("make_segment", &TetrahedralSpherical3D_Segmentation::make_segment, "Create a new segment in the segmentation.")
		.add_property("segments", &TetrahedralSpherical3D_Segmentation::get_segments, "Read-only property that returns a list containing all the segments in the segmentation.")
	;
	
	/************************
	 * TETRAHEDRAL SEGMENTS *
	 ************************/
	
	class_<TetrahedralCartesian3D_Segment>("TetrahedralCartesian3D_Segment", init<TetrahedralCartesian3D_Segment_t &, TetrahedralCartesian3D_Segmentation &>())
		.add_property("num_cells", &TetrahedralCartesian3D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &TetrahedralCartesian3D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TetrahedralCartesian3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TetrahedralCylindrical3D_Segment>("TetrahedralCylindrical3D_Segment", init<TetrahedralCylindrical3D_Segment_t &, TetrahedralCylindrical3D_Segmentation &>())
		.add_property("num_cells", &TetrahedralCylindrical3D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &TetrahedralCylindrical3D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TetrahedralCylindrical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TetrahedralSpherical3D_Segment>("TetrahedralSpherical3D_Segment", init<TetrahedralSpherical3D_Segment_t &, TetrahedralSpherical3D_Segmentation &>())
		.add_property("num_cells", &TetrahedralSpherical3D_Segment::num_cells, "Read-only property that returns the number of cells in the segment.")
		.def("make_cell", &TetrahedralSpherical3D_Segment::make_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TetrahedralSpherical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	/*********************
	 * TETRAHEDRAL CELLS *
	 *********************/
	
	class_<TetrahedralCartesian3D_Cell>("TetrahedralCartesian3D_Cell", init<TetrahedralCartesian3D_Cell_t &>())
		.add_property("num_vertices", &TetrahedralCartesian3D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &TetrahedralCartesian3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &TetrahedralCartesian3D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
		.add_property("edges", &TetrahedralCartesian3D_Cell::get_edges, "Read-only property that returns a list containing all the edges that form the cell.")
	;
	
	class_<TetrahedralCylindrical3D_Cell>("TetrahedralCylindrical3D_Cell", init<TetrahedralCylindrical3D_Cell_t &>())
		.add_property("num_vertices", &TetrahedralCylindrical3D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &TetrahedralCylindrical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &TetrahedralCylindrical3D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
		.add_property("edges", &TetrahedralCylindrical3D_Cell::get_edges, "Read-only property that returns a list containing all the edges that form the cell.")
	;
	
	class_<TetrahedralSpherical3D_Cell>("TetrahedralSpherical3D_Cell", init<TetrahedralSpherical3D_Cell_t &>())
		.add_property("num_vertices", &TetrahedralSpherical3D_Cell::num_vertices, "Read-only property that returns the number of vertices that define the cell.")
		.add_property("vertices", &TetrahedralSpherical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
		.add_property("facets", &TetrahedralSpherical3D_Cell::get_facets, "Read-only property that returns a list containing all the facets that form the cell.")
		.add_property("edges", &TetrahedralSpherical3D_Cell::get_edges, "Read-only property that returns a list containing all the edges that form the cell.")
	;
	
	/************************
	 * TETRAHEDRAL VERTICES *
	 ************************/
	
	class_<TetrahedralCartesian3D_Vertex>("TetrahedralCartesian3D_Vertex", init<TetrahedralCartesian3D_Vertex_t &>())
		.def("to_point", &TetrahedralCartesian3D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	class_<TetrahedralCylindrical3D_Vertex>("TetrahedralCylindrical3D_Vertex", init<TetrahedralCylindrical3D_Vertex_t &>())
		.def("to_point", &TetrahedralCylindrical3D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	class_<TetrahedralSpherical3D_Vertex>("TetrahedralSpherical3D_Vertex", init<TetrahedralSpherical3D_Vertex_t &>())
		.def("to_point", &TetrahedralSpherical3D_Vertex::to_point, "Convert the vertex object to a point object.")
	;
	
	/*********************
	 * TETRAHEDRAL EDGES *
	 *********************/
	
	class_<TetrahedralCartesian3D_Edge>("TetrahedralCartesian3D_Edge", init<TetrahedralCartesian3D_Edge_t &>())
	;
	
	class_<TetrahedralCylindrical3D_Edge>("TetrahedralCylindrical3D_Edge", init<TetrahedralCylindrical3D_Edge_t &>())
	;
	
	class_<TetrahedralSpherical3D_Edge>("TetrahedralSpherical3D_Edge", init<TetrahedralSpherical3D_Edge_t &>())
	;
	
	/**********************
	 * TETRAHEDRAL FACETS *
	 **********************/
	
	class_<TetrahedralCartesian3D_Facet>("TetrahedralCartesian3D_Facet", init<TetrahedralCartesian3D_Facet_t &>())
	;
	
	class_<TetrahedralCylindrical3D_Facet>("TetrahedralCylindrical3D_Facet", init<TetrahedralCylindrical3D_Facet_t &>())
	;
	
	class_<TetrahedralSpherical3D_Facet>("TetrahedralSpherical3D_Facet", init<TetrahedralSpherical3D_Facet_t &>())
	;
	
	/********************************
	 * TETRAHEDRAL VERTEX ACCESSORS *
	 ********************************/
	
	class_<TetrahedralCartesian3D_Vertex_Accessor>("TetrahedralCartesian3D_Vertex_Accessor")
		.def("get_value", &TetrahedralCartesian3D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &TetrahedralCartesian3D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<TetrahedralCylindrical3D_Vertex_Accessor>("TetrahedralCylindrical3D_Vertex_Accessor")
		.def("get_value", &TetrahedralCylindrical3D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &TetrahedralCylindrical3D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<TetrahedralSpherical3D_Vertex_Accessor>("TetrahedralSpherical3D_Vertex_Accessor")
		.def("get_value", &TetrahedralSpherical3D_Vertex_Accessor::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &TetrahedralSpherical3D_Vertex_Accessor::set_value, "Set the value associated with the given vertex.")
	;
	
	/******************************
	 * TETRAHEDRAL CELL ACCESSORS *
	 ******************************/
	
	class_<TetrahedralCartesian3D_Cell_Accessor>("TetrahedralCartesian3D_Cell_Accessor")
		.def("get_value", &TetrahedralCartesian3D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &TetrahedralCartesian3D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	class_<TetrahedralCylindrical3D_Cell_Accessor>("TetrahedralCylindrical3D_Cell_Accessor")
		.def("get_value", &TetrahedralCylindrical3D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &TetrahedralCylindrical3D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	class_<TetrahedralSpherical3D_Cell_Accessor>("TetrahedralSpherical3D_Cell_Accessor")
		.def("get_value", &TetrahedralSpherical3D_Cell_Accessor::get_value, "Get the value associated with the given cell.")
		.def("set_value", &TetrahedralSpherical3D_Cell_Accessor::set_value, "Set the value associated with the given cell.")
	;
	
	/*****************************
	 * TETRAHEDRAL VERTEX FIELDS *
	 *****************************/
	
	class_<TetrahedralCartesian3D_Vertex_Field>("TetrahedralCartesian3D_Vertex_Field", init<double>())
		.def("get_value", &TetrahedralCartesian3D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &TetrahedralCartesian3D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<TetrahedralCylindrical3D_Vertex_Field>("TetrahedralCylindrical3D_Vertex_Field", init<double>())
		.def("get_value", &TetrahedralCylindrical3D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &TetrahedralCylindrical3D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	class_<TetrahedralSpherical3D_Vertex_Field>("TetrahedralSpherical3D_Vertex_Field", init<double>())
		.def("get_value", &TetrahedralSpherical3D_Vertex_Field::get_value, "Get the value associated with the given vertex.")
		.def("set_value", &TetrahedralSpherical3D_Vertex_Field::set_value, "Set the value associated with the given vertex.")
	;
	
	/***************************
	 * TETRAHEDRAL CELL FIELDS *
	 ***************************/
	
	class_<TetrahedralCartesian3D_Cell_Field>("TetrahedralCartesian3D_Cell_Field", init<double>())
		.def("get_value", &TetrahedralCartesian3D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &TetrahedralCartesian3D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	class_<TetrahedralCylindrical3D_Cell_Field>("TetrahedralCylindrical3D_Cell_Field", init<double>())
		.def("get_value", &TetrahedralCylindrical3D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &TetrahedralCylindrical3D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	class_<TetrahedralSpherical3D_Cell_Field>("TetrahedralSpherical3D_Cell_Field", init<double>())
		.def("get_value", &TetrahedralSpherical3D_Cell_Field::get_value, "Get the value associated with the given cell.")
		.def("set_value", &TetrahedralSpherical3D_Cell_Field::set_value, "Set the value associated with the given cell.")
	;
	
	/*****************
	 * APPLY_VORONOI *
	 *****************/
	
	def("apply_voronoi", &LinearCartesian1D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	def("apply_voronoi", &LinearCartesian2D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	def("apply_voronoi", &LinearCartesian3D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	def("apply_voronoi", &LinearCylindrical3D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	def("apply_voronoi", &LinearPolar2D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	def("apply_voronoi", &LinearSpherical3D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	
	def("apply_voronoi", &TriangularCartesian2D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	def("apply_voronoi", &TriangularCartesian3D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	def("apply_voronoi", &TriangularCylindrical3D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	def("apply_voronoi", &TriangularPolar2D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	def("apply_voronoi", &TriangularSpherical3D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	
	def("apply_voronoi", &QuadrilateralCartesian2D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	def("apply_voronoi", &QuadrilateralCartesian3D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	def("apply_voronoi", &QuadrilateralCylindrical3D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	def("apply_voronoi", &QuadrilateralPolar2D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	def("apply_voronoi", &QuadrilateralSpherical3D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	
	def("apply_voronoi", &TetrahedralCartesian3D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	def("apply_voronoi", &TetrahedralCylindrical3D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	def("apply_voronoi", &TetrahedralSpherical3D_Domain_apply_voronoi, "Compute Voronoi information of the given domain.");
	
	/************
	 * CENTROID *
	 ************/
	
	def("centroid", &LinearCartesian1D_Cell_centroid, "Compute the centroid of a cell.");
	def("centroid", &LinearCartesian2D_Cell_centroid, "Compute the centroid of a cell.");
	def("centroid", &LinearCartesian3D_Cell_centroid, "Compute the centroid of a cell.");
	def("centroid", &LinearCylindrical3D_Cell_centroid, "Compute the centroid of a cell.");
	def("centroid", &LinearPolar2D_Cell_centroid, "Compute the centroid of a cell.");
	def("centroid", &LinearSpherical3D_Cell_centroid, "Compute the centroid of a cell.");
	
	def("centroid", &TriangularCartesian2D_Cell_centroid, "Compute the centroid of a cell.");
	def("centroid", &TriangularCartesian3D_Cell_centroid, "Compute the centroid of a cell.");
	def("centroid", &TriangularCylindrical3D_Cell_centroid, "Compute the centroid of a cell.");
	def("centroid", &TriangularPolar2D_Cell_centroid, "Compute the centroid of a cell.");
	def("centroid", &TriangularSpherical3D_Cell_centroid, "Compute the centroid of a cell.");
	
	def("centroid", &QuadrilateralCartesian2D_Cell_centroid, "Compute the centroid of a cell.");
	def("centroid", &QuadrilateralCartesian3D_Cell_centroid, "Compute the centroid of a cell.");
	def("centroid", &QuadrilateralCylindrical3D_Cell_centroid, "Compute the centroid of a cell.");
	def("centroid", &QuadrilateralPolar2D_Cell_centroid, "Compute the centroid of a cell.");
	def("centroid", &QuadrilateralSpherical3D_Cell_centroid, "Compute the centroid of a cell.");
	
	def("centroid", &TetrahedralCartesian3D_Cell_centroid, "Compute the centroid of a cell.");
	def("centroid", &TetrahedralCylindrical3D_Cell_centroid, "Compute the centroid of a cell.");
	def("centroid", &TetrahedralSpherical3D_Cell_centroid, "Compute the centroid of a cell.");
	
	/****************
	 * CIRCUMCENTER *
	 ****************/
	
	def("circumcenter", &LinearCartesian1D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	def("circumcenter", &LinearCartesian2D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	def("circumcenter", &LinearCartesian3D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	def("circumcenter", &LinearCylindrical3D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	def("circumcenter", &LinearPolar2D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	def("circumcenter", &LinearSpherical3D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	
	def("circumcenter", &TriangularCartesian2D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	def("circumcenter", &TriangularCartesian3D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	def("circumcenter", &TriangularCylindrical3D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	def("circumcenter", &TriangularPolar2D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	def("circumcenter", &TriangularSpherical3D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	
	def("circumcenter", &QuadrilateralCartesian2D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	def("circumcenter", &QuadrilateralCartesian3D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	def("circumcenter", &QuadrilateralCylindrical3D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	def("circumcenter", &QuadrilateralPolar2D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	def("circumcenter", &QuadrilateralSpherical3D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	
	def("circumcenter", &TetrahedralCartesian3D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	def("circumcenter", &TetrahedralCylindrical3D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	def("circumcenter", &TetrahedralSpherical3D_Cell_circumcenter, "Compute the circumcenter of a cell.");
	
	/***************
	 * CELL_REFINE *
	 ***************/
	
	def("cell_refine", &TriangularCartesian2D_Domain_cell_refine, "Refine all cells of the given domain and segmentation which match a given predicate.");
	def("cell_refine", &TriangularCartesian3D_Domain_cell_refine, "Refine all cells of the given domain and segmentation which match a given predicate.");
	def("cell_refine", &TriangularCylindrical3D_Domain_cell_refine, "Refine all cells of the given domain and segmentation which match a given predicate.");
	def("cell_refine", &TriangularPolar2D_Domain_cell_refine, "Refine all cells of the given domain and segmentation which match a given predicate.");
	def("cell_refine", &TriangularSpherical3D_Domain_cell_refine, "Refine all cells of the given domain and segmentation which match a given predicate.");
	
	def("cell_refine", &TetrahedralCartesian3D_Domain_cell_refine, "Refine all cells of the given domain and segmentation which match a given predicate.");
	def("cell_refine", &TetrahedralCylindrical3D_Domain_cell_refine, "Refine all cells of the given domain and segmentation which match a given predicate.");
	def("cell_refine", &TetrahedralSpherical3D_Domain_cell_refine, "Refine all cells of the given domain and segmentation which match a given predicate.");
	
	/****************
	 * CELL-SURFACE *
	 ****************/
	
	def("surface", &LinearCartesian1D_Cell_surface, "Calculate the surface of a cell.");
	def("surface", &LinearCartesian2D_Cell_surface, "Calculate the surface of a cell.");
	def("surface", &LinearCartesian3D_Cell_surface, "Calculate the surface of a cell.");
	def("surface", &LinearCylindrical3D_Cell_surface, "Calculate the surface of a cell.");
	def("surface", &LinearPolar2D_Cell_surface, "Calculate the surface of a cell.");
	def("surface", &LinearSpherical3D_Cell_surface, "Calculate the surface of a cell.");
	
	def("surface", &TriangularCartesian2D_Cell_surface, "Calculate the surface of a cell.");
	def("surface", &TriangularCartesian3D_Cell_surface, "Calculate the surface of a cell.");
	def("surface", &TriangularCylindrical3D_Cell_surface, "Calculate the surface of a cell.");
	def("surface", &TriangularPolar2D_Cell_surface, "Calculate the surface of a cell.");
	def("surface", &TriangularSpherical3D_Cell_surface, "Calculate the surface of a cell.");
	
	def("surface", &QuadrilateralCartesian2D_Cell_surface, "Calculate the surface of a cell.");
	def("surface", &QuadrilateralCartesian3D_Cell_surface, "Calculate the surface of a cell.");
	def("surface", &QuadrilateralCylindrical3D_Cell_surface, "Calculate the surface of a cell.");
	def("surface", &QuadrilateralPolar2D_Cell_surface, "Calculate the surface of a cell.");
	def("surface", &QuadrilateralSpherical3D_Cell_surface, "Calculate the surface of a cell.");
	
	def("surface", &TetrahedralCartesian3D_Cell_surface, "Calculate the surface of a cell.");
	def("surface", &TetrahedralCylindrical3D_Cell_surface, "Calculate the surface of a cell.");
	def("surface", &TetrahedralSpherical3D_Cell_surface, "Calculate the surface of a cell.");
	
	/***************
	 * CELL-VOLUME *
	 ***************/
	
	def("volume", &LinearCartesian1D_Cell_volume, "Calculate the volume of a cell.");
	def("volume", &LinearCartesian2D_Cell_volume, "Calculate the volume of a cell.");
	def("volume", &LinearCartesian3D_Cell_volume, "Calculate the volume of a cell.");
	def("volume", &LinearCylindrical3D_Cell_volume, "Calculate the volume of a cell.");
	def("volume", &LinearPolar2D_Cell_volume, "Calculate the volume of a cell.");
	def("volume", &LinearSpherical3D_Cell_volume, "Calculate the volume of a cell.");
	
	def("volume", &TriangularCartesian2D_Cell_volume, "Calculate the volume of a cell.");
	def("volume", &TriangularCartesian3D_Cell_volume, "Calculate the volume of a cell.");
	def("volume", &TriangularCylindrical3D_Cell_volume, "Calculate the volume of a cell.");
	def("volume", &TriangularPolar2D_Cell_volume, "Calculate the volume of a cell.");
	def("volume", &TriangularSpherical3D_Cell_volume, "Calculate the volume of a cell.");
	
	def("volume", &QuadrilateralCartesian2D_Cell_volume, "Calculate the volume of a cell.");
	def("volume", &QuadrilateralCartesian3D_Cell_volume, "Calculate the volume of a cell.");
	def("volume", &QuadrilateralCylindrical3D_Cell_volume, "Calculate the volume of a cell.");
	def("volume", &QuadrilateralPolar2D_Cell_volume, "Calculate the volume of a cell.");
	def("volume", &QuadrilateralSpherical3D_Cell_volume, "Calculate the volume of a cell.");
	
	def("volume", &TetrahedralCartesian3D_Cell_volume, "Calculate the volume of a cell.");
	def("volume", &TetrahedralCylindrical3D_Cell_volume, "Calculate the volume of a cell.");
	def("volume", &TetrahedralSpherical3D_Cell_volume, "Calculate the volume of a cell.");
	
	/******************
	 * DOMAIN-SURFACE *
	 ******************/
	
	def("surface", &LinearCartesian1D_Domain_surface, "Calculate the surface of a domain.");
	def("surface", &LinearCartesian2D_Domain_surface, "Calculate the surface of a domain.");
	def("surface", &LinearCartesian3D_Domain_surface, "Calculate the surface of a domain.");
	def("surface", &LinearCylindrical3D_Domain_surface, "Calculate the surface of a domain.");
	def("surface", &LinearPolar2D_Domain_surface, "Calculate the surface of a domain.");
	def("surface", &LinearSpherical3D_Domain_surface, "Calculate the surface of a domain.");
	
	def("surface", &TriangularCartesian2D_Domain_surface, "Calculate the surface of a domain.");
	def("surface", &TriangularCartesian3D_Domain_surface, "Calculate the surface of a domain.");
	def("surface", &TriangularCylindrical3D_Domain_surface, "Calculate the surface of a domain.");
	def("surface", &TriangularPolar2D_Domain_surface, "Calculate the surface of a domain.");
	def("surface", &TriangularSpherical3D_Domain_surface, "Calculate the surface of a domain.");
	
	def("surface", &QuadrilateralCartesian2D_Domain_surface, "Calculate the surface of a domain.");
	def("surface", &QuadrilateralCartesian3D_Domain_surface, "Calculate the surface of a domain.");
	def("surface", &QuadrilateralCylindrical3D_Domain_surface, "Calculate the surface of a domain.");
	def("surface", &QuadrilateralPolar2D_Domain_surface, "Calculate the surface of a domain.");
	def("surface", &QuadrilateralSpherical3D_Domain_surface, "Calculate the surface of a domain.");
	
	def("surface", &TetrahedralCartesian3D_Domain_surface, "Calculate the surface of a domain.");
	def("surface", &TetrahedralCylindrical3D_Domain_surface, "Calculate the surface of a domain.");
	def("surface", &TetrahedralSpherical3D_Domain_surface, "Calculate the surface of a domain.");
	
	/*****************
	 * DOMAIN-VOLUME *
	 *****************/
	
	def("volume", &LinearCartesian1D_Domain_volume, "Calculate the volume of a domain.");
	def("volume", &LinearCartesian2D_Domain_volume, "Calculate the volume of a domain.");
	def("volume", &LinearCartesian3D_Domain_volume, "Calculate the volume of a domain.");
	def("volume", &LinearCylindrical3D_Domain_volume, "Calculate the volume of a domain.");
	def("volume", &LinearPolar2D_Domain_volume, "Calculate the volume of a domain.");
	def("volume", &LinearSpherical3D_Domain_volume, "Calculate the volume of a domain.");
	
	def("volume", &TriangularCartesian2D_Domain_volume, "Calculate the volume of a domain.");
	def("volume", &TriangularCartesian3D_Domain_volume, "Calculate the volume of a domain.");
	def("volume", &TriangularCylindrical3D_Domain_volume, "Calculate the volume of a domain.");
	def("volume", &TriangularPolar2D_Domain_volume, "Calculate the volume of a domain.");
	def("volume", &TriangularSpherical3D_Domain_volume, "Calculate the volume of a domain.");
	
	def("volume", &QuadrilateralCartesian2D_Domain_volume, "Calculate the volume of a domain.");
	def("volume", &QuadrilateralCartesian3D_Domain_volume, "Calculate the volume of a domain.");
	def("volume", &QuadrilateralCylindrical3D_Domain_volume, "Calculate the volume of a domain.");
	def("volume", &QuadrilateralPolar2D_Domain_volume, "Calculate the volume of a domain.");
	def("volume", &QuadrilateralSpherical3D_Domain_volume, "Calculate the volume of a domain.");
	
	def("volume", &TetrahedralCartesian3D_Domain_volume, "Calculate the volume of a domain.");
	def("volume", &TetrahedralCylindrical3D_Domain_volume, "Calculate the volume of a domain.");
	def("volume", &TetrahedralSpherical3D_Domain_volume, "Calculate the volume of a domain.");
	
	/******************************************
	 * IS_BOUNDARY (with domains and facets) *
	 ******************************************/
	
	def("is_boundary", &LinearCartesian1D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &LinearCartesian2D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &LinearCartesian3D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &LinearCylindrical3D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &LinearPolar2D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &LinearSpherical3D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	
	def("is_boundary", &TriangularCartesian2D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TriangularCartesian3D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TriangularCylindrical3D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TriangularPolar2D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TriangularSpherical3D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	
	def("is_boundary", &QuadrilateralCartesian2D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &QuadrilateralCartesian3D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &QuadrilateralCylindrical3D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &QuadrilateralPolar2D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &QuadrilateralSpherical3D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	
	def("is_boundary", &TetrahedralCartesian3D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TetrahedralCylindrical3D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TetrahedralSpherical3D_Domain_Facet_is_boundary, "Return True if the given facet is a boundary element of the given domain. Otherwise, return False.");
	
	/*****************************************
	 * IS_BOUNDARY (with domains and edges) *
	 *****************************************/
	
	def("is_boundary", &TriangularCartesian2D_Domain_Edge_is_boundary, "Return True if the given edge is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TriangularCartesian3D_Domain_Edge_is_boundary, "Return True if the given edge is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TriangularCylindrical3D_Domain_Edge_is_boundary, "Return True if the given edge is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TriangularPolar2D_Domain_Edge_is_boundary, "Return True if the given edge is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TriangularSpherical3D_Domain_Edge_is_boundary, "Return True if the given edge is a boundary element of the given domain. Otherwise, return False.");
	
	def("is_boundary", &QuadrilateralCartesian2D_Domain_Edge_is_boundary, "Return True if the given edge is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &QuadrilateralCartesian3D_Domain_Edge_is_boundary, "Return True if the given edge is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &QuadrilateralCylindrical3D_Domain_Edge_is_boundary, "Return True if the given edge is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &QuadrilateralPolar2D_Domain_Edge_is_boundary, "Return True if the given edge is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &QuadrilateralSpherical3D_Domain_Edge_is_boundary, "Return True if the given edge is a boundary element of the given domain. Otherwise, return False.");
	
	def("is_boundary", &TetrahedralCartesian3D_Domain_Edge_is_boundary, "Return True if the given edge is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TetrahedralCylindrical3D_Domain_Edge_is_boundary, "Return True if the given edge is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TetrahedralSpherical3D_Domain_Edge_is_boundary, "Return True if the given edge is a boundary element of the given domain. Otherwise, return False.");
	
	/********************************************
	 * IS_BOUNDARY (with domains and vertices) *
	 ********************************************/
	
	def("is_boundary", &LinearCartesian1D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &LinearCartesian2D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &LinearCartesian3D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &LinearCylindrical3D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &LinearPolar2D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &LinearSpherical3D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	
	def("is_boundary", &TriangularCartesian2D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TriangularCartesian3D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TriangularCylindrical3D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TriangularPolar2D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TriangularSpherical3D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	
	def("is_boundary", &QuadrilateralCartesian2D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &QuadrilateralCartesian3D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &QuadrilateralCylindrical3D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &QuadrilateralPolar2D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &QuadrilateralSpherical3D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	
	def("is_boundary", &TetrahedralCartesian3D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TetrahedralCylindrical3D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	def("is_boundary", &TetrahedralSpherical3D_Domain_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given domain. Otherwise, return False.");
	
	/*******************************************
	 * IS_BOUNDARY (with segments and facets) *
	 *******************************************/
	
	def("is_boundary", &LinearCartesian1D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &LinearCartesian2D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &LinearCartesian3D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &LinearCylindrical3D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &LinearPolar2D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &LinearSpherical3D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	
	def("is_boundary", &TriangularCartesian2D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TriangularCartesian3D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TriangularCylindrical3D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TriangularPolar2D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TriangularSpherical3D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	
	def("is_boundary", &QuadrilateralCartesian2D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &QuadrilateralCartesian3D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &QuadrilateralCylindrical3D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &QuadrilateralPolar2D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &QuadrilateralSpherical3D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	
	def("is_boundary", &TetrahedralCartesian3D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TetrahedralCylindrical3D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TetrahedralSpherical3D_Segment_Facet_is_boundary, "Return True if the given facet is a boundary element of the given segment. Otherwise, return False.");
	
	/******************************************
	 * IS_BOUNDARY (with segments and edges) *
	 ******************************************/
	
	def("is_boundary", &TriangularCartesian2D_Segment_Edge_is_boundary, "Return True if the given edge is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TriangularCartesian3D_Segment_Edge_is_boundary, "Return True if the given edge is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TriangularCylindrical3D_Segment_Edge_is_boundary, "Return True if the given edge is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TriangularPolar2D_Segment_Edge_is_boundary, "Return True if the given edge is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TriangularSpherical3D_Segment_Edge_is_boundary, "Return True if the given edge is a boundary element of the given segment. Otherwise, return False.");
	
	def("is_boundary", &QuadrilateralCartesian2D_Segment_Edge_is_boundary, "Return True if the given edge is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &QuadrilateralCartesian3D_Segment_Edge_is_boundary, "Return True if the given edge is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &QuadrilateralCylindrical3D_Segment_Edge_is_boundary, "Return True if the given edge is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &QuadrilateralPolar2D_Segment_Edge_is_boundary, "Return True if the given edge is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &QuadrilateralSpherical3D_Segment_Edge_is_boundary, "Return True if the given edge is a boundary element of the given segment. Otherwise, return False.");
	
	def("is_boundary", &TetrahedralCartesian3D_Segment_Edge_is_boundary, "Return True if the given edge is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TetrahedralCylindrical3D_Segment_Edge_is_boundary, "Return True if the given edge is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TetrahedralSpherical3D_Segment_Edge_is_boundary, "Return True if the given edge is a boundary element of the given segment. Otherwise, return False.");
	
	/*********************************************
	 * IS_BOUNDARY (with segments and vertices) *
	 *********************************************/
	
	def("is_boundary", &LinearCartesian1D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &LinearCartesian2D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &LinearCartesian3D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &LinearCylindrical3D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &LinearPolar2D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &LinearSpherical3D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	
	def("is_boundary", &TriangularCartesian2D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TriangularCartesian3D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TriangularCylindrical3D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TriangularPolar2D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TriangularSpherical3D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	
	def("is_boundary", &QuadrilateralCartesian2D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &QuadrilateralCartesian3D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &QuadrilateralCylindrical3D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &QuadrilateralPolar2D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &QuadrilateralSpherical3D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	
	def("is_boundary", &TetrahedralCartesian3D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TetrahedralCylindrical3D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	def("is_boundary", &TetrahedralSpherical3D_Segment_Vertex_is_boundary, "Return True if the given vertex is a boundary element of the given segment. Otherwise, return False.");
	
	/******************************
	 * IS_INTERFACE (with facets) *
	 ******************************/
	
	def("is_interface", &LinearCartesian1D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &LinearCartesian2D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &LinearCartesian3D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &LinearCylindrical3D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &LinearPolar2D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &LinearSpherical3D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	
	def("is_interface", &TriangularCartesian2D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TriangularCartesian3D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TriangularCylindrical3D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TriangularPolar2D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TriangularSpherical3D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	
	def("is_interface", &QuadrilateralCartesian2D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &QuadrilateralCartesian3D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &QuadrilateralCylindrical3D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &QuadrilateralPolar2D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &QuadrilateralSpherical3D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	
	def("is_interface", &TetrahedralCartesian3D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TetrahedralCylindrical3D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TetrahedralSpherical3D_Facet_is_interface, "Return True if the given facet is an interface element of the given segments. Otherwise, return False.");
	
	/*****************************
	 * IS_INTERFACE (with edges) *
	 *****************************/
	
	def("is_interface", &TriangularCartesian2D_Edge_is_interface, "Return True if the given edge is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TriangularCartesian3D_Edge_is_interface, "Return True if the given edge is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TriangularCylindrical3D_Edge_is_interface, "Return True if the given edge is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TriangularPolar2D_Edge_is_interface, "Return True if the given edge is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TriangularSpherical3D_Edge_is_interface, "Return True if the given edge is an interface element of the given segments. Otherwise, return False.");
	
	def("is_interface", &QuadrilateralCartesian2D_Edge_is_interface, "Return True if the given edge is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &QuadrilateralCartesian3D_Edge_is_interface, "Return True if the given edge is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &QuadrilateralCylindrical3D_Edge_is_interface, "Return True if the given edge is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &QuadrilateralPolar2D_Edge_is_interface, "Return True if the given edge is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &QuadrilateralSpherical3D_Edge_is_interface, "Return True if the given edge is an interface element of the given segments. Otherwise, return False.");
	
	def("is_interface", &TetrahedralCartesian3D_Edge_is_interface, "Return True if the given edge is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TetrahedralCylindrical3D_Edge_is_interface, "Return True if the given edge is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TetrahedralSpherical3D_Edge_is_interface, "Return True if the given edge is an interface element of the given segments. Otherwise, return False.");
	
	/********************************
	 * IS_INTERFACE (with vertices) *
	 ********************************/
	
	def("is_interface", &LinearCartesian1D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &LinearCartesian2D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &LinearCartesian3D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &LinearCylindrical3D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &LinearPolar2D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &LinearSpherical3D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	
	def("is_interface", &TriangularCartesian2D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TriangularCartesian3D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TriangularCylindrical3D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TriangularPolar2D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TriangularSpherical3D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	
	def("is_interface", &QuadrilateralCartesian2D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &QuadrilateralCartesian3D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &QuadrilateralCylindrical3D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &QuadrilateralPolar2D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &QuadrilateralSpherical3D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	
	def("is_interface", &TetrahedralCartesian3D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TetrahedralCylindrical3D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	def("is_interface", &TetrahedralSpherical3D_Vertex_is_interface, "Return True if the given vertex is an interface element of the given segments. Otherwise, return False.");
	
	/**********
	 * REFINE *
	 **********/
	
	def("refine", &TriangularCartesian2D_Domain_refine, "Refine all edges of the given domain and segmentation which match a given predicate.");
	def("refine", &TriangularCartesian3D_Domain_refine, "Refine all edges of the given domain and segmentation which match a given predicate.");
	def("refine", &TriangularCylindrical3D_Domain_refine, "Refine all edges of the given domain and segmentation which match a given predicate.");
	def("refine", &TriangularPolar2D_Domain_refine, "Refine all edges of the given domain and segmentation which match a given predicate.");
	def("refine", &TriangularSpherical3D_Domain_refine, "Refine all edges of the given domain and segmentation which match a given predicate.");
	
	def("refine", &TetrahedralCartesian3D_Domain_refine, "Refine all edges of the given domain and segmentation which match a given predicate.");
	def("refine", &TetrahedralCylindrical3D_Domain_refine, "Refine all edges of the given domain and segmentation which match a given predicate.");
	def("refine", &TetrahedralSpherical3D_Domain_refine, "Refine all edges of the given domain and segmentation which match a given predicate.");
	
	/********************
	 * REFINE_UNIFORMLY *
	 ********************/
	
	def("refine_uniformly", &TriangularCartesian2D_Domain_refine_uniformly, "Refine all edges of the given domain and segmentation.");
	def("refine_uniformly", &TriangularCartesian3D_Domain_refine_uniformly, "Refine all edges of the given domain and segmentation.");
	def("refine_uniformly", &TriangularCylindrical3D_Domain_refine_uniformly, "Refine all edges of the given domain and segmentation.");
	def("refine_uniformly", &TriangularPolar2D_Domain_refine_uniformly, "Refine all edges of the given domain and segmentation.");
	def("refine_uniformly", &TriangularSpherical3D_Domain_refine_uniformly, "Refine all edges of the given domain and segmentation.");
	
	def("refine_uniformly", &TetrahedralCartesian3D_Domain_refine_uniformly, "Refine all edges of the given domain and segmentation.");
	def("refine_uniformly", &TetrahedralCylindrical3D_Domain_refine_uniformly, "Refine all edges of the given domain and segmentation.");
	def("refine_uniformly", &TetrahedralSpherical3D_Domain_refine_uniformly, "Refine all edges of the given domain and segmentation.");
	
	/*********
	 * SCALE *
	 *********/
	
	def("scale", &LinearCartesian1D_Domain_scale, "Scale a domain by a given factor.");
	def("scale", &LinearCartesian2D_Domain_scale, "Scale a domain by a given factor.");
	def("scale", &LinearCartesian3D_Domain_scale, "Scale a domain by a given factor.");
	def("scale", &LinearCylindrical3D_Domain_scale, "Scale a domain by a given factor.");
	def("scale", &LinearPolar2D_Domain_scale, "Scale a domain by a given factor.");
	def("scale", &LinearSpherical3D_Domain_scale, "Scale a domain by a given factor.");
	
	def("scale", &TriangularCartesian2D_Domain_scale, "Scale a domain by a given factor.");
	def("scale", &TriangularCartesian3D_Domain_scale, "Scale a domain by a given factor.");
	def("scale", &TriangularCylindrical3D_Domain_scale, "Scale a domain by a given factor.");
	def("scale", &TriangularPolar2D_Domain_scale, "Scale a domain by a given factor.");
	def("scale", &TriangularSpherical3D_Domain_scale, "Scale a domain by a given factor.");
	
	def("scale", &QuadrilateralCartesian2D_Domain_scale, "Scale a domain by a given factor.");
	def("scale", &QuadrilateralCartesian3D_Domain_scale, "Scale a domain by a given factor.");
	def("scale", &QuadrilateralCylindrical3D_Domain_scale, "Scale a domain by a given factor.");
	def("scale", &QuadrilateralPolar2D_Domain_scale, "Scale a domain by a given factor.");
	def("scale", &QuadrilateralSpherical3D_Domain_scale, "Scale a domain by a given factor.");
	
	def("scale", &TetrahedralCartesian3D_Domain_scale, "Scale a domain by a given factor.");
	def("scale", &TetrahedralCylindrical3D_Domain_scale, "Scale a domain by a given factor.");
	def("scale", &TetrahedralSpherical3D_Domain_scale, "Scale a domain by a given factor.");
	
	/*******************
	 * SEGMENT-SURFACE *
	 *******************/
	
	def("surface", &LinearCartesian1D_Segment_surface, "Calculate the surface of the given segment.");
	def("surface", &LinearCartesian2D_Segment_surface, "Calculate the surface of the given segment.");
	def("surface", &LinearCartesian3D_Segment_surface, "Calculate the surface of the given segment.");
	def("surface", &LinearCylindrical3D_Segment_surface, "Calculate the surface of the given segment.");
	def("surface", &LinearPolar2D_Segment_surface, "Calculate the surface of the given segment.");
	def("surface", &LinearSpherical3D_Segment_surface, "Calculate the surface of the given segment.");
	
	def("surface", &TriangularCartesian2D_Segment_surface, "Calculate the surface of the given segment.");
	def("surface", &TriangularCartesian3D_Segment_surface, "Calculate the surface of the given segment.");
	def("surface", &TriangularCylindrical3D_Segment_surface, "Calculate the surface of the given segment.");
	def("surface", &TriangularPolar2D_Segment_surface, "Calculate the surface of the given segment.");
	def("surface", &TriangularSpherical3D_Segment_surface, "Calculate the surface of the given segment.");
	
	def("surface", &QuadrilateralCartesian2D_Segment_surface, "Calculate the surface of the given segment.");
	def("surface", &QuadrilateralCartesian3D_Segment_surface, "Calculate the surface of the given segment.");
	def("surface", &QuadrilateralCylindrical3D_Segment_surface, "Calculate the surface of the given segment.");
	def("surface", &QuadrilateralPolar2D_Segment_surface, "Calculate the surface of the given segment.");
	def("surface", &QuadrilateralSpherical3D_Segment_surface, "Calculate the surface of the given segment.");
	
	def("surface", &TetrahedralCartesian3D_Segment_surface, "Calculate the surface of the given segment.");
	def("surface", &TetrahedralCylindrical3D_Segment_surface, "Calculate the surface of the given segment.");
	def("surface", &TetrahedralSpherical3D_Segment_surface, "Calculate the surface of the given segment.");
	
	/******************
	 * SEGMENT-VOLUME *
	 ******************/
	
	def("volume", &LinearCartesian1D_Segment_volume, "Calculate the volume of the given segment.");
	def("volume", &LinearCartesian2D_Segment_volume, "Calculate the volume of the given segment.");
	def("volume", &LinearCartesian3D_Segment_volume, "Calculate the volume of the given segment.");
	def("volume", &LinearCylindrical3D_Segment_volume, "Calculate the volume of the given segment.");
	def("volume", &LinearPolar2D_Segment_volume, "Calculate the volume of the given segment.");
	def("volume", &LinearSpherical3D_Segment_volume, "Calculate the volume of the given segment.");
	
	def("volume", &TriangularCartesian2D_Segment_volume, "Calculate the volume of the given segment.");
	def("volume", &TriangularCartesian3D_Segment_volume, "Calculate the volume of the given segment.");
	def("volume", &TriangularCylindrical3D_Segment_volume, "Calculate the volume of the given segment.");
	def("volume", &TriangularPolar2D_Segment_volume, "Calculate the volume of the given segment.");
	def("volume", &TriangularSpherical3D_Segment_volume, "Calculate the volume of the given segment.");
	
	def("volume", &QuadrilateralCartesian2D_Segment_volume, "Calculate the volume of the given segment.");
	def("volume", &QuadrilateralCartesian3D_Segment_volume, "Calculate the volume of the given segment.");
	def("volume", &QuadrilateralCylindrical3D_Segment_volume, "Calculate the volume of the given segment.");
	def("volume", &QuadrilateralPolar2D_Segment_volume, "Calculate the volume of the given segment.");
	def("volume", &QuadrilateralSpherical3D_Segment_volume, "Calculate the volume of the given segment.");
	
	def("volume", &TetrahedralCartesian3D_Segment_volume, "Calculate the volume of the given segment.");
	def("volume", &TetrahedralCylindrical3D_Segment_volume, "Calculate the volume of the given segment.");
	def("volume", &TetrahedralSpherical3D_Segment_volume, "Calculate the volume of the given segment.");
	
	/******************
	 * SPANNED_VOLUME *
	 ******************/
	
	def("spanned_volume", &LinearCartesian1D_spanned_volume, "Calculate the volume spanned by a set of points.");
	def("spanned_volume", &LinearCartesian2D_spanned_volume, "Calculate the volume spanned by a set of points.");
	def("spanned_volume", &LinearCartesian3D_spanned_volume, "Calculate the volume spanned by a set of points.");
	
	def("spanned_volume", &TriangularCartesian2D_spanned_volume, "Calculate the volume spanned by a set of points.");
	def("spanned_volume", &TriangularCartesian3D_spanned_volume, "Calculate the volume spanned by a set of points.");
	
	def("spanned_volume", &TetrahedralCartesian3D_spanned_volume, "Calculate the volume spanned by a set of points.");
	
	/***************
	 * READ_NETGEN *
	 ***************/
	
	////////////
	// LINEAR //
	////////////
	
	def("read_netgen", LinearCartesian1D_Domain_read_netgen,
	                   LinearCartesian1D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                  "Read mesh data from a Netgen file."));
	def("read_netgen", LinearCartesian2D_Domain_read_netgen,
	                   LinearCartesian2D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                  "Read mesh data from a Netgen file."));
	def("read_netgen", LinearCartesian3D_Domain_read_netgen,
	                   LinearCartesian3D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                  "Read mesh data from a Netgen file."));
	def("read_netgen", LinearCylindrical3D_Domain_read_netgen,
	                   LinearCylindrical3D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                    "Read mesh data from a Netgen file."));
	def("read_netgen", LinearPolar2D_Domain_read_netgen,
	                   LinearPolar2D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                              "Read mesh data from a Netgen file."));
	def("read_netgen", LinearSpherical3D_Domain_read_netgen,
	                   LinearSpherical3D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                  "Read mesh data from a Netgen file."));
	
	////////////////
	// TRIANGULAR //
	////////////////
	
	def("read_netgen", TriangularCartesian2D_Domain_read_netgen,
	                   TriangularCartesian2D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                      "Read mesh data from a Netgen file."));
	def("read_netgen", TriangularCartesian3D_Domain_read_netgen,
	                   TriangularCartesian3D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                      "Read mesh data from a Netgen file."));
	def("read_netgen", TriangularCylindrical3D_Domain_read_netgen,
	                   TriangularCylindrical3D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                        "Read mesh data from a Netgen file."));
	def("read_netgen", TriangularPolar2D_Domain_read_netgen,
	                   TriangularPolar2D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                  "Read mesh data from a Netgen file."));
	def("read_netgen", TriangularSpherical3D_Domain_read_netgen,
	                   TriangularSpherical3D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                      "Read mesh data from a Netgen file."));
	
	///////////////////
	// QUADRILATERAL //
	///////////////////
	
	def("read_netgen", QuadrilateralCartesian2D_Domain_read_netgen,
	                   QuadrilateralCartesian2D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                         "Read mesh data from a Netgen file."));
	def("read_netgen", QuadrilateralCartesian3D_Domain_read_netgen,
	                   QuadrilateralCartesian3D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                         "Read mesh data from a Netgen file."));
	def("read_netgen", QuadrilateralCylindrical3D_Domain_read_netgen,
	                   QuadrilateralCylindrical3D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                           "Read mesh data from a Netgen file."));
	def("read_netgen", QuadrilateralPolar2D_Domain_read_netgen,
	                   QuadrilateralPolar2D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                     "Read mesh data from a Netgen file."));
	def("read_netgen", QuadrilateralSpherical3D_Domain_read_netgen,
	                   QuadrilateralSpherical3D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                         "Read mesh data from a Netgen file."));
	
	/////////////////
	// TETRAHEDRAL //
	/////////////////
	
	def("read_netgen", TetrahedralCartesian3D_Domain_read_netgen,
	                   TetrahedralCartesian3D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                       "Read mesh data from a Netgen file."));
	def("read_netgen", TetrahedralCylindrical3D_Domain_read_netgen,
	                   TetrahedralCylindrical3D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                         "Read mesh data from a Netgen file."));
	def("read_netgen", TetrahedralSpherical3D_Domain_read_netgen,
	                   TetrahedralSpherical3D_Domain_read_netgen_overloads(args("filename", "domain", "segmentation"),
	                                                                       "Read mesh data from a Netgen file."));
	
	/************
	 * READ_VTK *
	 ************/
	
	////////////
	// LINEAR //
	////////////
	
	def("read_vtk", LinearCartesian1D_Domain_read_vtk,
	                LinearCartesian1D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                            "Read mesh data from a VTK file."));
	def("read_vtk", LinearCartesian2D_Domain_read_vtk,
	                LinearCartesian2D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                            "Read mesh data from a VTK file."));
	def("read_vtk", LinearCartesian3D_Domain_read_vtk,
	                LinearCartesian3D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                            "Read mesh data from a VTK file."));
	def("read_vtk", LinearCylindrical3D_Domain_read_vtk,
	                LinearCylindrical3D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                              "Read mesh data from a VTK file."));
	def("read_vtk", LinearPolar2D_Domain_read_vtk,
	                LinearPolar2D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                        "Read mesh data from a VTK file."));
	def("read_vtk", LinearSpherical3D_Domain_read_vtk,
	                LinearSpherical3D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                            "Read mesh data from a VTK file."));
	
	////////////////
	// TRIANGULAR //
	////////////////
	
	def("read_vtk", TriangularCartesian2D_Domain_read_vtk,
	                TriangularCartesian2D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                "Read mesh data from a VTK file."));
	def("read_vtk", TriangularCartesian3D_Domain_read_vtk,
	                TriangularCartesian3D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                "Read mesh data from a VTK file."));
	def("read_vtk", TriangularCylindrical3D_Domain_read_vtk,
	                TriangularCylindrical3D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                  "Read mesh data from a VTK file."));
	def("read_vtk", TriangularPolar2D_Domain_read_vtk,
	                TriangularPolar2D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                            "Read mesh data from a VTK file."));
	def("read_vtk", TriangularSpherical3D_Domain_read_vtk,
	                TriangularSpherical3D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                "Read mesh data from a VTK file."));
	
	///////////////////
	// QUADRILATERAL //
	///////////////////
	
	def("read_vtk", QuadrilateralCartesian2D_Domain_read_vtk,
	                QuadrilateralCartesian2D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                   "Read mesh data from a VTK file."));
	def("read_vtk", QuadrilateralCartesian3D_Domain_read_vtk,
	                QuadrilateralCartesian3D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                   "Read mesh data from a VTK file."));
	def("read_vtk", QuadrilateralCylindrical3D_Domain_read_vtk,
	                QuadrilateralCylindrical3D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                     "Read mesh data from a VTK file."));
	def("read_vtk", QuadrilateralPolar2D_Domain_read_vtk,
	                QuadrilateralPolar2D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                               "Read mesh data from a VTK file."));
	def("read_vtk", QuadrilateralSpherical3D_Domain_read_vtk,
	                QuadrilateralSpherical3D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                   "Read mesh data from a VTK file."));
	
	/////////////////
	// TETRAHEDRAL //
	/////////////////
	
	def("read_vtk", TetrahedralCartesian3D_Domain_read_vtk,
	                TetrahedralCartesian3D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                 "Read mesh data from a VTK file."));
	def("read_vtk", TetrahedralCylindrical3D_Domain_read_vtk,
	                TetrahedralCylindrical3D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                   "Read mesh data from a VTK file."));
	def("read_vtk", TetrahedralSpherical3D_Domain_read_vtk,
	                TetrahedralSpherical3D_Domain_read_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                 "Read mesh data from a VTK file."));
	
	/****************
	 * WRITE_OPENDX *
	 ****************/
	
	////////////
	// LINEAR //
	////////////
	
	def("write_opendx", LinearCartesian1D_Domain_write_opendx,
	                    LinearCartesian1D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                    "Write mesh data to an OpenDX file."));
	def("write_opendx", LinearCartesian2D_Domain_write_opendx,
	                    LinearCartesian2D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                    "Write mesh data to an OpenDX file."));
	def("write_opendx", LinearCartesian3D_Domain_write_opendx,
	                    LinearCartesian3D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                    "Write mesh data to an OpenDX file."));
	def("write_opendx", LinearCylindrical3D_Domain_write_opendx,
	                    LinearCylindrical3D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                      "Write mesh data to an OpenDX file."));
	def("write_opendx", LinearPolar2D_Domain_write_opendx,
	                    LinearPolar2D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                "Write mesh data to an OpenDX file."));
	def("write_opendx", LinearSpherical3D_Domain_write_opendx,
	                    LinearSpherical3D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                    "Write mesh data to an OpenDX file."));
	
	////////////////
	// TRIANGULAR //
	////////////////
	
	def("write_opendx", TriangularCartesian2D_Domain_write_opendx,
	                    TriangularCartesian2D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                        "Write mesh data to an OpenDX file."));
	def("write_opendx", TriangularCartesian3D_Domain_write_opendx,
	                    TriangularCartesian3D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                        "Write mesh data to an OpenDX file."));
	def("write_opendx", TriangularCylindrical3D_Domain_write_opendx,
	                    TriangularCylindrical3D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                          "Write mesh data to an OpenDX file."));
	def("write_opendx", TriangularPolar2D_Domain_write_opendx,
	                    TriangularPolar2D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                    "Write mesh data to an OpenDX file."));
	def("write_opendx", TriangularSpherical3D_Domain_write_opendx,
	                    TriangularSpherical3D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                        "Write mesh data to an OpenDX file."));
	
	///////////////////
	// QUADRILATERAL //
	///////////////////
	
	def("write_opendx", QuadrilateralCartesian2D_Domain_write_opendx,
	                    QuadrilateralCartesian2D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                           "Write mesh data to an OpenDX file."));
	def("write_opendx", QuadrilateralCartesian3D_Domain_write_opendx,
	                    QuadrilateralCartesian3D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                           "Write mesh data to an OpenDX file."));
	def("write_opendx", QuadrilateralCylindrical3D_Domain_write_opendx,
	                    QuadrilateralCylindrical3D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                             "Write mesh data to an OpenDX file."));
	def("write_opendx", QuadrilateralPolar2D_Domain_write_opendx,
	                    QuadrilateralPolar2D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                       "Write mesh data to an OpenDX file."));
	def("write_opendx", QuadrilateralSpherical3D_Domain_write_opendx,
	                    QuadrilateralSpherical3D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                           "Write mesh data to an OpenDX file."));
	
	/////////////////
	// TETRAHEDRAL //
	/////////////////
	
	def("write_opendx", TetrahedralCartesian3D_Domain_write_opendx,
	                    TetrahedralCartesian3D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                         "Write mesh data to an OpenDX file."));
	def("write_opendx", TetrahedralCylindrical3D_Domain_write_opendx,
	                    TetrahedralCylindrical3D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                           "Write mesh data to an OpenDX file."));
	def("write_opendx", TetrahedralSpherical3D_Domain_write_opendx,
	                    TetrahedralSpherical3D_Domain_write_opendx_overloads(args("filename", "domain", "accessors"),
	                                                                         "Write mesh data to an OpenDX file."));
	
	/*************
	 * WRITE_VTK *
	 *************/
	
	////////////
	// LINEAR //
	////////////
	
	def("write_vtk", LinearCartesian1D_Domain_write_vtk,
	                 LinearCartesian1D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                              "Write mesh data to a VTK file."));
	def("write_vtk", LinearCartesian2D_Domain_write_vtk,
	                 LinearCartesian2D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                              "Write mesh data to a VTK file."));
	def("write_vtk", LinearCartesian3D_Domain_write_vtk,
	                 LinearCartesian3D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                              "Write mesh data to a VTK file."));
	def("write_vtk", LinearCylindrical3D_Domain_write_vtk,
	                 LinearCylindrical3D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                "Write mesh data to a VTK file."));
	def("write_vtk", LinearPolar2D_Domain_write_vtk,
	                 LinearPolar2D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                          "Write mesh data to a VTK file."));
	def("write_vtk", LinearSpherical3D_Domain_write_vtk,
	                 LinearSpherical3D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                              "Write mesh data to a VTK file."));
	
	////////////////
	// TRIANGULAR //
	////////////////
	
	def("write_vtk", TriangularCartesian2D_Domain_write_vtk,
	                 TriangularCartesian2D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                  "Write mesh data to a VTK file."));
	def("write_vtk", TriangularCartesian3D_Domain_write_vtk,
	                 TriangularCartesian3D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                  "Write mesh data to a VTK file."));
	def("write_vtk", TriangularCylindrical3D_Domain_write_vtk,
	                 TriangularCylindrical3D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                    "Write mesh data to a VTK file."));
	def("write_vtk", TriangularPolar2D_Domain_write_vtk,
	                 TriangularPolar2D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                              "Write mesh data to a VTK file."));
	def("write_vtk", TriangularSpherical3D_Domain_write_vtk,
	                 TriangularSpherical3D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                  "Write mesh data to a VTK file."));
	
	///////////////////
	// QUADRILATERAL //
	///////////////////
	
	def("write_vtk", QuadrilateralCartesian2D_Domain_write_vtk,
	                 QuadrilateralCartesian2D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                     "Write mesh data to a VTK file."));
	def("write_vtk", QuadrilateralCartesian3D_Domain_write_vtk,
	                 QuadrilateralCartesian3D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                     "Write mesh data to a VTK file."));
	def("write_vtk", QuadrilateralCylindrical3D_Domain_write_vtk,
	                 QuadrilateralCylindrical3D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                       "Write mesh data to a VTK file."));
	def("write_vtk", QuadrilateralPolar2D_Domain_write_vtk,
	                 QuadrilateralPolar2D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                 "Write mesh data to a VTK file."));
	def("write_vtk", QuadrilateralSpherical3D_Domain_write_vtk,
	                 QuadrilateralSpherical3D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                     "Write mesh data to a VTK file."));
	
	/////////////////
	// TETRAHEDRAL //
	/////////////////
	
	def("write_vtk", TetrahedralCartesian3D_Domain_write_vtk,
	                 TetrahedralCartesian3D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                   "Write mesh data to a VTK file."));
	def("write_vtk", TetrahedralCylindrical3D_Domain_write_vtk,
	                 TetrahedralCylindrical3D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                     "Write mesh data to a VTK file."));
	def("write_vtk", TetrahedralSpherical3D_Domain_write_vtk,
	                 TetrahedralSpherical3D_Domain_write_vtk_overloads(args("filename", "domain", "segmentation", "accessors"),
	                                                                   "Write mesh data to a VTK file."));
}
