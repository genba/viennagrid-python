#include "cylindrical.hpp"

PointCylindrical3D::PointCylindrical3D()
{
	
}

PointCylindrical3D::PointCylindrical3D(double x, double y, double z)
{
	
}

PointCylindrical3D::PointCylindrical3D(PointCylindrical_t initial_point)
{
	point = initial_point;
}

size_t PointCylindrical3D::get_dimension()
{
	return 3;
}

const char * PointCylindrical3D::get_coord_system()
{
	return "cylindrical";
}

PointCylindrical_t & PointCylindrical3D::get_point()
{
	return point;
}

bool PointCylindrical3D::operator==(const PointCylindrical3D &other)
{
	bool equal = true;
	for (unsigned int i = 0; equal && i < point.size(); ++i)
		equal = equal && (point.at(i) == other.point.at(i));
	return equal;
}
