#include "cartesian.hpp"

#include <viennagrid/algorithm/inner_prod.hpp>
#include <viennagrid/algorithm/cross_prod.hpp>

//////////////////
// CARTESIAN 2D //
//////////////////

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

double PointCartesian2D::get_coord(unsigned int index)
{
	return point->at(index);
}

void PointCartesian2D::set_coord(unsigned int index, double new_value)
{
	point->at(index) = new_value;
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

list PointCartesian2D::get_coord_list()
{
	list coord_list;
	coord_list.append<double>(point->at(0));
	coord_list.append<double>(point->at(1));
	return coord_list;
}

PointCartesian2D & PointCartesian2D::operator=(const PointCartesian2D &other)
{
	*(this->point) = *(other.point);
	return *this;
}

PointCartesian2D PointCartesian2D::operator+(const PointCartesian2D &other)
{
	PointCartesian2D_t result = *(this->point) + *(other.point);
	return PointCartesian2D(result.at(0), result.at(1));
}

PointCartesian2D PointCartesian2D::operator-(const PointCartesian2D &other)
{
	PointCartesian2D_t result = *(this->point) - *(other.point);
	return PointCartesian2D(result.at(0), result.at(1));
}

PointCartesian2D PointCartesian2D::operator*(const double factor)
{
	PointCartesian2D_t result = *(this->point) * factor;
	return PointCartesian2D(result.at(0), result.at(1));
}

PointCartesian2D PointCartesian2D::operator/(const double factor)
{
	PointCartesian2D_t result = *(this->point) / factor;
	return PointCartesian2D(result.at(0), result.at(1));
}	

double PointCartesian2D::inner_prod(PointCartesian2D &other)
{
	return viennagrid::inner_prod(get_point(), other.get_point());
}

//////////////////
// CARTESIAN 3D //
//////////////////

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

double PointCartesian3D::get_coord(unsigned int index)
{
	return point->at(index);
}

void PointCartesian3D::set_coord(unsigned int index, double new_value)
{
	point->at(index) = new_value;
}

list PointCartesian3D::get_coord_list()
{
	list coord_list;
	coord_list.append<double>(point->at(0));
	coord_list.append<double>(point->at(1));
	coord_list.append<double>(point->at(2));
	return coord_list;
}

PointCartesian3D & PointCartesian3D::operator=(const PointCartesian3D &other)
{
	*(this->point) = *(other.point);
	return *this;
}

PointCartesian3D PointCartesian3D::operator+(const PointCartesian3D &other)
{
	PointCartesian3D_t result = *(this->point) + *(other.point);
	return PointCartesian3D(result.at(0), result.at(1), result.at(2));
}

PointCartesian3D PointCartesian3D::operator-(const PointCartesian3D &other)
{
	PointCartesian3D_t result = *(this->point) - *(other.point);
	return PointCartesian3D(result.at(0), result.at(1), result.at(2));
}

PointCartesian3D PointCartesian3D::operator*(const double factor)
{
	PointCartesian3D_t result = *(this->point) * factor;
	return PointCartesian3D(result.at(0), result.at(1), result.at(2));
}

PointCartesian3D PointCartesian3D::operator/(const double factor)
{
	PointCartesian3D_t result = *(this->point) / factor;
	return PointCartesian3D(result.at(0), result.at(1), result.at(2));
}

double PointCartesian3D::inner_prod(PointCartesian3D &other)
{
	return viennagrid::inner_prod(get_point(), other.get_point());
}

PointCartesian3D PointCartesian3D::cross_prod(PointCartesian3D &other)
{
	PointCartesian3D_t res = viennagrid::cross_prod(get_point(), other.get_point());
	return PointCartesian3D(res.at(0), res.at(1), res.at(2));
}
