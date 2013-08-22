/**
 * @file
 * @brief Class definitions of wrapped cells from quadrilateral domains.
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
 */
class QuadrilateralCartesian2D_Cell {
	QuadrilateralCartesian2D_Cell_t    *cell;
public:
	QuadrilateralCartesian2D_Cell(QuadrilateralCartesian2D_Cell_t &initial_cell);
	
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
	QuadrilateralCartesian2D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a quadrilateral, cartesian 3D domain.
 */
class QuadrilateralCartesian3D_Cell {
	QuadrilateralCartesian3D_Cell_t    *cell;
public:
	QuadrilateralCartesian3D_Cell(QuadrilateralCartesian3D_Cell_t &initial_cell);
	
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
	QuadrilateralCartesian3D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a quadrilateral, cylindrical 3D domain.
 */
class QuadrilateralCylindrical3D_Cell {
	QuadrilateralCylindrical3D_Cell_t    *cell;
public:
	QuadrilateralCylindrical3D_Cell(QuadrilateralCylindrical3D_Cell_t &initial_cell);
	
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
	QuadrilateralCylindrical3D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a quadrilateral, polar 2D domain.
 */
class QuadrilateralPolar2D_Cell {
	QuadrilateralPolar2D_Cell_t    *cell;
public:
	QuadrilateralPolar2D_Cell(QuadrilateralPolar2D_Cell_t &initial_cell);
	
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
	QuadrilateralPolar2D_Cell_t & get_cell();
};

/**
 * Wrapped cell of a quadrilateral, spherical 3D domain.
 */
class QuadrilateralSpherical3D_Cell {
	QuadrilateralSpherical3D_Cell_t    *cell;
public:
	QuadrilateralSpherical3D_Cell(QuadrilateralSpherical3D_Cell_t &initial_cell);
	
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
	QuadrilateralSpherical3D_Cell_t & get_cell();
};

#endif
