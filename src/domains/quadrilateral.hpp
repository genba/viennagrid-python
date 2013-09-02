/**
 * @file
 * @brief Class definitions for domains of quadrilaterals.
 */

#ifndef DOMAINS_QUADRILATERAL_HPP
#define DOMAINS_QUADRILATERAL_HPP

#include "types.hpp"
#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../vertices/quadrilateral.hpp"
#include "../segmentations/quadrilateral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

#include <string>

/**
 * Domain of lines in the cartesian 2D space.
 * 
 * @since 0.1.0
 */
class QuadrilateralCartesian2D_Domain {
	/**
	 * ViennaGrid domain object.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Domain_t    domain;
public:
	QuadrilateralCartesian2D_Domain() {};
	
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
	QuadrilateralCartesian2D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	QuadrilateralCartesian2D_Segmentation read_netgen(std::string const &filename);
	QuadrilateralCartesian2D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, QuadrilateralCartesian2D_Segmentation *segmentation = NULL);
	
	/**
	 * Get a reference to the ViennaGrid domain object.
	 * 
	 * @return Reference to the ViennaGrid domain object.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian2D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(QuadrilateralCartesian2D_Domain_overloads, QuadrilateralCartesian2D_Domain::write_vtk, 1, 2)

/**
 * Domain of lines in the cartesian 3D space.
 * 
 * @since 0.1.0
 */
class QuadrilateralCartesian3D_Domain {
	/**
	 * ViennaGrid domain object.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Domain_t     domain;
public:
	QuadrilateralCartesian3D_Domain() {};
	
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
	QuadrilateralCartesian3D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	QuadrilateralCartesian3D_Segmentation read_netgen(std::string const &filename);
	QuadrilateralCartesian3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, QuadrilateralCartesian3D_Segmentation *segmentation = NULL);
	
	/**
	 * Get a reference to the ViennaGrid domain object.
	 * 
	 * @return Reference to the ViennaGrid domain object.
	 * @since 0.1.0
	 */
	QuadrilateralCartesian3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(QuadrilateralCartesian3D_Domain_overloads, QuadrilateralCartesian3D_Domain::write_vtk, 1, 2)

/**
 * Domain of lines in the cylindrical space.
 * 
 * @since 0.1.0
 */
class QuadrilateralCylindrical3D_Domain {
	/**
	 * ViennaGrid domain object.
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Domain_t     domain;
public:
	QuadrilateralCylindrical3D_Domain() {};
	
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
	QuadrilateralCylindrical3D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	QuadrilateralCylindrical3D_Segmentation read_netgen(std::string const &filename);
	QuadrilateralCylindrical3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, QuadrilateralCylindrical3D_Segmentation *segmentation = NULL);
	
	/**
	 * Get a reference to the ViennaGrid domain object.
	 * 
	 * @return Reference to the ViennaGrid domain object.
	 * @since 0.1.0
	 */
	QuadrilateralCylindrical3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(QuadrilateralCylindrical3D_Domain_overloads, QuadrilateralCylindrical3D_Domain::write_vtk, 1, 2)

/**
 * Domain of lines in the polar space.
 * 
 * @since 0.1.0
 */
class QuadrilateralPolar2D_Domain {
	/**
	 * ViennaGrid domain object.
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Domain_t     domain;
public:
	QuadrilateralPolar2D_Domain() {};
	
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
	QuadrilateralPolar2D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	QuadrilateralPolar2D_Segmentation read_netgen(std::string const &filename);
	QuadrilateralPolar2D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, QuadrilateralPolar2D_Segmentation *segmentation = NULL);
	
	/**
	 * Get a reference to the ViennaGrid domain object.
	 * 
	 * @return Reference to the ViennaGrid domain object.
	 * @since 0.1.0
	 */
	QuadrilateralPolar2D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(QuadrilateralPolar2D_Domain_overloads, QuadrilateralPolar2D_Domain::write_vtk, 1, 2)

/**
 * Domain of lines in the spherical space.
 * 
 * @since 0.1.0
 */
class QuadrilateralSpherical3D_Domain {
	/**
	 * ViennaGrid domain object.
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Domain_t     domain;
public:
	QuadrilateralSpherical3D_Domain() {};
	
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
	QuadrilateralSpherical3D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	QuadrilateralSpherical3D_Segmentation read_netgen(std::string const &filename);
	QuadrilateralSpherical3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, QuadrilateralSpherical3D_Segmentation *segmentation = NULL);
	
	/**
	 * Get a reference to the ViennaGrid domain object.
	 * 
	 * @return Reference to the ViennaGrid domain object.
	 * @since 0.1.0
	 */
	QuadrilateralSpherical3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(QuadrilateralSpherical3D_Domain_overloads, QuadrilateralSpherical3D_Domain::write_vtk, 1, 2)

#endif /* end of include guard: DOMAINS_QUADRILATERAL_HPP */
