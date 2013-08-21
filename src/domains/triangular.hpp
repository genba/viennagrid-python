#ifndef DOMAINS_TRIANGULAR_HPP
#define DOMAINS_TRIANGULAR_HPP

#include "types.hpp"
#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../vertices/triangular.hpp"

#include <boost/python.hpp>
using namespace boost::python;

#include <string>

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

class TriangularCartesian2D_Domain {
	TriangularCartesian2D_Domain_t    domain;
public:
	TriangularCartesian2D_Domain() {};

	unsigned int num_vertices();
	void make_vertex(PointCartesian2D point); // TODO: rename to make_vertex or make_vertex?
	TriangularCartesian2D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	TriangularCartesian2D_Domain_t & get_domain();
};

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

class TriangularCartesian3D_Domain {
	TriangularCartesian3D_Domain_t    domain;
public:
	TriangularCartesian3D_Domain() {};

	unsigned int num_vertices();
	void make_vertex(PointCartesian3D point); // TODO: rename to make_vertex or make_vertex?
	TriangularCartesian3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	TriangularCartesian3D_Domain_t & get_domain();
};

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

class TriangularCylindrical3D_Domain {
	TriangularCylindrical3D_Domain_t    domain;
public:
	TriangularCylindrical3D_Domain() {};

	unsigned int num_vertices();
	void make_vertex(PointCylindrical3D point); // TODO: rename to make_vertex or make_vertex?
	TriangularCylindrical3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	TriangularCylindrical3D_Domain_t & get_domain();
};

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

class TriangularPolar2D_Domain {
	TriangularPolar2D_Domain_t    domain;
public:
	TriangularPolar2D_Domain() {};

	unsigned int num_vertices();
	void make_vertex(PointPolar2D point); // TODO: rename to make_vertex or make_vertex?
	TriangularPolar2D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	TriangularPolar2D_Domain_t & get_domain();
};

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

class TriangularSpherical3D_Domain {
	TriangularSpherical3D_Domain_t    domain;
public:
	TriangularSpherical3D_Domain() {};

	unsigned int num_vertices();
	void make_vertex(PointSpherical3D point); // TODO: rename to make_vertex or make_vertex?
	TriangularSpherical3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	TriangularSpherical3D_Domain_t & get_domain();
};

#endif /* end of include guard: DOMAINS_TRIANGULAR_HPP */
