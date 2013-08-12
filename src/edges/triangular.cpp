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
