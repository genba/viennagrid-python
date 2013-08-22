/**
 * @file
 * @brief Class definitions for edges of linear domains.
 */

#ifndef EDGES_LINEAR_HPP
#define EDGES_LINEAR_HPP

#include "types.hpp"

/**
 * Wrapped edge of a triangular, cartesian 1D domain.
 */
class LinearCartesian1D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	LinearCartesian1D_Edge_t    *edge;
public:
	LinearCartesian1D_Edge(LinearCartesian1D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	LinearCartesian1D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, cartesian 2D domain.
 */
class LinearCartesian2D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	LinearCartesian2D_Edge_t    *edge;
public:
	LinearCartesian2D_Edge(LinearCartesian2D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	LinearCartesian2D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, cartesian 3D domain.
 */
class LinearCartesian3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	LinearCartesian3D_Edge_t    *edge;
public:
	LinearCartesian3D_Edge(LinearCartesian3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	LinearCartesian3D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, cylindrical domain.
 */
class LinearCylindrical3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	LinearCylindrical3D_Edge_t    *edge;
public:
	LinearCylindrical3D_Edge(LinearCylindrical3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	LinearCylindrical3D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, polar domain.
 */
class LinearPolar2D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	LinearPolar2D_Edge_t    *edge;
public:
	LinearPolar2D_Edge(LinearPolar2D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	LinearPolar2D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, spherical domain.
 */
class LinearSpherical3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	LinearSpherical3D_Edge_t    *edge;
public:
	LinearSpherical3D_Edge(LinearSpherical3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	LinearSpherical3D_Edge_t & get_edge();
};

#endif /* end of include guard: EDGES_LINEAR_HPP */
