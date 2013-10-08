/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Class definitions for vertices of triangular domains.
 */

#ifndef VERTICES_TRIANGULAR_HPP
#define VERTICES_TRIANGULAR_HPP

#include "types.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

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
	PointCartesian2D to_point();
	
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
	PointCartesian3D to_point();
	
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
	PointCylindrical3D to_point();
	
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
	PointPolar2D to_point();
	
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
	PointSpherical3D to_point();
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Vertex_t & get_vertex();
};

#endif /* end of include guard: VERTICES_TRIANGULAR_HPP */
