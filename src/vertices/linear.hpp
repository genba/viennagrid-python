#ifndef VERTICES_LINEAR_HPP
#define VERTICES_LINEAR_HPP

#include "types.hpp"

//////////////////////////////
// LinearCartesian1D_Vertex //
//////////////////////////////

class LinearCartesian1D_Vertex
{
	LinearCartesian1D_Vertex_t    *vertex;
public:
	LinearCartesian1D_Vertex(LinearCartesian1D_Vertex_t &initial_vertex);
	LinearCartesian1D_Vertex_t & get_vertex();
};

//////////////////////////////
// LinearCartesian2D_Vertex //
//////////////////////////////

class LinearCartesian2D_Vertex
{
	LinearCartesian2D_Vertex_t    *vertex;
public:
	LinearCartesian2D_Vertex(LinearCartesian2D_Vertex_t &initial_vertex);
	LinearCartesian2D_Vertex_t & get_vertex();
};

#endif
