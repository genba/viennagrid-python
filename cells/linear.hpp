#ifndef CELLS_LINEAR_HPP
#define CELLS_LINEAR_HPP

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include <boost/python.hpp>
using namespace boost::python;

////////////////////////
// Line, cartesian 1D //
////////////////////////

class LinearCartesian1D_Cell {
	list    vertices;
public:
	LinearCartesian1D_Cell(PointCartesian1D vertex1, PointCartesian1D vertex2);
	list get_vertices();
};

////////////////////////
// Line, cartesian 2D //
////////////////////////

class LinearCartesian2D_Cell {
	list    vertices;
public:
	LinearCartesian2D_Cell(PointCartesian2D vertex1, PointCartesian2D vertex2);
	list get_vertices();
};

////////////////////////
// Line, cartesian 3D //
////////////////////////

class LinearCartesian3D_Cell {
	list    vertices;
public:
	LinearCartesian3D_Cell(PointCartesian3D vertex1, PointCartesian3D vertex2);
	list get_vertices();
};

////////////////////////////
// Line, cylindrical (3D) //
////////////////////////////

class LinearCylindrical3D_Cell {
	list    vertices;
public:
	LinearCylindrical3D_Cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2);
	list get_vertices();
};

//////////////////////
// Line, polar (2D) //
//////////////////////

class LinearPolar2D_Cell {
	list    vertices;
public:
	LinearPolar2D_Cell(PointPolar2D vertex1, PointPolar2D vertex2);
	list get_vertices();
};

//////////////////////////
// Line, spherical (3D) //
//////////////////////////

class LinearSpherical3D_Cell {
	list    vertices;
public:
	LinearSpherical3D_Cell(PointSpherical3D vertex1, PointSpherical3D vertex2);
	list get_vertices();
};

#endif
