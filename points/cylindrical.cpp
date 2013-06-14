#include "cylindrical.hpp"

PointCylindrical3D::PointCylindrical3D()
{
	point = new PointCylindrical_t(0, 0, 0);
	id = -1;
}

PointCylindrical3D::PointCylindrical3D(double x, double y, double z)
{
	point = new PointCylindrical_t(x, y, z);
	id = -1;
}

PointCylindrical3D::PointCylindrical3D(PointCylindrical_t &initial_point, unsigned int initial_id)
{
	point = &initial_point;
	id = initial_id;
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
	return *point;
}

bool PointCylindrical3D::operator==(const PointCylindrical3D &other)
{
	bool equal = true;
	for (unsigned int i = 0; equal && i < point->size(); ++i)
		equal = equal && (point->at(i) == other.point->at(i));
	return equal;
}

unsigned int PointCylindrical3D::get_id()
{
	return id;
}

void PointCylindrical3D::set_id(unsigned int new_id)
{
	id = new_id;
}
