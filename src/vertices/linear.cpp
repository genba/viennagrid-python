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

//////////////////////////////
// LinearCartesian2D_Vertex //
//////////////////////////////

LinearCartesian2D_Vertex::LinearCartesian2D_Vertex(LinearCartesian2D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

LinearCartesian2D_Vertex_t & LinearCartesian2D_Vertex::get_vertex()
{
	return *vertex;
}
