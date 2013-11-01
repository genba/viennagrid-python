/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "cartesian.hpp"
#include "polar.hpp"
#include "cylindrical.hpp"
#include "spherical.hpp"

#include <viennagrid/algorithm/inner_prod.hpp>
#include <viennagrid/algorithm/cross_prod.hpp>
#include <viennagrid/algorithm/norm.hpp>

//////////////////
// CARTESIAN 1D //
//////////////////

PointCartesian1D::PointCartesian1D()
{
	point = new PointCartesian1D_t(0);
	id = -1;
}

PointCartesian1D::PointCartesian1D(double x)
{
	point = new PointCartesian1D_t(x);
	id = -1;
}

PointCartesian1D::PointCartesian1D(PointCartesian1D_t *initial_point, unsigned int initial_id)
{
	point = initial_point;
	id = initial_id;
}

PointCartesian1D::PointCartesian1D(PointCartesian1D_t &initial_point, unsigned int initial_id)
{
	point = new PointCartesian1D_t(initial_point);
	id = initial_id;
}

size_t PointCartesian1D::get_dimension()
{
	return 1;
}

const char * PointCartesian1D::get_coord_system()
{
	return "cartesian";
}

PointCartesian1D_t & PointCartesian1D::get_point()
{
	return *point;
}

double PointCartesian1D::get_coord(unsigned int index)
{
	return point->at(index);
}

void PointCartesian1D::set_coord(unsigned int index, double new_value)
{
	point->at(index) = new_value;
}

unsigned int PointCartesian1D::get_id()
{
	return id;
}

void PointCartesian1D::set_id(unsigned int new_id)
{
	id = new_id;
}

list PointCartesian1D::get_coord_list()
{
	list coord_list;
	coord_list.append<double>(point->at(0));
	return coord_list;
}

PointCartesian1D & PointCartesian1D::operator=(const PointCartesian1D &other)
{
	*(this->point) = *(other.point);
	return *this;
}

PointCartesian1D PointCartesian1D::operator+(const PointCartesian1D &other)
{
	PointCartesian1D_t result = *(this->point) + *(other.point);
	return PointCartesian1D(result.at(0));
}

PointCartesian1D PointCartesian1D::operator-(const PointCartesian1D &other)
{
	PointCartesian1D_t result = *(this->point) - *(other.point);
	return PointCartesian1D(result.at(0));
}

PointCartesian1D PointCartesian1D::operator*(const double factor)
{
	PointCartesian1D_t result = *(this->point) * factor;
	return PointCartesian1D(result.at(0));
}

PointCartesian1D PointCartesian1D::operator/(const double factor)
{
	PointCartesian1D_t result = *(this->point) / factor;
	return PointCartesian1D(result.at(0));
}	

double PointCartesian1D::inner_prod(PointCartesian1D &other)
{
	return viennagrid::inner_prod(get_point(), other.get_point());
}

double PointCartesian1D::norm_1()
{
	return viennagrid::norm_1(get_point());
}

double PointCartesian1D::norm_2()
{
	return viennagrid::norm_2(get_point());
}

double PointCartesian1D::norm_inf()
{
	return viennagrid::norm_inf(get_point());
}

PointCartesian1D PointCartesian1D::operator-()
{
	PointCartesian1D_t result = -(*point);
	return PointCartesian1D(result.at(0));
}

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

PointCartesian2D::PointCartesian2D(PointCartesian2D_t *initial_point, unsigned int initial_id)
{
	point = initial_point;
	id = initial_id;
}

PointCartesian2D::PointCartesian2D(PointCartesian2D_t &initial_point, unsigned int initial_id)
{
	point = new PointCartesian2D_t(initial_point);
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

PointPolar2D PointCartesian2D::to_polar()
{
	PointPolar_t new_point = get_point();
	return PointPolar2D(new_point.at(0), new_point.at(1));
}

double PointCartesian2D::norm_1()
{
	return viennagrid::norm_1(get_point());
}

double PointCartesian2D::norm_2()
{
	return viennagrid::norm_2(get_point());
}

double PointCartesian2D::norm_inf()
{
	return viennagrid::norm_inf(get_point());
}

PointCartesian2D PointCartesian2D::operator-()
{
	PointCartesian2D_t result = -(*point);
	return PointCartesian2D(result.at(0), result.at(1));
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

PointCartesian3D::PointCartesian3D(PointCartesian3D_t *initial_point, unsigned int initial_id)
{
	point = initial_point;
	id = initial_id;
}

PointCartesian3D::PointCartesian3D(PointCartesian3D_t &initial_point, unsigned int initial_id)
{
	point = new PointCartesian3D_t(initial_point);
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

PointCartesian3D PointCartesian3D::operator-()
{
	PointCartesian3D_t result = -(*point);
	return PointCartesian3D(result.at(0), result.at(1), result.at(2));
}

PointCylindrical3D PointCartesian3D::to_cylindrical()
{
	PointCylindrical_t new_point = get_point();
	return PointCylindrical3D(new_point.at(0), new_point.at(1), new_point.at(2));
}

PointSpherical3D PointCartesian3D::to_spherical()
{
	PointSpherical_t new_point = get_point();
	return PointSpherical3D(new_point.at(0), new_point.at(1), new_point.at(2));
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

double PointCartesian3D::norm_1()
{
	return viennagrid::norm_1(get_point());
}

double PointCartesian3D::norm_2()
{
	return viennagrid::norm_2(get_point());
}

double PointCartesian3D::norm_inf()
{
	return viennagrid::norm_inf(get_point());
}
