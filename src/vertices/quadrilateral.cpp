#include "quadrilateral.hpp"

/////////////////////////////////////
// QuadrilateralCartesian2D_Vertex //
/////////////////////////////////////

QuadrilateralCartesian2D_Vertex::QuadrilateralCartesian2D_Vertex(QuadrilateralCartesian2D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

PointCartesian2D QuadrilateralCartesian2D_Vertex::to_point()
{
	return PointCartesian2D(viennagrid::point(*vertex));
}

QuadrilateralCartesian2D_Vertex_t & QuadrilateralCartesian2D_Vertex::get_vertex()
{
	return *vertex;
}

/////////////////////////////////////
// QuadrilateralCartesian3D_Vertex //
/////////////////////////////////////

QuadrilateralCartesian3D_Vertex::QuadrilateralCartesian3D_Vertex(QuadrilateralCartesian3D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

PointCartesian3D QuadrilateralCartesian3D_Vertex::to_point()
{
	return PointCartesian3D(viennagrid::point(*vertex));
}

QuadrilateralCartesian3D_Vertex_t & QuadrilateralCartesian3D_Vertex::get_vertex()
{
	return *vertex;
}

///////////////////////////////////////
// QuadrilateralCylindrical3D_Vertex //
///////////////////////////////////////

QuadrilateralCylindrical3D_Vertex::QuadrilateralCylindrical3D_Vertex(QuadrilateralCylindrical3D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

PointCylindrical3D QuadrilateralCylindrical3D_Vertex::to_point()
{
	return PointCylindrical3D(viennagrid::point(*vertex));
}

QuadrilateralCylindrical3D_Vertex_t & QuadrilateralCylindrical3D_Vertex::get_vertex()
{
	return *vertex;
}

/////////////////////////////////
// QuadrilateralPolar2D_Vertex //
/////////////////////////////////

QuadrilateralPolar2D_Vertex::QuadrilateralPolar2D_Vertex(QuadrilateralPolar2D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

PointPolar2D QuadrilateralPolar2D_Vertex::to_point()
{
	return PointPolar2D(viennagrid::point(*vertex));
}

QuadrilateralPolar2D_Vertex_t & QuadrilateralPolar2D_Vertex::get_vertex()
{
	return *vertex;
}

/////////////////////////////////////
// QuadrilateralSpherical3D_Vertex //
/////////////////////////////////////

QuadrilateralSpherical3D_Vertex::QuadrilateralSpherical3D_Vertex(QuadrilateralSpherical3D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

PointSpherical3D QuadrilateralSpherical3D_Vertex::to_point()
{
	return PointSpherical3D(viennagrid::point(*vertex));
}

QuadrilateralSpherical3D_Vertex_t & QuadrilateralSpherical3D_Vertex::get_vertex()
{
	return *vertex;
}
