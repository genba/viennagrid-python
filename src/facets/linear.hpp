/**
 * @file
 * @brief Class definitions for facets of linear domains.
 */

#ifndef FACETS_LINEAR_HPP
#define FACETS_LINEAR_HPP

#include "types.hpp"

/**
 * Wrapped facet of a linear, cartesian 1D domain.
 */
class LinearCartesian1D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 */
	LinearCartesian1D_Facet_t    *facet;
public:
	LinearCartesian1D_Facet(LinearCartesian1D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 */
	LinearCartesian1D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a linear, cartesian 2D domain.
 */
class LinearCartesian2D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 */
	LinearCartesian2D_Facet_t    *facet;
public:
	LinearCartesian2D_Facet(LinearCartesian2D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 */
	LinearCartesian2D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a linear, cartesian 3D domain.
 */
class LinearCartesian3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 */
	LinearCartesian3D_Facet_t    *facet;
public:
	LinearCartesian3D_Facet(LinearCartesian3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 */
	LinearCartesian3D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a linear, cylindrical domain.
 */
class LinearCylindrical3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 */
	LinearCylindrical3D_Facet_t    *facet;
public:
	LinearCylindrical3D_Facet(LinearCylindrical3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 */
	LinearCylindrical3D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a linear, polar domain.
 */
class LinearPolar2D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 */
	LinearPolar2D_Facet_t    *facet;
public:
	LinearPolar2D_Facet(LinearPolar2D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 */
	LinearPolar2D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a linear, spherical domain.
 */
class LinearSpherical3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 */
	LinearSpherical3D_Facet_t    *facet;
public:
	LinearSpherical3D_Facet(LinearSpherical3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 */
	LinearSpherical3D_Facet_t & get_facet();
};

#endif /* end of include guard: FACETS_LINEAR_HPP */
