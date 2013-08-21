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
#include "algorithms/segment_surface.hpp"
#include "algorithms/segment_volume.hpp"

char const * version()
{
	return "0.1.0";
}

BOOST_PYTHON_MODULE(viennagrid_wrapper)
{
	def("version", version, "Return the version number of 'viennagrid_wrapper'.");
	
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
		.add_property("vertices", &LinearCartesian1D_Domain::get_vertices, "docstring")
		.def("add_vertex", &LinearCartesian1D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &LinearCartesian1D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &LinearCartesian1D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &LinearCartesian1D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &LinearCartesian1D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &LinearCartesian1D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	class_<LinearCartesian2D_Domain>("LinearCartesian2D_Domain")
		.add_property("num_vertices", &LinearCartesian2D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &LinearCartesian2D_Domain::get_vertices, "docstring")
		.def("add_vertex", &LinearCartesian2D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &LinearCartesian2D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &LinearCartesian2D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &LinearCartesian2D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &LinearCartesian2D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &LinearCartesian2D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	class_<LinearCartesian3D_Domain>("LinearCartesian3D_Domain")
		.add_property("num_vertices", &LinearCartesian3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &LinearCartesian3D_Domain::get_vertices, "docstring")
		.def("add_vertex", &LinearCartesian3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &LinearCartesian3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &LinearCartesian3D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &LinearCartesian3D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &LinearCartesian3D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &LinearCartesian3D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	class_<LinearCylindrical3D_Domain>("LinearCylindrical3D_Domain")
		.add_property("num_vertices", &LinearCylindrical3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &LinearCylindrical3D_Domain::get_vertices, "docstring")
		.def("add_vertex", &LinearCylindrical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &LinearCylindrical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &LinearCylindrical3D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &LinearCylindrical3D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &LinearCylindrical3D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &LinearCylindrical3D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	class_<LinearPolar2D_Domain>("LinearPolar2D_Domain")
		.add_property("num_vertices", &LinearPolar2D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &LinearPolar2D_Domain::get_vertices, "docstring")
		.def("add_vertex", &LinearPolar2D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &LinearPolar2D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &LinearPolar2D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &LinearPolar2D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &LinearPolar2D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &LinearPolar2D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	class_<LinearSpherical3D_Domain>("LinearSpherical3D_Domain")
		.add_property("num_vertices", &LinearSpherical3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &LinearSpherical3D_Domain::get_vertices, "docstring")
		.def("add_vertex", &LinearSpherical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &LinearSpherical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &LinearSpherical3D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &LinearSpherical3D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &LinearSpherical3D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &LinearSpherical3D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	/************************
	 * LINEAR SEGMENTATIONS *
	 ************************/
	
	class_<LinearCartesian1D_Segmentation>("LinearCartesian1D_Segmentation", init<LinearCartesian1D_Domain &>())
		.def("create_segment", &LinearCartesian1D_Segmentation::create_segment, "docstring")
		.add_property("segments", &LinearCartesian1D_Segmentation::get_segments, "docstring")
	;
	
	class_<LinearCartesian2D_Segmentation>("LinearCartesian2D_Segmentation", init<LinearCartesian2D_Domain &>())
		.def("create_segment", &LinearCartesian2D_Segmentation::create_segment, "docstring")
		.add_property("segments", &LinearCartesian2D_Segmentation::get_segments, "docstring")
	;
	
	class_<LinearCartesian3D_Segmentation>("LinearCartesian3D_Segmentation", init<LinearCartesian3D_Domain &>())
		.def("create_segment", &LinearCartesian3D_Segmentation::create_segment, "docstring")
		.add_property("segments", &LinearCartesian3D_Segmentation::get_segments, "docstring")
	;
	
	class_<LinearCylindrical3D_Segmentation>("LinearCylindrical3D_Segmentation", init<LinearCylindrical3D_Domain &>())
		.def("create_segment", &LinearCylindrical3D_Segmentation::create_segment, "docstring")
		.add_property("segments", &LinearCylindrical3D_Segmentation::get_segments, "docstring")
	;
	
	class_<LinearPolar2D_Segmentation>("LinearPolar2D_Segmentation", init<LinearPolar2D_Domain &>())
		.def("create_segment", &LinearPolar2D_Segmentation::create_segment, "docstring")
		.add_property("segments", &LinearPolar2D_Segmentation::get_segments, "docstring")
	;
	
	class_<LinearSpherical3D_Segmentation>("LinearSpherical3D_Segmentation", init<LinearSpherical3D_Domain &>())
		.def("create_segment", &LinearSpherical3D_Segmentation::create_segment, "docstring")
		.add_property("segments", &LinearSpherical3D_Segmentation::get_segments, "docstring")
	;
	
	/*******************
	 * LINEAR SEGMENTS *
	 *******************/
	
	class_<LinearCartesian1D_Segment>("LinearCartesian1D_Segment", init<LinearCartesian1D_Segment_t &, LinearCartesian1D_Segmentation &>())
		.def("create_cell", &LinearCartesian1D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearCartesian1D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<LinearCartesian2D_Segment>("LinearCartesian2D_Segment", init<LinearCartesian2D_Segment_t &, LinearCartesian2D_Segmentation &>())
		.def("create_cell", &LinearCartesian2D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearCartesian2D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<LinearCartesian3D_Segment>("LinearCartesian3D_Segment", init<LinearCartesian3D_Segment_t &, LinearCartesian3D_Segmentation &>())
		.def("create_cell", &LinearCartesian3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearCartesian3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<LinearCylindrical3D_Segment>("LinearCylindrical3D_Segment", init<LinearCylindrical3D_Segment_t &, LinearCylindrical3D_Segmentation &>())
		.def("create_cell", &LinearCylindrical3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearCylindrical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<LinearPolar2D_Segment>("LinearPolar2D_Segment", init<LinearPolar2D_Segment_t &, LinearPolar2D_Segmentation &>())
		.def("create_cell", &LinearPolar2D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearPolar2D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<LinearSpherical3D_Segment>("LinearSpherical3D_Segment", init<LinearSpherical3D_Segment_t &, LinearSpherical3D_Segmentation &>())
		.def("create_cell", &LinearSpherical3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &LinearSpherical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	/****************
	 * LINEAR CELLS *
	 ****************/
	
	class_<LinearCartesian1D_Cell>("LinearCartesian1D_Cell", init<LinearCartesian1D_Cell_t &>())
		.add_property("vertices", &LinearCartesian1D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<LinearCartesian2D_Cell>("LinearCartesian2D_Cell", init<LinearCartesian2D_Cell_t &>())
		.add_property("vertices", &LinearCartesian2D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<LinearCartesian3D_Cell>("LinearCartesian3D_Cell", init<LinearCartesian3D_Cell_t &>())
		.add_property("vertices", &LinearCartesian3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<LinearCylindrical3D_Cell>("LinearCylindrical3D_Cell", init<LinearCylindrical3D_Cell_t &>())
		.add_property("vertices", &LinearCylindrical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<LinearPolar2D_Cell>("LinearPolar2D_Cell", init<LinearPolar2D_Cell_t &>())
		.add_property("vertices", &LinearPolar2D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<LinearSpherical3D_Cell>("LinearSpherical3D_Cell", init<LinearSpherical3D_Cell_t &>())
		.add_property("vertices", &LinearSpherical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	/*******************
	 * LINEAR VERTICES *
	 *******************/
	
	class_<LinearCartesian1D_Vertex>("LinearCartesian1D_Vertex", init<LinearCartesian1D_Vertex_t &>())
	;
	
	class_<LinearCartesian2D_Vertex>("LinearCartesian2D_Vertex", init<LinearCartesian2D_Vertex_t &>())
	;
	
	class_<LinearCartesian3D_Vertex>("LinearCartesian3D_Vertex", init<LinearCartesian3D_Vertex_t &>())
	;
	
	class_<LinearCylindrical3D_Vertex>("LinearCylindrical3D_Vertex", init<LinearCylindrical3D_Vertex_t &>())
	;
	
	class_<LinearPolar2D_Vertex>("LinearPolar2D_Vertex", init<LinearPolar2D_Vertex_t &>())
	;
	
	class_<LinearSpherical3D_Vertex>("LinearSpherical3D_Vertex", init<LinearSpherical3D_Vertex_t &>())
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
	
	/**********************
	 * TRIANGULAR DOMAINS *
	 **********************/
	
	class_<TriangularCartesian2D_Domain>("TriangularCartesian2D_Domain")
		.add_property("num_vertices", &TriangularCartesian2D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &TriangularCartesian2D_Domain::get_vertices, "docstring")
		.def("add_vertex", &TriangularCartesian2D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &TriangularCartesian2D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &TriangularCartesian2D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &TriangularCartesian2D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &TriangularCartesian2D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &TriangularCartesian2D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	class_<TriangularCartesian3D_Domain>("TriangularCartesian3D_Domain")
		.add_property("num_vertices", &TriangularCartesian3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &TriangularCartesian3D_Domain::get_vertices, "docstring")
		.def("add_vertex", &TriangularCartesian3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &TriangularCartesian3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &TriangularCartesian3D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &TriangularCartesian3D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &TriangularCartesian3D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &TriangularCartesian3D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	class_<TriangularCylindrical3D_Domain>("TriangularCylindrical3D_Domain")
		.add_property("num_vertices", &TriangularCylindrical3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &TriangularCylindrical3D_Domain::get_vertices, "docstring")
		.def("add_vertex", &TriangularCylindrical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &TriangularCylindrical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &TriangularCylindrical3D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &TriangularCylindrical3D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &TriangularCylindrical3D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &TriangularCylindrical3D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	class_<TriangularPolar2D_Domain>("TriangularPolar2D_Domain")
		.add_property("num_vertices", &TriangularPolar2D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &TriangularPolar2D_Domain::get_vertices, "docstring")
		.def("add_vertex", &TriangularPolar2D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &TriangularPolar2D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &TriangularPolar2D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &TriangularPolar2D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &TriangularPolar2D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &TriangularPolar2D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	class_<TriangularSpherical3D_Domain>("TriangularSpherical3D_Domain")
		.add_property("num_vertices", &TriangularSpherical3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &TriangularSpherical3D_Domain::get_vertices, "docstring")
		.def("add_vertex", &TriangularSpherical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &TriangularSpherical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &TriangularSpherical3D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &TriangularSpherical3D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &TriangularSpherical3D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &TriangularSpherical3D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	/****************************
	 * TRIANGULAR SEGMENTATIONS *
	 ****************************/
	
	class_<TriangularCartesian2D_Segmentation>("TriangularCartesian2D_Segmentation", init<TriangularCartesian2D_Domain &>())
		.def("create_segment", &TriangularCartesian2D_Segmentation::create_segment, "docstring")
		.add_property("segments", &TriangularCartesian2D_Segmentation::get_segments, "docstring")
	;
	
	class_<TriangularCartesian3D_Segmentation>("TriangularCartesian3D_Segmentation", init<TriangularCartesian3D_Domain &>())
		.def("create_segment", &TriangularCartesian3D_Segmentation::create_segment, "docstring")
		.add_property("segments", &TriangularCartesian3D_Segmentation::get_segments, "docstring")
	;
	
	class_<TriangularCylindrical3D_Segmentation>("TriangularCylindrical3D_Segmentation", init<TriangularCylindrical3D_Domain &>())
		.def("create_segment", &TriangularCylindrical3D_Segmentation::create_segment, "docstring")
		.add_property("segments", &TriangularCylindrical3D_Segmentation::get_segments, "docstring")
	;
	
	class_<TriangularPolar2D_Segmentation>("TriangularPolar2D_Segmentation", init<TriangularPolar2D_Domain &>())
		.def("create_segment", &TriangularPolar2D_Segmentation::create_segment, "docstring")
		.add_property("segments", &TriangularPolar2D_Segmentation::get_segments, "docstring")
	;
	
	class_<TriangularSpherical3D_Segmentation>("TriangularSpherical3D_Segmentation", init<TriangularSpherical3D_Domain &>())
		.def("create_segment", &TriangularSpherical3D_Segmentation::create_segment, "docstring")
		.add_property("segments", &TriangularSpherical3D_Segmentation::get_segments, "docstring")
	;
	
	/***********************
	 * TRIANGULAR SEGMENTS *
	 ***********************/
	
	class_<TriangularCartesian2D_Segment>("TriangularCartesian2D_Segment", init<TriangularCartesian2D_Segment_t &, TriangularCartesian2D_Segmentation &>())
		.def("create_cell", &TriangularCartesian2D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularCartesian2D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TriangularCartesian3D_Segment>("TriangularCartesian3D_Segment", init<TriangularCartesian3D_Segment_t &, TriangularCartesian3D_Segmentation &>())
		.def("create_cell", &TriangularCartesian3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularCartesian3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TriangularCylindrical3D_Segment>("TriangularCylindrical3D_Segment", init<TriangularCylindrical3D_Segment_t &, TriangularCylindrical3D_Segmentation &>())
		.def("create_cell", &TriangularCylindrical3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularCylindrical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TriangularPolar2D_Segment>("TriangularPolar2D_Segment", init<TriangularPolar2D_Segment_t &, TriangularPolar2D_Segmentation &>())
		.def("create_cell", &TriangularPolar2D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularPolar2D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TriangularSpherical3D_Segment>("TriangularSpherical3D_Segment", init<TriangularSpherical3D_Segment_t &, TriangularSpherical3D_Segmentation &>())
		.def("create_cell", &TriangularSpherical3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularSpherical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	/********************
	 * TRIANGULAR CELLS *
	 ********************/
	
	class_<TriangularCartesian2D_Cell>("TriangularCartesian2D_Cell", init<TriangularCartesian2D_Cell_t &>())
		.add_property("vertices", &TriangularCartesian2D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<TriangularCartesian3D_Cell>("TriangularCartesian3D_Cell", init<TriangularCartesian3D_Cell_t &>())
		.add_property("vertices", &TriangularCartesian3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<TriangularCylindrical3D_Cell>("TriangularCylindrical3D_Cell", init<TriangularCylindrical3D_Cell_t &>())
		.add_property("vertices", &TriangularCylindrical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<TriangularPolar2D_Cell>("TriangularPolar2D_Cell", init<TriangularPolar2D_Cell_t &>())
		.add_property("vertices", &TriangularPolar2D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<TriangularSpherical3D_Cell>("TriangularSpherical3D_Cell", init<TriangularSpherical3D_Cell_t &>())
		.add_property("vertices", &TriangularSpherical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	/***********************
	 * TRIANGULAR VERTICES *
	 ***********************/
	
	class_<TriangularCartesian2D_Vertex>("TriangularCartesian2D_Vertex", init<TriangularCartesian2D_Vertex_t &>())
	;
	
	class_<TriangularCartesian3D_Vertex>("TriangularCartesian3D_Vertex", init<TriangularCartesian3D_Vertex_t &>())
	;
	
	class_<TriangularCylindrical3D_Vertex>("TriangularCylindrical3D_Vertex", init<TriangularCylindrical3D_Vertex_t &>())
	;
	
	class_<TriangularPolar2D_Vertex>("TriangularPolar2D_Vertex", init<TriangularPolar2D_Vertex_t &>())
	;
	
	class_<TriangularSpherical3D_Vertex>("TriangularSpherical3D_Vertex", init<TriangularSpherical3D_Vertex_t &>())
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
	
	/*************************
	 * QUADRILATERAL DOMAINS *
	 *************************/
	
	class_<QuadrilateralCartesian2D_Domain>("QuadrilateralCartesian2D_Domain")
		.add_property("num_vertices", &QuadrilateralCartesian2D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &QuadrilateralCartesian2D_Domain::get_vertices, "docstring")
		.def("add_vertex", &QuadrilateralCartesian2D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &QuadrilateralCartesian2D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &QuadrilateralCartesian2D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &QuadrilateralCartesian2D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &QuadrilateralCartesian2D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &QuadrilateralCartesian2D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	class_<QuadrilateralCartesian3D_Domain>("QuadrilateralCartesian3D_Domain")
		.add_property("num_vertices", &QuadrilateralCartesian3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &QuadrilateralCartesian3D_Domain::get_vertices, "docstring")
		.def("add_vertex", &QuadrilateralCartesian3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &QuadrilateralCartesian3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &QuadrilateralCartesian3D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &QuadrilateralCartesian3D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &QuadrilateralCartesian3D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &QuadrilateralCartesian3D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	class_<QuadrilateralCylindrical3D_Domain>("QuadrilateralCylindrical3D_Domain")
		.add_property("num_vertices", &QuadrilateralCylindrical3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &QuadrilateralCylindrical3D_Domain::get_vertices, "docstring")
		.def("add_vertex", &QuadrilateralCylindrical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &QuadrilateralCylindrical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &QuadrilateralCylindrical3D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &QuadrilateralCylindrical3D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &QuadrilateralCylindrical3D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &QuadrilateralCylindrical3D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	class_<QuadrilateralPolar2D_Domain>("QuadrilateralPolar2D_Domain")
		.add_property("num_vertices", &QuadrilateralPolar2D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &QuadrilateralPolar2D_Domain::get_vertices, "docstring")
		.def("add_vertex", &QuadrilateralPolar2D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &QuadrilateralPolar2D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &QuadrilateralPolar2D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &QuadrilateralPolar2D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &QuadrilateralPolar2D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &QuadrilateralPolar2D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	class_<QuadrilateralSpherical3D_Domain>("QuadrilateralSpherical3D_Domain")
		.add_property("num_vertices", &QuadrilateralSpherical3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &QuadrilateralSpherical3D_Domain::get_vertices, "docstring")
		.def("add_vertex", &QuadrilateralSpherical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &QuadrilateralSpherical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &QuadrilateralSpherical3D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &QuadrilateralSpherical3D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &QuadrilateralSpherical3D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &QuadrilateralSpherical3D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	/*******************************
	 * QUADRILATERAL SEGMENTATIONS *
	 *******************************/
	
	class_<QuadrilateralCartesian2D_Segmentation>("QuadrilateralCartesian2D_Segmentation", init<QuadrilateralCartesian2D_Domain &>())
		.def("create_segment", &QuadrilateralCartesian2D_Segmentation::create_segment, "docstring")
		.add_property("segments", &QuadrilateralCartesian2D_Segmentation::get_segments, "docstring")
	;
	
	class_<QuadrilateralCartesian3D_Segmentation>("QuadrilateralCartesian3D_Segmentation", init<QuadrilateralCartesian3D_Domain &>())
		.def("create_segment", &QuadrilateralCartesian3D_Segmentation::create_segment, "docstring")
		.add_property("segments", &QuadrilateralCartesian3D_Segmentation::get_segments, "docstring")
	;
	
	class_<QuadrilateralCylindrical3D_Segmentation>("QuadrilateralCylindrical3D_Segmentation", init<QuadrilateralCylindrical3D_Domain &>())
		.def("create_segment", &QuadrilateralCylindrical3D_Segmentation::create_segment, "docstring")
		.add_property("segments", &QuadrilateralCylindrical3D_Segmentation::get_segments, "docstring")
	;
	
	class_<QuadrilateralPolar2D_Segmentation>("QuadrilateralPolar2D_Segmentation", init<QuadrilateralPolar2D_Domain &>())
		.def("create_segment", &QuadrilateralPolar2D_Segmentation::create_segment, "docstring")
		.add_property("segments", &QuadrilateralPolar2D_Segmentation::get_segments, "docstring")
	;
	
	class_<QuadrilateralSpherical3D_Segmentation>("QuadrilateralSpherical3D_Segmentation", init<QuadrilateralSpherical3D_Domain &>())
		.def("create_segment", &QuadrilateralSpherical3D_Segmentation::create_segment, "docstring")
		.add_property("segments", &QuadrilateralSpherical3D_Segmentation::get_segments, "docstring")
	;
	
	/**************************
	 * QUADRILATERAL SEGMENTS *
	 **************************/
	
	class_<QuadrilateralCartesian2D_Segment>("QuadrilateralCartesian2D_Segment", init<QuadrilateralCartesian2D_Segment_t &, QuadrilateralCartesian2D_Segmentation &>())
		.def("create_cell", &QuadrilateralCartesian2D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralCartesian2D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<QuadrilateralCartesian3D_Segment>("QuadrilateralCartesian3D_Segment", init<QuadrilateralCartesian3D_Segment_t &, QuadrilateralCartesian3D_Segmentation &>())
		.def("create_cell", &QuadrilateralCartesian3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralCartesian3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<QuadrilateralCylindrical3D_Segment>("QuadrilateralCylindrical3D_Segment", init<QuadrilateralCylindrical3D_Segment_t &, QuadrilateralCylindrical3D_Segmentation &>())
		.def("create_cell", &QuadrilateralCylindrical3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralCylindrical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<QuadrilateralPolar2D_Segment>("QuadrilateralPolar2D_Segment", init<QuadrilateralPolar2D_Segment_t &, QuadrilateralPolar2D_Segmentation &>())
		.def("create_cell", &QuadrilateralPolar2D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralPolar2D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<QuadrilateralSpherical3D_Segment>("QuadrilateralSpherical3D_Segment", init<QuadrilateralSpherical3D_Segment_t &, QuadrilateralSpherical3D_Segmentation &>())
		.def("create_cell", &QuadrilateralSpherical3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralSpherical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	/***********************
	 * QUADRILATERAL CELLS *
	 ***********************/
	
	class_<QuadrilateralCartesian2D_Cell>("QuadrilateralCartesian2D_Cell", init<QuadrilateralCartesian2D_Cell_t &>())
		.add_property("vertices", &QuadrilateralCartesian2D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<QuadrilateralCartesian3D_Cell>("QuadrilateralCartesian3D_Cell", init<QuadrilateralCartesian3D_Cell_t &>())
		.add_property("vertices", &QuadrilateralCartesian3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<QuadrilateralCylindrical3D_Cell>("QuadrilateralCylindrical3D_Cell", init<QuadrilateralCylindrical3D_Cell_t &>())
		.add_property("vertices", &QuadrilateralCylindrical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<QuadrilateralPolar2D_Cell>("QuadrilateralPolar2D_Cell", init<QuadrilateralPolar2D_Cell_t &>())
		.add_property("vertices", &QuadrilateralPolar2D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<QuadrilateralSpherical3D_Cell>("QuadrilateralSpherical3D_Cell", init<QuadrilateralSpherical3D_Cell_t &>())
		.add_property("vertices", &QuadrilateralSpherical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	/**************************
	 * QUADRILATERAL VERTICES *
	 **************************/
	
	class_<QuadrilateralCartesian2D_Vertex>("QuadrilateralCartesian2D_Vertex", init<QuadrilateralCartesian2D_Vertex_t &>())
	;
	
	class_<QuadrilateralCartesian3D_Vertex>("QuadrilateralCartesian3D_Vertex", init<QuadrilateralCartesian3D_Vertex_t &>())
	;
	
	class_<QuadrilateralCylindrical3D_Vertex>("QuadrilateralCylindrical3D_Vertex", init<QuadrilateralCylindrical3D_Vertex_t &>())
	;
	
	class_<QuadrilateralPolar2D_Vertex>("QuadrilateralPolar2D_Vertex", init<QuadrilateralPolar2D_Vertex_t &>())
	;
	
	class_<QuadrilateralSpherical3D_Vertex>("QuadrilateralSpherical3D_Vertex", init<QuadrilateralSpherical3D_Vertex_t &>())
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
	
	/*************************
	 * TETRAHEDRAL DOMAINS *
	 *************************/
	
	class_<TetrahedralCartesian3D_Domain>("TetrahedralCartesian3D_Domain")
		.add_property("num_vertices", &TetrahedralCartesian3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &TetrahedralCartesian3D_Domain::get_vertices, "docstring")
		.def("add_vertex", &TetrahedralCartesian3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &TetrahedralCartesian3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &TetrahedralCartesian3D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &TetrahedralCartesian3D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &TetrahedralCartesian3D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &TetrahedralCartesian3D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	class_<TetrahedralCylindrical3D_Domain>("TetrahedralCylindrical3D_Domain")
		.add_property("num_vertices", &TetrahedralCylindrical3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &TetrahedralCylindrical3D_Domain::get_vertices, "docstring")
		.def("add_vertex", &TetrahedralCylindrical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &TetrahedralCylindrical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &TetrahedralCylindrical3D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &TetrahedralCylindrical3D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &TetrahedralCylindrical3D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &TetrahedralCylindrical3D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	class_<TetrahedralSpherical3D_Domain>("TetrahedralSpherical3D_Domain")
		.add_property("num_vertices", &TetrahedralSpherical3D_Domain::num_vertices, "Read-only property that returns the number of vertices in the domain.")
		.add_property("vertices", &TetrahedralSpherical3D_Domain::get_vertices, "docstring")
		.def("add_vertex", &TetrahedralSpherical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("get_vertex", &TetrahedralSpherical3D_Domain::get_vertex, "Return the vertex with the given unique ID (which was assigned when the vertex was added either to the domain or to a segment contained in the domain).")
		.def("read_netgen", &TetrahedralSpherical3D_Domain::read_netgen, "Read mesh data from a Netgen file.")
		.def("read_vtk", &TetrahedralSpherical3D_Domain::read_vtk, "Read mesh data from a VTK file.")
		.def("write_opendx", &TetrahedralSpherical3D_Domain::write_opendx, "Write mesh data to an OpenDX file.")
		.def("write_vtk", &TetrahedralSpherical3D_Domain::write_vtk, "Write mesh data to a VTK file.")
	;
	
	/*****************************
	 * TETRAHEDRAL SEGMENTATIONS *
	 *****************************/
	
	class_<TetrahedralCartesian3D_Segmentation>("TetrahedralCartesian3D_Segmentation", init<TetrahedralCartesian3D_Domain &>())
		.def("create_segment", &TetrahedralCartesian3D_Segmentation::create_segment, "docstring")
		.add_property("segments", &TetrahedralCartesian3D_Segmentation::get_segments, "docstring")
	;
	
	class_<TetrahedralCylindrical3D_Segmentation>("TetrahedralCylindrical3D_Segmentation", init<TetrahedralCylindrical3D_Domain &>())
		.def("create_segment", &TetrahedralCylindrical3D_Segmentation::create_segment, "docstring")
		.add_property("segments", &TetrahedralCylindrical3D_Segmentation::get_segments, "docstring")
	;
	
	class_<TetrahedralSpherical3D_Segmentation>("TetrahedralSpherical3D_Segmentation", init<TetrahedralSpherical3D_Domain &>())
		.def("create_segment", &TetrahedralSpherical3D_Segmentation::create_segment, "docstring")
		.add_property("segments", &TetrahedralSpherical3D_Segmentation::get_segments, "docstring")
	;
	
	/************************
	 * TETRAHEDRAL SEGMENTS *
	 ************************/
	
	class_<TetrahedralCartesian3D_Segment>("TetrahedralCartesian3D_Segment", init<TetrahedralCartesian3D_Segment_t &, TetrahedralCartesian3D_Segmentation &>())
		.def("create_cell", &TetrahedralCartesian3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TetrahedralCartesian3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TetrahedralCylindrical3D_Segment>("TetrahedralCylindrical3D_Segment", init<TetrahedralCylindrical3D_Segment_t &, TetrahedralCylindrical3D_Segmentation &>())
		.def("create_cell", &TetrahedralCylindrical3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TetrahedralCylindrical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TetrahedralSpherical3D_Segment>("TetrahedralSpherical3D_Segment", init<TetrahedralSpherical3D_Segment_t &, TetrahedralSpherical3D_Segmentation &>())
		.def("create_cell", &TetrahedralSpherical3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TetrahedralSpherical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	/*********************
	 * TETRAHEDRAL CELLS *
	 *********************/
	
	class_<TetrahedralCartesian3D_Cell>("TetrahedralCartesian3D_Cell", init<TetrahedralCartesian3D_Cell_t &>())
		.add_property("vertices", &TetrahedralCartesian3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<TetrahedralCylindrical3D_Cell>("TetrahedralCylindrical3D_Cell", init<TetrahedralCylindrical3D_Cell_t &>())
		.add_property("vertices", &TetrahedralCylindrical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<TetrahedralSpherical3D_Cell>("TetrahedralSpherical3D_Cell", init<TetrahedralSpherical3D_Cell_t &>())
		.add_property("vertices", &TetrahedralSpherical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	/************************
	 * TETRAHEDRAL VERTICES *
	 ************************/
	
	class_<TetrahedralCartesian3D_Vertex>("TetrahedralCartesian3D_Vertex", init<TetrahedralCartesian3D_Vertex_t &>())
	;
	
	class_<TetrahedralCylindrical3D_Vertex>("TetrahedralCylindrical3D_Vertex", init<TetrahedralCylindrical3D_Vertex_t &>())
	;
	
	class_<TetrahedralSpherical3D_Vertex>("TetrahedralSpherical3D_Vertex", init<TetrahedralSpherical3D_Vertex_t &>())
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
	
	/*****************
	 * APPLY_VORONOI *
	 *****************/
	
	def("apply_voronoi", &LinearCartesian1D_Domain_apply_voronoi, "docstring");
	def("apply_voronoi", &LinearCartesian2D_Domain_apply_voronoi, "docstring");
	def("apply_voronoi", &LinearCartesian3D_Domain_apply_voronoi, "docstring");
	def("apply_voronoi", &LinearCylindrical3D_Domain_apply_voronoi, "docstring");
	def("apply_voronoi", &LinearPolar2D_Domain_apply_voronoi, "docstring");
	def("apply_voronoi", &LinearSpherical3D_Domain_apply_voronoi, "docstring");
	
	def("apply_voronoi", &TriangularCartesian2D_Domain_apply_voronoi, "docstring");
	def("apply_voronoi", &TriangularCartesian3D_Domain_apply_voronoi, "docstring");
	def("apply_voronoi", &TriangularCylindrical3D_Domain_apply_voronoi, "docstring");
	def("apply_voronoi", &TriangularPolar2D_Domain_apply_voronoi, "docstring");
	def("apply_voronoi", &TriangularSpherical3D_Domain_apply_voronoi, "docstring");
	
	def("apply_voronoi", &QuadrilateralCartesian2D_Domain_apply_voronoi, "docstring");
	def("apply_voronoi", &QuadrilateralCartesian3D_Domain_apply_voronoi, "docstring");
	def("apply_voronoi", &QuadrilateralCylindrical3D_Domain_apply_voronoi, "docstring");
	def("apply_voronoi", &QuadrilateralPolar2D_Domain_apply_voronoi, "docstring");
	def("apply_voronoi", &QuadrilateralSpherical3D_Domain_apply_voronoi, "docstring");
	
	def("apply_voronoi", &TetrahedralCartesian3D_Domain_apply_voronoi, "docstring");
	def("apply_voronoi", &TetrahedralCylindrical3D_Domain_apply_voronoi, "docstring");
	def("apply_voronoi", &TetrahedralSpherical3D_Domain_apply_voronoi, "docstring");
	
	/************
	 * CENTROID *
	 ************/
	
	def("centroid", &LinearCartesian1D_Cell_centroid, "docstring");
	def("centroid", &LinearCartesian2D_Cell_centroid, "docstring");
	def("centroid", &LinearCartesian3D_Cell_centroid, "docstring");
	def("centroid", &LinearCylindrical3D_Cell_centroid, "docstring");
	def("centroid", &LinearPolar2D_Cell_centroid, "docstring");
	def("centroid", &LinearSpherical3D_Cell_centroid, "docstring");
	
	def("centroid", &TriangularCartesian2D_Cell_centroid, "docstring");
	def("centroid", &TriangularCartesian3D_Cell_centroid, "docstring");
	def("centroid", &TriangularCylindrical3D_Cell_centroid, "docstring");
	def("centroid", &TriangularPolar2D_Cell_centroid, "docstring");
	def("centroid", &TriangularSpherical3D_Cell_centroid, "docstring");
	
	def("centroid", &QuadrilateralCartesian2D_Cell_centroid, "docstring");
	def("centroid", &QuadrilateralCartesian3D_Cell_centroid, "docstring");
	def("centroid", &QuadrilateralCylindrical3D_Cell_centroid, "docstring");
	def("centroid", &QuadrilateralPolar2D_Cell_centroid, "docstring");
	def("centroid", &QuadrilateralSpherical3D_Cell_centroid, "docstring");
	
	def("centroid", &TetrahedralCartesian3D_Cell_centroid, "docstring");
	def("centroid", &TetrahedralCylindrical3D_Cell_centroid, "docstring");
	def("centroid", &TetrahedralSpherical3D_Cell_centroid, "docstring");
	
	/****************
	 * CIRCUMCENTER *
	 ****************/
	
	def("circumcenter", &LinearCartesian1D_Cell_circumcenter, "docstring");
	def("circumcenter", &LinearCartesian2D_Cell_circumcenter, "docstring");
	def("circumcenter", &LinearCartesian3D_Cell_circumcenter, "docstring");
	def("circumcenter", &LinearCylindrical3D_Cell_circumcenter, "docstring");
	def("circumcenter", &LinearPolar2D_Cell_circumcenter, "docstring");
	def("circumcenter", &LinearSpherical3D_Cell_circumcenter, "docstring");
	
	def("circumcenter", &TriangularCartesian2D_Cell_circumcenter, "docstring");
	def("circumcenter", &TriangularCartesian3D_Cell_circumcenter, "docstring");
	def("circumcenter", &TriangularCylindrical3D_Cell_circumcenter, "docstring");
	def("circumcenter", &TriangularPolar2D_Cell_circumcenter, "docstring");
	def("circumcenter", &TriangularSpherical3D_Cell_circumcenter, "docstring");
	
	def("circumcenter", &QuadrilateralCartesian2D_Cell_circumcenter, "docstring");
	def("circumcenter", &QuadrilateralCartesian3D_Cell_circumcenter, "docstring");
	def("circumcenter", &QuadrilateralCylindrical3D_Cell_circumcenter, "docstring");
	def("circumcenter", &QuadrilateralPolar2D_Cell_circumcenter, "docstring");
	def("circumcenter", &QuadrilateralSpherical3D_Cell_circumcenter, "docstring");
	
	def("circumcenter", &TetrahedralCartesian3D_Cell_circumcenter, "docstring");
	def("circumcenter", &TetrahedralCylindrical3D_Cell_circumcenter, "docstring");
	def("circumcenter", &TetrahedralSpherical3D_Cell_circumcenter, "docstring");
	
	/***************
	 * CELL_REFINE *
	 ***************/
	
	def("cell_refine", &TriangularCartesian2D_Domain_cell_refine, "docstring");
	def("cell_refine", &TriangularCartesian3D_Domain_cell_refine, "docstring");
	def("cell_refine", &TriangularCylindrical3D_Domain_cell_refine, "docstring");
	def("cell_refine", &TriangularPolar2D_Domain_cell_refine, "docstring");
	def("cell_refine", &TriangularSpherical3D_Domain_cell_refine, "docstring");
	
	def("cell_refine", &TetrahedralCartesian3D_Domain_cell_refine, "docstring");
	def("cell_refine", &TetrahedralCylindrical3D_Domain_cell_refine, "docstring");
	def("cell_refine", &TetrahedralSpherical3D_Domain_cell_refine, "docstring");
	
	/****************
	 * CELL-SURFACE *
	 ****************/
	
	def("surface", &LinearCartesian1D_Cell_surface, "docstring");
	def("surface", &LinearCartesian2D_Cell_surface, "docstring");
	def("surface", &LinearCartesian3D_Cell_surface, "docstring");
	def("surface", &LinearCylindrical3D_Cell_surface, "docstring");
	def("surface", &LinearPolar2D_Cell_surface, "docstring");
	def("surface", &LinearSpherical3D_Cell_surface, "docstring");
	
	def("surface", &TriangularCartesian2D_Cell_surface, "docstring");
	def("surface", &TriangularCartesian3D_Cell_surface, "docstring");
	def("surface", &TriangularCylindrical3D_Cell_surface, "docstring");
	def("surface", &TriangularPolar2D_Cell_surface, "docstring");
	def("surface", &TriangularSpherical3D_Cell_surface, "docstring");
	
	def("surface", &QuadrilateralCartesian2D_Cell_surface, "docstring");
	def("surface", &QuadrilateralCartesian3D_Cell_surface, "docstring");
	def("surface", &QuadrilateralCylindrical3D_Cell_surface, "docstring");
	def("surface", &QuadrilateralPolar2D_Cell_surface, "docstring");
	def("surface", &QuadrilateralSpherical3D_Cell_surface, "docstring");
	
	def("surface", &TetrahedralCartesian3D_Cell_surface, "docstring");
	def("surface", &TetrahedralCylindrical3D_Cell_surface, "docstring");
	def("surface", &TetrahedralSpherical3D_Cell_surface, "docstring");
	
	/***************
	 * CELL-VOLUME *
	 ***************/
	
	def("volume", &LinearCartesian1D_Cell_volume, "docstring");
	def("volume", &LinearCartesian2D_Cell_volume, "docstring");
	def("volume", &LinearCartesian3D_Cell_volume, "docstring");
	def("volume", &LinearCylindrical3D_Cell_volume, "docstring");
	def("volume", &LinearPolar2D_Cell_volume, "docstring");
	def("volume", &LinearSpherical3D_Cell_volume, "docstring");
	
	def("volume", &TriangularCartesian2D_Cell_volume, "docstring");
	def("volume", &TriangularCartesian3D_Cell_volume, "docstring");
	def("volume", &TriangularCylindrical3D_Cell_volume, "docstring");
	def("volume", &TriangularPolar2D_Cell_volume, "docstring");
	def("volume", &TriangularSpherical3D_Cell_volume, "docstring");
	
	def("volume", &QuadrilateralCartesian2D_Cell_volume, "docstring");
	def("volume", &QuadrilateralCartesian3D_Cell_volume, "docstring");
	def("volume", &QuadrilateralCylindrical3D_Cell_volume, "docstring");
	def("volume", &QuadrilateralPolar2D_Cell_volume, "docstring");
	def("volume", &QuadrilateralSpherical3D_Cell_volume, "docstring");
	
	def("volume", &TetrahedralCartesian3D_Cell_volume, "docstring");
	def("volume", &TetrahedralCylindrical3D_Cell_volume, "docstring");
	def("volume", &TetrahedralSpherical3D_Cell_volume, "docstring");
	
	/******************
	 * DOMAIN-SURFACE *
	 ******************/
	
	def("surface", &LinearCartesian1D_Domain_surface, "docstring");
	def("surface", &LinearCartesian2D_Domain_surface, "docstring");
	def("surface", &LinearCartesian3D_Domain_surface, "docstring");
	def("surface", &LinearCylindrical3D_Domain_surface, "docstring");
	def("surface", &LinearPolar2D_Domain_surface, "docstring");
	def("surface", &LinearSpherical3D_Domain_surface, "docstring");
	
	def("surface", &TriangularCartesian2D_Domain_surface, "docstring");
	def("surface", &TriangularCartesian3D_Domain_surface, "docstring");
	def("surface", &TriangularCylindrical3D_Domain_surface, "docstring");
	def("surface", &TriangularPolar2D_Domain_surface, "docstring");
	def("surface", &TriangularSpherical3D_Domain_surface, "docstring");
	
	def("surface", &QuadrilateralCartesian2D_Domain_surface, "docstring");
	def("surface", &QuadrilateralCartesian3D_Domain_surface, "docstring");
	def("surface", &QuadrilateralCylindrical3D_Domain_surface, "docstring");
	def("surface", &QuadrilateralPolar2D_Domain_surface, "docstring");
	def("surface", &QuadrilateralSpherical3D_Domain_surface, "docstring");
	
	def("surface", &TetrahedralCartesian3D_Domain_surface, "docstring");
	def("surface", &TetrahedralCylindrical3D_Domain_surface, "docstring");
	def("surface", &TetrahedralSpherical3D_Domain_surface, "docstring");
	
	/*****************
	 * DOMAIN-VOLUME *
	 *****************/
	
	def("volume", &LinearCartesian1D_Domain_volume, "docstring");
	def("volume", &LinearCartesian2D_Domain_volume, "docstring");
	def("volume", &LinearCartesian3D_Domain_volume, "docstring");
	def("volume", &LinearCylindrical3D_Domain_volume, "docstring");
	def("volume", &LinearPolar2D_Domain_volume, "docstring");
	def("volume", &LinearSpherical3D_Domain_volume, "docstring");
	
	def("volume", &TriangularCartesian2D_Domain_volume, "docstring");
	def("volume", &TriangularCartesian3D_Domain_volume, "docstring");
	def("volume", &TriangularCylindrical3D_Domain_volume, "docstring");
	def("volume", &TriangularPolar2D_Domain_volume, "docstring");
	def("volume", &TriangularSpherical3D_Domain_volume, "docstring");
	
	def("volume", &QuadrilateralCartesian2D_Domain_volume, "docstring");
	def("volume", &QuadrilateralCartesian3D_Domain_volume, "docstring");
	def("volume", &QuadrilateralCylindrical3D_Domain_volume, "docstring");
	def("volume", &QuadrilateralPolar2D_Domain_volume, "docstring");
	def("volume", &QuadrilateralSpherical3D_Domain_volume, "docstring");
	
	def("volume", &TetrahedralCartesian3D_Domain_volume, "docstring");
	def("volume", &TetrahedralCylindrical3D_Domain_volume, "docstring");
	def("volume", &TetrahedralSpherical3D_Domain_volume, "docstring");
	
	/******************************************
	 * IS_BOUNDARY (with domains and facets) *
	 ******************************************/
	
	def("is_boundary", &LinearCartesian1D_Domain_Facet_is_boundary, "docstring");
	def("is_boundary", &LinearCartesian2D_Domain_Facet_is_boundary, "docstring");
	def("is_boundary", &LinearCartesian3D_Domain_Facet_is_boundary, "docstring");
	def("is_boundary", &LinearCylindrical3D_Domain_Facet_is_boundary, "docstring");
	def("is_boundary", &LinearPolar2D_Domain_Facet_is_boundary, "docstring");
	def("is_boundary", &LinearSpherical3D_Domain_Facet_is_boundary, "docstring");
	
	def("is_boundary", &TriangularCartesian2D_Domain_Facet_is_boundary, "docstring");
	def("is_boundary", &TriangularCartesian3D_Domain_Facet_is_boundary, "docstring");
	def("is_boundary", &TriangularCylindrical3D_Domain_Facet_is_boundary, "docstring");
	def("is_boundary", &TriangularPolar2D_Domain_Facet_is_boundary, "docstring");
	def("is_boundary", &TriangularSpherical3D_Domain_Facet_is_boundary, "docstring");
	
	def("is_boundary", &QuadrilateralCartesian2D_Domain_Facet_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralCartesian3D_Domain_Facet_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralCylindrical3D_Domain_Facet_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralPolar2D_Domain_Facet_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralSpherical3D_Domain_Facet_is_boundary, "docstring");
	
	def("is_boundary", &TetrahedralCartesian3D_Domain_Facet_is_boundary, "docstring");
	def("is_boundary", &TetrahedralCylindrical3D_Domain_Facet_is_boundary, "docstring");
	def("is_boundary", &TetrahedralSpherical3D_Domain_Facet_is_boundary, "docstring");
	
	/*****************************************
	 * IS_BOUNDARY (with domains and edges) *
	 *****************************************/
	
	def("is_boundary", &TriangularCartesian2D_Domain_Edge_is_boundary, "docstring");
	def("is_boundary", &TriangularCartesian3D_Domain_Edge_is_boundary, "docstring");
	def("is_boundary", &TriangularCylindrical3D_Domain_Edge_is_boundary, "docstring");
	def("is_boundary", &TriangularPolar2D_Domain_Edge_is_boundary, "docstring");
	def("is_boundary", &TriangularSpherical3D_Domain_Edge_is_boundary, "docstring");
	
	def("is_boundary", &QuadrilateralCartesian2D_Domain_Edge_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralCartesian3D_Domain_Edge_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralCylindrical3D_Domain_Edge_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralPolar2D_Domain_Edge_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralSpherical3D_Domain_Edge_is_boundary, "docstring");
	
	def("is_boundary", &TetrahedralCartesian3D_Domain_Edge_is_boundary, "docstring");
	def("is_boundary", &TetrahedralCylindrical3D_Domain_Edge_is_boundary, "docstring");
	def("is_boundary", &TetrahedralSpherical3D_Domain_Edge_is_boundary, "docstring");
	
	/********************************************
	 * IS_BOUNDARY (with domains and vertices) *
	 ********************************************/
	
	def("is_boundary", &LinearCartesian1D_Domain_Vertex_is_boundary, "docstring");
	def("is_boundary", &LinearCartesian2D_Domain_Vertex_is_boundary, "docstring");
	def("is_boundary", &LinearCartesian3D_Domain_Vertex_is_boundary, "docstring");
	def("is_boundary", &LinearCylindrical3D_Domain_Vertex_is_boundary, "docstring");
	def("is_boundary", &LinearPolar2D_Domain_Vertex_is_boundary, "docstring");
	def("is_boundary", &LinearSpherical3D_Domain_Vertex_is_boundary, "docstring");
	
	def("is_boundary", &TriangularCartesian2D_Domain_Vertex_is_boundary, "docstring");
	def("is_boundary", &TriangularCartesian3D_Domain_Vertex_is_boundary, "docstring");
	def("is_boundary", &TriangularCylindrical3D_Domain_Vertex_is_boundary, "docstring");
	def("is_boundary", &TriangularPolar2D_Domain_Vertex_is_boundary, "docstring");
	def("is_boundary", &TriangularSpherical3D_Domain_Vertex_is_boundary, "docstring");
	
	def("is_boundary", &QuadrilateralCartesian2D_Domain_Vertex_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralCartesian3D_Domain_Vertex_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralCylindrical3D_Domain_Vertex_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralPolar2D_Domain_Vertex_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralSpherical3D_Domain_Vertex_is_boundary, "docstring");
	
	def("is_boundary", &TetrahedralCartesian3D_Domain_Vertex_is_boundary, "docstring");
	def("is_boundary", &TetrahedralCylindrical3D_Domain_Vertex_is_boundary, "docstring");
	def("is_boundary", &TetrahedralSpherical3D_Domain_Vertex_is_boundary, "docstring");
	
	/*******************************************
	 * IS_BOUNDARY (with segments and facets) *
	 *******************************************/
	
	def("is_boundary", &LinearCartesian1D_Segment_Facet_is_boundary, "docstring");
	def("is_boundary", &LinearCartesian2D_Segment_Facet_is_boundary, "docstring");
	def("is_boundary", &LinearCartesian3D_Segment_Facet_is_boundary, "docstring");
	def("is_boundary", &LinearCylindrical3D_Segment_Facet_is_boundary, "docstring");
	def("is_boundary", &LinearPolar2D_Segment_Facet_is_boundary, "docstring");
	def("is_boundary", &LinearSpherical3D_Segment_Facet_is_boundary, "docstring");
	
	def("is_boundary", &TriangularCartesian2D_Segment_Facet_is_boundary, "docstring");
	def("is_boundary", &TriangularCartesian3D_Segment_Facet_is_boundary, "docstring");
	def("is_boundary", &TriangularCylindrical3D_Segment_Facet_is_boundary, "docstring");
	def("is_boundary", &TriangularPolar2D_Segment_Facet_is_boundary, "docstring");
	def("is_boundary", &TriangularSpherical3D_Segment_Facet_is_boundary, "docstring");
	
	def("is_boundary", &QuadrilateralCartesian2D_Segment_Facet_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralCartesian3D_Segment_Facet_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralCylindrical3D_Segment_Facet_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralPolar2D_Segment_Facet_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralSpherical3D_Segment_Facet_is_boundary, "docstring");
	
	def("is_boundary", &TetrahedralCartesian3D_Segment_Facet_is_boundary, "docstring");
	def("is_boundary", &TetrahedralCylindrical3D_Segment_Facet_is_boundary, "docstring");
	def("is_boundary", &TetrahedralSpherical3D_Segment_Facet_is_boundary, "docstring");
	
	/******************************************
	 * IS_BOUNDARY (with segments and edges) *
	 ******************************************/
	
	def("is_boundary", &TriangularCartesian2D_Segment_Edge_is_boundary, "docstring");
	def("is_boundary", &TriangularCartesian3D_Segment_Edge_is_boundary, "docstring");
	def("is_boundary", &TriangularCylindrical3D_Segment_Edge_is_boundary, "docstring");
	def("is_boundary", &TriangularPolar2D_Segment_Edge_is_boundary, "docstring");
	def("is_boundary", &TriangularSpherical3D_Segment_Edge_is_boundary, "docstring");
	
	def("is_boundary", &QuadrilateralCartesian2D_Segment_Edge_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralCartesian3D_Segment_Edge_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralCylindrical3D_Segment_Edge_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralPolar2D_Segment_Edge_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralSpherical3D_Segment_Edge_is_boundary, "docstring");
	
	def("is_boundary", &TetrahedralCartesian3D_Segment_Edge_is_boundary, "docstring");
	def("is_boundary", &TetrahedralCylindrical3D_Segment_Edge_is_boundary, "docstring");
	def("is_boundary", &TetrahedralSpherical3D_Segment_Edge_is_boundary, "docstring");
	
	/*********************************************
	 * IS_BOUNDARY (with segments and vertices) *
	 *********************************************/
	
	def("is_boundary", &LinearCartesian1D_Segment_Vertex_is_boundary, "docstring");
	def("is_boundary", &LinearCartesian2D_Segment_Vertex_is_boundary, "docstring");
	def("is_boundary", &LinearCartesian3D_Segment_Vertex_is_boundary, "docstring");
	def("is_boundary", &LinearCylindrical3D_Segment_Vertex_is_boundary, "docstring");
	def("is_boundary", &LinearPolar2D_Segment_Vertex_is_boundary, "docstring");
	def("is_boundary", &LinearSpherical3D_Segment_Vertex_is_boundary, "docstring");
	
	def("is_boundary", &TriangularCartesian2D_Segment_Vertex_is_boundary, "docstring");
	def("is_boundary", &TriangularCartesian3D_Segment_Vertex_is_boundary, "docstring");
	def("is_boundary", &TriangularCylindrical3D_Segment_Vertex_is_boundary, "docstring");
	def("is_boundary", &TriangularPolar2D_Segment_Vertex_is_boundary, "docstring");
	def("is_boundary", &TriangularSpherical3D_Segment_Vertex_is_boundary, "docstring");
	
	def("is_boundary", &QuadrilateralCartesian2D_Segment_Vertex_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralCartesian3D_Segment_Vertex_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralCylindrical3D_Segment_Vertex_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralPolar2D_Segment_Vertex_is_boundary, "docstring");
	def("is_boundary", &QuadrilateralSpherical3D_Segment_Vertex_is_boundary, "docstring");
	
	def("is_boundary", &TetrahedralCartesian3D_Segment_Vertex_is_boundary, "docstring");
	def("is_boundary", &TetrahedralCylindrical3D_Segment_Vertex_is_boundary, "docstring");
	def("is_boundary", &TetrahedralSpherical3D_Segment_Vertex_is_boundary, "docstring");
	
	/******************************
	 * IS_INTERFACE (with facets) *
	 ******************************/
	
	def("is_interface", &LinearCartesian1D_Facet_is_interface, "docstring");
	def("is_interface", &LinearCartesian2D_Facet_is_interface, "docstring");
	def("is_interface", &LinearCartesian3D_Facet_is_interface, "docstring");
	def("is_interface", &LinearCylindrical3D_Facet_is_interface, "docstring");
	def("is_interface", &LinearPolar2D_Facet_is_interface, "docstring");
	def("is_interface", &LinearSpherical3D_Facet_is_interface, "docstring");
	
	def("is_interface", &TriangularCartesian2D_Facet_is_interface, "docstring");
	def("is_interface", &TriangularCartesian3D_Facet_is_interface, "docstring");
	def("is_interface", &TriangularCylindrical3D_Facet_is_interface, "docstring");
	def("is_interface", &TriangularPolar2D_Facet_is_interface, "docstring");
	def("is_interface", &TriangularSpherical3D_Facet_is_interface, "docstring");
	
	def("is_interface", &QuadrilateralCartesian2D_Facet_is_interface, "docstring");
	def("is_interface", &QuadrilateralCartesian3D_Facet_is_interface, "docstring");
	def("is_interface", &QuadrilateralCylindrical3D_Facet_is_interface, "docstring");
	def("is_interface", &QuadrilateralPolar2D_Facet_is_interface, "docstring");
	def("is_interface", &QuadrilateralSpherical3D_Facet_is_interface, "docstring");
	
	def("is_interface", &TetrahedralCartesian3D_Facet_is_interface, "docstring");
	def("is_interface", &TetrahedralCylindrical3D_Facet_is_interface, "docstring");
	def("is_interface", &TetrahedralSpherical3D_Facet_is_interface, "docstring");
	
	/*****************************
	 * IS_INTERFACE (with edges) *
	 *****************************/
	
	def("is_interface", &TriangularCartesian2D_Edge_is_interface, "docstring");
	def("is_interface", &TriangularCartesian3D_Edge_is_interface, "docstring");
	def("is_interface", &TriangularCylindrical3D_Edge_is_interface, "docstring");
	def("is_interface", &TriangularPolar2D_Edge_is_interface, "docstring");
	def("is_interface", &TriangularSpherical3D_Edge_is_interface, "docstring");
	
	def("is_interface", &QuadrilateralCartesian2D_Edge_is_interface, "docstring");
	def("is_interface", &QuadrilateralCartesian3D_Edge_is_interface, "docstring");
	def("is_interface", &QuadrilateralCylindrical3D_Edge_is_interface, "docstring");
	def("is_interface", &QuadrilateralPolar2D_Edge_is_interface, "docstring");
	def("is_interface", &QuadrilateralSpherical3D_Edge_is_interface, "docstring");
	
	def("is_interface", &TetrahedralCartesian3D_Edge_is_interface, "docstring");
	def("is_interface", &TetrahedralCylindrical3D_Edge_is_interface, "docstring");
	def("is_interface", &TetrahedralSpherical3D_Edge_is_interface, "docstring");
	
	/********************************
	 * IS_INTERFACE (with vertices) *
	 ********************************/
	
	def("is_interface", &LinearCartesian1D_Vertex_is_interface, "docstring");
	def("is_interface", &LinearCartesian2D_Vertex_is_interface, "docstring");
	def("is_interface", &LinearCartesian3D_Vertex_is_interface, "docstring");
	def("is_interface", &LinearCylindrical3D_Vertex_is_interface, "docstring");
	def("is_interface", &LinearPolar2D_Vertex_is_interface, "docstring");
	def("is_interface", &LinearSpherical3D_Vertex_is_interface, "docstring");
	
	def("is_interface", &TriangularCartesian2D_Vertex_is_interface, "docstring");
	def("is_interface", &TriangularCartesian3D_Vertex_is_interface, "docstring");
	def("is_interface", &TriangularCylindrical3D_Vertex_is_interface, "docstring");
	def("is_interface", &TriangularPolar2D_Vertex_is_interface, "docstring");
	def("is_interface", &TriangularSpherical3D_Vertex_is_interface, "docstring");
	
	def("is_interface", &QuadrilateralCartesian2D_Vertex_is_interface, "docstring");
	def("is_interface", &QuadrilateralCartesian3D_Vertex_is_interface, "docstring");
	def("is_interface", &QuadrilateralCylindrical3D_Vertex_is_interface, "docstring");
	def("is_interface", &QuadrilateralPolar2D_Vertex_is_interface, "docstring");
	def("is_interface", &QuadrilateralSpherical3D_Vertex_is_interface, "docstring");
	
	def("is_interface", &TetrahedralCartesian3D_Vertex_is_interface, "docstring");
	def("is_interface", &TetrahedralCylindrical3D_Vertex_is_interface, "docstring");
	def("is_interface", &TetrahedralSpherical3D_Vertex_is_interface, "docstring");
	
	/**********
	 * REFINE *
	 **********/
	
	def("refine", &TriangularCartesian2D_Domain_refine, "docstring");
	def("refine", &TriangularCartesian3D_Domain_refine, "docstring");
	def("refine", &TriangularCylindrical3D_Domain_refine, "docstring");
	def("refine", &TriangularPolar2D_Domain_refine, "docstring");
	def("refine", &TriangularSpherical3D_Domain_refine, "docstring");
	
	def("refine", &TetrahedralCartesian3D_Domain_refine, "docstring");
	def("refine", &TetrahedralCylindrical3D_Domain_refine, "docstring");
	def("refine", &TetrahedralSpherical3D_Domain_refine, "docstring");
	
	/********************
	 * REFINE_UNIFORMLY *
	 ********************/
	
	def("refine_uniformly", &TriangularCartesian2D_Domain_refine_uniformly, "docstring");
	def("refine_uniformly", &TriangularCartesian3D_Domain_refine_uniformly, "docstring");
	def("refine_uniformly", &TriangularCylindrical3D_Domain_refine_uniformly, "docstring");
	def("refine_uniformly", &TriangularPolar2D_Domain_refine_uniformly, "docstring");
	def("refine_uniformly", &TriangularSpherical3D_Domain_refine_uniformly, "docstring");
	
	def("refine_uniformly", &TetrahedralCartesian3D_Domain_refine_uniformly, "docstring");
	def("refine_uniformly", &TetrahedralCylindrical3D_Domain_refine_uniformly, "docstring");
	def("refine_uniformly", &TetrahedralSpherical3D_Domain_refine_uniformly, "docstring");
	
	/*******************
	 * SEGMENT-SURFACE *
	 *******************/
	
	def("surface", &LinearCartesian1D_Segment_surface, "docstring");
	def("surface", &LinearCartesian2D_Segment_surface, "docstring");
	def("surface", &LinearCartesian3D_Segment_surface, "docstring");
	def("surface", &LinearCylindrical3D_Segment_surface, "docstring");
	def("surface", &LinearPolar2D_Segment_surface, "docstring");
	def("surface", &LinearSpherical3D_Segment_surface, "docstring");
	
	def("surface", &TriangularCartesian2D_Segment_surface, "docstring");
	def("surface", &TriangularCartesian3D_Segment_surface, "docstring");
	def("surface", &TriangularCylindrical3D_Segment_surface, "docstring");
	def("surface", &TriangularPolar2D_Segment_surface, "docstring");
	def("surface", &TriangularSpherical3D_Segment_surface, "docstring");
	
	def("surface", &QuadrilateralCartesian2D_Segment_surface, "docstring");
	def("surface", &QuadrilateralCartesian3D_Segment_surface, "docstring");
	def("surface", &QuadrilateralCylindrical3D_Segment_surface, "docstring");
	def("surface", &QuadrilateralPolar2D_Segment_surface, "docstring");
	def("surface", &QuadrilateralSpherical3D_Segment_surface, "docstring");
	
	def("surface", &TetrahedralCartesian3D_Segment_surface, "docstring");
	def("surface", &TetrahedralCylindrical3D_Segment_surface, "docstring");
	def("surface", &TetrahedralSpherical3D_Segment_surface, "docstring");
	
	/******************
	 * SEGMENT-VOLUME *
	 ******************/
	
	def("volume", &LinearCartesian1D_Segment_volume, "docstring");
	def("volume", &LinearCartesian2D_Segment_volume, "docstring");
	def("volume", &LinearCartesian3D_Segment_volume, "docstring");
	def("volume", &LinearCylindrical3D_Segment_volume, "docstring");
	def("volume", &LinearPolar2D_Segment_volume, "docstring");
	def("volume", &LinearSpherical3D_Segment_volume, "docstring");
	
	def("volume", &TriangularCartesian2D_Segment_volume, "docstring");
	def("volume", &TriangularCartesian3D_Segment_volume, "docstring");
	def("volume", &TriangularCylindrical3D_Segment_volume, "docstring");
	def("volume", &TriangularPolar2D_Segment_volume, "docstring");
	def("volume", &TriangularSpherical3D_Segment_volume, "docstring");
	
	def("volume", &QuadrilateralCartesian2D_Segment_volume, "docstring");
	def("volume", &QuadrilateralCartesian3D_Segment_volume, "docstring");
	def("volume", &QuadrilateralCylindrical3D_Segment_volume, "docstring");
	def("volume", &QuadrilateralPolar2D_Segment_volume, "docstring");
	def("volume", &QuadrilateralSpherical3D_Segment_volume, "docstring");
	
	def("volume", &TetrahedralCartesian3D_Segment_volume, "docstring");
	def("volume", &TetrahedralCylindrical3D_Segment_volume, "docstring");
	def("volume", &TetrahedralSpherical3D_Segment_volume, "docstring");
}
