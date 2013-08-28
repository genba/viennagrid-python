#ifndef VERTICES_QUADRILATERAL_HPP
#define VERTICES_QUADRILATERAL_HPP

#include "types.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

//////////////////////////////////
// QuadrilateralCartesian2D_Vertex //
//////////////////////////////////

class QuadrilateralCartesian2D_Vertex
{
	QuadrilateralCartesian2D_Vertex_t    *vertex;
public:
	QuadrilateralCartesian2D_Vertex(QuadrilateralCartesian2D_Vertex_t &initial_vertex);
	PointCartesian2D to_point();
	QuadrilateralCartesian2D_Vertex_t & get_vertex();
};

//////////////////////////////////
// QuadrilateralCartesian3D_Vertex //
//////////////////////////////////

class QuadrilateralCartesian3D_Vertex
{
	QuadrilateralCartesian3D_Vertex_t    *vertex;
public:
	QuadrilateralCartesian3D_Vertex(QuadrilateralCartesian3D_Vertex_t &initial_vertex);
	PointCartesian3D to_point();
	QuadrilateralCartesian3D_Vertex_t & get_vertex();
};

////////////////////////////////////
// QuadrilateralCylindrical3D_Vertex //
////////////////////////////////////

class QuadrilateralCylindrical3D_Vertex
{
	QuadrilateralCylindrical3D_Vertex_t    *vertex;
public:
	QuadrilateralCylindrical3D_Vertex(QuadrilateralCylindrical3D_Vertex_t &initial_vertex);
	PointCylindrical3D to_point();
	QuadrilateralCylindrical3D_Vertex_t & get_vertex();
};

//////////////////////////////
// QuadrilateralPolar2D_Vertex //
//////////////////////////////

class QuadrilateralPolar2D_Vertex
{
	QuadrilateralPolar2D_Vertex_t    *vertex;
public:
	QuadrilateralPolar2D_Vertex(QuadrilateralPolar2D_Vertex_t &initial_vertex);
	PointPolar2D to_point();
	QuadrilateralPolar2D_Vertex_t & get_vertex();
};

//////////////////////////////////
// QuadrilateralSpherical3D_Vertex //
//////////////////////////////////

class QuadrilateralSpherical3D_Vertex
{
	QuadrilateralSpherical3D_Vertex_t    *vertex;
public:
	QuadrilateralSpherical3D_Vertex(QuadrilateralSpherical3D_Vertex_t &initial_vertex);
	PointSpherical3D to_point();
	QuadrilateralSpherical3D_Vertex_t & get_vertex();
};

#endif /* end of include guard: VERTICES_QUADRILATERAL_HPP */
