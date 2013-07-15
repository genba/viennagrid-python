#include "triangular.hpp"

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

TriangularCartesian2D_Cell::TriangularCartesian2D_Cell(TriangularCartesian2D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list TriangularCartesian2D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

TriangularCartesian3D_Cell::TriangularCartesian3D_Cell(TriangularCartesian3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list TriangularCartesian3D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

TriangularCylindrical3D_Cell::TriangularCylindrical3D_Cell(TriangularCylindrical3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list TriangularCylindrical3D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

TriangularPolar2D_Cell::TriangularPolar2D_Cell(TriangularPolar2D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list TriangularPolar2D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

TriangularSpherical3D_Cell::TriangularSpherical3D_Cell(TriangularSpherical3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list TriangularSpherical3D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}
