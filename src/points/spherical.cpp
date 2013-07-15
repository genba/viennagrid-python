#include "spherical.hpp"
#include "cartesian.hpp"
#include "cylindrical.hpp"

PointSpherical3D::PointSpherical3D()
{
	point = new PointSpherical_t(0, 0, 0);
	id = -1;
}

PointSpherical3D::PointSpherical3D(double x, double y, double z)
{
	point = new PointSpherical_t(x, y, z);
	id = -1;
}

PointSpherical3D::PointSpherical3D(PointSpherical_t &initial_point, unsigned int initial_id)
{
	point = &initial_point;
	id = initial_id;
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
	return *point;
}

unsigned int PointSpherical3D::get_id()
{
	return id;
}

void PointSpherical3D::set_id(unsigned int new_id)
{
	id = new_id;
}

double PointSpherical3D::get_coord(unsigned int index)
{
	return point->at(index);
}

void PointSpherical3D::set_coord(unsigned int index, double new_value)
{
	point->at(index) = new_value;
}

list PointSpherical3D::get_coord_list()
{
	list coord_list;
	coord_list.append<double>(point->at(0));
	coord_list.append<double>(point->at(1));
	coord_list.append<double>(point->at(2));
	return coord_list;
}

PointSpherical3D & PointSpherical3D::operator=(const PointSpherical3D &other)
{
	*(this->point) = *(other.point);
	return *this;
}

PointSpherical3D PointSpherical3D::operator+(const PointSpherical3D &other)
{
	PointSpherical_t result = *(this->point) + *(other.point);
	return PointSpherical3D(result.at(0), result.at(1), result.at(2));
}

PointSpherical3D PointSpherical3D::operator-(const PointSpherical3D &other)
{
	PointSpherical_t result = *(this->point) - *(other.point);
	return PointSpherical3D(result.at(0), result.at(1), result.at(2));
}

PointSpherical3D PointSpherical3D::operator*(const double factor)
{
	PointSpherical_t result = *(this->point) * factor;
	return PointSpherical3D(result.at(0), result.at(1), result.at(2));
}

PointSpherical3D PointSpherical3D::operator/(const double factor)
{
	PointSpherical_t result = *(this->point) / factor;
	return PointSpherical3D(result.at(0), result.at(1), result.at(2));
}

PointSpherical3D PointSpherical3D::operator-()
{
	PointSpherical_t result = -(*point);
	return PointSpherical3D(result.at(0), result.at(1), result.at(2));
}

PointCartesian3D PointSpherical3D::to_cartesian()
{
	PointCartesian3D_t new_point = get_point();
	return PointCartesian3D(new_point.at(0), new_point.at(1), new_point.at(2));
}

PointCylindrical3D PointSpherical3D::to_cylindrical()
{
	PointCylindrical_t new_point = get_point();
	return PointCylindrical3D(new_point.at(0), new_point.at(1), new_point.at(2));
}
