#include "tetrahedral.hpp"

/*****************
 * VERTEX FIELDS *
 *****************/

///////////////////////////////////////
// TetrahedralCartesian3D_Vertex_Field //
///////////////////////////////////////

TetrahedralCartesian3D_Vertex_Field::TetrahedralCartesian3D_Vertex_Field(double default_value)
{
	field = new TetrahedralCartesian3D_Vertex_Field_t(container, default_value);
}

TetrahedralCartesian3D_Vertex_Field::~TetrahedralCartesian3D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TetrahedralCartesian3D_Vertex_Field::get_value(TetrahedralCartesian3D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void TetrahedralCartesian3D_Vertex_Field::set_value(TetrahedralCartesian3D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

TetrahedralCartesian3D_Vertex_Field_t & TetrahedralCartesian3D_Vertex_Field::get_field()
{
	return *field;
}

/////////////////////////////////////////
// TetrahedralCylindrical3D_Vertex_Field //
/////////////////////////////////////////

TetrahedralCylindrical3D_Vertex_Field::TetrahedralCylindrical3D_Vertex_Field(double default_value)
{
	field = new TetrahedralCylindrical3D_Vertex_Field_t(container, default_value);
}

TetrahedralCylindrical3D_Vertex_Field::~TetrahedralCylindrical3D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TetrahedralCylindrical3D_Vertex_Field::get_value(TetrahedralCylindrical3D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void TetrahedralCylindrical3D_Vertex_Field::set_value(TetrahedralCylindrical3D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

TetrahedralCylindrical3D_Vertex_Field_t & TetrahedralCylindrical3D_Vertex_Field::get_field()
{
	return *field;
}

///////////////////////////////////////
// TetrahedralSpherical3D_Vertex_Field //
///////////////////////////////////////

TetrahedralSpherical3D_Vertex_Field::TetrahedralSpherical3D_Vertex_Field(double default_value)
{
	field = new TetrahedralSpherical3D_Vertex_Field_t(container, default_value);
}

TetrahedralSpherical3D_Vertex_Field::~TetrahedralSpherical3D_Vertex_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TetrahedralSpherical3D_Vertex_Field::get_value(TetrahedralSpherical3D_Vertex &vertex)
{
	return (*field)(vertex.get_vertex());
}

void TetrahedralSpherical3D_Vertex_Field::set_value(TetrahedralSpherical3D_Vertex &vertex, double new_value)
{
	(*field)(vertex.get_vertex()) = new_value;
}

TetrahedralSpherical3D_Vertex_Field_t & TetrahedralSpherical3D_Vertex_Field::get_field()
{
	return *field;
}

/***************
 * CELL FIELDS *
 ***************/

/////////////////////////////////////
// TetrahedralCartesian3D_Cell_Field //
/////////////////////////////////////

TetrahedralCartesian3D_Cell_Field::TetrahedralCartesian3D_Cell_Field(double default_value)
{
	field = new TetrahedralCartesian3D_Cell_Field_t(container, default_value);
}

TetrahedralCartesian3D_Cell_Field::~TetrahedralCartesian3D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TetrahedralCartesian3D_Cell_Field::get_value(TetrahedralCartesian3D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void TetrahedralCartesian3D_Cell_Field::set_value(TetrahedralCartesian3D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

TetrahedralCartesian3D_Cell_Field_t & TetrahedralCartesian3D_Cell_Field::get_field()
{
	return *field;
}

///////////////////////////////////////
// TetrahedralCylindrical3D_Cell_Field //
///////////////////////////////////////

TetrahedralCylindrical3D_Cell_Field::TetrahedralCylindrical3D_Cell_Field(double default_value)
{
	field = new TetrahedralCylindrical3D_Cell_Field_t(container, default_value);
}

TetrahedralCylindrical3D_Cell_Field::~TetrahedralCylindrical3D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TetrahedralCylindrical3D_Cell_Field::get_value(TetrahedralCylindrical3D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void TetrahedralCylindrical3D_Cell_Field::set_value(TetrahedralCylindrical3D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

TetrahedralCylindrical3D_Cell_Field_t & TetrahedralCylindrical3D_Cell_Field::get_field()
{
	return *field;
}

/////////////////////////////////////
// TetrahedralSpherical3D_Cell_Field //
/////////////////////////////////////

TetrahedralSpherical3D_Cell_Field::TetrahedralSpherical3D_Cell_Field(double default_value)
{
	field = new TetrahedralSpherical3D_Cell_Field_t(container, default_value);
}

TetrahedralSpherical3D_Cell_Field::~TetrahedralSpherical3D_Cell_Field()
{
	delete field;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TetrahedralSpherical3D_Cell_Field::get_value(TetrahedralSpherical3D_Cell &cell)
{
	return (*field)(cell.get_cell());
}

void TetrahedralSpherical3D_Cell_Field::set_value(TetrahedralSpherical3D_Cell &cell, double new_value)
{
	(*field)(cell.get_cell()) = new_value;
}

TetrahedralSpherical3D_Cell_Field_t & TetrahedralSpherical3D_Cell_Field::get_field()
{
	return *field;
}
