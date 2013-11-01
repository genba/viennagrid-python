/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "tetrahedral.hpp"

///////////////////////////////////
// TetrahedralCartesian3D_Vertex //
///////////////////////////////////

TetrahedralCartesian3D_Vertex::TetrahedralCartesian3D_Vertex(TetrahedralCartesian3D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

PointCartesian3D TetrahedralCartesian3D_Vertex::to_point()
{
	return PointCartesian3D(viennagrid::point(*vertex));
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

PointCylindrical3D TetrahedralCylindrical3D_Vertex::to_point()
{
	return PointCylindrical3D(viennagrid::point(*vertex));
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

PointSpherical3D TetrahedralSpherical3D_Vertex::to_point()
{
	return PointSpherical3D(viennagrid::point(*vertex));
}

TetrahedralSpherical3D_Vertex_t & TetrahedralSpherical3D_Vertex::get_vertex()
{
	return *vertex;
}
