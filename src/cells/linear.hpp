/**
 * @file
 * @brief Class definitions for cells of linear domains.
 */

#ifndef CELLS_LINEAR_HPP
#define CELLS_LINEAR_HPP

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "types.hpp"

#include "../vertices/linear.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**
 * Wrapped cell of a linear, cartesian 1D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian1D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian1D_Cell_t    *cell;
public:
	LinearCartesian1D_Cell(LinearCartesian1D_Cell_t &initial_cell);
	
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
	 * Get a reference to the ViennaGrid cell.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian1D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a linear, cartesian 2D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian2D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian2D_Cell_t    *cell;
public:
	LinearCartesian2D_Cell(LinearCartesian2D_Cell_t &initial_cell);
	
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
	 * Get a reference to the ViennaGrid cell.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian2D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a linear, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class LinearCartesian3D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian3D_Cell_t    *cell;
public:
	LinearCartesian3D_Cell(LinearCartesian3D_Cell_t &initial_cell);
	
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
	 * Get a reference to the ViennaGrid cell.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian3D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a linear, cylindrical domain.
 * 
 * @since 0.1.0
 */
class LinearCylindrical3D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Cell_t    *cell;
public:
	LinearCylindrical3D_Cell(LinearCylindrical3D_Cell_t &initial_cell);
	
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
	 * Get a reference to the ViennaGrid cell.
	 * 
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a linear, polar domain.
 * 
 * @since 0.1.0
 */
class LinearPolar2D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	LinearPolar2D_Cell_t    *cell;
public:
	LinearPolar2D_Cell(LinearPolar2D_Cell_t &initial_cell);
	
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
	 * Get a reference to the ViennaGrid cell.
	 * 
	 * @since 0.1.0
	 */
	LinearPolar2D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a linear, spherical domain.
 * 
 * @since 0.1.0
 */
class LinearSpherical3D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	LinearSpherical3D_Cell_t    *cell;
public:
	LinearSpherical3D_Cell(LinearSpherical3D_Cell_t &initial_cell);
	
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
	 * Get a reference to the ViennaGrid cell.
	 * 
	 * @since 0.1.0
	 */
	LinearSpherical3D_Cell_t & get_cell();
};

#endif
