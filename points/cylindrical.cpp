#include "cylindrical.hpp"
#include "cartesian.hpp"
#include "spherical.hpp"

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

double PointCylindrical3D::get_coord(unsigned int index)
{
	return point->at(index);
}

void PointCylindrical3D::set_coord(unsigned int index, double new_value)
{
	point->at(index) = new_value;
}

list PointCylindrical3D::get_coord_list()
{
	list coord_list;
	coord_list.append<double>(point->at(0));
	coord_list.append<double>(point->at(1));
	coord_list.append<double>(point->at(2));
	return coord_list;
}

PointCylindrical3D & PointCylindrical3D::operator=(const PointCylindrical3D &other)
{
	*(this->point) = *(other.point);
	return *this;
}

PointCylindrical3D PointCylindrical3D::operator+(const PointCylindrical3D &other)
{
	PointCylindrical_t result = *(this->point) + *(other.point);
	return PointCylindrical3D(result.at(0), result.at(1), result.at(2));
}

PointCylindrical3D PointCylindrical3D::operator-(const PointCylindrical3D &other)
{
	PointCylindrical_t result = *(this->point) - *(other.point);
	return PointCylindrical3D(result.at(0), result.at(1), result.at(2));
}

PointCylindrical3D PointCylindrical3D::operator*(const double factor)
{
	PointCylindrical_t result = *(this->point) * factor;
	return PointCylindrical3D(result.at(0), result.at(1), result.at(2));
}

PointCylindrical3D PointCylindrical3D::operator/(const double factor)
{
	PointCylindrical_t result = *(this->point) / factor;
	return PointCylindrical3D(result.at(0), result.at(1), result.at(2));
}

PointCartesian3D PointCylindrical3D::to_cartesian()
{
	PointCartesian3D_t new_point = get_point();
	return PointCartesian3D(new_point.at(0), new_point.at(1), new_point.at(2));
}

PointSpherical3D PointCylindrical3D::to_spherical()
{
	PointSpherical_t new_point = get_point();
	return PointSpherical3D(new_point.at(0), new_point.at(1), new_point.at(2));
}
