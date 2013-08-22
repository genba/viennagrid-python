/**
 * @file
 * @brief Class definitions for vertices of triangular domains.
 */

#ifndef VERTICES_TRIANGULAR_HPP
#define VERTICES_TRIANGULAR_HPP

#include "types.hpp"

/**
 * Wrapped vertex of a triangular, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class TriangularCartesian2D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Vertex_t    *vertex;
public:
	TriangularCartesian2D_Vertex(TriangularCartesian2D_Vertex_t &initial_vertex);
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Vertex_t & get_vertex();
};

/**
 * Wrapped vertex of a triangular, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class TriangularCartesian3D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Vertex_t    *vertex;
public:
	TriangularCartesian3D_Vertex(TriangularCartesian3D_Vertex_t &initial_vertex);
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Vertex_t & get_vertex();
};

/**
 * Wrapped vertex of a triangular, cylindrical domain.
 * 
 * @since 0.1.0
 */
class TriangularCylindrical3D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Vertex_t    *vertex;
public:
	TriangularCylindrical3D_Vertex(TriangularCylindrical3D_Vertex_t &initial_vertex);
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Vertex_t & get_vertex();
};

/**
 * Wrapped vertex of a triangular, polar domain.
 * 
 * @since 0.1.0
 */
class TriangularPolar2D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	TriangularPolar2D_Vertex_t    *vertex;
public:
	TriangularPolar2D_Vertex(TriangularPolar2D_Vertex_t &initial_vertex);
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	TriangularPolar2D_Vertex_t & get_vertex();
};

/**
 * Wrapped vertex of a triangular, spherical domain.
 * 
 * @since 0.1.0
 */
class TriangularSpherical3D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Vertex_t    *vertex;
public:
	TriangularSpherical3D_Vertex(TriangularSpherical3D_Vertex_t &initial_vertex);
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Vertex_t & get_vertex();
};

#endif
