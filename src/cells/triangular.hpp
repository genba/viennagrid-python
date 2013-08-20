/**
 * @file
 * @brief Class definitions of wrapped cells from triangular domains.
 */

#ifndef CELLS_TRIANGULAR_HPP
#define CELLS_TRIANGULAR_HPP

#include "types.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include <boost/python.hpp>
using namespace boost::python;

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

class TriangularCartesian2D_Cell {
	TriangularCartesian2D_Cell_t    *cell;
public:
	TriangularCartesian2D_Cell(TriangularCartesian2D_Cell_t &initial_cell);
	unsigned int num_vertices();
	list get_vertices();
};

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

class TriangularCartesian3D_Cell {
	TriangularCartesian3D_Cell_t    *cell;
public:
	TriangularCartesian3D_Cell(TriangularCartesian3D_Cell_t &initial_cell);
	unsigned int num_vertices();
	list get_vertices();
};

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

class TriangularCylindrical3D_Cell {
	TriangularCylindrical3D_Cell_t    *cell;
public:
	TriangularCylindrical3D_Cell(TriangularCylindrical3D_Cell_t &initial_cell);
	unsigned int num_vertices();
	list get_vertices();
};

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

class TriangularPolar2D_Cell {
	TriangularPolar2D_Cell_t    *cell;
public:
	TriangularPolar2D_Cell(TriangularPolar2D_Cell_t &initial_cell);
	unsigned int num_vertices();
	list get_vertices();
};

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

class TriangularSpherical3D_Cell {
	TriangularSpherical3D_Cell_t    *cell;
public:
	TriangularSpherical3D_Cell(TriangularSpherical3D_Cell_t &initial_cell);
	unsigned int num_vertices();
	list get_vertices();
};

#endif
