/**
 * @file
 * @brief Class definitions for linear accessors.
 */

#ifndef ACCESSORS_LINEAR_HPP
#define ACCESSORS_LINEAR_HPP

#include "types.hpp"

#include "../vertices/linear.hpp"
#include "../cells/linear.hpp"

/********************
 * VERTEX ACCESSORS *
 ********************/

/**
 * Accessor for linear cartesian 1D vertices.
 * @since 0.1.0
 */
class LinearCartesian1D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                     container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	LinearCartesian1D_Vertex_Accessor_t    *accessor;
public:
	LinearCartesian1D_Vertex_Accessor();
	~LinearCartesian1D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
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
	
	LinearCartesian1D_Vertex_Accessor_t & get_accessor();
};

/**
 * Accessor for linear cartesian 2D vertices.
 * @since 0.1.0
 */
class LinearCartesian2D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                     container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	LinearCartesian2D_Vertex_Accessor_t    *accessor;
public:
	LinearCartesian2D_Vertex_Accessor();
	~LinearCartesian2D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
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
	
	LinearCartesian2D_Vertex_Accessor_t & get_accessor();
};

/**
 * Accessor for linear cartesian 3D vertices.
 * @since 0.1.0
 */
class LinearCartesian3D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                     container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	LinearCartesian3D_Vertex_Accessor_t    *accessor;
public:
	LinearCartesian3D_Vertex_Accessor();
	~LinearCartesian3D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
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
	
	LinearCartesian3D_Vertex_Accessor_t & get_accessor();
};

/**
 * Accessor for linear cylindrical vertices.
 * @since 0.1.0
 */
class LinearCylindrical3D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                      container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Vertex_Accessor_t    *accessor;
public:
	LinearCylindrical3D_Vertex_Accessor();
	~LinearCylindrical3D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
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
	
	LinearCylindrical3D_Vertex_Accessor_t & get_accessor();
};

/**
 * Accessor for linear polar vertices.
 * @since 0.1.0
 */
class LinearPolar2D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                 container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	LinearPolar2D_Vertex_Accessor_t    *accessor;
public:
	LinearPolar2D_Vertex_Accessor();
	~LinearPolar2D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
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
	
	LinearPolar2D_Vertex_Accessor_t & get_accessor();
};

/**
 * Accessor for linear spherical vertices.
 * @since 0.1.0
 */
class LinearSpherical3D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                     container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	LinearSpherical3D_Vertex_Accessor_t    *accessor;
public:
	LinearSpherical3D_Vertex_Accessor();
	~LinearSpherical3D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
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
	
	LinearSpherical3D_Vertex_Accessor_t & get_accessor();
};

/******************
 * CELL ACCESSORS *
 ******************/

/**
 * Accessor for linear cartesian 1D cells.
 * @since 0.1.0
 */
class LinearCartesian1D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t                   container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	LinearCartesian1D_Cell_Accessor_t    *accessor;
public:
	LinearCartesian1D_Cell_Accessor();
	~LinearCartesian1D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
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
	
	LinearCartesian1D_Cell_Accessor_t & get_accessor();
};

/**
 * Accessor for linear cartesian 2D cells.
 * @since 0.1.0
 */
class LinearCartesian2D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t                   container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	LinearCartesian2D_Cell_Accessor_t    *accessor;
public:
	LinearCartesian2D_Cell_Accessor();
	~LinearCartesian2D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
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
	
	LinearCartesian2D_Cell_Accessor_t & get_accessor();
};

/**
 * Accessor for linear cartesian 3D cells.
 * @since 0.1.0
 */
class LinearCartesian3D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t                   container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	LinearCartesian3D_Cell_Accessor_t    *accessor;
public:
	LinearCartesian3D_Cell_Accessor();
	~LinearCartesian3D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
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
	
	LinearCartesian3D_Cell_Accessor_t & get_accessor();
};

/**
 * Accessor for linear cylindrical cells.
 * @since 0.1.0
 */
class LinearCylindrical3D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t                    container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	LinearCylindrical3D_Cell_Accessor_t    *accessor;
public:
	LinearCylindrical3D_Cell_Accessor();
	~LinearCylindrical3D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
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
	
	LinearCylindrical3D_Cell_Accessor_t & get_accessor();
};

/**
 * Accessor for linear polar cells.
 * @since 0.1.0
 */
class LinearPolar2D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t               container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	LinearPolar2D_Cell_Accessor_t    *accessor;
public:
	LinearPolar2D_Cell_Accessor();
	~LinearPolar2D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
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
	
	LinearPolar2D_Cell_Accessor_t & get_accessor();
};

/**
 * Accessor for linear spherical cells.
 * @since 0.1.0
 */
class LinearSpherical3D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t                   container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	LinearSpherical3D_Cell_Accessor_t    *accessor;
public:
	LinearSpherical3D_Cell_Accessor();
	~LinearSpherical3D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
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
	
	LinearSpherical3D_Cell_Accessor_t & get_accessor();
};

#endif /* end of include guard: ACCESSORS_LINEAR_HPP */
