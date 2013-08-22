/**
 * @file
 * @brief Class definitions for domains of lines.
 */

#ifndef DOMAINS_LINEAR_HPP
#define DOMAINS_LINEAR_HPP

#include "types.hpp"
#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../vertices/linear.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**
 * Domain of lines in the cartesian 1D space.
 * 
 * @since 0.1.0
 */
class LinearCartesian1D_Domain {
	LinearCartesian1D_Domain_t    domain;
public:
	LinearCartesian1D_Domain() {};
	
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
	void make_vertex(PointCartesian1D point);
	
	/**
	 * Return the vertex identified by the given index.
	 * 
	 * @param index Numerical vertex ID as assigned by ViennaGrid on vertex creation.
	 * 
	 * @since 0.1.0
	 */
	LinearCartesian1D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	LinearCartesian1D_Domain_t & get_domain();
};

/**
 * Domain of lines in the cartesian 2D space.
 * 
 * @since 0.1.0
 */
class LinearCartesian2D_Domain {
	LinearCartesian2D_Domain_t    domain;
public:
	LinearCartesian2D_Domain() {};
	
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
	LinearCartesian2D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	LinearCartesian2D_Domain_t & get_domain();
};

/**
 * Domain of lines in the cartesian 3D space.
 * 
 * @since 0.1.0
 */
class LinearCartesian3D_Domain {
	LinearCartesian3D_Domain_t    domain;
public:
	LinearCartesian3D_Domain() {};
	
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
	LinearCartesian3D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	LinearCartesian3D_Domain_t & get_domain();
};

/**
 * Domain of lines in the cylindrical space.
 * 
 * @since 0.1.0
 */
class LinearCylindrical3D_Domain {
	LinearCylindrical3D_Domain_t    domain;
public:
	LinearCylindrical3D_Domain() {};
	
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
	LinearCylindrical3D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	LinearCylindrical3D_Domain_t & get_domain();
};

/**
 * Domain of lines in the polar space.
 * 
 * @since 0.1.0
 */
class LinearPolar2D_Domain {
	LinearPolar2D_Domain_t    domain;
public:
	LinearPolar2D_Domain() {};
	
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
	LinearPolar2D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	LinearPolar2D_Domain_t & get_domain();
};

/**
 * Domain of lines in the spherical space.
 * 
 * @since 0.1.0
 */
class LinearSpherical3D_Domain {
	LinearSpherical3D_Domain_t    domain;
public:
	LinearSpherical3D_Domain() {};
	
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
	LinearSpherical3D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 * 
	 * @since 0.1.0
	 */
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	LinearSpherical3D_Domain_t & get_domain();
};

#endif
