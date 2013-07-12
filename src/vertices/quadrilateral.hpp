#ifndef VERTICES_QUADRILATERAL
#define VERTICES_QUADRILATERAL

#include "types.hpp"

//////////////////////////////////
// QuadrilateralCartesian2D_Vertex //
//////////////////////////////////

class QuadrilateralCartesian2D_Vertex
{
	QuadrilateralCartesian2D_Vertex_t    *vertex;
public:
	QuadrilateralCartesian2D_Vertex(QuadrilateralCartesian2D_Vertex_t &initial_vertex);
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
	QuadrilateralSpherical3D_Vertex_t & get_vertex();
};

#endif
