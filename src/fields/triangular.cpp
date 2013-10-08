/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "triangular.hpp"

/*****************
 * VERTEX FIELDS *
 *****************/

///////////////////////////////////////
// TriangularCartesian2D_Vertex_Field //
///////////////////////////////////////

TriangularCartesian2D_Vertex_Field::TriangularCartesian2D_Vertex_Field(double default_value)
{
	field = new TriangularCartesian2D_Vertex_Field_t(container, default_value);
}

TriangularCartesian2D_Vertex_Field::~TriangularCartesian2D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularCartesian2D_Vertex_Field::get_value(TriangularCartesian2D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void TriangularCartesian2D_Vertex_Field::set_value(TriangularCartesian2D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

TriangularCartesian2D_Vertex_Field_t & TriangularCartesian2D_Vertex_Field::get_field()
{
	return *field;
}

///////////////////////////////////////
// TriangularCartesian3D_Vertex_Field //
///////////////////////////////////////

TriangularCartesian3D_Vertex_Field::TriangularCartesian3D_Vertex_Field(double default_value)
{
	field = new TriangularCartesian3D_Vertex_Field_t(container, default_value);
}

TriangularCartesian3D_Vertex_Field::~TriangularCartesian3D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularCartesian3D_Vertex_Field::get_value(TriangularCartesian3D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void TriangularCartesian3D_Vertex_Field::set_value(TriangularCartesian3D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

TriangularCartesian3D_Vertex_Field_t & TriangularCartesian3D_Vertex_Field::get_field()
{
	return *field;
}

/////////////////////////////////////////
// TriangularCylindrical3D_Vertex_Field //
/////////////////////////////////////////

TriangularCylindrical3D_Vertex_Field::TriangularCylindrical3D_Vertex_Field(double default_value)
{
	field = new TriangularCylindrical3D_Vertex_Field_t(container, default_value);
}

TriangularCylindrical3D_Vertex_Field::~TriangularCylindrical3D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularCylindrical3D_Vertex_Field::get_value(TriangularCylindrical3D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void TriangularCylindrical3D_Vertex_Field::set_value(TriangularCylindrical3D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

TriangularCylindrical3D_Vertex_Field_t & TriangularCylindrical3D_Vertex_Field::get_field()
{
	return *field;
}

///////////////////////////////////
// TriangularPolar2D_Vertex_Field //
///////////////////////////////////

TriangularPolar2D_Vertex_Field::TriangularPolar2D_Vertex_Field(double default_value)
{
	field = new TriangularPolar2D_Vertex_Field_t(container, default_value);
}

TriangularPolar2D_Vertex_Field::~TriangularPolar2D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularPolar2D_Vertex_Field::get_value(TriangularPolar2D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void TriangularPolar2D_Vertex_Field::set_value(TriangularPolar2D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

TriangularPolar2D_Vertex_Field_t & TriangularPolar2D_Vertex_Field::get_field()
{
	return *field;
}

///////////////////////////////////////
// TriangularSpherical3D_Vertex_Field //
///////////////////////////////////////

TriangularSpherical3D_Vertex_Field::TriangularSpherical3D_Vertex_Field(double default_value)
{
	field = new TriangularSpherical3D_Vertex_Field_t(container, default_value);
}

TriangularSpherical3D_Vertex_Field::~TriangularSpherical3D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularSpherical3D_Vertex_Field::get_value(TriangularSpherical3D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void TriangularSpherical3D_Vertex_Field::set_value(TriangularSpherical3D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

TriangularSpherical3D_Vertex_Field_t & TriangularSpherical3D_Vertex_Field::get_field()
{
	return *field;
}

/***************
 * CELL FIELDS *
 ***************/

/////////////////////////////////////
// TriangularCartesian2D_Cell_Field //
/////////////////////////////////////

TriangularCartesian2D_Cell_Field::TriangularCartesian2D_Cell_Field(double default_value)
{
	field = new TriangularCartesian2D_Cell_Field_t(container, default_value);
}

TriangularCartesian2D_Cell_Field::~TriangularCartesian2D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularCartesian2D_Cell_Field::get_value(TriangularCartesian2D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void TriangularCartesian2D_Cell_Field::set_value(TriangularCartesian2D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

TriangularCartesian2D_Cell_Field_t & TriangularCartesian2D_Cell_Field::get_field()
{
	return *field;
}

/////////////////////////////////////
// TriangularCartesian3D_Cell_Field //
/////////////////////////////////////

TriangularCartesian3D_Cell_Field::TriangularCartesian3D_Cell_Field(double default_value)
{
	field = new TriangularCartesian3D_Cell_Field_t(container, default_value);
}

TriangularCartesian3D_Cell_Field::~TriangularCartesian3D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularCartesian3D_Cell_Field::get_value(TriangularCartesian3D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void TriangularCartesian3D_Cell_Field::set_value(TriangularCartesian3D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

TriangularCartesian3D_Cell_Field_t & TriangularCartesian3D_Cell_Field::get_field()
{
	return *field;
}

///////////////////////////////////////
// TriangularCylindrical3D_Cell_Field //
///////////////////////////////////////

TriangularCylindrical3D_Cell_Field::TriangularCylindrical3D_Cell_Field(double default_value)
{
	field = new TriangularCylindrical3D_Cell_Field_t(container, default_value);
}

TriangularCylindrical3D_Cell_Field::~TriangularCylindrical3D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularCylindrical3D_Cell_Field::get_value(TriangularCylindrical3D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void TriangularCylindrical3D_Cell_Field::set_value(TriangularCylindrical3D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

TriangularCylindrical3D_Cell_Field_t & TriangularCylindrical3D_Cell_Field::get_field()
{
	return *field;
}

/////////////////////////////////
// TriangularPolar2D_Cell_Field //
/////////////////////////////////

TriangularPolar2D_Cell_Field::TriangularPolar2D_Cell_Field(double default_value)
{
	field = new TriangularPolar2D_Cell_Field_t(container, default_value);
}

TriangularPolar2D_Cell_Field::~TriangularPolar2D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularPolar2D_Cell_Field::get_value(TriangularPolar2D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void TriangularPolar2D_Cell_Field::set_value(TriangularPolar2D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

TriangularPolar2D_Cell_Field_t & TriangularPolar2D_Cell_Field::get_field()
{
	return *field;
}

/////////////////////////////////////
// TriangularSpherical3D_Cell_Field //
/////////////////////////////////////

TriangularSpherical3D_Cell_Field::TriangularSpherical3D_Cell_Field(double default_value)
{
	field = new TriangularSpherical3D_Cell_Field_t(container, default_value);
}

TriangularSpherical3D_Cell_Field::~TriangularSpherical3D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularSpherical3D_Cell_Field::get_value(TriangularSpherical3D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void TriangularSpherical3D_Cell_Field::set_value(TriangularSpherical3D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

TriangularSpherical3D_Cell_Field_t & TriangularSpherical3D_Cell_Field::get_field()
{
	return *field;
}
