/**
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
#include "../segmentations/triangular.hpp"

#include <boost/python.hpp>
using namespace boost::python;

#include <string>

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
	
	TriangularCartesian2D_Segmentation read_netgen(std::string const &filename);
	TriangularCartesian2D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, TriangularCartesian2D_Segmentation *segmentation = NULL);
	
	/**
	 * Get a reference to the ViennaGrid domain object.
	 * 
	 * @return Reference to the ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TriangularCartesian2D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(TriangularCartesian2D_Domain_overloads, TriangularCartesian2D_Domain::write_vtk, 1, 2)

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
	
	TriangularCartesian3D_Segmentation read_netgen(std::string const &filename);
	TriangularCartesian3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, TriangularCartesian3D_Segmentation *segmentation = NULL);
	
	/**
	 * Get a reference to the ViennaGrid domain object.
	 * 
	 * @return Reference to the ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TriangularCartesian3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(TriangularCartesian3D_Domain_overloads, TriangularCartesian3D_Domain::write_vtk, 1, 2)

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
	
	TriangularCylindrical3D_Segmentation read_netgen(std::string const &filename);
	TriangularCylindrical3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, TriangularCylindrical3D_Segmentation *segmentation = NULL);
	
	/**
	 * Get a reference to the ViennaGrid domain object.
	 * 
	 * @return Reference to the ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TriangularCylindrical3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(TriangularCylindrical3D_Domain_overloads, TriangularCylindrical3D_Domain::write_vtk, 1, 2)

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
	
	TriangularPolar2D_Segmentation read_netgen(std::string const &filename);
	TriangularPolar2D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, TriangularPolar2D_Segmentation *segmentation = NULL);
	
	/**
	 * Get a reference to the ViennaGrid domain object.
	 * 
	 * @return Reference to the ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TriangularPolar2D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(TriangularPolar2D_Domain_overloads, TriangularPolar2D_Domain::write_vtk, 1, 2)

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
	
	TriangularSpherical3D_Segmentation read_netgen(std::string const &filename);
	TriangularSpherical3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, TriangularSpherical3D_Segmentation *segmentation = NULL);
	
	/**
	 * Get a reference to the ViennaGrid domain object.
	 * 
	 * @return Reference to the ViennaGrid domain object.
	 * @since 0.1.0
	 */
	TriangularSpherical3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(TriangularSpherical3D_Domain_overloads, TriangularSpherical3D_Domain::write_vtk, 1, 2)

#endif /* end of include guard: DOMAINS_TRIANGULAR_HPP */
