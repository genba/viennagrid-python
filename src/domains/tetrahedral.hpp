#ifndef DOMAINS_TETRAHEDRAL_HPP
#define DOMAINS_TETRAHEDRAL_HPP

#include "types.hpp"
#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../vertices/tetrahedral.hpp"
#include "../segmentations/tetrahedral.hpp"

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
	
	TetrahedralCartesian3D_Segmentation read_netgen(std::string const &filename);
	TetrahedralCartesian3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, TetrahedralCartesian3D_Segmentation *segment = NULL);
	
	TetrahedralCartesian3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(TetrahedralCartesian3D_Domain_overloads, TetrahedralCartesian3D_Domain::write_vtk, 1, 2)

class TetrahedralCylindrical3D_Domain {
	TetrahedralCylindrical3D_Domain_t     domain;
public:
	TetrahedralCylindrical3D_Domain() {};
	
	unsigned int num_vertices();
	void make_vertex(PointCylindrical3D point);
	TetrahedralCylindrical3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	TetrahedralCylindrical3D_Segmentation read_netgen(std::string const &filename);
	TetrahedralCylindrical3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, TetrahedralCylindrical3D_Segmentation *segment = NULL);
	
	TetrahedralCylindrical3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(TetrahedralCylindrical3D_Domain_overloads, TetrahedralCylindrical3D_Domain::write_vtk, 1, 2)

class TetrahedralSpherical3D_Domain {
	TetrahedralSpherical3D_Domain_t     domain;
public:
	TetrahedralSpherical3D_Domain() {};
	
	unsigned int num_vertices();
	void make_vertex(PointSpherical3D point);
	TetrahedralSpherical3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	TetrahedralSpherical3D_Segmentation read_netgen(std::string const &filename);
	TetrahedralSpherical3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, TetrahedralSpherical3D_Segmentation *segment = NULL);
	
	TetrahedralSpherical3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(TetrahedralSpherical3D_Domain_overloads, TetrahedralSpherical3D_Domain::write_vtk, 1, 2)

#endif /* end of include guard: DOMAINS_TETRAHEDRAL_HPP */
