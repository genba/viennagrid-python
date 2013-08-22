/**
 * @file
 * @brief Class definitions for facets of triangular domains.
 */

#ifndef FACETS_TRIANGULAR_HPP
#define FACETS_TRIANGULAR_HPP

#include "types.hpp"

/**
 * Wrapped facet of a triangular, cartesian 2D domain.
 */
class TriangularCartesian2D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 */
	TriangularCartesian2D_Facet_t    *facet;
public:
	TriangularCartesian2D_Facet(TriangularCartesian2D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 */
	TriangularCartesian2D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a triangular, cartesian 3D domain.
 */
class TriangularCartesian3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 */
	TriangularCartesian3D_Facet_t    *facet;
public:
	TriangularCartesian3D_Facet(TriangularCartesian3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 */
	TriangularCartesian3D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a triangular, cylindrical domain.
 */
class TriangularCylindrical3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 */
	TriangularCylindrical3D_Facet_t    *facet;
public:
	TriangularCylindrical3D_Facet(TriangularCylindrical3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 */
	TriangularCylindrical3D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a triangular, polar domain.
 */
class TriangularPolar2D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 */
	TriangularPolar2D_Facet_t    *facet;
public:
	TriangularPolar2D_Facet(TriangularPolar2D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 */
	TriangularPolar2D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a triangular, spherical domain.
 */
class TriangularSpherical3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 */
	TriangularSpherical3D_Facet_t    *facet;
public:
	TriangularSpherical3D_Facet(TriangularSpherical3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 */
	TriangularSpherical3D_Facet_t & get_facet();
};

#endif /* end of include guard: FACETS_TRIANGULAR_HPP */
