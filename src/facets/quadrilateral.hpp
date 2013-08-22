/**
 * @file
 * @brief Class definitions for facets of quadrilateral domains.
 */

#ifndef FACETS_QUADRILATERAL_HPP
#define FACETS_QUADRILATERAL_HPP

#include "types.hpp"

/**
 * Wrapped facet of a quadrilateral, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCartesian2D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Facet_t    *facet;
public:
	QuadrilateralCartesian2D_Facet(QuadrilateralCartesian2D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a quadrilateral, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCartesian3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Facet_t    *facet;
public:
	QuadrilateralCartesian3D_Facet(QuadrilateralCartesian3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a quadrilateral, cylindrical domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCylindrical3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Facet_t    *facet;
public:
	QuadrilateralCylindrical3D_Facet(QuadrilateralCylindrical3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a quadrilateral, polar domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralPolar2D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Facet_t    *facet;
public:
	QuadrilateralPolar2D_Facet(QuadrilateralPolar2D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Facet_t & get_facet();
};

/**
 * Wrapped facet of a quadrilateral, spherical domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralSpherical3D_Facet
{
	/**
	 * Pointer to the ViennaGrid facet type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Facet_t    *facet;
public:
	QuadrilateralSpherical3D_Facet(QuadrilateralSpherical3D_Facet_t &initial_facet);
	
	/**
	 * Get a reference to the ViennaGrid facet.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Facet_t & get_facet();
};

#endif /* end of include guard: FACETS_QUADRILATERAL_HPP */
