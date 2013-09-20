/**
 * @file
 * @brief Class definitions for edges of tetrahedral domains.
 */

#ifndef EDGES_TETRAHEDRAL_HPP
#define EDGES_TETRAHEDRAL_HPP

#include "types.hpp"

/**
 * Wrapped edge of a tetrahedral, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class TetrahedralCartesian3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Edge_t    *edge;
public:
	TetrahedralCartesian3D_Edge(TetrahedralCartesian3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a tetrahedral, cylindrical domain.
 * 
 * @since 0.1.0
 */
class TetrahedralCylindrical3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Edge_t    *edge;
public:
	TetrahedralCylindrical3D_Edge(TetrahedralCylindrical3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a tetrahedral, spherical domain.
 * 
 * @since 0.1.0
 */
class TetrahedralSpherical3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Edge_t    *edge;
public:
	TetrahedralSpherical3D_Edge(TetrahedralSpherical3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Edge_t & get_edge();
};

#endif /* end of include guard: EDGES_TETRAHEDRAL_HPP */
