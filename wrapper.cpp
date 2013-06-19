#include <boost/python.hpp>
using namespace boost::python;

#include "points/cartesian.hpp"
#include "points/cylindrical.hpp"
#include "points/polar.hpp"
#include "points/spherical.hpp"

#include "domains/triangular.hpp"

#include "segments/triangular.hpp"

#include "cells/triangular.hpp"

char const * version()
{
	return "0.1.0";
}

BOOST_PYTHON_MODULE(viennagrid_wrapper)
{
	def("version", version);
	
	/***********************
	 * WRAPPERS FOR POINTS *
	 ***********************/
	
	// CARTESIAN 2D
	
	class_<PointCartesian2D>("_PointCartesian2D")
		.def(init<double, double>())
		.add_property("dim", &PointCartesian2D::get_dimension, "Dimension of the space where the point is defined.")
		.add_property("coord_system", &PointCartesian2D::get_coord_system, "Coordinate system of the space where the point is defined.")
		.def(self == self)
	;
	
	// CARTESIAN 3D
	
	class_<PointCartesian3D>("_PointCartesian3D")
		.def(init<double, double, double>())
		.add_property("dim", &PointCartesian3D::get_dimension, "Dimension of the space where the point is defined.")
		.add_property("coord_system", &PointCartesian3D::get_coord_system, "Coordinate system of the space where the point is defined.")
		.def(self == self)
	;
	
	// CYLINDRICAL (3D)
	
	class_<PointCylindrical3D>("_PointCylindrical3D")
		.def(init<double, double, double>())
		.add_property("dim", &PointCylindrical3D::get_dimension, "Dimension of the space where the point is defined.")
		.add_property("coord_system", &PointCylindrical3D::get_coord_system, "Coordinate system of the space where the point is defined.")
		.def(self == self)
	;
	
	// POLAR (2D)
	
	class_<PointPolar2D>("_PointPolar2D")
		.def(init<double, double>())
		.add_property("dim", &PointPolar2D::get_dimension, "Dimension of the space where the point is defined.")
		.add_property("coord_system", &PointPolar2D::get_coord_system, "Coordinate system of the space where the point is defined.")
		.def(self == self)
	;
	
	// SPHERICAL (3D)
	
	class_<PointSpherical3D>("_PointSpherical3D")
		.def(init<double, double, double>())
		.add_property("dim", &PointSpherical3D::get_dimension, "Dimension of the space where the point is defined.")
		.add_property("coord_system", &PointSpherical3D::get_coord_system, "Coordinate system of the space where the point is defined.")
		.def(self == self)
	;
	
	/**********************
	 * TRIANGULAR DOMAINS *
	 **********************/
	
	class_<TriangularCartesian2D_Domain>("_TriangularCartesian2D_Domain")
		.def("create_segments", &TriangularCartesian2D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TriangularCartesian2D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.add_property("segments", &TriangularCartesian2D_Domain::get_segments)
		.add_property("vertices", &TriangularCartesian2D_Domain::get_vertices)
	;
	
	class_<TriangularCartesian3D_Domain>("_TriangularCartesian3D_Domain")
		.def("create_segments", &TriangularCartesian3D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TriangularCartesian3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.add_property("segments", &TriangularCartesian3D_Domain::get_segments)
		.add_property("vertices", &TriangularCartesian3D_Domain::get_vertices)
	;
	
	class_<TriangularCylindrical3D_Domain>("_TriangularCylindrical3D_Domain")
		.def("create_segments", &TriangularCylindrical3D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TriangularCylindrical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.add_property("segments", &TriangularCylindrical3D_Domain::get_segments)
		.add_property("vertices", &TriangularCylindrical3D_Domain::get_vertices)
	;
	
	class_<TriangularPolar2D_Domain>("_TriangularPolar2D_Domain")
		.def("create_segments", &TriangularPolar2D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TriangularPolar2D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.add_property("segments", &TriangularPolar2D_Domain::get_segments)
		.add_property("vertices", &TriangularPolar2D_Domain::get_vertices)
	;
	
	class_<TriangularSpherical3D_Domain>("_TriangularSpherical3D_Domain")
		.def("create_segments", &TriangularSpherical3D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TriangularSpherical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.add_property("segments", &TriangularSpherical3D_Domain::get_segments)
		.add_property("vertices", &TriangularSpherical3D_Domain::get_vertices)
	;
	
	/***********************
	 * TRIANGULAR SEGMENTS *
	 ***********************/
	
	class_<TriangularCartesian2D_Segment>("_TriangularCartesian2D_Segment", init<TriangularCartesian2D_Domain &, TriangularCartesian2D_Segment_t &>())
		.def("create_cell", &TriangularCartesian2D_Segment::create_cell)
		.add_property("cells", &TriangularCartesian2D_Segment::get_cells)
	;
	
	class_<TriangularCartesian3D_Segment>("_TriangularCartesian3D_Segment", init<TriangularCartesian3D_Domain &, TriangularCartesian3D_Segment_t &>())
		.def("create_cell", &TriangularCartesian3D_Segment::create_cell)
		.add_property("cells", &TriangularCartesian3D_Segment::get_cells)
	;
	
	class_<TriangularCylindrical3D_Segment>("_TriangularCylindrical3D_Segment", init<TriangularCylindrical3D_Domain &, TriangularCylindrical3D_Segment_t &>())
		.def("create_cell", &TriangularCylindrical3D_Segment::create_cell)
		.add_property("cells", &TriangularCylindrical3D_Segment::get_cells)
	;
	
	class_<TriangularPolar2D_Segment>("_TriangularPolar2D_Segment", init<TriangularPolar2D_Domain &, TriangularPolar2D_Segment_t &>())
		.def("create_cell", &TriangularPolar2D_Segment::create_cell)
		.add_property("cells", &TriangularPolar2D_Segment::get_cells)
	;
	
	class_<TriangularSpherical3D_Segment>("_TriangularSpherical3D_Segment", init<TriangularSpherical3D_Domain &, TriangularSpherical3D_Segment_t &>())
		.def("create_cell", &TriangularSpherical3D_Segment::create_cell)
		.add_property("cells", &TriangularSpherical3D_Segment::get_cells)
	;
	
	/********************
	 * TRIANGULAR CELLS *
	 ********************/
	
	class_<TriangularCartesian2D_Cell>("_TriangularCartesian2D_Cell", init<PointCartesian2D, PointCartesian2D, PointCartesian2D>())
		.add_property("vertices", &TriangularCartesian2D_Cell::get_vertices)
	;
	
	class_<TriangularCartesian3D_Cell>("_TriangularCartesian3D_Cell", init<PointCartesian3D, PointCartesian3D, PointCartesian3D>())
		.add_property("vertices", &TriangularCartesian3D_Cell::get_vertices)
	;
	
	class_<TriangularCylindrical3D_Cell>("_TriangularCylindrical3D_Cell", init<PointCylindrical3D, PointCylindrical3D, PointCylindrical3D>())
		.add_property("vertices", &TriangularCylindrical3D_Cell::get_vertices)
	;
	
	class_<TriangularPolar2D_Cell>("_TriangularPolar2D_Cell", init<PointPolar2D, PointPolar2D, PointPolar2D>())
		.add_property("vertices", &TriangularPolar2D_Cell::get_vertices)
	;
	
	class_<TriangularSpherical3D_Cell>("_TriangularSpherical3D_Cell", init<PointSpherical3D, PointSpherical3D, PointSpherical3D>())
		.add_property("vertices", &TriangularSpherical3D_Cell::get_vertices)
	;
	
}
