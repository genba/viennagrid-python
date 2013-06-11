#include "cartesian.hpp"

PointCartesian2D::PointCartesian2D()
{
	
}

PointCartesian2D::PointCartesian2D(double x, double y)
{
	
}

size_t PointCartesian2D::get_dimension()
{
	return 2;
}

const char * PointCartesian2D::get_coord_system()
{
	return "cartesian";
}

PointCartesian2D_t & PointCartesian2D::get_point()
{
	return point;
}

PointCartesian3D::PointCartesian3D()
{
	
}

PointCartesian3D::PointCartesian3D(double x, double y, double z)
{
	
}

size_t PointCartesian3D::get_dimension()
{
	return 3;
}

const char * PointCartesian3D::get_coord_system()
{
	return "cartesian";
}

PointCartesian3D_t & PointCartesian3D::get_point()
{
	return point;
}
