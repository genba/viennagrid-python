/**
 * @file
 * @brief Class definitions for linear fields.
 */

#ifndef FIELDS_LINEAR_HPP
#define FIELDS_LINEAR_HPP

#include "types.hpp"

#include "../vertices/linear.hpp"
#include "../cells/linear.hpp"

/*****************
 * VERTEX FIELDS *
 *****************/

/**
 * Field for linear cartesian 1D vertices.
 * @since 0.1.0
 */
class LinearCartesian1D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	LinearCartesian1D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	LinearCartesian1D_Vertex_Field_t    *field;
public:
	LinearCartesian1D_Vertex_Field(double default_value);
	~LinearCartesian1D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(LinearCartesian1D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(LinearCartesian1D_Vertex &vertex, double new_value);
	
	LinearCartesian1D_Vertex_Field_t & get_field();
};

/**
 * Field for linear cartesian 2D vertices.
 * @since 0.1.0
 */
class LinearCartesian2D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	LinearCartesian2D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	LinearCartesian2D_Vertex_Field_t    *field;
public:
	LinearCartesian2D_Vertex_Field(double default_value);
	~LinearCartesian2D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(LinearCartesian2D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(LinearCartesian2D_Vertex &vertex, double new_value);
	
	LinearCartesian2D_Vertex_Field_t & get_field();
};

/**
 * Field for linear cartesian 3D vertices.
 * @since 0.1.0
 */
class LinearCartesian3D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	LinearCartesian3D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	LinearCartesian3D_Vertex_Field_t    *field;
public:
	LinearCartesian3D_Vertex_Field(double default_value);
	~LinearCartesian3D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(LinearCartesian3D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(LinearCartesian3D_Vertex &vertex, double new_value);
	
	LinearCartesian3D_Vertex_Field_t & get_field();
};

/**
 * Field for linear cylindrical vertices.
 * @since 0.1.0
 */
class LinearCylindrical3D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	LinearCylindrical3D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Vertex_Field_t    *field;
public:
	LinearCylindrical3D_Vertex_Field(double default_value);
	~LinearCylindrical3D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(LinearCylindrical3D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(LinearCylindrical3D_Vertex &vertex, double new_value);
	
	LinearCylindrical3D_Vertex_Field_t & get_field();
};

/**
 * Field for linear polar vertices.
 * @since 0.1.0
 */
class LinearPolar2D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	LinearPolar2D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	LinearPolar2D_Vertex_Field_t    *field;
public:
	LinearPolar2D_Vertex_Field(double default_value);
	~LinearPolar2D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(LinearPolar2D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(LinearPolar2D_Vertex &vertex, double new_value);
	
	LinearPolar2D_Vertex_Field_t & get_field();
};

/**
 * Field for linear spherical vertices.
 * @since 0.1.0
 */
class LinearSpherical3D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	LinearSpherical3D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	LinearSpherical3D_Vertex_Field_t    *field;
public:
	LinearSpherical3D_Vertex_Field(double default_value);
	~LinearSpherical3D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(LinearSpherical3D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(LinearSpherical3D_Vertex &vertex, double new_value);
	
	LinearSpherical3D_Vertex_Field_t & get_field();
};

/***************
 * CELL FIELDS *
 ***************/

/**
 * Field for linear cartesian 1D cells.
 * @since 0.1.0
 */
class LinearCartesian1D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	LinearCartesian1D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	LinearCartesian1D_Cell_Field_t    *field;
public:
	LinearCartesian1D_Cell_Field(double default_value);
	~LinearCartesian1D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(LinearCartesian1D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(LinearCartesian1D_Cell &cell, double new_value);
	
	LinearCartesian1D_Cell_Field_t & get_field();
};

/**
 * Field for linear cartesian 2D cells.
 * @since 0.1.0
 */
class LinearCartesian2D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	LinearCartesian2D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	LinearCartesian2D_Cell_Field_t    *field;
public:
	LinearCartesian2D_Cell_Field(double default_value);
	~LinearCartesian2D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(LinearCartesian2D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(LinearCartesian2D_Cell &cell, double new_value);
	
	LinearCartesian2D_Cell_Field_t & get_field();
};

/**
 * Field for linear cartesian 3D cells.
 * @since 0.1.0
 */
class LinearCartesian3D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	LinearCartesian3D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	LinearCartesian3D_Cell_Field_t    *field;
public:
	LinearCartesian3D_Cell_Field(double default_value);
	~LinearCartesian3D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(LinearCartesian3D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(LinearCartesian3D_Cell &cell, double new_value);
	
	LinearCartesian3D_Cell_Field_t & get_field();
};

/**
 * Field for linear cylindrical cells.
 * @since 0.1.0
 */
class LinearCylindrical3D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	LinearCylindrical3D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Cell_Field_t    *field;
public:
	LinearCylindrical3D_Cell_Field(double default_value);
	~LinearCylindrical3D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(LinearCylindrical3D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(LinearCylindrical3D_Cell &cell, double new_value);
	
	LinearCylindrical3D_Cell_Field_t & get_field();
};

/**
 * Field for linear polar cells.
 * @since 0.1.0
 */
class LinearPolar2D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	LinearPolar2D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	LinearPolar2D_Cell_Field_t    *field;
public:
	LinearPolar2D_Cell_Field(double default_value);
	~LinearPolar2D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(LinearPolar2D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(LinearPolar2D_Cell &cell, double new_value);
	
	LinearPolar2D_Cell_Field_t & get_field();
};

/**
 * Field for linear spherical cells.
 * @since 0.1.0
 */
class LinearSpherical3D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	LinearSpherical3D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	LinearSpherical3D_Cell_Field_t    *field;
public:
	LinearSpherical3D_Cell_Field(double default_value);
	~LinearSpherical3D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(LinearSpherical3D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(LinearSpherical3D_Cell &cell, double new_value);
	
	LinearSpherical3D_Cell_Field_t & get_field();
};

#endif /* end of include guard: FIELDS_LINEAR_HPP */
