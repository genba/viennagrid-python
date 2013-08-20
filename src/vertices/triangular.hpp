/**
 * @file
 * @brief Class definitions of wrapped vertices from triangular domains.
 */

#ifndef VERTICES_TRIANGULAR_HPP
#define VERTICES_TRIANGULAR_HPP

#include "types.hpp"

//////////////////////////////////
// TriangularCartesian2D_Vertex //
//////////////////////////////////

class TriangularCartesian2D_Vertex
{
	TriangularCartesian2D_Vertex_t    *vertex;
public:
	TriangularCartesian2D_Vertex(TriangularCartesian2D_Vertex_t &initial_vertex);
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
	TriangularSpherical3D_Vertex_t & get_vertex();
};

#endif
