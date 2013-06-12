#include "cartesian.hpp"

PointCartesian2D::PointCartesian2D()
{
	
}

PointCartesian2D::PointCartesian2D(double x, double y)
{
	
}

PointCartesian2D::PointCartesian2D(PointCartesian2D_t initial_point)
{
	point = initial_point;
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

bool PointCartesian2D::operator==(const PointCartesian2D &other)
{
	bool equal = true;
	for (unsigned int i = 0; equal && i < point.size(); ++i)
		equal = equal && (point.at(i) == other.point.at(i));
	return equal;
}

PointCartesian3D::PointCartesian3D()
{
	
}

PointCartesian3D::PointCartesian3D(double x, double y, double z)
{
	
}

PointCartesian3D::PointCartesian3D(PointCartesian3D_t initial_point)
{
	point = initial_point;
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

bool PointCartesian3D::operator==(const PointCartesian3D &other)
{
	bool equal = true;
	for (unsigned int i = 0; equal && i < point.size(); ++i)
		equal = equal && (point.at(i) == other.point.at(i));
	return equal;
}
