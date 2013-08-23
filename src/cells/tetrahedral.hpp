/**
 * @file
 * @brief Class definitions for cells of tetrahedral domains.
 */

#ifndef CELLS_TETRAHEDRAL_HPP
#define CELLS_TETRAHEDRAL_HPP

#include "types.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**
 * Wrapped cell of a tetrahedral, cartesian 3D domain.
 * 
 * @since 0.1.0
 */
class TetrahedralCartesian3D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Cell_t *cell;
public:
	TetrahedralCartesian3D_Cell(TetrahedralCartesian3D_Cell_t &initial_cell);
	
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
	TetrahedralCartesian3D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a tetrahedral, cylindrical 3D domain.
 * 
 * @since 0.1.0
 */
class TetrahedralCylindrical3D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Cell_t *cell;
public:
	TetrahedralCylindrical3D_Cell(TetrahedralCylindrical3D_Cell_t &initial_cell);
	
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
	TetrahedralCylindrical3D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a tetrahedral, spherical 3D domain.
 * 
 * @since 0.1.0
 */
class TetrahedralSpherical3D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Cell_t *cell;
public:
	TetrahedralSpherical3D_Cell(TetrahedralSpherical3D_Cell_t &initial_cell);
	
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
	TetrahedralSpherical3D_Cell_t & get_cell();
};

#endif
