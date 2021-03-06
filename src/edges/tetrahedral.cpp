/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "tetrahedral.hpp"

/////////////////////////////////
// TetrahedralCartesian3D_Edge //
/////////////////////////////////

TetrahedralCartesian3D_Edge::TetrahedralCartesian3D_Edge(TetrahedralCartesian3D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

TetrahedralCartesian3D_Edge_t & TetrahedralCartesian3D_Edge::get_edge()
{
	return *edge;
}

///////////////////////////////////
// TetrahedralCylindrical3D_Edge //
///////////////////////////////////

TetrahedralCylindrical3D_Edge::TetrahedralCylindrical3D_Edge(TetrahedralCylindrical3D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

TetrahedralCylindrical3D_Edge_t & TetrahedralCylindrical3D_Edge::get_edge()
{
	return *edge;
}

/////////////////////////////////
// TetrahedralSpherical3D_Edge //
/////////////////////////////////

TetrahedralSpherical3D_Edge::TetrahedralSpherical3D_Edge(TetrahedralSpherical3D_Edge_t &initial_edge)
{
	edge = &initial_edge;
}

TetrahedralSpherical3D_Edge_t & TetrahedralSpherical3D_Edge::get_edge()
{
	return *edge;
}
