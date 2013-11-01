/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Class definitions for facets of linear domains.
 */

#ifndef FACETS_LINEAR_HPP
#define FACETS_LINEAR_HPP

#include "types.hpp"

/**
 * Wrapped facet of a linear, cartesian 1D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian1D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian1D_Facet_t    *facet;
public:
	LinearCartesian1D_Facet(LinearCartesian1D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian1D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a linear, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian2D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian2D_Facet_t    *facet;
public:
	LinearCartesian2D_Facet(LinearCartesian2D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian2D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a linear, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian3D_Facet_t    *facet;
public:
	LinearCartesian3D_Facet(LinearCartesian3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian3D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a linear, cylindrical domain.
 * 
 * @since 0.1.0
 */
class LinearCylindrical3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Facet_t    *facet;
public:
	LinearCylindrical3D_Facet(LinearCylindrical3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a linear, polar domain.
 * 
 * @since 0.1.0
 */
class LinearPolar2D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	LinearPolar2D_Facet_t    *facet;
public:
	LinearPolar2D_Facet(LinearPolar2D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	LinearPolar2D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a linear, spherical domain.
 * 
 * @since 0.1.0
 */
class LinearSpherical3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	LinearSpherical3D_Facet_t    *facet;
public:
	LinearSpherical3D_Facet(LinearSpherical3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	LinearSpherical3D_Facet_t & get_facet();
};

#endif /* end of include guard: FACETS_LINEAR_HPP */
