#ifndef VERTICES_TETRAHEDRAL_HPP

#define VERTICES_TETRAHEDRAL_HPP

#include "types.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

///////////////////////////////////
// TetrahedralCartesian3D_Vertex //
///////////////////////////////////

class TetrahedralCartesian3D_Vertex
{
	TetrahedralCartesian3D_Vertex_t    *vertex;
public:
	TetrahedralCartesian3D_Vertex(TetrahedralCartesian3D_Vertex_t &initial_vertex);
	PointCartesian3D to_point();
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
	PointCylindrical3D to_point();
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
	PointSpherical3D to_point();
	TetrahedralSpherical3D_Vertex_t & get_vertex();
};

#endif /* end of include guard: VERTICES_TETRAHEDRAL_HPP */
