#include "linear.hpp"

//////////////////////////////
// LinearCartesian1D_Vertex //
//////////////////////////////

LinearCartesian1D_Vertex::LinearCartesian1D_Vertex(LinearCartesian1D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

LinearCartesian1D_Vertex_t & LinearCartesian1D_Vertex::get_vertex()
{
	return *vertex;
}

