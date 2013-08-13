#ifndef FACETS_TRIANGULAR_HPP
#define FACETS_TRIANGULAR_HPP

#include "types.hpp"

/////////////////////////////////
// TriangularCartesian2D_Facet //
/////////////////////////////////

class TriangularCartesian2D_Facet
{
	TriangularCartesian2D_Facet_t    *facet;
public:
	TriangularCartesian2D_Facet(TriangularCartesian2D_Facet_t &initial_facet);
	TriangularCartesian2D_Facet_t & get_facet();
};

/////////////////////////////////
// TriangularCartesian3D_Facet //
/////////////////////////////////

class TriangularCartesian3D_Facet
{
	TriangularCartesian3D_Facet_t    *facet;
public:
	TriangularCartesian3D_Facet(TriangularCartesian3D_Facet_t &initial_facet);
	TriangularCartesian3D_Facet_t & get_facet();
};

///////////////////////////////////
// TriangularCylindrical3D_Facet //
///////////////////////////////////

class TriangularCylindrical3D_Facet
{
	TriangularCylindrical3D_Facet_t    *facet;
public:
	TriangularCylindrical3D_Facet(TriangularCylindrical3D_Facet_t &initial_facet);
	TriangularCylindrical3D_Facet_t & get_facet();
};

/////////////////////////////
// TriangularPolar2D_Facet //
/////////////////////////////

class TriangularPolar2D_Facet
{
	TriangularPolar2D_Facet_t    *facet;
public:
	TriangularPolar2D_Facet(TriangularPolar2D_Facet_t &initial_facet);
	TriangularPolar2D_Facet_t & get_facet();
};

/////////////////////////////////
// TriangularSpherical3D_Facet //
/////////////////////////////////

class TriangularSpherical3D_Facet
{
	TriangularSpherical3D_Facet_t    *facet;
public:
	TriangularSpherical3D_Facet(TriangularSpherical3D_Facet_t &initial_facet);
	TriangularSpherical3D_Facet_t & get_facet();
};

#endif /* end of include guard: FACETS_TRIANGULAR_HPP */
