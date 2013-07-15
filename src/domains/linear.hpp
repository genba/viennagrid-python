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

//////////////////////////
// Linear, cartesian 1D //
//////////////////////////

class LinearCartesian1D_Domain {
	LinearCartesian1D_Domain_t    domain;
public:
	LinearCartesian1D_Domain() {};

	unsigned int num_vertices();
	void add_vertex(PointCartesian1D point); // TODO: rename to create_vertex or make_vertex?
	LinearCartesian1D_Vertex get_vertex(unsigned int index);
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	LinearCartesian1D_Domain_t & get_domain();
};

//////////////////////////
// Linear, cartesian 2D //
//////////////////////////

class LinearCartesian2D_Domain {
	LinearCartesian2D_Domain_t    domain;
public:
	LinearCartesian2D_Domain() {};

	unsigned int num_vertices();
	void add_vertex(PointCartesian2D point); // TODO: rename to create_vertex or make_vertex?
	LinearCartesian2D_Vertex get_vertex(unsigned int index);
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	LinearCartesian2D_Domain_t & get_domain();
};

//////////////////////////
// Linear, cartesian 3D //
//////////////////////////

class LinearCartesian3D_Domain {
	LinearCartesian3D_Domain_t    domain;
public:
	LinearCartesian3D_Domain() {};

	unsigned int num_vertices();
	void add_vertex(PointCartesian3D point); // TODO: rename to create_vertex or make_vertex?
	LinearCartesian3D_Vertex get_vertex(unsigned int index);
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	LinearCartesian3D_Domain_t & get_domain();
};

//////////////////////////////
// Linear, cylindrical (3D) //
//////////////////////////////

class LinearCylindrical3D_Domain {
	LinearCylindrical3D_Domain_t    domain;
public:
	LinearCylindrical3D_Domain() {};

	unsigned int num_vertices();
	void add_vertex(PointCylindrical3D point); // TODO: rename to create_vertex or make_vertex?
	LinearCylindrical3D_Vertex get_vertex(unsigned int index);
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	LinearCylindrical3D_Domain_t & get_domain();
};

////////////////////////
// Linear, polar (2D) //
////////////////////////

class LinearPolar2D_Domain {
	LinearPolar2D_Domain_t    domain;
public:
	LinearPolar2D_Domain() {};

	unsigned int num_vertices();
	void add_vertex(PointPolar2D point); // TODO: rename to create_vertex or make_vertex?
	LinearPolar2D_Vertex get_vertex(unsigned int index);
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	LinearPolar2D_Domain_t & get_domain();
};

////////////////////////////
// Linear, spherical (3D) //
////////////////////////////

class LinearSpherical3D_Domain {
	LinearSpherical3D_Domain_t    domain;
public:
	LinearSpherical3D_Domain() {};

	unsigned int num_vertices();
	void add_vertex(PointSpherical3D point); // TODO: rename to create_vertex or make_vertex?
	LinearSpherical3D_Vertex get_vertex(unsigned int index);
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	LinearSpherical3D_Domain_t & get_domain();
};

#endif
