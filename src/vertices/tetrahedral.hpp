/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Class definitions for vertices of tetrahedral domains.
 */

#ifndef VERTICES_TETRAHEDRAL_HPP
#define VERTICES_TETRAHEDRAL_HPP

#include "types.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

/**
 * Wrapped vertex of a tetrahedral, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class TetrahedralCartesian3D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Vertex_t    *vertex;
public:
	TetrahedralCartesian3D_Vertex(TetrahedralCartesian3D_Vertex_t &initial_vertex);
	PointCartesian3D to_point();
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Vertex_t & get_vertex();
};

/**
 * Wrapped vertex of a tetrahedral, cylindrical domain.
 * 
 * @since 0.1.0
 */
class TetrahedralCylindrical3D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Vertex_t    *vertex;
public:
	TetrahedralCylindrical3D_Vertex(TetrahedralCylindrical3D_Vertex_t &initial_vertex);
	PointCylindrical3D to_point();
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Vertex_t & get_vertex();
};

/**
 * Wrapped vertex of a tetrahedral, spherical domain.
 * 
 * @since 0.1.0
 */
class TetrahedralSpherical3D_Vertex
{
	/**
	 * Pointer to the ViennaGrid vertex type.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Vertex_t    *vertex;
public:
	TetrahedralSpherical3D_Vertex(TetrahedralSpherical3D_Vertex_t &initial_vertex);
	PointSpherical3D to_point();
	
	/**
	 * Get a reference to the ViennaGrind vertex object.
	 * 
	 * @return Reference to the ViennaGrid vertex object.
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Vertex_t & get_vertex();
};

#endif /* end of include guard: VERTICES_TETRAHEDRAL_HPP */
