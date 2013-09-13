#include "tetrahedral.hpp"

/********************
 * VERTEX ACCESSORS *
 ********************/

///////////////////////////////////////
// TetrahedralCartesian3D_Vertex_Accessor //
///////////////////////////////////////

TetrahedralCartesian3D_Vertex_Accessor::TetrahedralCartesian3D_Vertex_Accessor()
{
	accessor = new TetrahedralCartesian3D_Vertex_Accessor_t(container);
}

TetrahedralCartesian3D_Vertex_Accessor::~TetrahedralCartesian3D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TetrahedralCartesian3D_Vertex_Accessor::get_value(TetrahedralCartesian3D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void TetrahedralCartesian3D_Vertex_Accessor::set_value(TetrahedralCartesian3D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

TetrahedralCartesian3D_Vertex_Accessor_t TetrahedralCartesian3D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

/////////////////////////////////////////
// TetrahedralCylindrical3D_Vertex_Accessor //
/////////////////////////////////////////

TetrahedralCylindrical3D_Vertex_Accessor::TetrahedralCylindrical3D_Vertex_Accessor()
{
	accessor = new TetrahedralCylindrical3D_Vertex_Accessor_t(container);
}

TetrahedralCylindrical3D_Vertex_Accessor::~TetrahedralCylindrical3D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TetrahedralCylindrical3D_Vertex_Accessor::get_value(TetrahedralCylindrical3D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void TetrahedralCylindrical3D_Vertex_Accessor::set_value(TetrahedralCylindrical3D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

TetrahedralCylindrical3D_Vertex_Accessor_t TetrahedralCylindrical3D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

///////////////////////////////////////
// TetrahedralSpherical3D_Vertex_Accessor //
///////////////////////////////////////

TetrahedralSpherical3D_Vertex_Accessor::TetrahedralSpherical3D_Vertex_Accessor()
{
	accessor = new TetrahedralSpherical3D_Vertex_Accessor_t(container);
}

TetrahedralSpherical3D_Vertex_Accessor::~TetrahedralSpherical3D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TetrahedralSpherical3D_Vertex_Accessor::get_value(TetrahedralSpherical3D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void TetrahedralSpherical3D_Vertex_Accessor::set_value(TetrahedralSpherical3D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

TetrahedralSpherical3D_Vertex_Accessor_t TetrahedralSpherical3D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

/******************
 * CELL ACCESSORS *
 ******************/

/////////////////////////////////////
// TetrahedralCartesian3D_Cell_Accessor //
/////////////////////////////////////

TetrahedralCartesian3D_Cell_Accessor::TetrahedralCartesian3D_Cell_Accessor()
{
	accessor = new TetrahedralCartesian3D_Cell_Accessor_t(container);
}

TetrahedralCartesian3D_Cell_Accessor::~TetrahedralCartesian3D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TetrahedralCartesian3D_Cell_Accessor::get_value(TetrahedralCartesian3D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void TetrahedralCartesian3D_Cell_Accessor::set_value(TetrahedralCartesian3D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

TetrahedralCartesian3D_Cell_Accessor_t TetrahedralCartesian3D_Cell_Accessor::get_accessor()
{
	return *accessor;
}

///////////////////////////////////////
// TetrahedralCylindrical3D_Cell_Accessor //
///////////////////////////////////////

TetrahedralCylindrical3D_Cell_Accessor::TetrahedralCylindrical3D_Cell_Accessor()
{
	accessor = new TetrahedralCylindrical3D_Cell_Accessor_t(container);
}

TetrahedralCylindrical3D_Cell_Accessor::~TetrahedralCylindrical3D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TetrahedralCylindrical3D_Cell_Accessor::get_value(TetrahedralCylindrical3D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void TetrahedralCylindrical3D_Cell_Accessor::set_value(TetrahedralCylindrical3D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

TetrahedralCylindrical3D_Cell_Accessor_t TetrahedralCylindrical3D_Cell_Accessor::get_accessor()
{
	return *accessor;
}

/////////////////////////////////////
// TetrahedralSpherical3D_Cell_Accessor //
/////////////////////////////////////

TetrahedralSpherical3D_Cell_Accessor::TetrahedralSpherical3D_Cell_Accessor()
{
	accessor = new TetrahedralSpherical3D_Cell_Accessor_t(container);
}

TetrahedralSpherical3D_Cell_Accessor::~TetrahedralSpherical3D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TetrahedralSpherical3D_Cell_Accessor::get_value(TetrahedralSpherical3D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void TetrahedralSpherical3D_Cell_Accessor::set_value(TetrahedralSpherical3D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

TetrahedralSpherical3D_Cell_Accessor_t TetrahedralSpherical3D_Cell_Accessor::get_accessor()
{
	return *accessor;
}
