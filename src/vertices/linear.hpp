/**
 * @file
 * @brief Class definitions for vertices of linear domains.
 */

#ifndef VERTICES_LINEAR_HPP
#define VERTICES_LINEAR_HPP

#include "types.hpp"

/**
 * Wrapped vertex of a linear, cartesian 1D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian1D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian1D_Vertex_t    *vertex;
public:
	LinearCartesian1D_Vertex(LinearCartesian1D_Vertex_t &initial_vertex);
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	LinearCartesian1D_Vertex_t & get_vertex();
};

/**
 * Wrapped vertex of a linear, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian2D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian2D_Vertex_t    *vertex;
public:
	LinearCartesian2D_Vertex(LinearCartesian2D_Vertex_t &initial_vertex);
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	LinearCartesian2D_Vertex_t & get_vertex();
};

/**
 * Wrapped vertex of a linear, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian3D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian3D_Vertex_t    *vertex;
public:
	LinearCartesian3D_Vertex(LinearCartesian3D_Vertex_t &initial_vertex);
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	LinearCartesian3D_Vertex_t & get_vertex();
};

/**
 * Wrapped vertex of a linear, cylindrical domain.
 * 
 * @since 0.1.0
 */
class LinearCylindrical3D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Vertex_t    *vertex;
public:
	LinearCylindrical3D_Vertex(LinearCylindrical3D_Vertex_t &initial_vertex);
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Vertex_t & get_vertex();
};

/**
 * Wrapped vertex of a linear, polar domain.
 * 
 * @since 0.1.0
 */
class LinearPolar2D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	LinearPolar2D_Vertex_t    *vertex;
public:
	LinearPolar2D_Vertex(LinearPolar2D_Vertex_t &initial_vertex);
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	LinearPolar2D_Vertex_t & get_vertex();
};

/**
 * Wrapped vertex of a linear, spherical domain.
 * 
 * @since 0.1.0
 */
class LinearSpherical3D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	LinearSpherical3D_Vertex_t    *vertex;
public:
	LinearSpherical3D_Vertex(LinearSpherical3D_Vertex_t &initial_vertex);
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	LinearSpherical3D_Vertex_t & get_vertex();
};

#endif
