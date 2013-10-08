/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Class definitions for triangular accessors.
 */

#ifndef ACCESSORS_TRIANGULAR_HPP
#define ACCESSORS_TRIANGULAR_HPP

#include "types.hpp"

#include "../vertices/triangular.hpp"
#include "../cells/triangular.hpp"

/********************
 * VERTEX ACCESSORS *
 ********************/

/**
 * Accessor for triangular cartesian 2D vertices.
 * @since 0.1.0
 */
class TriangularCartesian2D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                     container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Vertex_Accessor_t    *accessor;
public:
	TriangularCartesian2D_Vertex_Accessor();
	~TriangularCartesian2D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
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
	
	TriangularCartesian2D_Vertex_Accessor_t & get_accessor();
};

/**
 * Accessor for triangular cartesian 3D vertices.
 * @since 0.1.0
 */
class TriangularCartesian3D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                     container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Vertex_Accessor_t    *accessor;
public:
	TriangularCartesian3D_Vertex_Accessor();
	~TriangularCartesian3D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
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
	
	TriangularCartesian3D_Vertex_Accessor_t & get_accessor();
};

/**
 * Accessor for triangular cylindrical vertices.
 * @since 0.1.0
 */
class TriangularCylindrical3D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                      container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Vertex_Accessor_t    *accessor;
public:
	TriangularCylindrical3D_Vertex_Accessor();
	~TriangularCylindrical3D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
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
	
	TriangularCylindrical3D_Vertex_Accessor_t & get_accessor();
};

/**
 * Accessor for triangular polar vertices.
 * @since 0.1.0
 */
class TriangularPolar2D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                 container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	TriangularPolar2D_Vertex_Accessor_t    *accessor;
public:
	TriangularPolar2D_Vertex_Accessor();
	~TriangularPolar2D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
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
	
	TriangularPolar2D_Vertex_Accessor_t & get_accessor();
};

/**
 * Accessor for triangular spherical vertices.
 * @since 0.1.0
 */
class TriangularSpherical3D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                     container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Vertex_Accessor_t    *accessor;
public:
	TriangularSpherical3D_Vertex_Accessor();
	~TriangularSpherical3D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
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
	
	TriangularSpherical3D_Vertex_Accessor_t & get_accessor();
};

/******************
 * CELL ACCESSORS *
 ******************/

/**
 * Accessor for triangular cartesian 2D cells.
 * @since 0.1.0
 */
class TriangularCartesian2D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t                   container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Cell_Accessor_t    *accessor;
public:
	TriangularCartesian2D_Cell_Accessor();
	~TriangularCartesian2D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
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
	
	TriangularCartesian2D_Cell_Accessor_t & get_accessor();
};

/**
 * Accessor for triangular cartesian 3D cells.
 * @since 0.1.0
 */
class TriangularCartesian3D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t                   container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Cell_Accessor_t    *accessor;
public:
	TriangularCartesian3D_Cell_Accessor();
	~TriangularCartesian3D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
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
	
	TriangularCartesian3D_Cell_Accessor_t & get_accessor();
};

/**
 * Accessor for triangular cylindrical cells.
 * @since 0.1.0
 */
class TriangularCylindrical3D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t                    container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Cell_Accessor_t    *accessor;
public:
	TriangularCylindrical3D_Cell_Accessor();
	~TriangularCylindrical3D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
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
	
	TriangularCylindrical3D_Cell_Accessor_t & get_accessor();
};

/**
 * Accessor for triangular polar cells.
 * @since 0.1.0
 */
class TriangularPolar2D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t               container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	TriangularPolar2D_Cell_Accessor_t    *accessor;
public:
	TriangularPolar2D_Cell_Accessor();
	~TriangularPolar2D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
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
	
	TriangularPolar2D_Cell_Accessor_t & get_accessor();
};

/**
 * Accessor for triangular spherical cells.
 * @since 0.1.0
 */
class TriangularSpherical3D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t                   container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Cell_Accessor_t    *accessor;
public:
	TriangularSpherical3D_Cell_Accessor();
	~TriangularSpherical3D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
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
	
	TriangularSpherical3D_Cell_Accessor_t & get_accessor();
};

#endif /* end of include guard: ACCESSORS_TRIANGULAR_HPP */
