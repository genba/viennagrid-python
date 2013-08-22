#ifndef EDGES_TRIANGULAR_HPP
#define EDGES_TRIANGULAR_HPP

#include "types.hpp"

////////////////////////////////
// TriangularCartesian2D_Edge //
////////////////////////////////

class TriangularCartesian2D_Edge
{
	TriangularCartesian2D_Edge_t    *edge;
public:
	TriangularCartesian2D_Edge(TriangularCartesian2D_Edge_t &initial_edge);
	TriangularCartesian2D_Edge_t & get_edge();
};

////////////////////////////////
// TriangularCartesian3D_Edge //
////////////////////////////////

class TriangularCartesian3D_Edge
{
	TriangularCartesian3D_Edge_t    *edge;
public:
	TriangularCartesian3D_Edge(TriangularCartesian3D_Edge_t &initial_edge);
	TriangularCartesian3D_Edge_t & get_edge();
};

//////////////////////////////////
// TriangularCylindrical3D_Edge //
//////////////////////////////////

class TriangularCylindrical3D_Edge
{
	TriangularCylindrical3D_Edge_t    *edge;
public:
	TriangularCylindrical3D_Edge(TriangularCylindrical3D_Edge_t &initial_edge);
	TriangularCylindrical3D_Edge_t & get_edge();
};

////////////////////////////
// TriangularPolar2D_Edge //
////////////////////////////

class TriangularPolar2D_Edge
{
	TriangularPolar2D_Edge_t    *edge;
public:
	TriangularPolar2D_Edge(TriangularPolar2D_Edge_t &initial_edge);
	TriangularPolar2D_Edge_t & get_edge();
};

////////////////////////////////
// TriangularSpherical3D_Edge //
////////////////////////////////

class TriangularSpherical3D_Edge
{
	TriangularSpherical3D_Edge_t    *edge;
public:
	TriangularSpherical3D_Edge(TriangularSpherical3D_Edge_t &initial_edge);
	TriangularSpherical3D_Edge_t & get_edge();
};

#endif /* end of include guard: EDGES_TRIANGULAR_HPP */
