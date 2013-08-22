/**
 * @file
 * @brief Class definitions for edges of triangular domains.
 */

#ifndef EDGES_TRIANGULAR_HPP
#define EDGES_TRIANGULAR_HPP

#include "types.hpp"

/**
 * Wrapped edge of a triangular, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class TriangularCartesian2D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Edge_t    *edge;
public:
	TriangularCartesian2D_Edge(TriangularCartesian2D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class TriangularCartesian3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Edge_t    *edge;
public:
	TriangularCartesian3D_Edge(TriangularCartesian3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, cylindrical domain.
 * 
 * @since 0.1.0
 */
class TriangularCylindrical3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Edge_t    *edge;
public:
	TriangularCylindrical3D_Edge(TriangularCylindrical3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, polar domain.
 * 
 * @since 0.1.0
 */
class TriangularPolar2D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	TriangularPolar2D_Edge_t    *edge;
public:
	TriangularPolar2D_Edge(TriangularPolar2D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	TriangularPolar2D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, spherical domain.
 * 
 * @since 0.1.0
 */
class TriangularSpherical3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 * 
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Edge_t    *edge;
public:
	TriangularSpherical3D_Edge(TriangularSpherical3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 * 
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Edge_t & get_edge();
};

#endif /* end of include guard: EDGES_TRIANGULAR_HPP */
