#include "cartesian.hpp"

PointCartesian2D::PointCartesian2D()
{
	point = new PointCartesian2D_t(0, 0);
	id = -1;
}

PointCartesian2D::PointCartesian2D(double x, double y)
{
	point = new PointCartesian2D_t(x, y);
	id = -1;
}

PointCartesian2D::PointCartesian2D(PointCartesian2D_t &initial_point, unsigned int initial_id)
{
	point = &initial_point;
	id = initial_id;
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
	return *point;
}

bool PointCartesian2D::operator==(const PointCartesian2D &other)
{
	bool equal = true;
	for (unsigned int i = 0; equal && i < point->size(); ++i)
		equal = equal && (point->at(i) == other.point->at(i));
	return equal;
}

unsigned int PointCartesian2D::get_id()
{
	return id;
}

void PointCartesian2D::set_id(unsigned int new_id)
{
	id = new_id;
}

PointCartesian3D::PointCartesian3D()
{
	point = new PointCartesian3D_t(0, 0, 0);
	id = -1;
}

PointCartesian3D::PointCartesian3D(double x, double y, double z)
{
	point = new PointCartesian3D_t(x, y, z);
	id = -1;
}

PointCartesian3D::PointCartesian3D(PointCartesian3D_t &initial_point, unsigned int initial_id)
{
	point = &initial_point;
	id = initial_id;
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
	return *point;
}

bool PointCartesian3D::operator==(const PointCartesian3D &other)
{
	bool equal = true;
	for (unsigned int i = 0; equal && i < point->size(); ++i)
		equal = equal && (point->at(i) == other.point->at(i));
	return equal;
}

unsigned int PointCartesian3D::get_id()
{
	return id;
}

void PointCartesian3D::set_id(unsigned int new_id)
{
	id = new_id;
}
