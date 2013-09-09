/**
 * @file
 * @brief Class definitions for cells of triangular domains.
 */

#ifndef CELLS_TRIANGULAR_HPP
#define CELLS_TRIANGULAR_HPP

#include "types.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**
 * Wrapped cell of a triangular, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class TriangularCartesian2D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Cell_t    *cell;
public:
	TriangularCartesian2D_Cell(TriangularCartesian2D_Cell_t &initial_cell);
	
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
	TriangularCartesian2D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a triangular, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class TriangularCartesian3D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Cell_t    *cell;
public:
	TriangularCartesian3D_Cell(TriangularCartesian3D_Cell_t &initial_cell);
	
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
	TriangularCartesian3D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a triangular, cylindrical 3D domain.
 * 
 * @since 0.1.0
 */
class TriangularCylindrical3D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Cell_t    *cell;
public:
	TriangularCylindrical3D_Cell(TriangularCylindrical3D_Cell_t &initial_cell);
	
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
	TriangularCylindrical3D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a triangular, polar 2D domain.
 * 
 * @since 0.1.0
 */
class TriangularPolar2D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	TriangularPolar2D_Cell_t    *cell;
public:
	TriangularPolar2D_Cell(TriangularPolar2D_Cell_t &initial_cell);
	
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
	TriangularPolar2D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a triangular, spherical 3D domain.
 * 
 * @since 0.1.0
 */
class TriangularSpherical3D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Cell_t    *cell;
public:
	TriangularSpherical3D_Cell(TriangularSpherical3D_Cell_t &initial_cell);
	
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
	TriangularSpherical3D_Cell_t & get_cell();
};

#endif
