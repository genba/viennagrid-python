#include "triangular.hpp"

//////////////////////////////////
// TriangularCartesian2D_Vertex //
//////////////////////////////////

TriangularCartesian2D_Vertex::TriangularCartesian2D_Vertex(TriangularCartesian2D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

TriangularCartesian2D_Vertex_t & TriangularCartesian2D_Vertex::get_vertex()
{
	return *vertex;
}

//////////////////////////////////
// TriangularCartesian3D_Vertex //
//////////////////////////////////

TriangularCartesian3D_Vertex::TriangularCartesian3D_Vertex(TriangularCartesian3D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

TriangularCartesian3D_Vertex_t & TriangularCartesian3D_Vertex::get_vertex()
{
	return *vertex;
}

////////////////////////////////////
// TriangularCylindrical3D_Vertex //
////////////////////////////////////

TriangularCylindrical3D_Vertex::TriangularCylindrical3D_Vertex(TriangularCylindrical3D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

TriangularCylindrical3D_Vertex_t & TriangularCylindrical3D_Vertex::get_vertex()
{
	return *vertex;
}

//////////////////////////////
// TriangularPolar2D_Vertex //
//////////////////////////////

TriangularPolar2D_Vertex::TriangularPolar2D_Vertex(TriangularPolar2D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

TriangularPolar2D_Vertex_t & TriangularPolar2D_Vertex::get_vertex()
{
	return *vertex;
}

//////////////////////////////////
// TriangularSpherical3D_Vertex //
//////////////////////////////////

TriangularSpherical3D_Vertex::TriangularSpherical3D_Vertex(TriangularSpherical3D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

TriangularSpherical3D_Vertex_t & TriangularSpherical3D_Vertex::get_vertex()
{
	return *vertex;
}
