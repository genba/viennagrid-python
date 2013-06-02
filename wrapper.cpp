#include <boost/python.hpp>
using namespace boost::python;

#include "points/cartesian.hpp"
#include "points/cylindrical.hpp"
#include "points/polar.hpp"
#include "points/spherical.hpp"

char const * version()
{
	return "0.1.0";
}

BOOST_PYTHON_MODULE(viennagrid_wrapper)
{
	def("version", version);
	
	class_<PointCartesian2D>("_PointCartesian2D")
		.add_property("dim", &PointCartesian2D::get_dimension)
		.add_property("coord_system", &PointCartesian2D::get_coord_system)
	;
	
	class_<PointCartesian3D>("_PointCartesian3D")
		.add_property("dim", &PointCartesian3D::get_dimension)
		.add_property("coord_system", &PointCartesian3D::get_coord_system)
	;
	
	class_<PointCylindrical3D>("_PointCylindrical3D")
		.add_property("dim", &PointCylindrical3D::get_dimension)
		.add_property("coord_system", &PointCylindrical3D::get_coord_system)
	;
	
	class_<PointPolar2D>("_PointPolar2D")
		.add_property("dim", &PointPolar2D::get_dimension)
		.add_property("coord_system", &PointPolar2D::get_coord_system)
	;
	
	class_<PointSpherical3D>("_PointSpherical3D")
		.add_property("dim", &PointSpherical3D::get_dimension)
		.add_property("coord_system", &PointSpherical3D::get_coord_system)
	;
}
