#include "quadrilateral.hpp"

/********************
 * VERTEX ACCESSORS *
 ********************/

///////////////////////////////////////
// QuadrilateralCartesian2D_Vertex_Accessor //
///////////////////////////////////////

QuadrilateralCartesian2D_Vertex_Accessor::QuadrilateralCartesian2D_Vertex_Accessor()
{
	accessor = new QuadrilateralCartesian2D_Vertex_Accessor_t(container);
}

QuadrilateralCartesian2D_Vertex_Accessor::~QuadrilateralCartesian2D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralCartesian2D_Vertex_Accessor::get_value(QuadrilateralCartesian2D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void QuadrilateralCartesian2D_Vertex_Accessor::set_value(QuadrilateralCartesian2D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

QuadrilateralCartesian2D_Vertex_Accessor_t QuadrilateralCartesian2D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

///////////////////////////////////////
// QuadrilateralCartesian3D_Vertex_Accessor //
///////////////////////////////////////

QuadrilateralCartesian3D_Vertex_Accessor::QuadrilateralCartesian3D_Vertex_Accessor()
{
	accessor = new QuadrilateralCartesian3D_Vertex_Accessor_t(container);
}

QuadrilateralCartesian3D_Vertex_Accessor::~QuadrilateralCartesian3D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralCartesian3D_Vertex_Accessor::get_value(QuadrilateralCartesian3D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void QuadrilateralCartesian3D_Vertex_Accessor::set_value(QuadrilateralCartesian3D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

QuadrilateralCartesian3D_Vertex_Accessor_t QuadrilateralCartesian3D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

/////////////////////////////////////////
// QuadrilateralCylindrical3D_Vertex_Accessor //
/////////////////////////////////////////

QuadrilateralCylindrical3D_Vertex_Accessor::QuadrilateralCylindrical3D_Vertex_Accessor()
{
	accessor = new QuadrilateralCylindrical3D_Vertex_Accessor_t(container);
}

QuadrilateralCylindrical3D_Vertex_Accessor::~QuadrilateralCylindrical3D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralCylindrical3D_Vertex_Accessor::get_value(QuadrilateralCylindrical3D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void QuadrilateralCylindrical3D_Vertex_Accessor::set_value(QuadrilateralCylindrical3D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

QuadrilateralCylindrical3D_Vertex_Accessor_t QuadrilateralCylindrical3D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

///////////////////////////////////
// QuadrilateralPolar2D_Vertex_Accessor //
///////////////////////////////////

QuadrilateralPolar2D_Vertex_Accessor::QuadrilateralPolar2D_Vertex_Accessor()
{
	accessor = new QuadrilateralPolar2D_Vertex_Accessor_t(container);
}

QuadrilateralPolar2D_Vertex_Accessor::~QuadrilateralPolar2D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralPolar2D_Vertex_Accessor::get_value(QuadrilateralPolar2D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void QuadrilateralPolar2D_Vertex_Accessor::set_value(QuadrilateralPolar2D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

QuadrilateralPolar2D_Vertex_Accessor_t QuadrilateralPolar2D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

///////////////////////////////////////
// QuadrilateralSpherical3D_Vertex_Accessor //
///////////////////////////////////////

QuadrilateralSpherical3D_Vertex_Accessor::QuadrilateralSpherical3D_Vertex_Accessor()
{
	accessor = new QuadrilateralSpherical3D_Vertex_Accessor_t(container);
}

QuadrilateralSpherical3D_Vertex_Accessor::~QuadrilateralSpherical3D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralSpherical3D_Vertex_Accessor::get_value(QuadrilateralSpherical3D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void QuadrilateralSpherical3D_Vertex_Accessor::set_value(QuadrilateralSpherical3D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

QuadrilateralSpherical3D_Vertex_Accessor_t QuadrilateralSpherical3D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

/******************
 * CELL ACCESSORS *
 ******************/

/////////////////////////////////////
// QuadrilateralCartesian2D_Cell_Accessor //
/////////////////////////////////////

QuadrilateralCartesian2D_Cell_Accessor::QuadrilateralCartesian2D_Cell_Accessor()
{
	accessor = new QuadrilateralCartesian2D_Cell_Accessor_t(container);
}

QuadrilateralCartesian2D_Cell_Accessor::~QuadrilateralCartesian2D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralCartesian2D_Cell_Accessor::get_value(QuadrilateralCartesian2D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void QuadrilateralCartesian2D_Cell_Accessor::set_value(QuadrilateralCartesian2D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

QuadrilateralCartesian2D_Cell_Accessor_t QuadrilateralCartesian2D_Cell_Accessor::get_accessor()
{
	return *accessor;
}

/////////////////////////////////////
// QuadrilateralCartesian3D_Cell_Accessor //
/////////////////////////////////////

QuadrilateralCartesian3D_Cell_Accessor::QuadrilateralCartesian3D_Cell_Accessor()
{
	accessor = new QuadrilateralCartesian3D_Cell_Accessor_t(container);
}

QuadrilateralCartesian3D_Cell_Accessor::~QuadrilateralCartesian3D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralCartesian3D_Cell_Accessor::get_value(QuadrilateralCartesian3D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void QuadrilateralCartesian3D_Cell_Accessor::set_value(QuadrilateralCartesian3D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

QuadrilateralCartesian3D_Cell_Accessor_t QuadrilateralCartesian3D_Cell_Accessor::get_accessor()
{
	return *accessor;
}

///////////////////////////////////////
// QuadrilateralCylindrical3D_Cell_Accessor //
///////////////////////////////////////

QuadrilateralCylindrical3D_Cell_Accessor::QuadrilateralCylindrical3D_Cell_Accessor()
{
	accessor = new QuadrilateralCylindrical3D_Cell_Accessor_t(container);
}

QuadrilateralCylindrical3D_Cell_Accessor::~QuadrilateralCylindrical3D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralCylindrical3D_Cell_Accessor::get_value(QuadrilateralCylindrical3D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void QuadrilateralCylindrical3D_Cell_Accessor::set_value(QuadrilateralCylindrical3D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

QuadrilateralCylindrical3D_Cell_Accessor_t QuadrilateralCylindrical3D_Cell_Accessor::get_accessor()
{
	return *accessor;
}

/////////////////////////////////
// QuadrilateralPolar2D_Cell_Accessor //
/////////////////////////////////

QuadrilateralPolar2D_Cell_Accessor::QuadrilateralPolar2D_Cell_Accessor()
{
	accessor = new QuadrilateralPolar2D_Cell_Accessor_t(container);
}

QuadrilateralPolar2D_Cell_Accessor::~QuadrilateralPolar2D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralPolar2D_Cell_Accessor::get_value(QuadrilateralPolar2D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void QuadrilateralPolar2D_Cell_Accessor::set_value(QuadrilateralPolar2D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

QuadrilateralPolar2D_Cell_Accessor_t QuadrilateralPolar2D_Cell_Accessor::get_accessor()
{
	return *accessor;
}

/////////////////////////////////////
// QuadrilateralSpherical3D_Cell_Accessor //
/////////////////////////////////////

QuadrilateralSpherical3D_Cell_Accessor::QuadrilateralSpherical3D_Cell_Accessor()
{
	accessor = new QuadrilateralSpherical3D_Cell_Accessor_t(container);
}

QuadrilateralSpherical3D_Cell_Accessor::~QuadrilateralSpherical3D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double QuadrilateralSpherical3D_Cell_Accessor::get_value(QuadrilateralSpherical3D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void QuadrilateralSpherical3D_Cell_Accessor::set_value(QuadrilateralSpherical3D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

QuadrilateralSpherical3D_Cell_Accessor_t QuadrilateralSpherical3D_Cell_Accessor::get_accessor()
{
	return *accessor;
}
