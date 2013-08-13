#ifndef FACETS_LINEAR_HPP
#define FACETS_LINEAR_HPP

#include "types.hpp"

/////////////////////////////
// LinearCartesian1D_Facet //
/////////////////////////////

class LinearCartesian1D_Facet
{
	LinearCartesian1D_Facet_t    *facet;
public:
	LinearCartesian1D_Facet(LinearCartesian1D_Facet_t &initial_facet);
	LinearCartesian1D_Facet_t & get_facet();
};

/////////////////////////////
// LinearCartesian2D_Facet //
/////////////////////////////

class LinearCartesian2D_Facet
{
	LinearCartesian2D_Facet_t    *facet;
public:
	LinearCartesian2D_Facet(LinearCartesian2D_Facet_t &initial_facet);
	LinearCartesian2D_Facet_t & get_facet();
};

/////////////////////////////
// LinearCartesian3D_Facet //
/////////////////////////////

class LinearCartesian3D_Facet
{
	LinearCartesian3D_Facet_t    *facet;
public:
	LinearCartesian3D_Facet(LinearCartesian3D_Facet_t &initial_facet);
	LinearCartesian3D_Facet_t & get_facet();
};

///////////////////////////////
// LinearCylindrical3D_Facet //
///////////////////////////////

class LinearCylindrical3D_Facet
{
	LinearCylindrical3D_Facet_t    *facet;
public:
	LinearCylindrical3D_Facet(LinearCylindrical3D_Facet_t &initial_facet);
	LinearCylindrical3D_Facet_t & get_facet();
};

/////////////////////////
// LinearPolar2D_Facet //
/////////////////////////

class LinearPolar2D_Facet
{
	LinearPolar2D_Facet_t    *facet;
public:
	LinearPolar2D_Facet(LinearPolar2D_Facet_t &initial_facet);
	LinearPolar2D_Facet_t & get_facet();
};

/////////////////////////////
// LinearSpherical3D_Facet //
/////////////////////////////

class LinearSpherical3D_Facet
{
	LinearSpherical3D_Facet_t    *facet;
public:
	LinearSpherical3D_Facet(LinearSpherical3D_Facet_t &initial_facet);
	LinearSpherical3D_Facet_t & get_facet();
};

#endif
