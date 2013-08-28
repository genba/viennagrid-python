#include "triangular.hpp"

//////////////////////////////////
// TriangularCartesian2D_Vertex //
//////////////////////////////////

TriangularCartesian2D_Vertex::TriangularCartesian2D_Vertex(TriangularCartesian2D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

PointCartesian2D TriangularCartesian2D_Vertex::to_point()
{
	return PointCartesian2D(viennagrid::point(*vertex));
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

PointCartesian3D TriangularCartesian3D_Vertex::to_point()
{
	return PointCartesian3D(viennagrid::point(*vertex));
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

PointCylindrical3D TriangularCylindrical3D_Vertex::to_point()
{
	return PointCylindrical3D(viennagrid::point(*vertex));
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

PointPolar2D TriangularPolar2D_Vertex::to_point()
{
	return PointPolar2D(viennagrid::point(*vertex));
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

PointSpherical3D TriangularSpherical3D_Vertex::to_point()
{
	return PointSpherical3D(viennagrid::point(*vertex));
}

TriangularSpherical3D_Vertex_t & TriangularSpherical3D_Vertex::get_vertex()
{
	return *vertex;
}
