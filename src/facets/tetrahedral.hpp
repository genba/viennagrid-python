#ifndef FACETS_TETRAHEDRAL_HPP
#define FACETS_TETRAHEDRAL_HPP

#include "types.hpp"

//////////////////////////////////
// TetrahedralCartesian3D_Facet //
//////////////////////////////////

class TetrahedralCartesian3D_Facet
{
	TetrahedralCartesian3D_Facet_t    *facet;
public:
	TetrahedralCartesian3D_Facet(TetrahedralCartesian3D_Facet_t &initial_facet);
	TetrahedralCartesian3D_Facet_t & get_facet();
};

////////////////////////////////////
// TetrahedralCylindrical3D_Facet //
////////////////////////////////////

class TetrahedralCylindrical3D_Facet
{
	TetrahedralCylindrical3D_Facet_t    *facet;
public:
	TetrahedralCylindrical3D_Facet(TetrahedralCylindrical3D_Facet_t &initial_facet);
	TetrahedralCylindrical3D_Facet_t & get_facet();
};

//////////////////////////////////
// TetrahedralSpherical3D_Facet //
//////////////////////////////////

class TetrahedralSpherical3D_Facet
{
	TetrahedralSpherical3D_Facet_t    *facet;
public:
	TetrahedralSpherical3D_Facet(TetrahedralSpherical3D_Facet_t &initial_facet);
	TetrahedralSpherical3D_Facet_t & get_facet();
};

#endif /* end of include guard: FACETS_TETRAHEDRAL_HPP */
