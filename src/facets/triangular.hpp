/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Class definitions for facets of triangular domains.
 */

#ifndef FACETS_TRIANGULAR_HPP
#define FACETS_TRIANGULAR_HPP

#include "types.hpp"

/**
 * Wrapped facet of a triangular, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class TriangularCartesian2D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Facet_t    *facet;
public:
	TriangularCartesian2D_Facet(TriangularCartesian2D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a triangular, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class TriangularCartesian3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Facet_t    *facet;
public:
	TriangularCartesian3D_Facet(TriangularCartesian3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a triangular, cylindrical domain.
 * 
 * @since 0.1.0
 */
class TriangularCylindrical3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Facet_t    *facet;
public:
	TriangularCylindrical3D_Facet(TriangularCylindrical3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a triangular, polar domain.
 * 
 * @since 0.1.0
 */
class TriangularPolar2D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	TriangularPolar2D_Facet_t    *facet;
public:
	TriangularPolar2D_Facet(TriangularPolar2D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	TriangularPolar2D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a triangular, spherical domain.
 * 
 * @since 0.1.0
 */
class TriangularSpherical3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Facet_t    *facet;
public:
	TriangularSpherical3D_Facet(TriangularSpherical3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Facet_t & get_facet();
};

#endif /* end of include guard: FACETS_TRIANGULAR_HPP */
