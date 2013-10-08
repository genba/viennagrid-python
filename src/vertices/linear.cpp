/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "linear.hpp"

//////////////////////////////
// LinearCartesian1D_Vertex //
//////////////////////////////

LinearCartesian1D_Vertex::LinearCartesian1D_Vertex(LinearCartesian1D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

PointCartesian1D LinearCartesian1D_Vertex::to_point()
{
	return PointCartesian1D(viennagrid::point(*vertex));
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

PointCartesian2D LinearCartesian2D_Vertex::to_point()
{
	return PointCartesian2D(viennagrid::point(*vertex));
}

LinearCartesian2D_Vertex_t & LinearCartesian2D_Vertex::get_vertex()
{
	return *vertex;
}

//////////////////////////////
// LinearCartesian3D_Vertex //
//////////////////////////////

LinearCartesian3D_Vertex::LinearCartesian3D_Vertex(LinearCartesian3D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

PointCartesian3D LinearCartesian3D_Vertex::to_point()
{
	return PointCartesian3D(viennagrid::point(*vertex));
}

LinearCartesian3D_Vertex_t & LinearCartesian3D_Vertex::get_vertex()
{
	return *vertex;
}

////////////////////////////////
// LinearCylindrical3D_Vertex //
////////////////////////////////

LinearCylindrical3D_Vertex::LinearCylindrical3D_Vertex(LinearCylindrical3D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

PointCylindrical3D LinearCylindrical3D_Vertex::to_point()
{
	return PointCylindrical3D(viennagrid::point(*vertex));
}

LinearCylindrical3D_Vertex_t & LinearCylindrical3D_Vertex::get_vertex()
{
	return *vertex;
}

//////////////////////////
// LinearPolar2D_Vertex //
//////////////////////////

LinearPolar2D_Vertex::LinearPolar2D_Vertex(LinearPolar2D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

PointPolar2D LinearPolar2D_Vertex::to_point()
{
	return PointPolar2D(viennagrid::point(*vertex));
}

LinearPolar2D_Vertex_t & LinearPolar2D_Vertex::get_vertex()
{
	return *vertex;
}

//////////////////////////////
// LinearSpherical3D_Vertex //
//////////////////////////////

LinearSpherical3D_Vertex::LinearSpherical3D_Vertex(LinearSpherical3D_Vertex_t &initial_vertex)
{
	vertex = &initial_vertex;
}

PointSpherical3D LinearSpherical3D_Vertex::to_point()
{
	return PointSpherical3D(viennagrid::point(*vertex));
}

LinearSpherical3D_Vertex_t & LinearSpherical3D_Vertex::get_vertex()
{
	return *vertex;
}
