/**
 * @file
 * @brief Class definitions for quadrilateral accessors.
 */

#ifndef ACCESSORS_QUADRILATERAL_HPP
#define ACCESSORS_QUADRILATERAL_HPP

#include "types.hpp"

#include "../vertices/quadrilateral.hpp"
#include "../cells/quadrilateral.hpp"

/********************
 * VERTEX ACCESSORS *
 ********************/

/**
 * Accessor for quadrilateral cartesian 2D vertices.
 * @since 0.1.0
 */
class QuadrilateralCartesian2D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                     container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Vertex_Accessor_t    *accessor;
public:
	QuadrilateralCartesian2D_Vertex_Accessor();
	~QuadrilateralCartesian2D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
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
	
	QuadrilateralCartesian2D_Vertex_Accessor_t get_accessor();
};

/**
 * Accessor for quadrilateral cartesian 3D vertices.
 * @since 0.1.0
 */
class QuadrilateralCartesian3D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                     container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Vertex_Accessor_t    *accessor;
public:
	QuadrilateralCartesian3D_Vertex_Accessor();
	~QuadrilateralCartesian3D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
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
	
	QuadrilateralCartesian3D_Vertex_Accessor_t get_accessor();
};

/**
 * Accessor for quadrilateral cylindrical vertices.
 * @since 0.1.0
 */
class QuadrilateralCylindrical3D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                      container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Vertex_Accessor_t    *accessor;
public:
	QuadrilateralCylindrical3D_Vertex_Accessor();
	~QuadrilateralCylindrical3D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
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
	
	QuadrilateralCylindrical3D_Vertex_Accessor_t get_accessor();
};

/**
 * Accessor for quadrilateral polar vertices.
 * @since 0.1.0
 */
class QuadrilateralPolar2D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                 container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Vertex_Accessor_t    *accessor;
public:
	QuadrilateralPolar2D_Vertex_Accessor();
	~QuadrilateralPolar2D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
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
	
	QuadrilateralPolar2D_Vertex_Accessor_t get_accessor();
};

/**
 * Accessor for quadrilateral spherical vertices.
 * @since 0.1.0
 */
class QuadrilateralSpherical3D_Vertex_Accessor {
	/**
	 * Container where the accessor will store the data associated with each vertex.
	 * @since 0.1.0
	 */
	AccessorContainer_t                     container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Vertex_Accessor_t    *accessor;
public:
	QuadrilateralSpherical3D_Vertex_Accessor();
	~QuadrilateralSpherical3D_Vertex_Accessor();
	
	/**
	 * Retrieve from the accessor the value corresponding to the given vertex.
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
	
	QuadrilateralSpherical3D_Vertex_Accessor_t get_accessor();
};

/******************
 * CELL ACCESSORS *
 ******************/

/**
 * Accessor for quadrilateral cartesian 2D cells.
 * @since 0.1.0
 */
class QuadrilateralCartesian2D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t                   container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Cell_Accessor_t    *accessor;
public:
	QuadrilateralCartesian2D_Cell_Accessor();
	~QuadrilateralCartesian2D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
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
	
	QuadrilateralCartesian2D_Cell_Accessor_t get_accessor();
};

/**
 * Accessor for quadrilateral cartesian 3D cells.
 * @since 0.1.0
 */
class QuadrilateralCartesian3D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t                   container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Cell_Accessor_t    *accessor;
public:
	QuadrilateralCartesian3D_Cell_Accessor();
	~QuadrilateralCartesian3D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
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
	
	QuadrilateralCartesian3D_Cell_Accessor_t get_accessor();
};

/**
 * Accessor for quadrilateral cylindrical cells.
 * @since 0.1.0
 */
class QuadrilateralCylindrical3D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t                    container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Cell_Accessor_t    *accessor;
public:
	QuadrilateralCylindrical3D_Cell_Accessor();
	~QuadrilateralCylindrical3D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
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
	
	QuadrilateralCylindrical3D_Cell_Accessor_t get_accessor();
};

/**
 * Accessor for quadrilateral polar cells.
 * @since 0.1.0
 */
class QuadrilateralPolar2D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t               container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Cell_Accessor_t    *accessor;
public:
	QuadrilateralPolar2D_Cell_Accessor();
	~QuadrilateralPolar2D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
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
	
	QuadrilateralPolar2D_Cell_Accessor_t get_accessor();
};

/**
 * Accessor for quadrilateral spherical cells.
 * @since 0.1.0
 */
class QuadrilateralSpherical3D_Cell_Accessor {
	/**
	 * Container where the accessor will store the data associated with each cell.
	 * @since 0.1.0
	 */
	AccessorContainer_t                   container;
	
	/**
	 * Pointer to the ViennaGrid accessor.
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Cell_Accessor_t    *accessor;
public:
	QuadrilateralSpherical3D_Cell_Accessor();
	~QuadrilateralSpherical3D_Cell_Accessor();
	
	/**
	 * Retrieve from the accessor the value correspponding to the given cell.
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
	
	QuadrilateralSpherical3D_Cell_Accessor_t get_accessor();
};

#endif /* end of include guard: ACCESSORS_QUADRILATERAL_HPP */
