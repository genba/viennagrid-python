#ifndef EDGES_QUADRILATERAL_HPP
#define EDGES_QUADRILATERAL_HPP

#include "types.hpp"

///////////////////////////////////
// QuadrilateralCartesian2D_Edge //
///////////////////////////////////

class QuadrilateralCartesian2D_Edge
{
	QuadrilateralCartesian2D_Edge_t    *edge;
public:
	QuadrilateralCartesian2D_Edge(QuadrilateralCartesian2D_Edge_t &initial_edge);
	QuadrilateralCartesian2D_Edge_t & get_edge();
};

///////////////////////////////////
// QuadrilateralCartesian3D_Edge //
///////////////////////////////////

class QuadrilateralCartesian3D_Edge
{
	QuadrilateralCartesian3D_Edge_t    *edge;
public:
	QuadrilateralCartesian3D_Edge(QuadrilateralCartesian3D_Edge_t &initial_edge);
	QuadrilateralCartesian3D_Edge_t & get_edge();
};

/////////////////////////////////////
// QuadrilateralCylindrical3D_Edge //
/////////////////////////////////////

class QuadrilateralCylindrical3D_Edge
{
	QuadrilateralCylindrical3D_Edge_t    *edge;
public:
	QuadrilateralCylindrical3D_Edge(QuadrilateralCylindrical3D_Edge_t &initial_edge);
	QuadrilateralCylindrical3D_Edge_t & get_edge();
};

///////////////////////////////
// QuadrilateralPolar2D_Edge //
///////////////////////////////

class QuadrilateralPolar2D_Edge
{
	QuadrilateralPolar2D_Edge_t    *edge;
public:
	QuadrilateralPolar2D_Edge(QuadrilateralPolar2D_Edge_t &initial_edge);
	QuadrilateralPolar2D_Edge_t & get_edge();
};

///////////////////////////////////
// QuadrilateralSpherical3D_Edge //
///////////////////////////////////

class QuadrilateralSpherical3D_Edge
{
	QuadrilateralSpherical3D_Edge_t    *edge;
public:
	QuadrilateralSpherical3D_Edge(QuadrilateralSpherical3D_Edge_t &initial_edge);
	QuadrilateralSpherical3D_Edge_t & get_edge();
};

#endif /* end of include guard: EDGES_QUADRILATERAL_HPP */
