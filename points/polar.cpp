#include "polar.hpp"

PointPolar2D::PointPolar2D()
{
	
}

PointPolar2D::PointPolar2D(double x, double y)
{
	
}

size_t PointPolar2D::get_dimension()
{
	return 2;
}

const char * PointPolar2D::get_coord_system()
{
	return "polar";
}

PointPolar_t & PointPolar2D::get_point()
{
	return point;
}
