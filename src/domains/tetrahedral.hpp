#ifndef TETRAHEDRAL_HPP_66FKMIZO
#define TETRAHEDRAL_HPP_66FKMIZO

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
	void add_vertex(PointCartesian3D point);
	TetrahedralCartesian3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	TetrahedralCartesian3D_Segmentation read_netgen(std::string const &filename);
	TetrahedralCartesian3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, TetrahedralCartesian3D_Segmentation *segment = NULL);
	
	void create_cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3, PointCartesian3D vertex4);
	list get_cells();
	
	TetrahedralCartesian3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(TetrahedralCartesian3D_Domain_overloads, TetrahedralCartesian3D_Domain::write_vtk, 1, 2)

class TetrahedralCylindrical3D_Domain {
	TetrahedralCylindrical3D_Domain_t     domain;
public:
	TetrahedralCylindrical3D_Domain() {};
	
	unsigned int num_vertices();
	void add_vertex(PointCylindrical3D point);
	TetrahedralCylindrical3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	TetrahedralCylindrical3D_Segmentation read_netgen(std::string const &filename);
	TetrahedralCylindrical3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, TetrahedralCylindrical3D_Segmentation *segment = NULL);
	
	void create_cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3, PointCylindrical3D vertex4);
	list get_cells();
	
	TetrahedralCylindrical3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(TetrahedralCylindrical3D_Domain_overloads, TetrahedralCylindrical3D_Domain::write_vtk, 1, 2)

class TetrahedralSpherical3D_Domain {
	TetrahedralSpherical3D_Domain_t     domain;
public:
	TetrahedralSpherical3D_Domain() {};
	
	unsigned int num_vertices();
	void add_vertex(PointSpherical3D point);
	TetrahedralSpherical3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	TetrahedralSpherical3D_Segmentation read_netgen(std::string const &filename);
	TetrahedralSpherical3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, TetrahedralSpherical3D_Segmentation *segment = NULL);
	
	void create_cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3, PointSpherical3D vertex4);
	list get_cells();
	
	TetrahedralSpherical3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(TetrahedralSpherical3D_Domain_overloads, TetrahedralSpherical3D_Domain::write_vtk, 1, 2)

#endif /* end of include guard: TETRAHEDRAL_HPP_66FKMIZO */
