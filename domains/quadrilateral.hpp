#ifndef QUADRILATERAL_HPP_N3ZDFQTY
#define QUADRILATERAL_HPP_N3ZDFQTY

#include "types.hpp"
#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"
#include "../segments/quadrilateral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

#include <string>

class QuadrilateralCartesian2D_Domain {
	QuadrilateralCartesian2D_Domain_t    domain;
public:
	QuadrilateralCartesian2D_Domain() {};
	
	unsigned int num_vertices();
	void add_vertex(PointCartesian2D vertex);
	PointCartesian2D get_vertex(unsigned int index);
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);
	
	void create_cell(PointCartesian2D vertex1, PointCartesian2D vertex2, PointCartesian2D vertex3, PointCartesian2D vertex4);
	list get_cells();
	
	QuadrilateralCartesian2D_Domain_t & get_domain();
};

class QuadrilateralCartesian3D_Domain {
	QuadrilateralCartesian3D_Domain_t     domain;
public:
	QuadrilateralCartesian3D_Domain() {};
	
	unsigned int num_vertices();
	void add_vertex(PointCartesian3D vertex);
	PointCartesian3D get_vertex(unsigned int index);
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);
	
	void create_cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3, PointCartesian3D vertex4);
	list get_cells();
	
	QuadrilateralCartesian3D_Domain_t & get_domain();
};

class QuadrilateralCylindrical3D_Domain {
	QuadrilateralCylindrical3D_Domain_t     domain;
public:
	QuadrilateralCylindrical3D_Domain() {};
	
	unsigned int num_vertices();
	void add_vertex(PointCylindrical3D vertex);
	PointCylindrical3D get_vertex(unsigned int index);
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);
	
	void create_cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3, PointCylindrical3D vertex4);
	list get_cells();
	
	QuadrilateralCylindrical3D_Domain_t & get_domain();
};

class QuadrilateralPolar2D_Domain {
	QuadrilateralPolar2D_Domain_t     domain;
public:
	QuadrilateralPolar2D_Domain() {};
	
	unsigned int num_vertices();
	void add_vertex(PointPolar2D vertex);
	PointPolar2D get_vertex(unsigned int index);
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);
	
	void create_cell(PointPolar2D vertex1, PointPolar2D vertex2, PointPolar2D vertex3, PointPolar2D vertex4);
	list get_cells();
	
	QuadrilateralPolar2D_Domain_t & get_domain();
};

class QuadrilateralSpherical3D_Domain {
	QuadrilateralSpherical3D_Domain_t     domain;
public:
	QuadrilateralSpherical3D_Domain() {};
	
	unsigned int num_vertices();
	void add_vertex(PointSpherical3D vertex);
	PointSpherical3D get_vertex(unsigned int index);
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);
	
	void create_cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3, PointSpherical3D vertex4);
	list get_cells();
	
	QuadrilateralSpherical3D_Domain_t & get_domain();
};

#endif /* end of include guard: QUADRILATERAL_HPP_N3ZDFQTY */
