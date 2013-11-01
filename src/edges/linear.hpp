/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Class definitions for edges of linear domains.
 */

#ifndef EDGES_LINEAR_HPP
#define EDGES_LINEAR_HPP

#include "types.hpp"

/**
 * Wrapped edge of a triangular, cartesian 1D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian1D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian1D_Edge_t    *edge;
public:
	LinearCartesian1D_Edge(LinearCartesian1D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian1D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian2D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian2D_Edge_t    *edge;
public:
	LinearCartesian2D_Edge(LinearCartesian2D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian2D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian3D_Edge_t    *edge;
public:
	LinearCartesian3D_Edge(LinearCartesian3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian3D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, cylindrical domain.
 * 
 * @since 0.1.0
 */
class LinearCylindrical3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Edge_t    *edge;
public:
	LinearCylindrical3D_Edge(LinearCylindrical3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, polar domain.
 * 
 * @since 0.1.0
 */
class LinearPolar2D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	LinearPolar2D_Edge_t    *edge;
public:
	LinearPolar2D_Edge(LinearPolar2D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	LinearPolar2D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, spherical domain.
 * 
 * @since 0.1.0
 */
class LinearSpherical3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	LinearSpherical3D_Edge_t    *edge;
public:
	LinearSpherical3D_Edge(LinearSpherical3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	LinearSpherical3D_Edge_t & get_edge();
};

#endif /* end of include guard: EDGES_LINEAR_HPP */
