#ifndef CELLS_QUADRILATERAL_HPP
#define CELLS_QUADRILATERAL_HPP

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
	list    vertices;
public:
	QuadrilateralCartesian2D_Cell(PointCartesian2D vertex1, PointCartesian2D vertex2, PointCartesian2D vertex3, PointCartesian2D vertex4);
	list get_vertices();
};

/////////////////////////////////
// Quadrilateral, cartesian 3D //
/////////////////////////////////

class QuadrilateralCartesian3D_Cell {
	list    vertices;
public:
	QuadrilateralCartesian3D_Cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3, PointCartesian3D vertex4);
	list get_vertices();
};

/////////////////////////////////////
// Quadrilateral, cylindrical (3D) //
/////////////////////////////////////

class QuadrilateralCylindrical3D_Cell {
	list    vertices;
public:
	QuadrilateralCylindrical3D_Cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3, PointCylindrical3D vertex4);
	list get_vertices();
};

///////////////////////////////
// Quadrilateral, polar (2D) //
///////////////////////////////

class QuadrilateralPolar2D_Cell {
	list    vertices;
public:
	QuadrilateralPolar2D_Cell(PointPolar2D vertex1, PointPolar2D vertex2, PointPolar2D vertex3, PointPolar2D vertex4);
	list get_vertices();
};

///////////////////////////////////
// Quadrilateral, spherical (3D) //
///////////////////////////////////

class QuadrilateralSpherical3D_Cell {
	list    vertices;
public:
	QuadrilateralSpherical3D_Cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3, PointSpherical3D vertex4);
	list get_vertices();
};

#endif
