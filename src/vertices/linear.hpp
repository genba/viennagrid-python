#ifndef VERTICES_LINEAR_HPP
#define VERTICES_LINEAR_HPP

#include "types.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

//////////////////////////////
// LinearCartesian1D_Vertex //
//////////////////////////////

class LinearCartesian1D_Vertex
{
	LinearCartesian1D_Vertex_t    *vertex;
public:
	LinearCartesian1D_Vertex(LinearCartesian1D_Vertex_t &initial_vertex);
	PointCartesian1D to_point();
	LinearCartesian1D_Vertex_t & get_vertex();
};

//////////////////////////////
// LinearCartesian2D_Vertex //
//////////////////////////////

class LinearCartesian2D_Vertex
{
	LinearCartesian2D_Vertex_t    *vertex;
public:
	LinearCartesian2D_Vertex(LinearCartesian2D_Vertex_t &initial_vertex);
	PointCartesian2D to_point();
	LinearCartesian2D_Vertex_t & get_vertex();
};

//////////////////////////////
// LinearCartesian3D_Vertex //
//////////////////////////////

class LinearCartesian3D_Vertex
{
	LinearCartesian3D_Vertex_t    *vertex;
public:
	LinearCartesian3D_Vertex(LinearCartesian3D_Vertex_t &initial_vertex);
	PointCartesian3D to_point();
	LinearCartesian3D_Vertex_t & get_vertex();
};

////////////////////////////////
// LinearCylindrical3D_Vertex //
////////////////////////////////

class LinearCylindrical3D_Vertex
{
	LinearCylindrical3D_Vertex_t    *vertex;
public:
	LinearCylindrical3D_Vertex(LinearCylindrical3D_Vertex_t &initial_vertex);
	PointCylindrical3D to_point();
	LinearCylindrical3D_Vertex_t & get_vertex();
};

//////////////////////////
// LinearPolar2D_Vertex //
//////////////////////////

class LinearPolar2D_Vertex
{
	LinearPolar2D_Vertex_t    *vertex;
public:
	LinearPolar2D_Vertex(LinearPolar2D_Vertex_t &initial_vertex);
	PointPolar2D to_point();
	LinearPolar2D_Vertex_t & get_vertex();
};

//////////////////////////////
// LinearSpherical3D_Vertex //
//////////////////////////////

class LinearSpherical3D_Vertex
{
	LinearSpherical3D_Vertex_t    *vertex;
public:
	LinearSpherical3D_Vertex(LinearSpherical3D_Vertex_t &initial_vertex);
	PointSpherical3D to_point();
	LinearSpherical3D_Vertex_t & get_vertex();
};

#endif /* end of include guard: VERTICES_LINEAR_HPP */
