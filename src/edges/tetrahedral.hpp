#ifndef EDGES_TETRAHEDRAL_HPP
#define EDGES_TETRAHEDRAL_HPP

#include "types.hpp"

/////////////////////////////////
// TetrahedralCartesian3D_Edge //
/////////////////////////////////

class TetrahedralCartesian3D_Edge
{
	TetrahedralCartesian3D_Edge_t    *edge;
public:
	TetrahedralCartesian3D_Edge(TetrahedralCartesian3D_Edge_t &initial_edge);
	TetrahedralCartesian3D_Edge_t & get_edge();
};

///////////////////////////////////
// TetrahedralCylindrical3D_Edge //
///////////////////////////////////

class TetrahedralCylindrical3D_Edge
{
	TetrahedralCylindrical3D_Edge_t    *edge;
public:
	TetrahedralCylindrical3D_Edge(TetrahedralCylindrical3D_Edge_t &initial_edge);
	TetrahedralCylindrical3D_Edge_t & get_edge();
};

/////////////////////////////////
// TetrahedralSpherical3D_Edge //
/////////////////////////////////

class TetrahedralSpherical3D_Edge
{
	TetrahedralSpherical3D_Edge_t    *edge;
public:
	TetrahedralSpherical3D_Edge(TetrahedralSpherical3D_Edge_t &initial_edge);
	TetrahedralSpherical3D_Edge_t & get_edge();
};

#endif /* end of include guard: EDGES_TETRAHEDRAL_HPP */
