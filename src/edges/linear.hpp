#ifndef EDGES_LINEAR_HPP
#define EDGES_LINEAR_HPP

#include "types.hpp"

////////////////////////////
// LinearCartesian1D_Edge //
////////////////////////////

class LinearCartesian1D_Edge
{
	LinearCartesian1D_Edge_t    *edge;
public:
	LinearCartesian1D_Edge(LinearCartesian1D_Edge_t &initial_edge);
	LinearCartesian1D_Edge_t & get_edge();
};

#endif
