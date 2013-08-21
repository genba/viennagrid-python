#ifndef DOMAINS_QUADRILATERAL_HPP
#define DOMAINS_QUADRILATERAL_HPP

#include "types.hpp"
#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../vertices/quadrilateral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

#include <string>

class QuadrilateralCartesian2D_Domain {
	QuadrilateralCartesian2D_Domain_t    domain;
public:
	QuadrilateralCartesian2D_Domain() {};
	
	unsigned int num_vertices();
	void make_vertex(PointCartesian2D point);
	QuadrilateralCartesian2D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);
	
	QuadrilateralCartesian2D_Domain_t & get_domain();
};

class QuadrilateralCartesian3D_Domain {
	QuadrilateralCartesian3D_Domain_t     domain;
public:
	QuadrilateralCartesian3D_Domain() {};
	
	unsigned int num_vertices();
	void make_vertex(PointCartesian3D point);
	QuadrilateralCartesian3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);
	
	QuadrilateralCartesian3D_Domain_t & get_domain();
};

class QuadrilateralCylindrical3D_Domain {
	QuadrilateralCylindrical3D_Domain_t     domain;
public:
	QuadrilateralCylindrical3D_Domain() {};
	
	unsigned int num_vertices();
	void make_vertex(PointCylindrical3D point);
	QuadrilateralCylindrical3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);
	
	QuadrilateralCylindrical3D_Domain_t & get_domain();
};

class QuadrilateralPolar2D_Domain {
	QuadrilateralPolar2D_Domain_t     domain;
public:
	QuadrilateralPolar2D_Domain() {};
	
	unsigned int num_vertices();
	void make_vertex(PointPolar2D point);
	QuadrilateralPolar2D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);
	
	QuadrilateralPolar2D_Domain_t & get_domain();
};

class QuadrilateralSpherical3D_Domain {
	QuadrilateralSpherical3D_Domain_t     domain;
public:
	QuadrilateralSpherical3D_Domain() {};
	
	unsigned int num_vertices();
	void make_vertex(PointSpherical3D point);
	QuadrilateralSpherical3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);
	
	QuadrilateralSpherical3D_Domain_t & get_domain();
};

#endif /* end of include guard: DOMAINS_QUADRILATERAL_HPP */
