#ifndef DOMAINS_TETRAHEDRAL_HPP
#define DOMAINS_TETRAHEDRAL_HPP

#include "types.hpp"
#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../vertices/tetrahedral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

#include <string>

class TetrahedralCartesian3D_Domain {
	TetrahedralCartesian3D_Domain_t     domain;
public:
	TetrahedralCartesian3D_Domain() {};
	
	unsigned int num_vertices();
	void make_vertex(PointCartesian3D point);
	TetrahedralCartesian3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);
	
	TetrahedralCartesian3D_Domain_t & get_domain();
};

class TetrahedralCylindrical3D_Domain {
	TetrahedralCylindrical3D_Domain_t     domain;
public:
	TetrahedralCylindrical3D_Domain() {};
	
	unsigned int num_vertices();
	void make_vertex(PointCylindrical3D point);
	TetrahedralCylindrical3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);
	
	TetrahedralCylindrical3D_Domain_t & get_domain();
};

class TetrahedralSpherical3D_Domain {
	TetrahedralSpherical3D_Domain_t     domain;
public:
	TetrahedralSpherical3D_Domain() {};
	
	unsigned int num_vertices();
	void make_vertex(PointSpherical3D point);
	TetrahedralSpherical3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);
	
	TetrahedralSpherical3D_Domain_t & get_domain();
};

#endif /* end of include guard: DOMAINS_TETRAHEDRAL_HPP */
