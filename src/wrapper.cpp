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

#include "algorithms/cell_based.hpp"
#include "algorithms/domain_based.hpp"
#include "algorithms/segment_based.hpp"

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
	 * LIENAR VERTICES *
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
	
	/*************************
	 * CELL-BASED ALGORITHMS *
	 *************************/
	
	def("LinearCartesian1D_Cell_centroid", &LinearCartesian1D_Cell_centroid, "docstring");
	def("LinearCartesian2D_Cell_centroid", &LinearCartesian2D_Cell_centroid, "docstring");
	def("LinearCartesian3D_Cell_centroid", &LinearCartesian3D_Cell_centroid, "docstring");
	def("LinearCylindrical3D_Cell_centroid", &LinearCylindrical3D_Cell_centroid, "docstring");
	def("LinearPolar2D_Cell_centroid", &LinearPolar2D_Cell_centroid, "docstring");
	def("LinearSpherical3D_Cell_centroid", &LinearSpherical3D_Cell_centroid, "docstring");
	def("TriangularCartesian2D_Cell_centroid", &TriangularCartesian2D_Cell_centroid, "docstring");
	def("TriangularCartesian3D_Cell_centroid", &TriangularCartesian3D_Cell_centroid, "docstring");
	def("TriangularCylindrical3D_Cell_centroid", &TriangularCylindrical3D_Cell_centroid, "docstring");
	def("TriangularPolar2D_Cell_centroid", &TriangularPolar2D_Cell_centroid, "docstring");
	def("TriangularSpherical3D_Cell_centroid", &TriangularSpherical3D_Cell_centroid, "docstring");
	def("QuadrilateralCartesian2D_Cell_centroid", &QuadrilateralCartesian2D_Cell_centroid, "docstring");
	def("QuadrilateralCartesian3D_Cell_centroid", &QuadrilateralCartesian3D_Cell_centroid, "docstring");
	def("QuadrilateralCylindrical3D_Cell_centroid", &QuadrilateralCylindrical3D_Cell_centroid, "docstring");
	def("QuadrilateralPolar2D_Cell_centroid", &QuadrilateralPolar2D_Cell_centroid, "docstring");
	def("QuadrilateralSpherical3D_Cell_centroid", &QuadrilateralSpherical3D_Cell_centroid, "docstring");
	def("TetrahedralCartesian3D_Cell_centroid", &TetrahedralCartesian3D_Cell_centroid, "docstring");
	def("TetrahedralCylindrical3D_Cell_centroid", &TetrahedralCylindrical3D_Cell_centroid, "docstring");
	def("TetrahedralSpherical3D_Cell_centroid", &TetrahedralSpherical3D_Cell_centroid, "docstring");
	
	def("LinearCartesian1D_Cell_circumcenter", &LinearCartesian1D_Cell_circumcenter, "docstring");
	def("LinearCartesian2D_Cell_circumcenter", &LinearCartesian2D_Cell_circumcenter, "docstring");
	def("LinearCartesian3D_Cell_circumcenter", &LinearCartesian3D_Cell_circumcenter, "docstring");
	def("LinearCylindrical3D_Cell_circumcenter", &LinearCylindrical3D_Cell_circumcenter, "docstring");
	def("LinearPolar2D_Cell_circumcenter", &LinearPolar2D_Cell_circumcenter, "docstring");
	def("LinearSpherical3D_Cell_circumcenter", &LinearSpherical3D_Cell_circumcenter, "docstring");
	def("TriangularCartesian2D_Cell_circumcenter", &TriangularCartesian2D_Cell_circumcenter, "docstring");
	def("TriangularCartesian3D_Cell_circumcenter", &TriangularCartesian3D_Cell_circumcenter, "docstring");
	def("TriangularCylindrical3D_Cell_circumcenter", &TriangularCylindrical3D_Cell_circumcenter, "docstring");
	def("TriangularPolar2D_Cell_circumcenter", &TriangularPolar2D_Cell_circumcenter, "docstring");
	def("TriangularSpherical3D_Cell_circumcenter", &TriangularSpherical3D_Cell_circumcenter, "docstring");
	def("QuadrilateralCartesian2D_Cell_circumcenter", &QuadrilateralCartesian2D_Cell_circumcenter, "docstring");
	def("QuadrilateralCartesian3D_Cell_circumcenter", &QuadrilateralCartesian3D_Cell_circumcenter, "docstring");
	def("QuadrilateralCylindrical3D_Cell_circumcenter", &QuadrilateralCylindrical3D_Cell_circumcenter, "docstring");
	def("QuadrilateralPolar2D_Cell_circumcenter", &QuadrilateralPolar2D_Cell_circumcenter, "docstring");
	def("QuadrilateralSpherical3D_Cell_circumcenter", &QuadrilateralSpherical3D_Cell_circumcenter, "docstring");
	def("TetrahedralCartesian3D_Cell_circumcenter", &TetrahedralCartesian3D_Cell_circumcenter, "docstring");
	def("TetrahedralCylindrical3D_Cell_circumcenter", &TetrahedralCylindrical3D_Cell_circumcenter, "docstring");
	def("TetrahedralSpherical3D_Cell_circumcenter", &TetrahedralSpherical3D_Cell_circumcenter, "docstring");
	
	def("LinearCartesian1D_Cell_surface", &LinearCartesian1D_Cell_surface, "docstring");
	def("LinearCartesian2D_Cell_surface", &LinearCartesian2D_Cell_surface, "docstring");
	def("LinearCartesian3D_Cell_surface", &LinearCartesian3D_Cell_surface, "docstring");
	def("LinearCylindrical3D_Cell_surface", &LinearCylindrical3D_Cell_surface, "docstring");
	def("LinearPolar2D_Cell_surface", &LinearPolar2D_Cell_surface, "docstring");
	def("LinearSpherical3D_Cell_surface", &LinearSpherical3D_Cell_surface, "docstring");
	def("TriangularCartesian2D_Cell_surface", &TriangularCartesian2D_Cell_surface, "docstring");
	def("TriangularCartesian3D_Cell_surface", &TriangularCartesian3D_Cell_surface, "docstring");
	def("TriangularCylindrical3D_Cell_surface", &TriangularCylindrical3D_Cell_surface, "docstring");
	def("TriangularPolar2D_Cell_surface", &TriangularPolar2D_Cell_surface, "docstring");
	def("TriangularSpherical3D_Cell_surface", &TriangularSpherical3D_Cell_surface, "docstring");
	def("QuadrilateralCartesian2D_Cell_surface", &QuadrilateralCartesian2D_Cell_surface, "docstring");
	def("QuadrilateralCartesian3D_Cell_surface", &QuadrilateralCartesian3D_Cell_surface, "docstring");
	def("QuadrilateralCylindrical3D_Cell_surface", &QuadrilateralCylindrical3D_Cell_surface, "docstring");
	def("QuadrilateralPolar2D_Cell_surface", &QuadrilateralPolar2D_Cell_surface, "docstring");
	def("QuadrilateralSpherical3D_Cell_surface", &QuadrilateralSpherical3D_Cell_surface, "docstring");
	def("TetrahedralCartesian3D_Cell_surface", &TetrahedralCartesian3D_Cell_surface, "docstring");
	def("TetrahedralCylindrical3D_Cell_surface", &TetrahedralCylindrical3D_Cell_surface, "docstring");
	def("TetrahedralSpherical3D_Cell_surface", &TetrahedralSpherical3D_Cell_surface, "docstring");
	
	def("LinearCartesian1D_Cell_volume", &LinearCartesian1D_Cell_volume, "docstring");
	def("LinearCartesian2D_Cell_volume", &LinearCartesian2D_Cell_volume, "docstring");
	def("LinearCartesian3D_Cell_volume", &LinearCartesian3D_Cell_volume, "docstring");
	def("LinearCylindrical3D_Cell_volume", &LinearCylindrical3D_Cell_volume, "docstring");
	def("LinearPolar2D_Cell_volume", &LinearPolar2D_Cell_volume, "docstring");
	def("LinearSpherical3D_Cell_volume", &LinearSpherical3D_Cell_volume, "docstring");
	def("TriangularCartesian2D_Cell_volume", &TriangularCartesian2D_Cell_volume, "docstring");
	def("TriangularCartesian3D_Cell_volume", &TriangularCartesian3D_Cell_volume, "docstring");
	def("TriangularCylindrical3D_Cell_volume", &TriangularCylindrical3D_Cell_volume, "docstring");
	def("TriangularPolar2D_Cell_volume", &TriangularPolar2D_Cell_volume, "docstring");
	def("TriangularSpherical3D_Cell_volume", &TriangularSpherical3D_Cell_volume, "docstring");
	def("QuadrilateralCartesian2D_Cell_volume", &QuadrilateralCartesian2D_Cell_volume, "docstring");
	def("QuadrilateralCartesian3D_Cell_volume", &QuadrilateralCartesian3D_Cell_volume, "docstring");
	def("QuadrilateralCylindrical3D_Cell_volume", &QuadrilateralCylindrical3D_Cell_volume, "docstring");
	def("QuadrilateralPolar2D_Cell_volume", &QuadrilateralPolar2D_Cell_volume, "docstring");
	def("QuadrilateralSpherical3D_Cell_volume", &QuadrilateralSpherical3D_Cell_volume, "docstring");
	def("TetrahedralCartesian3D_Cell_volume", &TetrahedralCartesian3D_Cell_volume, "docstring");
	def("TetrahedralCylindrical3D_Cell_volume", &TetrahedralCylindrical3D_Cell_volume, "docstring");
	def("TetrahedralSpherical3D_Cell_volume", &TetrahedralSpherical3D_Cell_volume, "docstring");
	
	/***************************
	 * DOMAIN-BASED ALGORITHMS *
	 ***************************/
	
	/*
	def("LinearCartesian1D_Domain_refine_uniformly", &LinearCartesian1D_Domain_refine_uniformly, "docstring");
	def("LinearCartesian2D_Domain_refine_uniformly", &LinearCartesian2D_Domain_refine_uniformly, "docstring");
	def("LinearCartesian3D_Domain_refine_uniformly", &LinearCartesian3D_Domain_refine_uniformly, "docstring");
	def("LinearCylindrical3D_Domain_refine_uniformly", &LinearCylindrical3D_Domain_refine_uniformly, "docstring");
	def("LinearPolar2D_Domain_refine_uniformly", &LinearPolar2D_Domain_refine_uniformly, "docstring");
	def("LinearSpherical3D_Domain_refine_uniformly", &LinearSpherical3D_Domain_refine_uniformly, "docstring");
	def("TriangularCartesian2D_Domain_refine_uniformly", &TriangularCartesian2D_Domain_refine_uniformly, "docstring");
	def("TriangularCartesian3D_Domain_refine_uniformly", &TriangularCartesian3D_Domain_refine_uniformly, "docstring");
	def("TriangularCylindrical3D_Domain_refine_uniformly", &TriangularCylindrical3D_Domain_refine_uniformly, "docstring");
	def("TriangularPolar2D_Domain_refine_uniformly", &TriangularPolar2D_Domain_refine_uniformly, "docstring");
	def("TriangularSpherical3D_Domain_refine_uniformly", &TriangularSpherical3D_Domain_refine_uniformly, "docstring");
	def("QuadrilateralCartesian2D_Domain_refine_uniformly", &QuadrilateralCartesian2D_Domain_refine_uniformly, "docstring");
	def("QuadrilateralCartesian3D_Domain_refine_uniformly", &QuadrilateralCartesian3D_Domain_refine_uniformly, "docstring");
	def("QuadrilateralCylindrical3D_Domain_refine_uniformly", &QuadrilateralCylindrical3D_Domain_refine_uniformly, "docstring");
	def("QuadrilateralPolar2D_Domain_refine_uniformly", &QuadrilateralPolar2D_Domain_refine_uniformly, "docstring");
	def("QuadrilateralSpherical3D_Domain_refine_uniformly", &QuadrilateralSpherical3D_Domain_refine_uniformly, "docstring");
	def("TetrahedralCartesian3D_Domain_refine_uniformly", &TetrahedralCartesian3D_Domain_refine_uniformly, "docstring");
	def("TetrahedralCylindrical3D_Domain_refine_uniformly", &TetrahedralCylindrical3D_Domain_refine_uniformly, "docstring");
	def("TetrahedralSpherical3D_Domain_refine_uniformly", &TetrahedralSpherical3D_Domain_refine_uniformly, "docstring");
	*/
	
	def("LinearCartesian1D_Domain_surface", &LinearCartesian1D_Domain_surface, "docstring");
	def("LinearCartesian2D_Domain_surface", &LinearCartesian2D_Domain_surface, "docstring");
	def("LinearCartesian3D_Domain_surface", &LinearCartesian3D_Domain_surface, "docstring");
	def("LinearCylindrical3D_Domain_surface", &LinearCylindrical3D_Domain_surface, "docstring");
	def("LinearPolar2D_Domain_surface", &LinearPolar2D_Domain_surface, "docstring");
	def("LinearSpherical3D_Domain_surface", &LinearSpherical3D_Domain_surface, "docstring");
	def("TriangularCartesian2D_Domain_surface", &TriangularCartesian2D_Domain_surface, "docstring");
	def("TriangularCartesian3D_Domain_surface", &TriangularCartesian3D_Domain_surface, "docstring");
	def("TriangularCylindrical3D_Domain_surface", &TriangularCylindrical3D_Domain_surface, "docstring");
	def("TriangularPolar2D_Domain_surface", &TriangularPolar2D_Domain_surface, "docstring");
	def("TriangularSpherical3D_Domain_surface", &TriangularSpherical3D_Domain_surface, "docstring");
	def("QuadrilateralCartesian2D_Domain_surface", &QuadrilateralCartesian2D_Domain_surface, "docstring");
	def("QuadrilateralCartesian3D_Domain_surface", &QuadrilateralCartesian3D_Domain_surface, "docstring");
	def("QuadrilateralCylindrical3D_Domain_surface", &QuadrilateralCylindrical3D_Domain_surface, "docstring");
	def("QuadrilateralPolar2D_Domain_surface", &QuadrilateralPolar2D_Domain_surface, "docstring");
	def("QuadrilateralSpherical3D_Domain_surface", &QuadrilateralSpherical3D_Domain_surface, "docstring");
	def("TetrahedralCartesian3D_Domain_surface", &TetrahedralCartesian3D_Domain_surface, "docstring");
	def("TetrahedralCylindrical3D_Domain_surface", &TetrahedralCylindrical3D_Domain_surface, "docstring");
	def("TetrahedralSpherical3D_Domain_surface", &TetrahedralSpherical3D_Domain_surface, "docstring");
	
	def("LinearCartesian1D_Domain_volume", &LinearCartesian1D_Domain_volume, "docstring");
	def("LinearCartesian2D_Domain_volume", &LinearCartesian2D_Domain_volume, "docstring");
	def("LinearCartesian3D_Domain_volume", &LinearCartesian3D_Domain_volume, "docstring");
	def("LinearCylindrical3D_Domain_volume", &LinearCylindrical3D_Domain_volume, "docstring");
	def("LinearPolar2D_Domain_volume", &LinearPolar2D_Domain_volume, "docstring");
	def("LinearSpherical3D_Domain_volume", &LinearSpherical3D_Domain_volume, "docstring");
	def("TriangularCartesian2D_Domain_volume", &TriangularCartesian2D_Domain_volume, "docstring");
	def("TriangularCartesian3D_Domain_volume", &TriangularCartesian3D_Domain_volume, "docstring");
	def("TriangularCylindrical3D_Domain_volume", &TriangularCylindrical3D_Domain_volume, "docstring");
	def("TriangularPolar2D_Domain_volume", &TriangularPolar2D_Domain_volume, "docstring");
	def("TriangularSpherical3D_Domain_volume", &TriangularSpherical3D_Domain_volume, "docstring");
	def("QuadrilateralCartesian2D_Domain_volume", &QuadrilateralCartesian2D_Domain_volume, "docstring");
	def("QuadrilateralCartesian3D_Domain_volume", &QuadrilateralCartesian3D_Domain_volume, "docstring");
	def("QuadrilateralCylindrical3D_Domain_volume", &QuadrilateralCylindrical3D_Domain_volume, "docstring");
	def("QuadrilateralPolar2D_Domain_volume", &QuadrilateralPolar2D_Domain_volume, "docstring");
	def("QuadrilateralSpherical3D_Domain_volume", &QuadrilateralSpherical3D_Domain_volume, "docstring");
	def("TetrahedralCartesian3D_Domain_volume", &TetrahedralCartesian3D_Domain_volume, "docstring");
	def("TetrahedralCylindrical3D_Domain_volume", &TetrahedralCylindrical3D_Domain_volume, "docstring");
	def("TetrahedralSpherical3D_Domain_volume", &TetrahedralSpherical3D_Domain_volume, "docstring");
	
	/****************************
	 * SEGMENT-BASED ALGORITHMS *
	 ****************************/
	
	def("LinearCartesian1D_Segment_is_interface", &LinearCartesian1D_Segment_is_interface, "docstring");
	def("LinearCartesian2D_Segment_is_interface", &LinearCartesian2D_Segment_is_interface, "docstring");
	def("LinearCartesian3D_Segment_is_interface", &LinearCartesian3D_Segment_is_interface, "docstring");
	def("LinearCylindrical3D_Segment_is_interface", &LinearCylindrical3D_Segment_is_interface, "docstring");
	def("LinearPolar2D_Segment_is_interface", &LinearPolar2D_Segment_is_interface, "docstring");
	def("LinearSpherical3D_Segment_is_interface", &LinearSpherical3D_Segment_is_interface, "docstring");
	def("TriangularCartesian2D_Segment_is_interface", &TriangularCartesian2D_Segment_is_interface, "docstring");
	def("TriangularCartesian3D_Segment_is_interface", &TriangularCartesian3D_Segment_is_interface, "docstring");
	def("TriangularCylindrical3D_Segment_is_interface", &TriangularCylindrical3D_Segment_is_interface, "docstring");
	def("TriangularPolar2D_Segment_is_interface", &TriangularPolar2D_Segment_is_interface, "docstring");
	def("TriangularSpherical3D_Segment_is_interface", &TriangularSpherical3D_Segment_is_interface, "docstring");
	def("QuadrilateralCartesian2D_Segment_is_interface", &QuadrilateralCartesian2D_Segment_is_interface, "docstring");
	def("QuadrilateralCartesian3D_Segment_is_interface", &QuadrilateralCartesian3D_Segment_is_interface, "docstring");
	def("QuadrilateralCylindrical3D_Segment_is_interface", &QuadrilateralCylindrical3D_Segment_is_interface, "docstring");
	def("QuadrilateralPolar2D_Segment_is_interface", &QuadrilateralPolar2D_Segment_is_interface, "docstring");
	def("QuadrilateralSpherical3D_Segment_is_interface", &QuadrilateralSpherical3D_Segment_is_interface, "docstring");
	def("TetrahedralCartesian3D_Segment_is_interface", &TetrahedralCartesian3D_Segment_is_interface, "docstring");
	def("TetrahedralCylindrical3D_Segment_is_interface", &TetrahedralCylindrical3D_Segment_is_interface, "docstring");
	def("TetrahedralSpherical3D_Segment_is_interface", &TetrahedralSpherical3D_Segment_is_interface, "docstring");
	
	def("LinearCartesian1D_Segment_surface", &LinearCartesian1D_Segment_surface, "docstring");
	def("LinearCartesian2D_Segment_surface", &LinearCartesian2D_Segment_surface, "docstring");
	def("LinearCartesian3D_Segment_surface", &LinearCartesian3D_Segment_surface, "docstring");
	def("LinearCylindrical3D_Segment_surface", &LinearCylindrical3D_Segment_surface, "docstring");
	def("LinearPolar2D_Segment_surface", &LinearPolar2D_Segment_surface, "docstring");
	def("LinearSpherical3D_Segment_surface", &LinearSpherical3D_Segment_surface, "docstring");
	def("TriangularCartesian2D_Segment_surface", &TriangularCartesian2D_Segment_surface, "docstring");
	def("TriangularCartesian3D_Segment_surface", &TriangularCartesian3D_Segment_surface, "docstring");
	def("TriangularCylindrical3D_Segment_surface", &TriangularCylindrical3D_Segment_surface, "docstring");
	def("TriangularPolar2D_Segment_surface", &TriangularPolar2D_Segment_surface, "docstring");
	def("TriangularSpherical3D_Segment_surface", &TriangularSpherical3D_Segment_surface, "docstring");
	def("QuadrilateralCartesian2D_Segment_surface", &QuadrilateralCartesian2D_Segment_surface, "docstring");
	def("QuadrilateralCartesian3D_Segment_surface", &QuadrilateralCartesian3D_Segment_surface, "docstring");
	def("QuadrilateralCylindrical3D_Segment_surface", &QuadrilateralCylindrical3D_Segment_surface, "docstring");
	def("QuadrilateralPolar2D_Segment_surface", &QuadrilateralPolar2D_Segment_surface, "docstring");
	def("QuadrilateralSpherical3D_Segment_surface", &QuadrilateralSpherical3D_Segment_surface, "docstring");
	def("TetrahedralCartesian3D_Segment_surface", &TetrahedralCartesian3D_Segment_surface, "docstring");
	def("TetrahedralCylindrical3D_Segment_surface", &TetrahedralCylindrical3D_Segment_surface, "docstring");
	def("TetrahedralSpherical3D_Segment_surface", &TetrahedralSpherical3D_Segment_surface, "docstring");
	
	def("LinearCartesian1D_Segment_volume", &LinearCartesian1D_Segment_volume, "docstring");
	def("LinearCartesian2D_Segment_volume", &LinearCartesian2D_Segment_volume, "docstring");
	def("LinearCartesian3D_Segment_volume", &LinearCartesian3D_Segment_volume, "docstring");
	def("LinearCylindrical3D_Segment_volume", &LinearCylindrical3D_Segment_volume, "docstring");
	def("LinearPolar2D_Segment_volume", &LinearPolar2D_Segment_volume, "docstring");
	def("LinearSpherical3D_Segment_volume", &LinearSpherical3D_Segment_volume, "docstring");
	def("TriangularCartesian2D_Segment_volume", &TriangularCartesian2D_Segment_volume, "docstring");
	def("TriangularCartesian3D_Segment_volume", &TriangularCartesian3D_Segment_volume, "docstring");
	def("TriangularCylindrical3D_Segment_volume", &TriangularCylindrical3D_Segment_volume, "docstring");
	def("TriangularPolar2D_Segment_volume", &TriangularPolar2D_Segment_volume, "docstring");
	def("TriangularSpherical3D_Segment_volume", &TriangularSpherical3D_Segment_volume, "docstring");
	def("QuadrilateralCartesian2D_Segment_volume", &QuadrilateralCartesian2D_Segment_volume, "docstring");
	def("QuadrilateralCartesian3D_Segment_volume", &QuadrilateralCartesian3D_Segment_volume, "docstring");
	def("QuadrilateralCylindrical3D_Segment_volume", &QuadrilateralCylindrical3D_Segment_volume, "docstring");
	def("QuadrilateralPolar2D_Segment_volume", &QuadrilateralPolar2D_Segment_volume, "docstring");
	def("QuadrilateralSpherical3D_Segment_volume", &QuadrilateralSpherical3D_Segment_volume, "docstring");
	def("TetrahedralCartesian3D_Segment_volume", &TetrahedralCartesian3D_Segment_volume, "docstring");
	def("TetrahedralCylindrical3D_Segment_volume", &TetrahedralCylindrical3D_Segment_volume, "docstring");
	def("TetrahedralSpherical3D_Segment_volume", &TetrahedralSpherical3D_Segment_volume, "docstring");
}
