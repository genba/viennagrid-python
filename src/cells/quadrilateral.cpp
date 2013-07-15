#include "quadrilateral.hpp"

/////////////////////////////////
// Quadrilateral, cartesian 2D //
/////////////////////////////////

QuadrilateralCartesian2D_Cell::QuadrilateralCartesian2D_Cell(QuadrilateralCartesian2D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list QuadrilateralCartesian2D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}

/////////////////////////////////
// Quadrilateral, cartesian 3D //
/////////////////////////////////

QuadrilateralCartesian3D_Cell::QuadrilateralCartesian3D_Cell(QuadrilateralCartesian3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list QuadrilateralCartesian3D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}

/////////////////////////////////////
// Quadrilateral, cylindrical (3D) //
/////////////////////////////////////

QuadrilateralCylindrical3D_Cell::QuadrilateralCylindrical3D_Cell(QuadrilateralCylindrical3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list QuadrilateralCylindrical3D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}

///////////////////////////////
// Quadrilateral, polar (2D) //
///////////////////////////////

QuadrilateralPolar2D_Cell::QuadrilateralPolar2D_Cell(QuadrilateralPolar2D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list QuadrilateralPolar2D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}

///////////////////////////////////
// Quadrilateral, spherical (3D) //
///////////////////////////////////

QuadrilateralSpherical3D_Cell::QuadrilateralSpherical3D_Cell(QuadrilateralSpherical3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list QuadrilateralSpherical3D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}
