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
 */
class TetrahedralCartesian3D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 */
	TetrahedralCartesian3D_Cell_t *cell;
public:
	TetrahedralCartesian3D_Cell(TetrahedralCartesian3D_Cell_t &initial_cell);
	
	/**
	 * Return the number of vertices that form the cell.
	 *
	 * @return unsigned integer
	 */
	unsigned int num_vertices();
	
	/**
	 * Get a Python list containing all the vertices that form the cell.
	 *
	 * @return Python list
	 */
	list get_vertices();
	
	/**
	 * Get a reference to the ViennaGrid cell.
	 */
	TetrahedralCartesian3D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a tetrahedral, cylindrical 3D domain.
 */
class TetrahedralCylindrical3D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 */
	TetrahedralCylindrical3D_Cell_t *cell;
public:
	TetrahedralCylindrical3D_Cell(TetrahedralCylindrical3D_Cell_t &initial_cell);
	
	/**
	 * Return the number of vertices that form the cell.
	 *
	 * @return unsigned integer
	 */
	unsigned int num_vertices();
	
	/**
	 * Get a Python list containing all the vertices that form the cell.
	 *
	 * @return Python list
	 */
	list get_vertices();
	
	/**
	 * Get a reference to the ViennaGrid cell.
	 */
	TetrahedralCylindrical3D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a tetrahedral, spherical 3D domain.
 */
class TetrahedralSpherical3D_Cell {
	/**
	 * Pointer to the ViennaGrid cell type.
	 */
	TetrahedralSpherical3D_Cell_t *cell;
public:
	TetrahedralSpherical3D_Cell(TetrahedralSpherical3D_Cell_t &initial_cell);
	
	/**
	 * Return the number of vertices that form the cell.
	 *
	 * @return unsigned integer
	 */
	unsigned int num_vertices();
	
	/**
	 * Get a Python list containing all the vertices that form the cell.
	 *
	 * @return Python list
	 */
	list get_vertices();
	
	/**
	 * Get a reference to the ViennaGrid cell.
	 */
	TetrahedralSpherical3D_Cell_t & get_cell();
};

#endif
