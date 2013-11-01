/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Class definitions for triangular fields.
 */

#ifndef FIELDS_TRIANGULAR_HPP
#define FIELDS_TRIANGULAR_HPP

#include "types.hpp"

#include "../vertices/triangular.hpp"
#include "../cells/triangular.hpp"

/*****************
 * VERTEX FIELDS *
 *****************/

/**
 * Field for triangular cartesian 2D vertices.
 * @since 0.1.0
 */
class TriangularCartesian2D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	TriangularCartesian2D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Vertex_Field_t    *field;
public:
	TriangularCartesian2D_Vertex_Field(double default_value);
	~TriangularCartesian2D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(TriangularCartesian2D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(TriangularCartesian2D_Vertex &vertex, double new_value);
	
	TriangularCartesian2D_Vertex_Field_t & get_field();
};

/**
 * Field for triangular cartesian 3D vertices.
 * @since 0.1.0
 */
class TriangularCartesian3D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	TriangularCartesian3D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Vertex_Field_t    *field;
public:
	TriangularCartesian3D_Vertex_Field(double default_value);
	~TriangularCartesian3D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(TriangularCartesian3D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(TriangularCartesian3D_Vertex &vertex, double new_value);
	
	TriangularCartesian3D_Vertex_Field_t & get_field();
};

/**
 * Field for triangular cylindrical vertices.
 * @since 0.1.0
 */
class TriangularCylindrical3D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Vertex_Field_t    *field;
public:
	TriangularCylindrical3D_Vertex_Field(double default_value);
	~TriangularCylindrical3D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(TriangularCylindrical3D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(TriangularCylindrical3D_Vertex &vertex, double new_value);
	
	TriangularCylindrical3D_Vertex_Field_t & get_field();
};

/**
 * Field for triangular polar vertices.
 * @since 0.1.0
 */
class TriangularPolar2D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	TriangularPolar2D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	TriangularPolar2D_Vertex_Field_t    *field;
public:
	TriangularPolar2D_Vertex_Field(double default_value);
	~TriangularPolar2D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(TriangularPolar2D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(TriangularPolar2D_Vertex &vertex, double new_value);
	
	TriangularPolar2D_Vertex_Field_t & get_field();
};

/**
 * Field for triangular spherical vertices.
 * @since 0.1.0
 */
class TriangularSpherical3D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	TriangularSpherical3D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Vertex_Field_t    *field;
public:
	TriangularSpherical3D_Vertex_Field(double default_value);
	~TriangularSpherical3D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(TriangularSpherical3D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(TriangularSpherical3D_Vertex &vertex, double new_value);
	
	TriangularSpherical3D_Vertex_Field_t & get_field();
};

/***************
 * CELL FIELDS *
 ***************/

/**
 * Field for triangular cartesian 2D cells.
 * @since 0.1.0
 */
class TriangularCartesian2D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	TriangularCartesian2D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Cell_Field_t    *field;
public:
	TriangularCartesian2D_Cell_Field(double default_value);
	~TriangularCartesian2D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(TriangularCartesian2D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(TriangularCartesian2D_Cell &cell, double new_value);
	
	TriangularCartesian2D_Cell_Field_t & get_field();
};

/**
 * Field for triangular cartesian 3D cells.
 * @since 0.1.0
 */
class TriangularCartesian3D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	TriangularCartesian3D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Cell_Field_t    *field;
public:
	TriangularCartesian3D_Cell_Field(double default_value);
	~TriangularCartesian3D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(TriangularCartesian3D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(TriangularCartesian3D_Cell &cell, double new_value);
	
	TriangularCartesian3D_Cell_Field_t & get_field();
};

/**
 * Field for triangular cylindrical cells.
 * @since 0.1.0
 */
class TriangularCylindrical3D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Cell_Field_t    *field;
public:
	TriangularCylindrical3D_Cell_Field(double default_value);
	~TriangularCylindrical3D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(TriangularCylindrical3D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(TriangularCylindrical3D_Cell &cell, double new_value);
	
	TriangularCylindrical3D_Cell_Field_t & get_field();
};

/**
 * Field for triangular polar cells.
 * @since 0.1.0
 */
class TriangularPolar2D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	TriangularPolar2D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	TriangularPolar2D_Cell_Field_t    *field;
public:
	TriangularPolar2D_Cell_Field(double default_value);
	~TriangularPolar2D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(TriangularPolar2D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(TriangularPolar2D_Cell &cell, double new_value);
	
	TriangularPolar2D_Cell_Field_t & get_field();
};

/**
 * Field for triangular spherical cells.
 * @since 0.1.0
 */
class TriangularSpherical3D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	TriangularSpherical3D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Cell_Field_t    *field;
public:
	TriangularSpherical3D_Cell_Field(double default_value);
	~TriangularSpherical3D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(TriangularSpherical3D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(TriangularSpherical3D_Cell &cell, double new_value);
	
	TriangularSpherical3D_Cell_Field_t & get_field();
};

#endif /* end of include guard: FIELDS_TRIANGULAR_HPP */
