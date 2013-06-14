#include "polar.hpp"

PointPolar2D::PointPolar2D()
{
	point = new PointPolar_t(0, 0);
	id = -1;
}

PointPolar2D::PointPolar2D(double x, double y)
{
	point = new PointPolar_t(x, y);
	id = -1;
}

PointPolar2D::PointPolar2D(PointPolar_t &initial_point, unsigned int initial_id)
{
	point = &initial_point;
	id = initial_id;
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
	return *point;
}

bool PointPolar2D::operator==(const PointPolar2D &other)
{
	bool equal = true;
	for (unsigned int i = 0; equal && i < point->size(); ++i)
		equal = equal && (point->at(i) == other.point->at(i));
	return equal;
}

unsigned int PointPolar2D::get_id()
{
	return id;
}

void PointPolar2D::set_id(unsigned int new_id)
{
	id = new_id;
}
