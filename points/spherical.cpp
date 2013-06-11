#include "spherical.hpp"

PointSpherical3D::PointSpherical3D()
{
	
}

PointSpherical3D::PointSpherical3D(double x, double y, double z)
{
	
}

size_t PointSpherical3D::get_dimension()
{
	return 3;
}

const char * PointSpherical3D::get_coord_system()
{
	return "spherical";
}

PointSpherical_t & PointSpherical3D::get_point()
{
	return point;
}
