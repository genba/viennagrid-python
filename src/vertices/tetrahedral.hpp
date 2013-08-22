/**
 * @file
 * @brief Class definitions for vertices of tetrahedral domains.
 */

#ifndef VERTICES_TETRAHEDRAL
#define VERTICES_TETRAHEDRAL

#include "types.hpp"

///////////////////////////////////
// TetrahedralCartesian3D_Vertex //
///////////////////////////////////

class TetrahedralCartesian3D_Vertex
{
	TetrahedralCartesian3D_Vertex_t    *vertex;
public:
	TetrahedralCartesian3D_Vertex(TetrahedralCartesian3D_Vertex_t &initial_vertex);
	TetrahedralCartesian3D_Vertex_t & get_vertex();
};

/////////////////////////////////////
// TetrahedralCylindrical3D_Vertex //
/////////////////////////////////////

class TetrahedralCylindrical3D_Vertex
{
	TetrahedralCylindrical3D_Vertex_t    *vertex;
public:
	TetrahedralCylindrical3D_Vertex(TetrahedralCylindrical3D_Vertex_t &initial_vertex);
	TetrahedralCylindrical3D_Vertex_t & get_vertex();
};

///////////////////////////////////
// TetrahedralSpherical3D_Vertex //
///////////////////////////////////

class TetrahedralSpherical3D_Vertex
{
	TetrahedralSpherical3D_Vertex_t    *vertex;
public:
	TetrahedralSpherical3D_Vertex(TetrahedralSpherical3D_Vertex_t &initial_vertex);
	TetrahedralSpherical3D_Vertex_t & get_vertex();
};

#endif
