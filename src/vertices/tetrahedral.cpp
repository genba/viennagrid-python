#include "tetrahedral.hpp"

///////////////////////////////////
// TetrahedralCartesian3D_Vertex //
///////////////////////////////////

TetrahedralCartesian3D_Vertex::TetrahedralCartesian3D_Vertex(TetrahedralCartesian3D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

TetrahedralCartesian3D_Vertex_t & TetrahedralCartesian3D_Vertex::get_vertex()
{
	return *vertex;
}

/////////////////////////////////////
// TetrahedralCylindrical3D_Vertex //
/////////////////////////////////////

TetrahedralCylindrical3D_Vertex::TetrahedralCylindrical3D_Vertex(TetrahedralCylindrical3D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

TetrahedralCylindrical3D_Vertex_t & TetrahedralCylindrical3D_Vertex::get_vertex()
{
	return *vertex;
}

///////////////////////////////////
// TetrahedralSpherical3D_Vertex //
///////////////////////////////////

TetrahedralSpherical3D_Vertex::TetrahedralSpherical3D_Vertex(TetrahedralSpherical3D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

TetrahedralSpherical3D_Vertex_t & TetrahedralSpherical3D_Vertex::get_vertex()
{
	return *vertex;
}
