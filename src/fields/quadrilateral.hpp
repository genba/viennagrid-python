/**
 * @file
 * @brief Class definitions for quadrilateral fields.
 */

#ifndef FIELDS_QUADRILATERAL_HPP
#define FIELDS_QUADRILATERAL_HPP

#include "types.hpp"

#include "../vertices/quadrilateral.hpp"
#include "../cells/quadrilateral.hpp"

/*****************
 * VERTEX FIELDS *
 *****************/

/**
 * Field for quadrilateral cartesian 2D vertices.
 * @since 0.1.0
 */
class QuadrilateralCartesian2D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Vertex_Field_t    *field;
public:
	QuadrilateralCartesian2D_Vertex_Field(double default_value);
	~QuadrilateralCartesian2D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(QuadrilateralCartesian2D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(QuadrilateralCartesian2D_Vertex &vertex, double new_value);
	
	QuadrilateralCartesian2D_Vertex_Field_t & get_field();
};

/**
 * Field for quadrilateral cartesian 3D vertices.
 * @since 0.1.0
 */
class QuadrilateralCartesian3D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Vertex_Field_t    *field;
public:
	QuadrilateralCartesian3D_Vertex_Field(double default_value);
	~QuadrilateralCartesian3D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(QuadrilateralCartesian3D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(QuadrilateralCartesian3D_Vertex &vertex, double new_value);
	
	QuadrilateralCartesian3D_Vertex_Field_t & get_field();
};

/**
 * Field for quadrilateral cylindrical vertices.
 * @since 0.1.0
 */
class QuadrilateralCylindrical3D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Vertex_Field_t    *field;
public:
	QuadrilateralCylindrical3D_Vertex_Field(double default_value);
	~QuadrilateralCylindrical3D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(QuadrilateralCylindrical3D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(QuadrilateralCylindrical3D_Vertex &vertex, double new_value);
	
	QuadrilateralCylindrical3D_Vertex_Field_t & get_field();
};

/**
 * Field for quadrilateral polar vertices.
 * @since 0.1.0
 */
class QuadrilateralPolar2D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Vertex_Field_t    *field;
public:
	QuadrilateralPolar2D_Vertex_Field(double default_value);
	~QuadrilateralPolar2D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(QuadrilateralPolar2D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(QuadrilateralPolar2D_Vertex &vertex, double new_value);
	
	QuadrilateralPolar2D_Vertex_Field_t & get_field();
};

/**
 * Field for quadrilateral spherical vertices.
 * @since 0.1.0
 */
class QuadrilateralSpherical3D_Vertex_Field {
	/**
	 * Container where the field will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_VertexField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Vertex_Field_t    *field;
public:
	QuadrilateralSpherical3D_Vertex_Field(double default_value);
	~QuadrilateralSpherical3D_Vertex_Field();
	
	/**
	 * Retrieve from the field the value corresponding to the given vertex.
	 * 
	 * @param vertex
	 * @return double
	 * 
	 * @since 0.1.0
	 */
	double get_value(QuadrilateralSpherical3D_Vertex &vertex);
	
	/**
	 * Set the value corresponding to the given vertex.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(QuadrilateralSpherical3D_Vertex &vertex, double new_value);
	
	QuadrilateralSpherical3D_Vertex_Field_t & get_field();
};

/***************
 * CELL FIELDS *
 ***************/

/**
 * Field for quadrilateral cartesian 2D cells.
 * @since 0.1.0
 */
class QuadrilateralCartesian2D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Cell_Field_t    *field;
public:
	QuadrilateralCartesian2D_Cell_Field(double default_value);
	~QuadrilateralCartesian2D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(QuadrilateralCartesian2D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(QuadrilateralCartesian2D_Cell &cell, double new_value);
	
	QuadrilateralCartesian2D_Cell_Field_t & get_field();
};

/**
 * Field for quadrilateral cartesian 3D cells.
 * @since 0.1.0
 */
class QuadrilateralCartesian3D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Cell_Field_t    *field;
public:
	QuadrilateralCartesian3D_Cell_Field(double default_value);
	~QuadrilateralCartesian3D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(QuadrilateralCartesian3D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(QuadrilateralCartesian3D_Cell &cell, double new_value);
	
	QuadrilateralCartesian3D_Cell_Field_t & get_field();
};

/**
 * Field for quadrilateral cylindrical cells.
 * @since 0.1.0
 */
class QuadrilateralCylindrical3D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Cell_Field_t    *field;
public:
	QuadrilateralCylindrical3D_Cell_Field(double default_value);
	~QuadrilateralCylindrical3D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(QuadrilateralCylindrical3D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(QuadrilateralCylindrical3D_Cell &cell, double new_value);
	
	QuadrilateralCylindrical3D_Cell_Field_t & get_field();
};

/**
 * Field for quadrilateral polar cells.
 * @since 0.1.0
 */
class QuadrilateralPolar2D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Cell_Field_t    *field;
public:
	QuadrilateralPolar2D_Cell_Field(double default_value);
	~QuadrilateralPolar2D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(QuadrilateralPolar2D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(QuadrilateralPolar2D_Cell &cell, double new_value);
	
	QuadrilateralPolar2D_Cell_Field_t & get_field();
};

/**
 * Field for quadrilateral spherical cells.
 * @since 0.1.0
 */
class QuadrilateralSpherical3D_Cell_Field {
	/**
	 * Container where the field will store the data associated with each cell.
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_CellField_Container_t    container;
	
	/**
	 * Pointer to the ViennaGrid field.
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Cell_Field_t    *field;
public:
	QuadrilateralSpherical3D_Cell_Field(double default_value);
	~QuadrilateralSpherical3D_Cell_Field();
	
	/**
	 * Retrieve from the field the value correspponding to the given cell.
	 * 
	 * @param cell
	 * @return the value associated to the cell
	 * 
	 * @since 0.1.0
	 */
	double get_value(QuadrilateralSpherical3D_Cell &cell);
	
	/**
	 * Set the value corresponding to the given cell.
	 * 
	 * @param cell
	 * @param new_value
	 * 
	 * @since 0.1.0
	 */
	void set_value(QuadrilateralSpherical3D_Cell &cell, double new_value);
	
	QuadrilateralSpherical3D_Cell_Field_t & get_field();
};

#endif /* end of include guard: FIELDS_QUADRILATERAL_HPP */
