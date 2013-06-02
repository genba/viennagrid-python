#include "cylindrical.hpp"

PointCylindrical3D::PointCylindrical3D()
{
	
}

PointCylindrical3D::PointCylindrical3D(double x, double y, double z)
{
	
}

size_t PointCylindrical3D::get_dimension()
{
	return 3;
}

const char * PointCylindrical3D::get_coord_system()
{
	return "cylindrical";
}
