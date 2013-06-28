#include <boost/python.hpp>
using namespace boost::python;

#include "points/cartesian.hpp"
#include "points/cylindrical.hpp"
#include "points/polar.hpp"
#include "points/spherical.hpp"

#include "domains/triangular.hpp"
#include "domains/quadrilateral.hpp"
#include "domains/tetrahedral.hpp"

#include "segments/triangular.hpp"
#include "segments/quadrilateral.hpp"

#include "cells/triangular.hpp"
#include "cells/quadrilateral.hpp"

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
	
	// CARTESIAN 2D
	
	class_<PointCartesian2D>("PointCartesian2D")
		.def(init<double, double>())
		.add_property("dim", &PointCartesian2D::get_dimension, "Read-only property that returns the dimension of the space where the point is defined.")
		.add_property("coord_system", &PointCartesian2D::get_coord_system, "Read-only property that returns the coordinate system of the space where the point is defined.")
		.add_property("coords", &PointCartesian2D::get_coord_list, "Read-only property that returns a list containing all the coordinates of the point.")
		.def("get_coord", &PointCartesian2D::get_coord, "Get the value of the coordinate at given index in the coordinate list.")
		.def("set_coord", &PointCartesian2D::set_coord, "Set the value of the coordinate at given index in the coordinate list.")
		.def(self == self) // "Compare if two points are equal, coordinate by coordinate."
		.def(self + self) // "Add two points."
		.def(self - self) // "Subtract two points."
		.def(self * double()) // "Multiply a point by a scalar (the result is the product of each coordinate by the scalar)."
		.def(self / double()) // "Divide a point by a scalar (the result is the division of each coordinate by the scalar)."
	;
	
	// CARTESIAN 3D
	
	class_<PointCartesian3D>("PointCartesian3D")
		.def(init<double, double, double>())
		.add_property("dim", &PointCartesian3D::get_dimension, "Read-only property that returns the dimension of the space where the point is defined.")
		.add_property("coord_system", &PointCartesian3D::get_coord_system, "Read-only property that returns the coordinate system of the space where the point is defined.")
		.add_property("coords", &PointCartesian3D::get_coord_list, "Read-only property that returns a list containing all the coordinates of the point.")
		.def("get_coord", &PointCartesian3D::get_coord, "Get the value of the coordinate at given index in the coordinate list.")
		.def("set_coord", &PointCartesian3D::set_coord, "Set the value of the coordinate at given index in the coordinate list.")
		.def(self == self) // "Compare if two points are equal, coordinate by coordinate."
		.def(self + self) // "Add two points."
		.def(self - self) // "Subtract two points."
		.def(self * double()) // "Multiply a point by a scalar (the result is the product of each coordinate by the scalar)."
		.def(self / double()) // "Divide a point by a scalar (the result is the division of each coordinate by the scalar)."
	;
	
	// CYLINDRICAL (3D)
	
	class_<PointCylindrical3D>("PointCylindrical3D")
		.def(init<double, double, double>())
		.add_property("dim", &PointCylindrical3D::get_dimension, "Read-only property that returns the dimension of the space where the point is defined.")
		.add_property("coord_system", &PointCylindrical3D::get_coord_system, "Read-only property that returns the coordinate system of the space where the point is defined.")
		.add_property("coords", &PointCylindrical3D::get_coord_list, "Read-only property that returns a list containing all the coordinates of the point.")
		.def("get_coord", &PointCylindrical3D::get_coord, "Get the value of the coordinate at given index in the coordinate list.")
		.def("set_coord", &PointCylindrical3D::set_coord, "Set the value of the coordinate at given index in the coordinate list.")
		.def(self == self) // "Compare if two points are equal, coordinate by coordinate."
		.def(self + self) // "Add two points."
		.def(self - self) // "Subtract two points."
		.def(self * double()) // "Multiply a point by a scalar (the result is the product of each coordinate by the scalar)."
		.def(self / double()) // "Divide a point by a scalar (the result is the division of each coordinate by the scalar)."
	;
	
	// POLAR (2D)
	
	class_<PointPolar2D>("PointPolar2D")
		.def(init<double, double>())
		.add_property("dim", &PointPolar2D::get_dimension, "Read-only property that returns the dimension of the space where the point is defined.")
		.add_property("coord_system", &PointPolar2D::get_coord_system, "Read-only property that returns the coordinate system of the space where the point is defined.")
		.add_property("coords", &PointPolar2D::get_coord_list, "Read-only property that returns a list containing all the coordinates of the point.")
		.def("get_coord", &PointPolar2D::get_coord, "Get the value of the coordinate at given index in the coordinate list.")
		.def("set_coord", &PointPolar2D::set_coord, "Set the value of the coordinate at given index in the coordinate list.")
		.def(self == self) // "Compare if two points are equal, coordinate by coordinate."
		.def(self + self) // "Add two points."
		.def(self - self) // "Subtract two points."
		.def(self * double()) // "Multiply a point by a scalar (the result is the product of each coordinate by the scalar)."
		.def(self / double()) // "Divide a point by a scalar (the result is the division of each coordinate by the scalar)."
	;
	
	// SPHERICAL (3D)
	
	class_<PointSpherical3D>("PointSpherical3D")
		.def(init<double, double, double>())
		.add_property("dim", &PointSpherical3D::get_dimension, "Read-only property that returns the dimension of the space where the point is defined.")
		.add_property("coord_system", &PointSpherical3D::get_coord_system, "Read-only property that returns the coordinate system of the space where the point is defined.")
		.add_property("coords", &PointSpherical3D::get_coord_list, "Read-only property that returns a list containing all the coordinates of the point.")
		.def("get_coord", &PointSpherical3D::get_coord, "Get the value of the coordinate at given index in the coordinate list.")
		.def("set_coord", &PointSpherical3D::set_coord, "Set the value of the coordinate at given index in the coordinate list.")
		.def(self == self) // "Compare if two points are equal, coordinate by coordinate."
		.def(self + self) // "Add two points."
		.def(self - self) // "Subtract two points."
		.def(self * double()) // "Multiply a point by a scalar (the result is the product of each coordinate by the scalar)."
		.def(self / double()) // "Divide a point by a scalar (the result is the division of each coordinate by the scalar)."
	;
	
	/**********************
	 * TRIANGULAR DOMAINS *
	 **********************/
	
	class_<TriangularCartesian2D_Domain>("TriangularCartesian2D_Domain")
		.def("create_segments", &TriangularCartesian2D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TriangularCartesian2D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("create_cell", &TriangularCartesian2D_Domain::create_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("segments", &TriangularCartesian2D_Domain::get_segments, "Read-only property that returns a list containing all the segments stored within the domain.")
		.add_property("vertices", &TriangularCartesian2D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices stored within the domain.")
		.add_property("cells", &TriangularCartesian2D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain (those which are not assigned to any segment).")
	;
	
	class_<TriangularCartesian3D_Domain>("TriangularCartesian3D_Domain")
		.def("create_segments", &TriangularCartesian3D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TriangularCartesian3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("create_cell", &TriangularCartesian3D_Domain::create_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("segments", &TriangularCartesian3D_Domain::get_segments, "Read-only property that returns a list containing all the segments stored within the domain.")
		.add_property("vertices", &TriangularCartesian3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices stored within the domain.")
		.add_property("cells", &TriangularCartesian3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain (those which are not assigned to any segment).")
	;
	
	class_<TriangularCylindrical3D_Domain>("TriangularCylindrical3D_Domain")
		.def("create_segments", &TriangularCylindrical3D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TriangularCylindrical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("create_cell", &TriangularCylindrical3D_Domain::create_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("segments", &TriangularCylindrical3D_Domain::get_segments, "Read-only property that returns a list containing all the segments stored within the domain.")
		.add_property("vertices", &TriangularCylindrical3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices stored within the domain.")
		.add_property("cells", &TriangularCylindrical3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain (those which are not assigned to any segment).")
	;
	
	class_<TriangularPolar2D_Domain>("TriangularPolar2D_Domain")
		.def("create_segments", &TriangularPolar2D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TriangularPolar2D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("create_cell", &TriangularPolar2D_Domain::create_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("segments", &TriangularPolar2D_Domain::get_segments, "Read-only property that returns a list containing all the segments stored within the domain.")
		.add_property("vertices", &TriangularPolar2D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices stored within the domain.")
		.add_property("cells", &TriangularPolar2D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain (those which are not assigned to any segment).")
	;
	
	class_<TriangularSpherical3D_Domain>("TriangularSpherical3D_Domain")
		.def("create_segments", &TriangularSpherical3D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TriangularSpherical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("create_cell", &TriangularSpherical3D_Domain::create_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("segments", &TriangularSpherical3D_Domain::get_segments, "Read-only property that returns a list containing all the segments stored within the domain.")
		.add_property("vertices", &TriangularSpherical3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices stored within the domain.")
		.add_property("cells", &TriangularSpherical3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain (those which are not assigned to any segment).")
	;
	
	/***********************
	 * TRIANGULAR SEGMENTS *
	 ***********************/
	
	class_<TriangularCartesian2D_Segment>("TriangularCartesian2D_Segment", init<TriangularCartesian2D_Domain &, TriangularCartesian2D_Segment_t &>())
		.def("create_cell", &TriangularCartesian2D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularCartesian2D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TriangularCartesian3D_Segment>("TriangularCartesian3D_Segment", init<TriangularCartesian3D_Domain &, TriangularCartesian3D_Segment_t &>())
		.def("create_cell", &TriangularCartesian3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularCartesian3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TriangularCylindrical3D_Segment>("TriangularCylindrical3D_Segment", init<TriangularCylindrical3D_Domain &, TriangularCylindrical3D_Segment_t &>())
		.def("create_cell", &TriangularCylindrical3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularCylindrical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TriangularPolar2D_Segment>("TriangularPolar2D_Segment", init<TriangularPolar2D_Domain &, TriangularPolar2D_Segment_t &>())
		.def("create_cell", &TriangularPolar2D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularPolar2D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TriangularSpherical3D_Segment>("TriangularSpherical3D_Segment", init<TriangularSpherical3D_Domain &, TriangularSpherical3D_Segment_t &>())
		.def("create_cell", &TriangularSpherical3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TriangularSpherical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	/********************
	 * TRIANGULAR CELLS *
	 ********************/
	
	class_<TriangularCartesian2D_Cell>("TriangularCartesian2D_Cell", init<PointCartesian2D, PointCartesian2D, PointCartesian2D>())
		.add_property("vertices", &TriangularCartesian2D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<TriangularCartesian3D_Cell>("TriangularCartesian3D_Cell", init<PointCartesian3D, PointCartesian3D, PointCartesian3D>())
		.add_property("vertices", &TriangularCartesian3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<TriangularCylindrical3D_Cell>("TriangularCylindrical3D_Cell", init<PointCylindrical3D, PointCylindrical3D, PointCylindrical3D>())
		.add_property("vertices", &TriangularCylindrical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<TriangularPolar2D_Cell>("TriangularPolar2D_Cell", init<PointPolar2D, PointPolar2D, PointPolar2D>())
		.add_property("vertices", &TriangularPolar2D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<TriangularSpherical3D_Cell>("TriangularSpherical3D_Cell", init<PointSpherical3D, PointSpherical3D, PointSpherical3D>())
		.add_property("vertices", &TriangularSpherical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	/*************************
	 * QUADRILATERAL DOMAINS *
	 *************************/
	
	class_<QuadrilateralCartesian2D_Domain>("QuadrilateralCartesian2D_Domain")
		.def("create_segments", &QuadrilateralCartesian2D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &QuadrilateralCartesian2D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("create_cell", &QuadrilateralCartesian2D_Domain::create_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("segments", &QuadrilateralCartesian2D_Domain::get_segments, "Read-only property that returns a list containing all the segments stored within the domain.")
		.add_property("vertices", &QuadrilateralCartesian2D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices stored within the domain.")
		.add_property("cells", &QuadrilateralCartesian2D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain (those which are not assigned to any segment).")
	;
	
	class_<QuadrilateralCartesian3D_Domain>("QuadrilateralCartesian3D_Domain")
		.def("create_segments", &QuadrilateralCartesian3D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &QuadrilateralCartesian3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("create_cell", &QuadrilateralCartesian3D_Domain::create_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("segments", &QuadrilateralCartesian3D_Domain::get_segments, "Read-only property that returns a list containing all the segments stored within the domain.")
		.add_property("vertices", &QuadrilateralCartesian3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices stored within the domain.")
		.add_property("cells", &QuadrilateralCartesian3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain (those which are not assigned to any segment).")
	;
	
	class_<QuadrilateralCylindrical3D_Domain>("QuadrilateralCylindrical3D_Domain")
		.def("create_segments", &QuadrilateralCylindrical3D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &QuadrilateralCylindrical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("create_cell", &QuadrilateralCylindrical3D_Domain::create_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("segments", &QuadrilateralCylindrical3D_Domain::get_segments, "Read-only property that returns a list containing all the segments stored within the domain.")
		.add_property("vertices", &QuadrilateralCylindrical3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices stored within the domain.")
		.add_property("cells", &QuadrilateralCylindrical3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain (those which are not assigned to any segment).")
	;
	
	class_<QuadrilateralPolar2D_Domain>("QuadrilateralPolar2D_Domain")
		.def("create_segments", &QuadrilateralPolar2D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &QuadrilateralPolar2D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("create_cell", &QuadrilateralPolar2D_Domain::create_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("segments", &QuadrilateralPolar2D_Domain::get_segments, "Read-only property that returns a list containing all the segments stored within the domain.")
		.add_property("vertices", &QuadrilateralPolar2D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices stored within the domain.")
		.add_property("cells", &QuadrilateralPolar2D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain (those which are not assigned to any segment).")
	;
	
	class_<QuadrilateralSpherical3D_Domain>("QuadrilateralSpherical3D_Domain")
		.def("create_segments", &QuadrilateralSpherical3D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &QuadrilateralSpherical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("create_cell", &QuadrilateralSpherical3D_Domain::create_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("segments", &QuadrilateralSpherical3D_Domain::get_segments, "Read-only property that returns a list containing all the segments stored within the domain.")
		.add_property("vertices", &QuadrilateralSpherical3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices stored within the domain.")
		.add_property("cells", &QuadrilateralSpherical3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain (those which are not assigned to any segment).")
	;
	
	/**************************
	 * QUADRILATERAL SEGMENTS *
	 **************************/
	
	class_<QuadrilateralCartesian2D_Segment>("QuadrilateralCartesian2D_Segment", init<QuadrilateralCartesian2D_Domain &, QuadrilateralCartesian2D_Segment_t &>())
		.def("create_cell", &QuadrilateralCartesian2D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralCartesian2D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<QuadrilateralCartesian3D_Segment>("QuadrilateralCartesian3D_Segment", init<QuadrilateralCartesian3D_Domain &, QuadrilateralCartesian3D_Segment_t &>())
		.def("create_cell", &QuadrilateralCartesian3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralCartesian3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<QuadrilateralCylindrical3D_Segment>("QuadrilateralCylindrical3D_Segment", init<QuadrilateralCylindrical3D_Domain &, QuadrilateralCylindrical3D_Segment_t &>())
		.def("create_cell", &QuadrilateralCylindrical3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralCylindrical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<QuadrilateralPolar2D_Segment>("QuadrilateralPolar2D_Segment", init<QuadrilateralPolar2D_Domain &, QuadrilateralPolar2D_Segment_t &>())
		.def("create_cell", &QuadrilateralPolar2D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralPolar2D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<QuadrilateralSpherical3D_Segment>("QuadrilateralSpherical3D_Segment", init<QuadrilateralSpherical3D_Domain &, QuadrilateralSpherical3D_Segment_t &>())
		.def("create_cell", &QuadrilateralSpherical3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &QuadrilateralSpherical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	/***********************
	 * QUADRILATERAL CELLS *
	 ***********************/
	
	class_<QuadrilateralCartesian2D_Cell>("QuadrilateralCartesian2D_Cell", init<PointCartesian2D, PointCartesian2D, PointCartesian2D, PointCartesian2D>())
		.add_property("vertices", &QuadrilateralCartesian2D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<QuadrilateralCartesian3D_Cell>("QuadrilateralCartesian3D_Cell", init<PointCartesian3D, PointCartesian3D, PointCartesian3D, PointCartesian3D>())
		.add_property("vertices", &QuadrilateralCartesian3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<QuadrilateralCylindrical3D_Cell>("QuadrilateralCylindrical3D_Cell", init<PointCylindrical3D, PointCylindrical3D, PointCylindrical3D, PointCylindrical3D>())
		.add_property("vertices", &QuadrilateralCylindrical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<QuadrilateralPolar2D_Cell>("QuadrilateralPolar2D_Cell", init<PointPolar2D, PointPolar2D, PointPolar2D, PointPolar2D>())
		.add_property("vertices", &QuadrilateralPolar2D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<QuadrilateralSpherical3D_Cell>("QuadrilateralSpherical3D_Cell", init<PointSpherical3D, PointSpherical3D, PointSpherical3D, PointSpherical3D>())
		.add_property("vertices", &QuadrilateralSpherical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;

	/*************************
	 * TETRAHEDRAL DOMAINS *
	 *************************/
	
	class_<TetrahedralCartesian3D_Domain>("TetrahedralCartesian3D_Domain")
		.def("create_segments", &TetrahedralCartesian3D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TetrahedralCartesian3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("create_cell", &TetrahedralCartesian3D_Domain::create_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("segments", &TetrahedralCartesian3D_Domain::get_segments, "Read-only property that returns a list containing all the segments stored within the domain.")
		.add_property("vertices", &TetrahedralCartesian3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices stored within the domain.")
		.add_property("cells", &TetrahedralCartesian3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain (those which are not assigned to any segment).")
	;
	
	class_<TetrahedralCylindrical3D_Domain>("TetrahedralCylindrical3D_Domain")
		.def("create_segments", &TetrahedralCylindrical3D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TetrahedralCylindrical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("create_cell", &TetrahedralCylindrical3D_Domain::create_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("segments", &TetrahedralCylindrical3D_Domain::get_segments, "Read-only property that returns a list containing all the segments stored within the domain.")
		.add_property("vertices", &TetrahedralCylindrical3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices stored within the domain.")
		.add_property("cells", &TetrahedralCylindrical3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain (those which are not assigned to any segment).")
	;
	
	class_<TetrahedralSpherical3D_Domain>("TetrahedralSpherical3D_Domain")
		.def("create_segments", &TetrahedralSpherical3D_Domain::create_segments, "Create the specified amount of segments within the domain. This function must be called only once.")
		.def("add_vertex", &TetrahedralSpherical3D_Domain::add_vertex, "Add a vertex to the domain. This gives the vertex a unique ID.")
		.def("create_cell", &TetrahedralSpherical3D_Domain::create_cell, "Create a cell within the domain, taking the vertices of the cell as arguments.")
		.add_property("segments", &TetrahedralSpherical3D_Domain::get_segments, "Read-only property that returns a list containing all the segments stored within the domain.")
		.add_property("vertices", &TetrahedralSpherical3D_Domain::get_vertices, "Read-only property that returns a list containing all the vertices stored within the domain.")
		.add_property("cells", &TetrahedralSpherical3D_Domain::get_cells, "Read-only property that returns a list containing all the cells stored within the domain (those which are not assigned to any segment).")
	;
	
	/**************************
	 * TETRAHEDRAL SEGMENTS *
	 **************************/
	
	class_<TetrahedralCartesian3D_Segment>("TetrahedralCartesian3D_Segment", init<TetrahedralCartesian3D_Domain &, TetrahedralCartesian3D_Segment_t &>())
		.def("create_cell", &TetrahedralCartesian3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TetrahedralCartesian3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TetrahedralCylindrical3D_Segment>("TetrahedralCylindrical3D_Segment", init<TetrahedralCylindrical3D_Domain &, TetrahedralCylindrical3D_Segment_t &>())
		.def("create_cell", &TetrahedralCylindrical3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TetrahedralCylindrical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	class_<TetrahedralSpherical3D_Segment>("TetrahedralSpherical3D_Segment", init<TetrahedralSpherical3D_Domain &, TetrahedralSpherical3D_Segment_t &>())
		.def("create_cell", &TetrahedralSpherical3D_Segment::create_cell, "Create a cell within the segment, taking the vertices of the cell as arguments.")
		.add_property("cells", &TetrahedralSpherical3D_Segment::get_cells, "Read-only property that returns a list containing all the cells stored within the segment.")
	;
	
	/***********************
	 * TETRAHEDRAL CELLS *
	 ***********************/
	
	class_<TetrahedralCartesian3D_Cell>("TetrahedralCartesian3D_Cell", init<PointCartesian3D, PointCartesian3D, PointCartesian3D, PointCartesian3D>())
		.add_property("vertices", &TetrahedralCartesian3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<TetrahedralCylindrical3D_Cell>("TetrahedralCylindrical3D_Cell", init<PointCylindrical3D, PointCylindrical3D, PointCylindrical3D, PointCylindrical3D>())
		.add_property("vertices", &TetrahedralCylindrical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
	
	class_<TetrahedralSpherical3D_Cell>("TetrahedralSpherical3D_Cell", init<PointSpherical3D, PointSpherical3D, PointSpherical3D, PointSpherical3D>())
		.add_property("vertices", &TetrahedralSpherical3D_Cell::get_vertices, "Read-only property that returns a list containing all the vertices that define the cell.")
	;
}
