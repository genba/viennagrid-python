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

#endif /* end of include guard: EDGES_TRIANGULAR_HPP */
