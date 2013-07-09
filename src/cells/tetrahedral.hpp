#ifndef CELLS_TETRAHEDRAL_HPP
#define CELLS_TETRAHEDRAL_HPP

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include <boost/python.hpp>
using namespace boost::python;

///////////////////////////////
// Tetrahedral, cartesian 3D //
///////////////////////////////

class TetrahedralCartesian3D_Cell {
	list    vertices;
public:
	TetrahedralCartesian3D_Cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3, PointCartesian3D vertex4);
	list get_vertices();
};

///////////////////////////////////
// Tetrahedral, cylindrical (3D) //
///////////////////////////////////

class TetrahedralCylindrical3D_Cell {
	list    vertices;
public:
	TetrahedralCylindrical3D_Cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3, PointCylindrical3D vertex4);
	list get_vertices();
};

/////////////////////////////////
// Tetrahedral, spherical (3D) //
/////////////////////////////////

class TetrahedralSpherical3D_Cell {
	list    vertices;
public:
	TetrahedralSpherical3D_Cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3, PointSpherical3D vertex4);
	list get_vertices();
};

#endif
