#include <boost/python.hpp>
using namespace boost::python;

#include "points/cartesian.hpp"
#include "points/cylindrical.hpp"
#include "points/polar.hpp"
#include "points/spherical.hpp"

#include "domains/triangular.hpp"

#include "segments/triangular.hpp"

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
		.add_property("dim", &PointCartesian2D::get_dimension)
		.add_property("coord_system", &PointCartesian2D::get_coord_system)
	;
	
	// CARTESIAN 3D
	
	class_<PointCartesian3D>("_PointCartesian3D")
		.add_property("dim", &PointCartesian3D::get_dimension)
		.add_property("coord_system", &PointCartesian3D::get_coord_system)
	;
	
	// CYLINDRICAL (3D)
	
	class_<PointCylindrical3D>("_PointCylindrical3D")
		.add_property("dim", &PointCylindrical3D::get_dimension)
		.add_property("coord_system", &PointCylindrical3D::get_coord_system)
	;
	
	// POLAR (2D)
	
	class_<PointPolar2D>("_PointPolar2D")
		.add_property("dim", &PointPolar2D::get_dimension)
		.add_property("coord_system", &PointPolar2D::get_coord_system)
	;
	
	// SPHERICAL (3D)
	
	class_<PointSpherical3D>("_PointSpherical3D")
		.add_property("dim", &PointSpherical3D::get_dimension)
		.add_property("coord_system", &PointSpherical3D::get_coord_system)
	;
	
	/**********************
	 * TRIANGULAR DOMAINS *
	 **********************/
	
	class_<TriangularCartesian2D_Domain>("_TriangularCartesian2D_Domain")
		.def_readonly("num_segments", &TriangularCartesian2D_Domain::get_num_segments)
		.def("create_segments", &TriangularCartesian2D_Domain::create_segments)
		.def("add_vertex", &TriangularCartesian2D_Domain::add_vertex)
	;
	
	class_<TriangularCartesian3D_Domain>("_TriangularCartesian3D_Domain")
		.def_readonly("num_segments", &TriangularCartesian3D_Domain::get_num_segments)
		.def("create_segments", &TriangularCartesian3D_Domain::create_segments)
		.def("add_vertex", &TriangularCartesian3D_Domain::add_vertex)
	;
	
	class_<TriangularCylindrical3D_Domain>("_TriangularCylindrical3D_Domain")
		.def_readonly("num_segments", &TriangularCylindrical3D_Domain::get_num_segments)
		.def("create_segments", &TriangularCylindrical3D_Domain::create_segments)
		.def("add_vertex", &TriangularCylindrical3D_Domain::add_vertex)
	;
	
	class_<TriangularPolar2D_Domain>("_TriangularPolar2D_Domain")
		.def_readonly("num_segments", &TriangularPolar2D_Domain::get_num_segments)
		.def("create_segments", &TriangularPolar2D_Domain::create_segments)
		.def("add_vertex", &TriangularPolar2D_Domain::add_vertex)
	;
	
	class_<TriangularSpherical3D_Domain>("_TriangularSpherical3D_Domain")
		.def_readonly("num_segments", &TriangularSpherical3D_Domain::get_num_segments)
		.def("create_segments", &TriangularSpherical3D_Domain::create_segments)
		.def("add_vertex", &TriangularSpherical3D_Domain::add_vertex)
	;
	
	/***********************
	 * TRIANGULAR SEGMENTS *
	 ***********************/
	
	class_<TriangularCartesian2D_Segment>("_TriangularCartesian2D_Segment")
	;
	
	class_<TriangularCartesian3D_Segment>("_TriangularCartesian3D_Segment")
	;
	
	class_<TriangularCylindrical3D_Segment>("_TriangularCylindrical3D_Segment")
	;
	
	class_<TriangularPolar2D_Segment>("_TriangularPolar2D_Segment")
	;
	
	class_<TriangularSpherical3D_Segment>("_TriangularSpherical3D_Segment")
	;
}
