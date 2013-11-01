/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Class definitions for vertices of quadrilateral domains.
 */

#ifndef VERTICES_QUADRILATERAL_HPP
#define VERTICES_QUADRILATERAL_HPP

#include "types.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

/**
 * Wrapped vertex of a quadrilateral, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCartesian2D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Vertex_t    *vertex;
public:
	QuadrilateralCartesian2D_Vertex(QuadrilateralCartesian2D_Vertex_t &initial_vertex);
	PointCartesian2D to_point();
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Vertex_t & get_vertex();
};

/**
 * Wrapped vertex of a quadrilateral, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCartesian3D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Vertex_t    *vertex;
public:
	QuadrilateralCartesian3D_Vertex(QuadrilateralCartesian3D_Vertex_t &initial_vertex);
	PointCartesian3D to_point();
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Vertex_t & get_vertex();
};

/**
 * Wrapped vertex of a quadrilateral, cylindrical domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCylindrical3D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Vertex_t    *vertex;
public:
	QuadrilateralCylindrical3D_Vertex(QuadrilateralCylindrical3D_Vertex_t &initial_vertex);
	PointCylindrical3D to_point();
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Vertex_t & get_vertex();
};

/**
 * Wrapped vertex of a quadrilateral, polar domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralPolar2D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Vertex_t    *vertex;
public:
	QuadrilateralPolar2D_Vertex(QuadrilateralPolar2D_Vertex_t &initial_vertex);
	PointPolar2D to_point();
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Vertex_t & get_vertex();
};

/**
 * Wrapped vertex of a quadrilateral, spherical domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralSpherical3D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Vertex_t    *vertex;
public:
	QuadrilateralSpherical3D_Vertex(QuadrilateralSpherical3D_Vertex_t &initial_vertex);
	PointSpherical3D to_point();
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Vertex_t & get_vertex();
};

#endif /* end of include guard: VERTICES_QUADRILATERAL_HPP */
