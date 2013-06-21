#ifndef CELLS_TRIANGULAR_HPP
#define CELLS_TRIANGULAR_HPP

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
	list    vertices;
public:
	TriangularCartesian2D_Cell(PointCartesian2D vertex1, PointCartesian2D vertex2, PointCartesian2D vertex3);
	list get_vertices();
};

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

class TriangularCartesian3D_Cell {
	list    vertices;
public:
	TriangularCartesian3D_Cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3);
	list get_vertices();
};

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

class TriangularCylindrical3D_Cell {
	list    vertices;
public:
	TriangularCylindrical3D_Cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3);
	list get_vertices();
};

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

class TriangularPolar2D_Cell {
	list    vertices;
public:
	TriangularPolar2D_Cell(PointPolar2D vertex1, PointPolar2D vertex2, PointPolar2D vertex3);
	list get_vertices();
};

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

class TriangularSpherical3D_Cell {
	list    vertices;
public:
	TriangularSpherical3D_Cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3);
	list get_vertices();
};

#endif
