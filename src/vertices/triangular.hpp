#ifndef VERTICES_TRIANGULAR_HPP
#define VERTICES_TRIANGULAR_HPP

#include "types.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

//////////////////////////////////
// TriangularCartesian2D_Vertex //
//////////////////////////////////

class TriangularCartesian2D_Vertex
{
	TriangularCartesian2D_Vertex_t    *vertex;
public:
	TriangularCartesian2D_Vertex(TriangularCartesian2D_Vertex_t &initial_vertex);
	PointCartesian2D to_point();
	TriangularCartesian2D_Vertex_t & get_vertex();
};

//////////////////////////////////
// TriangularCartesian3D_Vertex //
//////////////////////////////////

class TriangularCartesian3D_Vertex
{
	TriangularCartesian3D_Vertex_t    *vertex;
public:
	TriangularCartesian3D_Vertex(TriangularCartesian3D_Vertex_t &initial_vertex);
	PointCartesian3D to_point();
	TriangularCartesian3D_Vertex_t & get_vertex();
};

////////////////////////////////////
// TriangularCylindrical3D_Vertex //
////////////////////////////////////

class TriangularCylindrical3D_Vertex
{
	TriangularCylindrical3D_Vertex_t    *vertex;
public:
	TriangularCylindrical3D_Vertex(TriangularCylindrical3D_Vertex_t &initial_vertex);
	PointCylindrical3D to_point();
	TriangularCylindrical3D_Vertex_t & get_vertex();
};

//////////////////////////////
// TriangularPolar2D_Vertex //
//////////////////////////////

class TriangularPolar2D_Vertex
{
	TriangularPolar2D_Vertex_t    *vertex;
public:
	TriangularPolar2D_Vertex(TriangularPolar2D_Vertex_t &initial_vertex);
	PointPolar2D to_point();
	TriangularPolar2D_Vertex_t & get_vertex();
};

//////////////////////////////////
// TriangularSpherical3D_Vertex //
//////////////////////////////////

class TriangularSpherical3D_Vertex
{
	TriangularSpherical3D_Vertex_t    *vertex;
public:
	TriangularSpherical3D_Vertex(TriangularSpherical3D_Vertex_t &initial_vertex);
	PointSpherical3D to_point();
	TriangularSpherical3D_Vertex_t & get_vertex();
};

#endif /* end of include guard: VERTICES_TRIANGULAR_HPP */
