#include "linear.hpp"

////////////////////////
// Line, cartesian 1D //
////////////////////////

LinearCartesian1D_Cell::LinearCartesian1D_Cell(LinearCartesian1D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list LinearCartesian1D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}

////////////////////////
// Line, cartesian 2D //
////////////////////////

LinearCartesian2D_Cell::LinearCartesian2D_Cell(LinearCartesian2D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list LinearCartesian2D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}

////////////////////////
// Line, cartesian 3D //
////////////////////////

LinearCartesian3D_Cell::LinearCartesian3D_Cell(LinearCartesian3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list LinearCartesian3D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}

////////////////////////////
// Line, cylindrical (3D) //
////////////////////////////

LinearCylindrical3D_Cell::LinearCylindrical3D_Cell(LinearCylindrical3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list LinearCylindrical3D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}

//////////////////////
// Line, polar (2D) //
//////////////////////

LinearPolar2D_Cell::LinearPolar2D_Cell(LinearPolar2D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list LinearPolar2D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}

//////////////////////////
// Line, spherical (3D) //
//////////////////////////

LinearSpherical3D_Cell::LinearSpherical3D_Cell(LinearSpherical3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list LinearSpherical3D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}
