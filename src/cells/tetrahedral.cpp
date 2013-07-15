#include "tetrahedral.hpp"

///////////////////////////////
// Tetrahedral, cartesian 3D //
///////////////////////////////

TetrahedralCartesian3D_Cell::TetrahedralCartesian3D_Cell(TetrahedralCartesian3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list TetrahedralCartesian3D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}

///////////////////////////////////
// Tetrahedral, cylindrical (3D) //
///////////////////////////////////

TetrahedralCylindrical3D_Cell::TetrahedralCylindrical3D_Cell(TetrahedralCylindrical3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list TetrahedralCylindrical3D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}

/////////////////////////////////
// Tetrahedral, spherical (3D) //
/////////////////////////////////

TetrahedralSpherical3D_Cell::TetrahedralSpherical3D_Cell(TetrahedralSpherical3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list TetrahedralSpherical3D_Cell::get_vertices()
{
	list vertices;
	return vertices;
}
