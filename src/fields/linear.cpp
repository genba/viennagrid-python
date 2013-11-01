/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "linear.hpp"

/*****************
 * VERTEX FIELDS *
 *****************/

////////////////////////////////////////
 // LinearCartesian1D_Vertex_Field //
////////////////////////////////////////
 
LinearCartesian1D_Vertex_Field::LinearCartesian1D_Vertex_Field(double default_value)
{
	field = new LinearCartesian1D_Vertex_Field_t(container, default_value);
}

LinearCartesian1D_Vertex_Field::~LinearCartesian1D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearCartesian1D_Vertex_Field::get_value(LinearCartesian1D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void LinearCartesian1D_Vertex_Field::set_value(LinearCartesian1D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

LinearCartesian1D_Vertex_Field_t & LinearCartesian1D_Vertex_Field::get_field()
{
	return *field;
}

///////////////////////////////////////
// LinearCartesian2D_Vertex_Field //
///////////////////////////////////////

LinearCartesian2D_Vertex_Field::LinearCartesian2D_Vertex_Field(double default_value)
{
	field = new LinearCartesian2D_Vertex_Field_t(container, default_value);
}

LinearCartesian2D_Vertex_Field::~LinearCartesian2D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearCartesian2D_Vertex_Field::get_value(LinearCartesian2D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void LinearCartesian2D_Vertex_Field::set_value(LinearCartesian2D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

LinearCartesian2D_Vertex_Field_t & LinearCartesian2D_Vertex_Field::get_field()
{
	return *field;
}

///////////////////////////////////////
// LinearCartesian3D_Vertex_Field //
///////////////////////////////////////

LinearCartesian3D_Vertex_Field::LinearCartesian3D_Vertex_Field(double default_value)
{
	field = new LinearCartesian3D_Vertex_Field_t(container, default_value);
}

LinearCartesian3D_Vertex_Field::~LinearCartesian3D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearCartesian3D_Vertex_Field::get_value(LinearCartesian3D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void LinearCartesian3D_Vertex_Field::set_value(LinearCartesian3D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

LinearCartesian3D_Vertex_Field_t & LinearCartesian3D_Vertex_Field::get_field()
{
	return *field;
}

/////////////////////////////////////////
// LinearCylindrical3D_Vertex_Field //
/////////////////////////////////////////

LinearCylindrical3D_Vertex_Field::LinearCylindrical3D_Vertex_Field(double default_value)
{
	field = new LinearCylindrical3D_Vertex_Field_t(container, default_value);
}

LinearCylindrical3D_Vertex_Field::~LinearCylindrical3D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearCylindrical3D_Vertex_Field::get_value(LinearCylindrical3D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void LinearCylindrical3D_Vertex_Field::set_value(LinearCylindrical3D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

LinearCylindrical3D_Vertex_Field_t & LinearCylindrical3D_Vertex_Field::get_field()
{
	return *field;
}

///////////////////////////////////
// LinearPolar2D_Vertex_Field //
///////////////////////////////////

LinearPolar2D_Vertex_Field::LinearPolar2D_Vertex_Field(double default_value)
{
	field = new LinearPolar2D_Vertex_Field_t(container, default_value);
}

LinearPolar2D_Vertex_Field::~LinearPolar2D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearPolar2D_Vertex_Field::get_value(LinearPolar2D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void LinearPolar2D_Vertex_Field::set_value(LinearPolar2D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

LinearPolar2D_Vertex_Field_t & LinearPolar2D_Vertex_Field::get_field()
{
	return *field;
}

///////////////////////////////////////
// LinearSpherical3D_Vertex_Field //
///////////////////////////////////////

LinearSpherical3D_Vertex_Field::LinearSpherical3D_Vertex_Field(double default_value)
{
	field = new LinearSpherical3D_Vertex_Field_t(container, default_value);
}

LinearSpherical3D_Vertex_Field::~LinearSpherical3D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearSpherical3D_Vertex_Field::get_value(LinearSpherical3D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void LinearSpherical3D_Vertex_Field::set_value(LinearSpherical3D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

LinearSpherical3D_Vertex_Field_t & LinearSpherical3D_Vertex_Field::get_field()
{
	return *field;
}

/***************
 * CELL FIELDS *
 ***************/

/////////////////////////////////////
// LinearCartesian1D_Cell_Field //
/////////////////////////////////////
 
LinearCartesian1D_Cell_Field::LinearCartesian1D_Cell_Field(double default_value)
{
	field = new LinearCartesian1D_Cell_Field_t(container, default_value);
}

LinearCartesian1D_Cell_Field::~LinearCartesian1D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearCartesian1D_Cell_Field::get_value(LinearCartesian1D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void LinearCartesian1D_Cell_Field::set_value(LinearCartesian1D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

LinearCartesian1D_Cell_Field_t & LinearCartesian1D_Cell_Field::get_field()
{
	return *field;
}

/////////////////////////////////////
// LinearCartesian2D_Cell_Field //
/////////////////////////////////////

LinearCartesian2D_Cell_Field::LinearCartesian2D_Cell_Field(double default_value)
{
	field = new LinearCartesian2D_Cell_Field_t(container, default_value);
}

LinearCartesian2D_Cell_Field::~LinearCartesian2D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearCartesian2D_Cell_Field::get_value(LinearCartesian2D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void LinearCartesian2D_Cell_Field::set_value(LinearCartesian2D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

LinearCartesian2D_Cell_Field_t & LinearCartesian2D_Cell_Field::get_field()
{
	return *field;
}

/////////////////////////////////////
// LinearCartesian3D_Cell_Field //
/////////////////////////////////////

LinearCartesian3D_Cell_Field::LinearCartesian3D_Cell_Field(double default_value)
{
	field = new LinearCartesian3D_Cell_Field_t(container, default_value);
}

LinearCartesian3D_Cell_Field::~LinearCartesian3D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearCartesian3D_Cell_Field::get_value(LinearCartesian3D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void LinearCartesian3D_Cell_Field::set_value(LinearCartesian3D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

LinearCartesian3D_Cell_Field_t & LinearCartesian3D_Cell_Field::get_field()
{
	return *field;
}

///////////////////////////////////////
// LinearCylindrical3D_Cell_Field //
///////////////////////////////////////

LinearCylindrical3D_Cell_Field::LinearCylindrical3D_Cell_Field(double default_value)
{
	field = new LinearCylindrical3D_Cell_Field_t(container, default_value);
}

LinearCylindrical3D_Cell_Field::~LinearCylindrical3D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearCylindrical3D_Cell_Field::get_value(LinearCylindrical3D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void LinearCylindrical3D_Cell_Field::set_value(LinearCylindrical3D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

LinearCylindrical3D_Cell_Field_t & LinearCylindrical3D_Cell_Field::get_field()
{
	return *field;
}

/////////////////////////////////
// LinearPolar2D_Cell_Field //
/////////////////////////////////

LinearPolar2D_Cell_Field::LinearPolar2D_Cell_Field(double default_value)
{
	field = new LinearPolar2D_Cell_Field_t(container, default_value);
}

LinearPolar2D_Cell_Field::~LinearPolar2D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearPolar2D_Cell_Field::get_value(LinearPolar2D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void LinearPolar2D_Cell_Field::set_value(LinearPolar2D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

LinearPolar2D_Cell_Field_t & LinearPolar2D_Cell_Field::get_field()
{
	return *field;
}

/////////////////////////////////////
// LinearSpherical3D_Cell_Field //
/////////////////////////////////////

LinearSpherical3D_Cell_Field::LinearSpherical3D_Cell_Field(double default_value)
{
	field = new LinearSpherical3D_Cell_Field_t(container, default_value);
}

LinearSpherical3D_Cell_Field::~LinearSpherical3D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearSpherical3D_Cell_Field::get_value(LinearSpherical3D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void LinearSpherical3D_Cell_Field::set_value(LinearSpherical3D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

LinearSpherical3D_Cell_Field_t & LinearSpherical3D_Cell_Field::get_field()
{
	return *field;
}
