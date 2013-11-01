/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Class definitions for tetrahedral fields.
 */

#ifndef FIELDS_TETRAHEDRAL_HPP
#define FIELDS_TETRAHEDRAL_HPP

#include "types.hpp"

#include "../vertices/tetrahedral.hpp"
#include "../cells/tetrahedral.hpp"

/*****************
 * VERTEX FIELDS *
 *****************/

/**
 * Field for tetrahedral cartesian 3D vertices.
 * @since 0.1.0
 */
class TetrahedralCartesian3D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Vertex_Field_t    *field;
public:
	TetrahedralCartesian3D_Vertex_Field(double default_value);
	~TetrahedralCartesian3D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
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
	
	TetrahedralCartesian3D_Vertex_Field_t & get_field();
};

/**
 * Field for tetrahedral cylindrical vertices.
 * @since 0.1.0
 */
class TetrahedralCylindrical3D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Vertex_Field_t    *field;
public:
	TetrahedralCylindrical3D_Vertex_Field(double default_value);
	~TetrahedralCylindrical3D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
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
	
	TetrahedralCylindrical3D_Vertex_Field_t & get_field();
};

/**
 * Field for tetrahedral spherical vertices.
 * @since 0.1.0
 */
class TetrahedralSpherical3D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Vertex_Field_t    *field;
public:
	TetrahedralSpherical3D_Vertex_Field(double default_value);
	~TetrahedralSpherical3D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
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
	
	TetrahedralSpherical3D_Vertex_Field_t & get_field();
};

/***************
 * CELL FIELDS *
 ***************/

/**
 * Field for tetrahedral cartesian 3D cells.
 * @since 0.1.0
 */
class TetrahedralCartesian3D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Cell_Field_t    *field;
public:
	TetrahedralCartesian3D_Cell_Field(double default_value);
	~TetrahedralCartesian3D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
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
	
	TetrahedralCartesian3D_Cell_Field_t & get_field();
};

/**
 * Field for tetrahedral cylindrical cells.
 * @since 0.1.0
 */
class TetrahedralCylindrical3D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Cell_Field_t    *field;
public:
	TetrahedralCylindrical3D_Cell_Field(double default_value);
	~TetrahedralCylindrical3D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
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
	
	TetrahedralCylindrical3D_Cell_Field_t & get_field();
};

/**
 * Field for tetrahedral spherical cells.
 * @since 0.1.0
 */
class TetrahedralSpherical3D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Cell_Field_t    *field;
public:
	TetrahedralSpherical3D_Cell_Field(double default_value);
	~TetrahedralSpherical3D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
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
	
	TetrahedralSpherical3D_Cell_Field_t & get_field();
};

#endif /* end of include guard: FIELDS_TETRAHEDRAL_HPP */
