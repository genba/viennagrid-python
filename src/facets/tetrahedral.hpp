/**
 * @file
 * @brief Class definitions for facets of tetrahedral domains.
 */

#ifndef FACETS_TETRAHEDRAL_HPP
#define FACETS_TETRAHEDRAL_HPP

#include "types.hpp"

/**
 * Wrapped facet of a tetrahedral, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class TetrahedralCartesian3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Facet_t    *facet;
public:
	TetrahedralCartesian3D_Facet(TetrahedralCartesian3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a tetrahedral, cylindrical domain.
 * 
 * @since 0.1.0
 */
class TetrahedralCylindrical3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Facet_t    *facet;
public:
	TetrahedralCylindrical3D_Facet(TetrahedralCylindrical3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a tetrahedral, spherical domain.
 * 
 * @since 0.1.0
 */
class TetrahedralSpherical3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Facet_t    *facet;
public:
	TetrahedralSpherical3D_Facet(TetrahedralSpherical3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Facet_t & get_facet();
};

#endif /* end of include guard: FACETS_TETRAHEDRAL_HPP */
