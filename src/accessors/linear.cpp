/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "linear.hpp"

/********************
 * VERTEX ACCESSORS *
 ********************/

////////////////////////////////////////
 // LinearCartesian1D_Vertex_Accessor //
////////////////////////////////////////
 
LinearCartesian1D_Vertex_Accessor::LinearCartesian1D_Vertex_Accessor()
{
	accessor = new LinearCartesian1D_Vertex_Accessor_t(container);
}

LinearCartesian1D_Vertex_Accessor::~LinearCartesian1D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearCartesian1D_Vertex_Accessor::get_value(LinearCartesian1D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void LinearCartesian1D_Vertex_Accessor::set_value(LinearCartesian1D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

LinearCartesian1D_Vertex_Accessor_t & LinearCartesian1D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

///////////////////////////////////////
// LinearCartesian2D_Vertex_Accessor //
///////////////////////////////////////

LinearCartesian2D_Vertex_Accessor::LinearCartesian2D_Vertex_Accessor()
{
	accessor = new LinearCartesian2D_Vertex_Accessor_t(container);
}

LinearCartesian2D_Vertex_Accessor::~LinearCartesian2D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearCartesian2D_Vertex_Accessor::get_value(LinearCartesian2D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void LinearCartesian2D_Vertex_Accessor::set_value(LinearCartesian2D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

LinearCartesian2D_Vertex_Accessor_t & LinearCartesian2D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

///////////////////////////////////////
// LinearCartesian3D_Vertex_Accessor //
///////////////////////////////////////

LinearCartesian3D_Vertex_Accessor::LinearCartesian3D_Vertex_Accessor()
{
	accessor = new LinearCartesian3D_Vertex_Accessor_t(container);
}

LinearCartesian3D_Vertex_Accessor::~LinearCartesian3D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearCartesian3D_Vertex_Accessor::get_value(LinearCartesian3D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void LinearCartesian3D_Vertex_Accessor::set_value(LinearCartesian3D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

LinearCartesian3D_Vertex_Accessor_t & LinearCartesian3D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

/////////////////////////////////////////
// LinearCylindrical3D_Vertex_Accessor //
/////////////////////////////////////////

LinearCylindrical3D_Vertex_Accessor::LinearCylindrical3D_Vertex_Accessor()
{
	accessor = new LinearCylindrical3D_Vertex_Accessor_t(container);
}

LinearCylindrical3D_Vertex_Accessor::~LinearCylindrical3D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearCylindrical3D_Vertex_Accessor::get_value(LinearCylindrical3D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void LinearCylindrical3D_Vertex_Accessor::set_value(LinearCylindrical3D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

LinearCylindrical3D_Vertex_Accessor_t & LinearCylindrical3D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

///////////////////////////////////
// LinearPolar2D_Vertex_Accessor //
///////////////////////////////////

LinearPolar2D_Vertex_Accessor::LinearPolar2D_Vertex_Accessor()
{
	accessor = new LinearPolar2D_Vertex_Accessor_t(container);
}

LinearPolar2D_Vertex_Accessor::~LinearPolar2D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearPolar2D_Vertex_Accessor::get_value(LinearPolar2D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void LinearPolar2D_Vertex_Accessor::set_value(LinearPolar2D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

LinearPolar2D_Vertex_Accessor_t & LinearPolar2D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

///////////////////////////////////////
// LinearSpherical3D_Vertex_Accessor //
///////////////////////////////////////

LinearSpherical3D_Vertex_Accessor::LinearSpherical3D_Vertex_Accessor()
{
	accessor = new LinearSpherical3D_Vertex_Accessor_t(container);
}

LinearSpherical3D_Vertex_Accessor::~LinearSpherical3D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearSpherical3D_Vertex_Accessor::get_value(LinearSpherical3D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void LinearSpherical3D_Vertex_Accessor::set_value(LinearSpherical3D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

LinearSpherical3D_Vertex_Accessor_t & LinearSpherical3D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

/******************
 * CELL ACCESSORS *
 ******************/

/////////////////////////////////////
// LinearCartesian1D_Cell_Accessor //
/////////////////////////////////////
 
LinearCartesian1D_Cell_Accessor::LinearCartesian1D_Cell_Accessor()
{
	accessor = new LinearCartesian1D_Cell_Accessor_t(container);
}

LinearCartesian1D_Cell_Accessor::~LinearCartesian1D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearCartesian1D_Cell_Accessor::get_value(LinearCartesian1D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void LinearCartesian1D_Cell_Accessor::set_value(LinearCartesian1D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

LinearCartesian1D_Cell_Accessor_t & LinearCartesian1D_Cell_Accessor::get_accessor()
{
	return *accessor;
}

/////////////////////////////////////
// LinearCartesian2D_Cell_Accessor //
/////////////////////////////////////

LinearCartesian2D_Cell_Accessor::LinearCartesian2D_Cell_Accessor()
{
	accessor = new LinearCartesian2D_Cell_Accessor_t(container);
}

LinearCartesian2D_Cell_Accessor::~LinearCartesian2D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearCartesian2D_Cell_Accessor::get_value(LinearCartesian2D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void LinearCartesian2D_Cell_Accessor::set_value(LinearCartesian2D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

LinearCartesian2D_Cell_Accessor_t & LinearCartesian2D_Cell_Accessor::get_accessor()
{
	return *accessor;
}

/////////////////////////////////////
// LinearCartesian3D_Cell_Accessor //
/////////////////////////////////////

LinearCartesian3D_Cell_Accessor::LinearCartesian3D_Cell_Accessor()
{
	accessor = new LinearCartesian3D_Cell_Accessor_t(container);
}

LinearCartesian3D_Cell_Accessor::~LinearCartesian3D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearCartesian3D_Cell_Accessor::get_value(LinearCartesian3D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void LinearCartesian3D_Cell_Accessor::set_value(LinearCartesian3D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

LinearCartesian3D_Cell_Accessor_t & LinearCartesian3D_Cell_Accessor::get_accessor()
{
	return *accessor;
}

///////////////////////////////////////
// LinearCylindrical3D_Cell_Accessor //
///////////////////////////////////////

LinearCylindrical3D_Cell_Accessor::LinearCylindrical3D_Cell_Accessor()
{
	accessor = new LinearCylindrical3D_Cell_Accessor_t(container);
}

LinearCylindrical3D_Cell_Accessor::~LinearCylindrical3D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearCylindrical3D_Cell_Accessor::get_value(LinearCylindrical3D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void LinearCylindrical3D_Cell_Accessor::set_value(LinearCylindrical3D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

LinearCylindrical3D_Cell_Accessor_t & LinearCylindrical3D_Cell_Accessor::get_accessor()
{
	return *accessor;
}

/////////////////////////////////
// LinearPolar2D_Cell_Accessor //
/////////////////////////////////

LinearPolar2D_Cell_Accessor::LinearPolar2D_Cell_Accessor()
{
	accessor = new LinearPolar2D_Cell_Accessor_t(container);
}

LinearPolar2D_Cell_Accessor::~LinearPolar2D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearPolar2D_Cell_Accessor::get_value(LinearPolar2D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void LinearPolar2D_Cell_Accessor::set_value(LinearPolar2D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

LinearPolar2D_Cell_Accessor_t & LinearPolar2D_Cell_Accessor::get_accessor()
{
	return *accessor;
}

/////////////////////////////////////
// LinearSpherical3D_Cell_Accessor //
/////////////////////////////////////

LinearSpherical3D_Cell_Accessor::LinearSpherical3D_Cell_Accessor()
{
	accessor = new LinearSpherical3D_Cell_Accessor_t(container);
}

LinearSpherical3D_Cell_Accessor::~LinearSpherical3D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double LinearSpherical3D_Cell_Accessor::get_value(LinearSpherical3D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void LinearSpherical3D_Cell_Accessor::set_value(LinearSpherical3D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

LinearSpherical3D_Cell_Accessor_t & LinearSpherical3D_Cell_Accessor::get_accessor()
{
	return *accessor;
}
