#include "quadrilateral.hpp"

/*****************
 * VERTEX FIELDS *
 *****************/

///////////////////////////////////////
// QuadrilateralCartesian2D_Vertex_Field //
///////////////////////////////////////

QuadrilateralCartesian2D_Vertex_Field::QuadrilateralCartesian2D_Vertex_Field(double default_value)
{
	field = new QuadrilateralCartesian2D_Vertex_Field_t(container, default_value);
}

QuadrilateralCartesian2D_Vertex_Field::~QuadrilateralCartesian2D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralCartesian2D_Vertex_Field::get_value(QuadrilateralCartesian2D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void QuadrilateralCartesian2D_Vertex_Field::set_value(QuadrilateralCartesian2D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

QuadrilateralCartesian2D_Vertex_Field_t & QuadrilateralCartesian2D_Vertex_Field::get_field()
{
	return *field;
}

///////////////////////////////////////
// QuadrilateralCartesian3D_Vertex_Field //
///////////////////////////////////////

QuadrilateralCartesian3D_Vertex_Field::QuadrilateralCartesian3D_Vertex_Field(double default_value)
{
	field = new QuadrilateralCartesian3D_Vertex_Field_t(container, default_value);
}

QuadrilateralCartesian3D_Vertex_Field::~QuadrilateralCartesian3D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralCartesian3D_Vertex_Field::get_value(QuadrilateralCartesian3D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void QuadrilateralCartesian3D_Vertex_Field::set_value(QuadrilateralCartesian3D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

QuadrilateralCartesian3D_Vertex_Field_t & QuadrilateralCartesian3D_Vertex_Field::get_field()
{
	return *field;
}

/////////////////////////////////////////
// QuadrilateralCylindrical3D_Vertex_Field //
/////////////////////////////////////////

QuadrilateralCylindrical3D_Vertex_Field::QuadrilateralCylindrical3D_Vertex_Field(double default_value)
{
	field = new QuadrilateralCylindrical3D_Vertex_Field_t(container, default_value);
}

QuadrilateralCylindrical3D_Vertex_Field::~QuadrilateralCylindrical3D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralCylindrical3D_Vertex_Field::get_value(QuadrilateralCylindrical3D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void QuadrilateralCylindrical3D_Vertex_Field::set_value(QuadrilateralCylindrical3D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

QuadrilateralCylindrical3D_Vertex_Field_t & QuadrilateralCylindrical3D_Vertex_Field::get_field()
{
	return *field;
}

///////////////////////////////////
// QuadrilateralPolar2D_Vertex_Field //
///////////////////////////////////

QuadrilateralPolar2D_Vertex_Field::QuadrilateralPolar2D_Vertex_Field(double default_value)
{
	field = new QuadrilateralPolar2D_Vertex_Field_t(container, default_value);
}

QuadrilateralPolar2D_Vertex_Field::~QuadrilateralPolar2D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralPolar2D_Vertex_Field::get_value(QuadrilateralPolar2D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void QuadrilateralPolar2D_Vertex_Field::set_value(QuadrilateralPolar2D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

QuadrilateralPolar2D_Vertex_Field_t & QuadrilateralPolar2D_Vertex_Field::get_field()
{
	return *field;
}

///////////////////////////////////////
// QuadrilateralSpherical3D_Vertex_Field //
///////////////////////////////////////

QuadrilateralSpherical3D_Vertex_Field::QuadrilateralSpherical3D_Vertex_Field(double default_value)
{
	field = new QuadrilateralSpherical3D_Vertex_Field_t(container, default_value);
}

QuadrilateralSpherical3D_Vertex_Field::~QuadrilateralSpherical3D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralSpherical3D_Vertex_Field::get_value(QuadrilateralSpherical3D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void QuadrilateralSpherical3D_Vertex_Field::set_value(QuadrilateralSpherical3D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

QuadrilateralSpherical3D_Vertex_Field_t & QuadrilateralSpherical3D_Vertex_Field::get_field()
{
	return *field;
}

/***************
 * CELL FIELDS *
 ***************/

/////////////////////////////////////
// QuadrilateralCartesian2D_Cell_Field //
/////////////////////////////////////

QuadrilateralCartesian2D_Cell_Field::QuadrilateralCartesian2D_Cell_Field(double default_value)
{
	field = new QuadrilateralCartesian2D_Cell_Field_t(container, default_value);
}

QuadrilateralCartesian2D_Cell_Field::~QuadrilateralCartesian2D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralCartesian2D_Cell_Field::get_value(QuadrilateralCartesian2D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void QuadrilateralCartesian2D_Cell_Field::set_value(QuadrilateralCartesian2D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

QuadrilateralCartesian2D_Cell_Field_t & QuadrilateralCartesian2D_Cell_Field::get_field()
{
	return *field;
}

/////////////////////////////////////
// QuadrilateralCartesian3D_Cell_Field //
/////////////////////////////////////

QuadrilateralCartesian3D_Cell_Field::QuadrilateralCartesian3D_Cell_Field(double default_value)
{
	field = new QuadrilateralCartesian3D_Cell_Field_t(container, default_value);
}

QuadrilateralCartesian3D_Cell_Field::~QuadrilateralCartesian3D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralCartesian3D_Cell_Field::get_value(QuadrilateralCartesian3D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void QuadrilateralCartesian3D_Cell_Field::set_value(QuadrilateralCartesian3D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

QuadrilateralCartesian3D_Cell_Field_t & QuadrilateralCartesian3D_Cell_Field::get_field()
{
	return *field;
}

///////////////////////////////////////
// QuadrilateralCylindrical3D_Cell_Field //
///////////////////////////////////////

QuadrilateralCylindrical3D_Cell_Field::QuadrilateralCylindrical3D_Cell_Field(double default_value)
{
	field = new QuadrilateralCylindrical3D_Cell_Field_t(container, default_value);
}

QuadrilateralCylindrical3D_Cell_Field::~QuadrilateralCylindrical3D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralCylindrical3D_Cell_Field::get_value(QuadrilateralCylindrical3D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void QuadrilateralCylindrical3D_Cell_Field::set_value(QuadrilateralCylindrical3D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

QuadrilateralCylindrical3D_Cell_Field_t & QuadrilateralCylindrical3D_Cell_Field::get_field()
{
	return *field;
}

/////////////////////////////////
// QuadrilateralPolar2D_Cell_Field //
/////////////////////////////////

QuadrilateralPolar2D_Cell_Field::QuadrilateralPolar2D_Cell_Field(double default_value)
{
	field = new QuadrilateralPolar2D_Cell_Field_t(container, default_value);
}

QuadrilateralPolar2D_Cell_Field::~QuadrilateralPolar2D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralPolar2D_Cell_Field::get_value(QuadrilateralPolar2D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void QuadrilateralPolar2D_Cell_Field::set_value(QuadrilateralPolar2D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

QuadrilateralPolar2D_Cell_Field_t & QuadrilateralPolar2D_Cell_Field::get_field()
{
	return *field;
}

/////////////////////////////////////
// QuadrilateralSpherical3D_Cell_Field //
/////////////////////////////////////

QuadrilateralSpherical3D_Cell_Field::QuadrilateralSpherical3D_Cell_Field(double default_value)
{
	field = new QuadrilateralSpherical3D_Cell_Field_t(container, default_value);
}

QuadrilateralSpherical3D_Cell_Field::~QuadrilateralSpherical3D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralSpherical3D_Cell_Field::get_value(QuadrilateralSpherical3D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void QuadrilateralSpherical3D_Cell_Field::set_value(QuadrilateralSpherical3D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

QuadrilateralSpherical3D_Cell_Field_t & QuadrilateralSpherical3D_Cell_Field::get_field()
{
	return *field;
}
