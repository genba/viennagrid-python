#include "quadrilateral.hpp"

///////////////////////////////////
// QuadrilateralCartesian2D_Edge //
///////////////////////////////////

QuadrilateralCartesian2D_Edge::QuadrilateralCartesian2D_Edge(QuadrilateralCartesian2D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

QuadrilateralCartesian2D_Edge_t & QuadrilateralCartesian2D_Edge::get_edge()
{
	return *edge;
}

///////////////////////////////////
// QuadrilateralCartesian3D_Edge //
///////////////////////////////////

QuadrilateralCartesian3D_Edge::QuadrilateralCartesian3D_Edge(QuadrilateralCartesian3D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

QuadrilateralCartesian3D_Edge_t & QuadrilateralCartesian3D_Edge::get_edge()
{
	return *edge;
}

/////////////////////////////////////
// QuadrilateralCylindrical3D_Edge //
/////////////////////////////////////

QuadrilateralCylindrical3D_Edge::QuadrilateralCylindrical3D_Edge(QuadrilateralCylindrical3D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

QuadrilateralCylindrical3D_Edge_t & QuadrilateralCylindrical3D_Edge::get_edge()
{
	return *edge;
}

///////////////////////////////
// QuadrilateralPolar2D_Edge //
///////////////////////////////

QuadrilateralPolar2D_Edge::QuadrilateralPolar2D_Edge(QuadrilateralPolar2D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

QuadrilateralPolar2D_Edge_t & QuadrilateralPolar2D_Edge::get_edge()
{
	return *edge;
}

///////////////////////////////////
// QuadrilateralSpherical3D_Edge //
///////////////////////////////////

QuadrilateralSpherical3D_Edge::QuadrilateralSpherical3D_Edge(QuadrilateralSpherical3D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

QuadrilateralSpherical3D_Edge_t & QuadrilateralSpherical3D_Edge::get_edge()
{
	return *edge;
}
