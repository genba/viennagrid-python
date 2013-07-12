#ifndef VERTICES_LINEAR_HPP
#define VERTICES_LINEAR_HPP

#include "types.hpp"

//////////////////////////////
// LinearCartesian1D_Vertex //
//////////////////////////////

class LinearCartesian1D_Vertex
{
	LinearCartesian1D_Vertex_t    *vertex;
public:
	LinearCartesian1D_Vertex(LinearCartesian1D_Vertex_t &initial_vertex);
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
	LinearPolar2D_Vertex_t & get_vertex();
};

#endif
