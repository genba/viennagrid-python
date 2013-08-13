#ifndef EDGES_LINEAR_HPP
#define EDGES_LINEAR_HPP

#include "types.hpp"

////////////////////////////
// LinearCartesian1D_Edge //
////////////////////////////

class LinearCartesian1D_Edge
{
	LinearCartesian1D_Edge_t    *edge;
public:
	LinearCartesian1D_Edge(LinearCartesian1D_Edge_t &initial_edge);
	LinearCartesian1D_Edge_t & get_edge();
};

////////////////////////////
// LinearCartesian2D_Edge //
////////////////////////////

class LinearCartesian2D_Edge
{
	LinearCartesian2D_Edge_t    *edge;
public:
	LinearCartesian2D_Edge(LinearCartesian2D_Edge_t &initial_edge);
	LinearCartesian2D_Edge_t & get_edge();
};

////////////////////////////
// LinearCartesian3D_Edge //
////////////////////////////

class LinearCartesian3D_Edge
{
	LinearCartesian3D_Edge_t    *edge;
public:
	LinearCartesian3D_Edge(LinearCartesian3D_Edge_t &initial_edge);
	LinearCartesian3D_Edge_t & get_edge();
};

//////////////////////////////
// LinearCylindrical3D_Edge //
//////////////////////////////

class LinearCylindrical3D_Edge
{
	LinearCylindrical3D_Edge_t    *edge;
public:
	LinearCylindrical3D_Edge(LinearCylindrical3D_Edge_t &initial_edge);
	LinearCylindrical3D_Edge_t & get_edge();
};

////////////////////////
// LinearPolar2D_Edge //
////////////////////////

class LinearPolar2D_Edge
{
	LinearPolar2D_Edge_t    *edge;
public:
	LinearPolar2D_Edge(LinearPolar2D_Edge_t &initial_edge);
	LinearPolar2D_Edge_t & get_edge();
};

////////////////////////////
// LinearSpherical3D_Edge //
////////////////////////////

class LinearSpherical3D_Edge
{
	LinearSpherical3D_Edge_t    *edge;
public:
	LinearSpherical3D_Edge(LinearSpherical3D_Edge_t &initial_edge);
	LinearSpherical3D_Edge_t & get_edge();
};

#endif /* end of include guard: EDGES_LINEAR_HPP */
