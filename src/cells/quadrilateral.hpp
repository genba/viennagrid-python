/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Class definitions for cells of quadrilateral domains.
 */

#ifndef CELLS_QUADRILATERAL_HPP
#define CELLS_QUADRILATERAL_HPP

#include "types.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**
 * Wrapped cell of a quadrilateral, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCartesian2D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Cell_t    *cell;
public:
	QuadrilateralCartesian2D_Cell(QuadrilateralCartesian2D_Cell_t &initial_cell);
	
	/**
	 * Return the number of vertices that form the cell.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_vertices();
	
	/**
	 * Get a Python list containing all the vertices that form the cell.
	 *
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	/**
	 * Get a Python list containing all the facets that form the cell.
	 *
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_facets();
	
	/**
	 * Get a Python list containing all the edges that form the cell.
	 *
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_edges();
	
	/**
	 * Get a reference to the ViennaGrid cell.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a quadrilateral, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCartesian3D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Cell_t    *cell;
public:
	QuadrilateralCartesian3D_Cell(QuadrilateralCartesian3D_Cell_t &initial_cell);
	
	/**
	 * Return the number of vertices that form the cell.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_vertices();
	
	/**
	 * Get a Python list containing all the vertices that form the cell.
	 *
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	/**
	 * Get a Python list containing all the facets that form the cell.
	 *
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_facets();
	
	/**
	 * Get a Python list containing all the edges that form the cell.
	 *
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_edges();
	
	/**
	 * Get a reference to the ViennaGrid cell.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a quadrilateral, cylindrical 3D domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralCylindrical3D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Cell_t    *cell;
public:
	QuadrilateralCylindrical3D_Cell(QuadrilateralCylindrical3D_Cell_t &initial_cell);
	
	/**
	 * Return the number of vertices that form the cell.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_vertices();
	
	/**
	 * Get a Python list containing all the vertices that form the cell.
	 *
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	/**
	 * Get a Python list containing all the facets that form the cell.
	 *
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_facets();
	
	/**
	 * Get a Python list containing all the edges that form the cell.
	 *
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_edges();
	
	/**
	 * Get a reference to the ViennaGrid cell.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a quadrilateral, polar 2D domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralPolar2D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Cell_t    *cell;
public:
	QuadrilateralPolar2D_Cell(QuadrilateralPolar2D_Cell_t &initial_cell);
	
	/**
	 * Return the number of vertices that form the cell.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_vertices();
	
	/**
	 * Get a Python list containing all the vertices that form the cell.
	 *
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	/**
	 * Get a Python list containing all the facets that form the cell.
	 *
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_facets();
	
	/**
	 * Get a Python list containing all the edges that form the cell.
	 *
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_edges();
	
	/**
	 * Get a reference to the ViennaGrid cell.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a quadrilateral, spherical 3D domain.
 * 
 * @since 0.1.0
 */
class QuadrilateralSpherical3D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Cell_t    *cell;
public:
	QuadrilateralSpherical3D_Cell(QuadrilateralSpherical3D_Cell_t &initial_cell);
	
	/**
	 * Return the number of vertices that form the cell.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_vertices();
	
	/**
	 * Get a Python list containing all the vertices that form the cell.
	 *
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	/**
	 * Get a Python list containing all the facets that form the cell.
	 *
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_facets();
	
	/**
	 * Get a Python list containing all the edges that form the cell.
	 *
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_edges();
	
	/**
	 * Get a reference to the ViennaGrid cell.
	 * 
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Cell_t & get_cell();
};

#endif
