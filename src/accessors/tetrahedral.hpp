/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Class definitions for tetrahedral accessors.
 */

#ifndef ACCESSORS_TETRAHEDRAL_HPP
#define ACCESSORS_TETRAHEDRAL_HPP

#include "types.hpp"

#include "../vertices/tetrahedral.hpp"
#include "../cells/tetrahedral.hpp"

/********************
 * VERTEX ACCESSORS *
 ********************/

/**
 * Accessor for tetrahedral cartesian 3D vertices.
 * @since 0.1.0
 */
class TetrahedralCartesian3D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                     container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Vertex_Accessor_t    *accessor;
public:
	TetrahedralCartesian3D_Vertex_Accessor();
	~TetrahedralCartesian3D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(TetrahedralCartesian3D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(TetrahedralCartesian3D_Vertex &vertex, double new_value);
	
	TetrahedralCartesian3D_Vertex_Accessor_t get_accessor();
};

/**
 * Accessor for tetrahedral cylindrical vertices.
 * @since 0.1.0
 */
class TetrahedralCylindrical3D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                      container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Vertex_Accessor_t    *accessor;
public:
	TetrahedralCylindrical3D_Vertex_Accessor();
	~TetrahedralCylindrical3D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(TetrahedralCylindrical3D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(TetrahedralCylindrical3D_Vertex &vertex, double new_value);
	
	TetrahedralCylindrical3D_Vertex_Accessor_t get_accessor();
};

/**
 * Accessor for tetrahedral spherical vertices.
 * @since 0.1.0
 */
class TetrahedralSpherical3D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                     container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Vertex_Accessor_t    *accessor;
public:
	TetrahedralSpherical3D_Vertex_Accessor();
	~TetrahedralSpherical3D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(TetrahedralSpherical3D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(TetrahedralSpherical3D_Vertex &vertex, double new_value);
	
	TetrahedralSpherical3D_Vertex_Accessor_t get_accessor();
};

/******************
 * CELL ACCESSORS *
 ******************/

/**
 * Accessor for tetrahedral cartesian 3D cells.
 * @since 0.1.0
 */
class TetrahedralCartesian3D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t                   container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Cell_Accessor_t    *accessor;
public:
	TetrahedralCartesian3D_Cell_Accessor();
	~TetrahedralCartesian3D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(TetrahedralCartesian3D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(TetrahedralCartesian3D_Cell &cell, double new_value);
	
	TetrahedralCartesian3D_Cell_Accessor_t get_accessor();
};

/**
 * Accessor for tetrahedral cylindrical cells.
 * @since 0.1.0
 */
class TetrahedralCylindrical3D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t                    container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Cell_Accessor_t    *accessor;
public:
	TetrahedralCylindrical3D_Cell_Accessor();
	~TetrahedralCylindrical3D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(TetrahedralCylindrical3D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(TetrahedralCylindrical3D_Cell &cell, double new_value);
	
	TetrahedralCylindrical3D_Cell_Accessor_t get_accessor();
};

/**
 * Accessor for tetrahedral spherical cells.
 * @since 0.1.0
 */
class TetrahedralSpherical3D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t                   container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Cell_Accessor_t    *accessor;
public:
	TetrahedralSpherical3D_Cell_Accessor();
	~TetrahedralSpherical3D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(TetrahedralSpherical3D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(TetrahedralSpherical3D_Cell &cell, double new_value);
	
	TetrahedralSpherical3D_Cell_Accessor_t get_accessor();
};

#endif /* end of include guard: ACCESSORS_TETRAHEDRAL_HPP */
