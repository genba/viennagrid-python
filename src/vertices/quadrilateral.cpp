#include "quadrilateral.hpp"

//////////////////////////////////
// QuadrilateralCartesian2D_Vertex //
//////////////////////////////////

QuadrilateralCartesian2D_Vertex::QuadrilateralCartesian2D_Vertex(QuadrilateralCartesian2D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

QuadrilateralCartesian2D_Vertex_t & QuadrilateralCartesian2D_Vertex::get_vertex()
{
	return *vertex;
}

//////////////////////////////////
// QuadrilateralCartesian3D_Vertex //
//////////////////////////////////

QuadrilateralCartesian3D_Vertex::QuadrilateralCartesian3D_Vertex(QuadrilateralCartesian3D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

QuadrilateralCartesian3D_Vertex_t & QuadrilateralCartesian3D_Vertex::get_vertex()
{
	return *vertex;
}

////////////////////////////////////
// QuadrilateralCylindrical3D_Vertex //
////////////////////////////////////

QuadrilateralCylindrical3D_Vertex::QuadrilateralCylindrical3D_Vertex(QuadrilateralCylindrical3D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

QuadrilateralCylindrical3D_Vertex_t & QuadrilateralCylindrical3D_Vertex::get_vertex()
{
	return *vertex;
}

//////////////////////////////
// QuadrilateralPolar2D_Vertex //
//////////////////////////////

QuadrilateralPolar2D_Vertex::QuadrilateralPolar2D_Vertex(QuadrilateralPolar2D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

QuadrilateralPolar2D_Vertex_t & QuadrilateralPolar2D_Vertex::get_vertex()
{
	return *vertex;
}

//////////////////////////////////
// QuadrilateralSpherical3D_Vertex //
//////////////////////////////////

QuadrilateralSpherical3D_Vertex::QuadrilateralSpherical3D_Vertex(QuadrilateralSpherical3D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

QuadrilateralSpherical3D_Vertex_t & QuadrilateralSpherical3D_Vertex::get_vertex()
{
	return *vertex;
}
