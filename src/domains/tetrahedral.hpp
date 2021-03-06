/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Class definitions for domains of tetrahedra.
 */

#ifndef DOMAINS_TETRAHEDRAL_HPP
#define DOMAINS_TETRAHEDRAL_HPP

#include "types.hpp"
#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../vertices/tetrahedral.hpp"
#include "../cells/tetrahedral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**
 * Domain of lines in the cartesian 3D space.
 * 
 * @since 0.1.0
 */
class TetrahedralCartesian3D_Domain {
	/**
	 * ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Domain_t     domain;
public:
	TetrahedralCartesian3D_Domain() {};
	
	/**
	 * Return the number of vertices contained in the domain.
	 * 
	 * @return unsigned integer
	 */
	unsigned int num_vertices();
	
	/**
	 * Create a new vertex in the domain based on the given point.
	 * 
	 * @param point Point that represents the vertex. The point object will be copied.
	 */
	void make_vertex(PointCartesian3D point);
	
	/**
	 * Return the vertex identified by the given index.
	 * 
	 * @param index Numerical vertex ID as assigned by ViennaGrid on vertex creation.
	 */
	TetrahedralCartesian3D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
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
	 * @param vertex4
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralCartesian3D_Cell make_cell(TetrahedralCartesian3D_Vertex vertex1, TetrahedralCartesian3D_Vertex vertex2, TetrahedralCartesian3D_Vertex vertex3, TetrahedralCartesian3D_Vertex vertex4);
	
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
	TetrahedralCartesian3D_Domain_t & get_domain();
};

/**
 * Domain of lines in the cylindrical space.
 * 
 * @since 0.1.0
 */
class TetrahedralCylindrical3D_Domain {
	/**
	 * ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Domain_t     domain;
public:
	TetrahedralCylindrical3D_Domain() {};
	
	/**
	 * Return the number of vertices contained in the domain.
	 * 
	 * @return unsigned integer
	 */
	unsigned int num_vertices();
	
	/**
	 * Create a new vertex in the domain based on the given point.
	 * 
	 * @param point Point that represents the vertex. The point object will be copied.
	 */
	void make_vertex(PointCylindrical3D point);
	
	/**
	 * Return the vertex identified by the given index.
	 * 
	 * @param index Numerical vertex ID as assigned by ViennaGrid on vertex creation.
	 */
	TetrahedralCylindrical3D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
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
	 * @param vertex4
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralCylindrical3D_Cell make_cell(TetrahedralCylindrical3D_Vertex vertex1, TetrahedralCylindrical3D_Vertex vertex2, TetrahedralCylindrical3D_Vertex vertex3, TetrahedralCylindrical3D_Vertex vertex4);
	
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
	TetrahedralCylindrical3D_Domain_t & get_domain();
};

/**
 * Domain of lines in the spherical space.
 * 
 * @since 0.1.0
 */
class TetrahedralSpherical3D_Domain {
	/**
	 * ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Domain_t     domain;
public:
	TetrahedralSpherical3D_Domain() {};
	
	/**
	 * Return the number of vertices contained in the domain.
	 * 
	 * @return unsigned integer
	 */
	unsigned int num_vertices();
	
	/**
	 * Create a new vertex in the domain based on the given point.
	 * 
	 * @param point Point that represents the vertex. The point object will be copied.
	 */
	void make_vertex(PointSpherical3D point);
	
	/**
	 * Return the vertex identified by the given index.
	 * 
	 * @param index Numerical vertex ID as assigned by ViennaGrid on vertex creation.
	 */
	TetrahedralSpherical3D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
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
	 * @param vertex4
	 *
	 * @return The newly created cell.
	 * 
	 * @since 0.1.0
	 */
	TetrahedralSpherical3D_Cell make_cell(TetrahedralSpherical3D_Vertex vertex1, TetrahedralSpherical3D_Vertex vertex2, TetrahedralSpherical3D_Vertex vertex3, TetrahedralSpherical3D_Vertex vertex4);
	
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
	TetrahedralSpherical3D_Domain_t & get_domain();
};

#endif /* end of include guard: DOMAINS_TETRAHEDRAL_HPP */
