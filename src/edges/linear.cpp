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
