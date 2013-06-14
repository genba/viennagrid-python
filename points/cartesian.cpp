#include "cartesian.hpp"

PointCartesian2D::PointCartesian2D()
{
	point = new PointCartesian2D_t(0, 0);
	// destroy = true;
}

PointCartesian2D::PointCartesian2D(double x, double y)
{
	point = new PointCartesian2D_t(x, y);
	// destroy = true;
}

PointCartesian2D::PointCartesian2D(PointCartesian2D_t &initial_point)
{
	point = &initial_point;
	// destroy = false;
}

PointCartesian2D::~PointCartesian2D()
{
	// if (destroy)
	// 	delete point;
	// Strangely, I do not need to free the memory when I allocate it in the constructor.
	// If I do so, I get a double-free error and the program aborts.
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

PointCartesian3D::PointCartesian3D()
{
	point = new PointCartesian3D_t(0, 0, 0);
	// destroy = true;
}

PointCartesian3D::PointCartesian3D(double x, double y, double z)
{
	point = new PointCartesian3D_t(x, y, z);
	// destroy = true;
}

PointCartesian3D::PointCartesian3D(PointCartesian3D_t &initial_point)
{
	point = &initial_point;
	// destroy = false;
}

PointCartesian3D::~PointCartesian3D()
{
	// if (destroy)
	// 	delete point;
	// Strangely, I do not need to free the memory when I allocate it in the constructor.
	// If I do so, I get a double-free error and the program aborts.
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
