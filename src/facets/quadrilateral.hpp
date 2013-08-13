#ifndef FACETS_QUADRILATERAL_HPP
#define FACETS_QUADRILATERAL_HPP

#include "types.hpp"

////////////////////////////////////
// QuadrilateralCartesian2D_Facet //
////////////////////////////////////

class QuadrilateralCartesian2D_Facet
{
	QuadrilateralCartesian2D_Facet_t    *facet;
public:
	QuadrilateralCartesian2D_Facet(QuadrilateralCartesian2D_Facet_t &initial_facet);
	QuadrilateralCartesian2D_Facet_t & get_facet();
};

////////////////////////////////////
// QuadrilateralCartesian3D_Facet //
////////////////////////////////////

class QuadrilateralCartesian3D_Facet
{
	QuadrilateralCartesian3D_Facet_t    *facet;
public:
	QuadrilateralCartesian3D_Facet(QuadrilateralCartesian3D_Facet_t &initial_facet);
	QuadrilateralCartesian3D_Facet_t & get_facet();
};

//////////////////////////////////////
// QuadrilateralCylindrical3D_Facet //
//////////////////////////////////////

class QuadrilateralCylindrical3D_Facet
{
	QuadrilateralCylindrical3D_Facet_t    *facet;
public:
	QuadrilateralCylindrical3D_Facet(QuadrilateralCylindrical3D_Facet_t &initial_facet);
	QuadrilateralCylindrical3D_Facet_t & get_facet();
};

////////////////////////////////
// QuadrilateralPolar2D_Facet //
////////////////////////////////

class QuadrilateralPolar2D_Facet
{
	QuadrilateralPolar2D_Facet_t    *facet;
public:
	QuadrilateralPolar2D_Facet(QuadrilateralPolar2D_Facet_t &initial_facet);
	QuadrilateralPolar2D_Facet_t & get_facet();
};

////////////////////////////////////
// QuadrilateralSpherical3D_Facet //
////////////////////////////////////

class QuadrilateralSpherical3D_Facet
{
	QuadrilateralSpherical3D_Facet_t    *facet;
public:
	QuadrilateralSpherical3D_Facet(QuadrilateralSpherical3D_Facet_t &initial_facet);
	QuadrilateralSpherical3D_Facet_t & get_facet();
};

#endif /* end of include guard: FACETS_QUADRILATERAL_HPP */
