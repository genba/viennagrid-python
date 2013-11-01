/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Class definitions for domains of triangles.
 */

#ifndef DOMAINS_TRIANGULAR_HPP
#define DOMAINS_TRIANGULAR_HPP

#include "types.hpp"
#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../vertices/triangular.hpp"
#include "../cells/triangular.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**
 * Domain of lines in the cartesian 2D space.
 * 
 * @since 0.1.0
 */
class TriangularCartesian2D_Domain {
	/**
	 * ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Domain_t    domain;
public:
	TriangularCartesian2D_Domain() {};
	
	/**
	 * Return the number of vertices contained in the domain.
	 * 
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_vertices();
	
	/**
	 * Create a new vertex in the domain based on the given point.
	 * 
	 * @param point Point that represents the vertex. The point object will be copied.
	 * 
	 * @since 0.1.0
	 */
	void make_vertex(PointCartesian2D point);
	
	/**
	 * Return the vertex identified by the given index.
	 * 
	 * @param index Numerical vertex ID as assigned by ViennaGrid on vertex creation.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	/**
	 * Return the number of cells contained in the segment.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_cells();
	
	/**
	 * Create a new cell in the segment.
	 *
	 * @param vertex1
	 * @param vertex2
	 * @param vertex3
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Cell make_cell(TriangularCartesian2D_Vertex vertex1, TriangularCartesian2D_Vertex vertex2, TriangularCartesian2D_Vertex vertex3);
	
	/**
	 * Return a Python list containing all the cells contained in the segment.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_cells();
	
	/**
	 * Get a reference to the ViennaGrid domain object.
	 * 
	 * @return Reference to the ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Domain_t & get_domain();
};

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

/**
 * Domain of lines in the cartesian 3D space.
 * 
 * @since 0.1.0
 */
class TriangularCartesian3D_Domain {
	/**
	 * ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Domain_t    domain;
public:
	TriangularCartesian3D_Domain() {};
	
	/**
	 * Return the number of vertices contained in the domain.
	 * 
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_vertices();
	
	/**
	 * Create a new vertex in the domain based on the given point.
	 * 
	 * @param point Point that represents the vertex. The point object will be copied.
	 * 
	 * @since 0.1.0
	 */
	void make_vertex(PointCartesian3D point);
	
	/**
	 * Return the vertex identified by the given index.
	 * 
	 * @param index Numerical vertex ID as assigned by ViennaGrid on vertex creation.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	/**
	 * Return the number of cells contained in the segment.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_cells();
	
	/**
	 * Create a new cell in the segment.
	 *
	 * @param vertex1
	 * @param vertex2
	 * @param vertex3
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Cell make_cell(TriangularCartesian3D_Vertex vertex1, TriangularCartesian3D_Vertex vertex2, TriangularCartesian3D_Vertex vertex3);
	
	/**
	 * Return a Python list containing all the cells contained in the segment.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_cells();
	
	/**
	 * Get a reference to the ViennaGrid domain object.
	 * 
	 * @return Reference to the ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Domain_t & get_domain();
};

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

/**
 * Domain of lines in the cylindrical space.
 * 
 * @since 0.1.0
 */
class TriangularCylindrical3D_Domain {
	/**
	 * ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Domain_t    domain;
public:
	TriangularCylindrical3D_Domain() {};
	
	/**
	 * Return the number of vertices contained in the domain.
	 * 
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_vertices();
	
	/**
	 * Create a new vertex in the domain based on the given point.
	 * 
	 * @param point Point that represents the vertex. The point object will be copied.
	 * 
	 * @since 0.1.0
	 */
	void make_vertex(PointCylindrical3D point);
	
	/**
	 * Return the vertex identified by the given index.
	 * 
	 * @param index Numerical vertex ID as assigned by ViennaGrid on vertex creation.
	 * 
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	/**
	 * Return the number of cells contained in the segment.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_cells();
	
	/**
	 * Create a new cell in the segment.
	 *
	 * @param vertex1
	 * @param vertex2
	 * @param vertex3
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Cell make_cell(TriangularCylindrical3D_Vertex vertex1, TriangularCylindrical3D_Vertex vertex2, TriangularCylindrical3D_Vertex vertex3);
	
	/**
	 * Return a Python list containing all the cells contained in the segment.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_cells();
	
	/**
	 * Get a reference to the ViennaGrid domain object.
	 * 
	 * @return Reference to the ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Domain_t & get_domain();
};

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

/**
 * Domain of lines in the polar space.
 * 
 * @since 0.1.0
 */
class TriangularPolar2D_Domain {
	/**
	 * ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TriangularPolar2D_Domain_t    domain;
public:
	TriangularPolar2D_Domain() {};
	
	/**
	 * Return the number of vertices contained in the domain.
	 * 
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_vertices();
	
	/**
	 * Create a new vertex in the domain based on the given point.
	 * 
	 * @param point Point that represents the vertex. The point object will be copied.
	 * 
	 * @since 0.1.0
	 */
	void make_vertex(PointPolar2D point);
	
	/**
	 * Return the vertex identified by the given index.
	 * 
	 * @param index Numerical vertex ID as assigned by ViennaGrid on vertex creation.
	 * 
	 * @since 0.1.0
	 */
	TriangularPolar2D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	/**
	 * Return the number of cells contained in the segment.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_cells();
	
	/**
	 * Create a new cell in the segment.
	 *
	 * @param vertex1
	 * @param vertex2
	 * @param vertex3
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	TriangularPolar2D_Cell make_cell(TriangularPolar2D_Vertex vertex1, TriangularPolar2D_Vertex vertex2, TriangularPolar2D_Vertex vertex3);
	
	/**
	 * Return a Python list containing all the cells contained in the segment.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_cells();
	
	/**
	 * Get a reference to the ViennaGrid domain object.
	 * 
	 * @return Reference to the ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TriangularPolar2D_Domain_t & get_domain();
};

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

/**
 * Domain of lines in the spherical space.
 * 
 * @since 0.1.0
 */
class TriangularSpherical3D_Domain {
	/**
	 * ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Domain_t    domain;
public:
	TriangularSpherical3D_Domain() {};
	
	/**
	 * Return the number of vertices contained in the domain.
	 * 
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_vertices();
	
	/**
	 * Create a new vertex in the domain based on the given point.
	 * 
	 * @param point Point that represents the vertex. The point object will be copied.
	 * 
	 * @since 0.1.0
	 */
	void make_vertex(PointSpherical3D point);
	
	/**
	 * Return the vertex identified by the given index.
	 * 
	 * @param index Numerical vertex ID as assigned by ViennaGrid on vertex creation.
	 * 
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	/**
	 * Return the number of cells contained in the segment.
	 *
	 * @return unsigned integer
	 * 
	 * @since 0.1.0
	 */
	unsigned int num_cells();
	
	/**
	 * Create a new cell in the segment.
	 *
	 * @param vertex1
	 * @param vertex2
	 * @param vertex3
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Cell make_cell(TriangularSpherical3D_Vertex vertex1, TriangularSpherical3D_Vertex vertex2, TriangularSpherical3D_Vertex vertex3);
	
	/**
	 * Return a Python list containing all the cells contained in the segment.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_cells();
	
	/**
	 * Get a reference to the ViennaGrid domain object.
	 * 
	 * @return Reference to the ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Domain_t & get_domain();
};

#endif /* end of include guard: DOMAINS_TRIANGULAR_HPP */
