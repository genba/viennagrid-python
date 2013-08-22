#include "linear.hpp"

////////////////////////////
// LinearCartesian1D_Edge //
////////////////////////////

LinearCartesian1D_Edge::LinearCartesian1D_Edge(LinearCartesian1D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

LinearCartesian1D_Edge_t & LinearCartesian1D_Edge::get_edge()
{
	return *edge;
}

////////////////////////////
// LinearCartesian2D_Edge //
////////////////////////////

LinearCartesian2D_Edge::LinearCartesian2D_Edge(LinearCartesian2D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

LinearCartesian2D_Edge_t & LinearCartesian2D_Edge::get_edge()
{
	return *edge;
}

////////////////////////////
// LinearCartesian3D_Edge //
////////////////////////////

LinearCartesian3D_Edge::LinearCartesian3D_Edge(LinearCartesian3D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

LinearCartesian3D_Edge_t & LinearCartesian3D_Edge::get_edge()
{
	return *edge;
}

//////////////////////////////
// LinearCylindrical3D_Edge //
//////////////////////////////

LinearCylindrical3D_Edge::LinearCylindrical3D_Edge(LinearCylindrical3D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

LinearCylindrical3D_Edge_t & LinearCylindrical3D_Edge::get_edge()
{
	return *edge;
}

////////////////////////
// LinearPolar2D_Edge //
////////////////////////

LinearPolar2D_Edge::LinearPolar2D_Edge(LinearPolar2D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

LinearPolar2D_Edge_t & LinearPolar2D_Edge::get_edge()
{
	return *edge;
}

////////////////////////////
// LinearSpherical3D_Edge //
////////////////////////////

LinearSpherical3D_Edge::LinearSpherical3D_Edge(LinearSpherical3D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

LinearSpherical3D_Edge_t & LinearSpherical3D_Edge::get_edge()
{
	return *edge;
}
