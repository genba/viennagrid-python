/**
 * @file
 * @brief Class definitions for edges of quadrilateral domains.
 */

#ifndef EDGES_QUADRILATERAL_HPP
#define EDGES_QUADRILATERAL_HPP

#include "types.hpp"

/**
 * Wrapped edge of a quadrilateral, cartesian 2D domain.
 */
class QuadrilateralCartesian2D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	QuadrilateralCartesian2D_Edge_t    *edge;
public:
	QuadrilateralCartesian2D_Edge(QuadrilateralCartesian2D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	QuadrilateralCartesian2D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a quadrilateral, cartesian 3D domain.
 */
class QuadrilateralCartesian3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	QuadrilateralCartesian3D_Edge_t    *edge;
public:
	QuadrilateralCartesian3D_Edge(QuadrilateralCartesian3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	QuadrilateralCartesian3D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a quadrilateral, cylindrical domain.
 */
class QuadrilateralCylindrical3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	QuadrilateralCylindrical3D_Edge_t    *edge;
public:
	QuadrilateralCylindrical3D_Edge(QuadrilateralCylindrical3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	QuadrilateralCylindrical3D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a quadrilateral, polar domain.
 */
class QuadrilateralPolar2D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	QuadrilateralPolar2D_Edge_t    *edge;
public:
	QuadrilateralPolar2D_Edge(QuadrilateralPolar2D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	QuadrilateralPolar2D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a quadrilateral, spherical domain.
 */
class QuadrilateralSpherical3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	QuadrilateralSpherical3D_Edge_t    *edge;
public:
	QuadrilateralSpherical3D_Edge(QuadrilateralSpherical3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	QuadrilateralSpherical3D_Edge_t & get_edge();
};

#endif /* end of include guard: EDGES_QUADRILATERAL_HPP */
