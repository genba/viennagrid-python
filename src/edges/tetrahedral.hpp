/**
 * @file
 * @brief Class definitions for edges of tetrahedral domains.
 */

#ifndef EDGES_TETRAHEDRAL_HPP
#define EDGES_TETRAHEDRAL_HPP

#include "types.hpp"

/**
 * Wrapped edge of a tetrahedral, cartesian 3D domain.
 */
class TetrahedralCartesian3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	TetrahedralCartesian3D_Edge_t    *edge;
public:
	TetrahedralCartesian3D_Edge(TetrahedralCartesian3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	TetrahedralCartesian3D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a tetrahedral, cylindrical domain.
 */
class TetrahedralCylindrical3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	TetrahedralCylindrical3D_Edge_t    *edge;
public:
	TetrahedralCylindrical3D_Edge(TetrahedralCylindrical3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	TetrahedralCylindrical3D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a tetrahedral, spherical domain.
 */
class TetrahedralSpherical3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	TetrahedralSpherical3D_Edge_t    *edge;
public:
	TetrahedralSpherical3D_Edge(TetrahedralSpherical3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	TetrahedralSpherical3D_Edge_t & get_edge();
};

#endif /* end of include guard: EDGES_TETRAHEDRAL_HPP */
