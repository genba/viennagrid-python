/**
 * @file
 * @brief Class definitions for facets of tetrahedral domains.
 */

#ifndef FACETS_TETRAHEDRAL_HPP
#define FACETS_TETRAHEDRAL_HPP

#include "types.hpp"

/**
 * Wrapped facet of a tetrahedral, cartesian 3D domain.
 */
class TetrahedralCartesian3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 */
	TetrahedralCartesian3D_Facet_t    *facet;
public:
	TetrahedralCartesian3D_Facet(TetrahedralCartesian3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 */
	TetrahedralCartesian3D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a tetrahedral, cylindrical domain.
 */
class TetrahedralCylindrical3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 */
	TetrahedralCylindrical3D_Facet_t    *facet;
public:
	TetrahedralCylindrical3D_Facet(TetrahedralCylindrical3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 */
	TetrahedralCylindrical3D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a tetrahedral, spherical domain.
 */
class TetrahedralSpherical3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 */
	TetrahedralSpherical3D_Facet_t    *facet;
public:
	TetrahedralSpherical3D_Facet(TetrahedralSpherical3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 */
	TetrahedralSpherical3D_Facet_t & get_facet();
};

#endif /* end of include guard: FACETS_TETRAHEDRAL_HPP */
