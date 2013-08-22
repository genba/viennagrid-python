/**
 * @file
 * @brief Class definitions for edges of quadrilateral domains.
 */

#ifndef EDGES_QUADRILATERAL_HPP
#define EDGES_QUADRILATERAL_HPP

#include "types.hpp"

/**
 * Wrapped edge of a quadrilateral, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCartesian2D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Edge_t    *edge;
public:
	QuadrilateralCartesian2D_Edge(QuadrilateralCartesian2D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a quadrilateral, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCartesian3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Edge_t    *edge;
public:
	QuadrilateralCartesian3D_Edge(QuadrilateralCartesian3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a quadrilateral, cylindrical domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCylindrical3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Edge_t    *edge;
public:
	QuadrilateralCylindrical3D_Edge(QuadrilateralCylindrical3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a quadrilateral, polar domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralPolar2D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Edge_t    *edge;
public:
	QuadrilateralPolar2D_Edge(QuadrilateralPolar2D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a quadrilateral, spherical domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralSpherical3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Edge_t    *edge;
public:
	QuadrilateralSpherical3D_Edge(QuadrilateralSpherical3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Edge_t & get_edge();
};

#endif /* end of include guard: EDGES_QUADRILATERAL_HPP */
