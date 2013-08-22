#include "triangular.hpp"

////////////////////////////////
// TriangularCartesian2D_Edge //
////////////////////////////////

TriangularCartesian2D_Edge::TriangularCartesian2D_Edge(TriangularCartesian2D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

TriangularCartesian2D_Edge_t & TriangularCartesian2D_Edge::get_edge()
{
	return *edge;
}

////////////////////////////////
// TriangularCartesian3D_Edge //
////////////////////////////////

TriangularCartesian3D_Edge::TriangularCartesian3D_Edge(TriangularCartesian3D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

TriangularCartesian3D_Edge_t & TriangularCartesian3D_Edge::get_edge()
{
	return *edge;
}

//////////////////////////////////
// TriangularCylindrical3D_Edge //
//////////////////////////////////

TriangularCylindrical3D_Edge::TriangularCylindrical3D_Edge(TriangularCylindrical3D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

TriangularCylindrical3D_Edge_t & TriangularCylindrical3D_Edge::get_edge()
{
	return *edge;
}

////////////////////////////
// TriangularPolar2D_Edge //
////////////////////////////

TriangularPolar2D_Edge::TriangularPolar2D_Edge(TriangularPolar2D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

TriangularPolar2D_Edge_t & TriangularPolar2D_Edge::get_edge()
{
	return *edge;
}

////////////////////////////////
// TriangularSpherical3D_Edge //
////////////////////////////////

TriangularSpherical3D_Edge::TriangularSpherical3D_Edge(TriangularSpherical3D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

TriangularSpherical3D_Edge_t & TriangularSpherical3D_Edge::get_edge()
{
	return *edge;
}
