#ifndef CELLS_QUADRILATERAL_HPP
#define CELLS_QUADRILATERAL_HPP

#include "types.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/////////////////////////////////
// Quadrilateral, cartesian 2D //
/////////////////////////////////

class QuadrilateralCartesian2D_Cell {
	QuadrilateralCartesian2D_Cell_t    *cell;
public:
	QuadrilateralCartesian2D_Cell(QuadrilateralCartesian2D_Cell_t &initial_cell);
	unsigned int num_vertices();
	list get_vertices();
	QuadrilateralCartesian2D_Cell_t & get_cell();
};

/////////////////////////////////
// Quadrilateral, cartesian 3D //
/////////////////////////////////

class QuadrilateralCartesian3D_Cell {
	QuadrilateralCartesian3D_Cell_t    *cell;
public:
	QuadrilateralCartesian3D_Cell(QuadrilateralCartesian3D_Cell_t &initial_cell);
	unsigned int num_vertices();
	list get_vertices();
	QuadrilateralCartesian3D_Cell_t & get_cell();
};

/////////////////////////////////////
// Quadrilateral, cylindrical (3D) //
/////////////////////////////////////

class QuadrilateralCylindrical3D_Cell {
	QuadrilateralCylindrical3D_Cell_t    *cell;
public:
	QuadrilateralCylindrical3D_Cell(QuadrilateralCylindrical3D_Cell_t &initial_cell);
	unsigned int num_vertices();
	list get_vertices();
	QuadrilateralCylindrical3D_Cell_t & get_cell();
};

///////////////////////////////
// Quadrilateral, polar (2D) //
///////////////////////////////

class QuadrilateralPolar2D_Cell {
	QuadrilateralPolar2D_Cell_t    *cell;
public:
	QuadrilateralPolar2D_Cell(QuadrilateralPolar2D_Cell_t &initial_cell);
	unsigned int num_vertices();
	list get_vertices();
	QuadrilateralPolar2D_Cell_t & get_cell();
};

///////////////////////////////////
// Quadrilateral, spherical (3D) //
///////////////////////////////////

class QuadrilateralSpherical3D_Cell {
	QuadrilateralSpherical3D_Cell_t    *cell;
public:
	QuadrilateralSpherical3D_Cell(QuadrilateralSpherical3D_Cell_t &initial_cell);
	unsigned int num_vertices();
	list get_vertices();
	QuadrilateralSpherical3D_Cell_t & get_cell();
};

#endif
