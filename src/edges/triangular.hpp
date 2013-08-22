/**
 * @file
 * @brief Class definitions for edges of triangular domains.
 */

#ifndef EDGES_TRIANGULAR_HPP
#define EDGES_TRIANGULAR_HPP

#include "types.hpp"

/**
 * Wrapped edge of a triangular, cartesian 2D domain.
 */
class TriangularCartesian2D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	TriangularCartesian2D_Edge_t    *edge;
public:
	TriangularCartesian2D_Edge(TriangularCartesian2D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	TriangularCartesian2D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, cartesian 3D domain.
 */
class TriangularCartesian3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	TriangularCartesian3D_Edge_t    *edge;
public:
	TriangularCartesian3D_Edge(TriangularCartesian3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	TriangularCartesian3D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, cylindrical domain.
 */
class TriangularCylindrical3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	TriangularCylindrical3D_Edge_t    *edge;
public:
	TriangularCylindrical3D_Edge(TriangularCylindrical3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	TriangularCylindrical3D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, polar domain.
 */
class TriangularPolar2D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	TriangularPolar2D_Edge_t    *edge;
public:
	TriangularPolar2D_Edge(TriangularPolar2D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	TriangularPolar2D_Edge_t & get_edge();
};

/**
 * Wrapped edge of a triangular, spherical domain.
 */
class TriangularSpherical3D_Edge
{
	/**
	 * Pointer to the ViennaGrid edge type.
	 */
	TriangularSpherical3D_Edge_t    *edge;
public:
	TriangularSpherical3D_Edge(TriangularSpherical3D_Edge_t &initial_edge);
	
	/**
	 * Get a reference to the ViennaGrid edge.
	 */
	TriangularSpherical3D_Edge_t & get_edge();
};

#endif /* end of include guard: EDGES_TRIANGULAR_HPP */
