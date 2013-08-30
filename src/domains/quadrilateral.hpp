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

class QuadrilateralCartesian2D_Domain {
	QuadrilateralCartesian2D_Domain_t    domain;
public:
	QuadrilateralCartesian2D_Domain() {};
	
	unsigned int num_vertices();
	void make_vertex(PointCartesian2D point);
	QuadrilateralCartesian2D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	QuadrilateralCartesian2D_Segmentation read_netgen(std::string const &filename);
	QuadrilateralCartesian2D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, QuadrilateralCartesian2D_Segmentation *segmentation = NULL);
	
	QuadrilateralCartesian2D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(QuadrilateralCartesian2D_Domain_overloads, QuadrilateralCartesian2D_Domain::write_vtk, 1, 2)

class QuadrilateralCartesian3D_Domain {
	QuadrilateralCartesian3D_Domain_t     domain;
public:
	QuadrilateralCartesian3D_Domain() {};
	
	unsigned int num_vertices();
	void make_vertex(PointCartesian3D point);
	QuadrilateralCartesian3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	QuadrilateralCartesian3D_Segmentation read_netgen(std::string const &filename);
	QuadrilateralCartesian3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, QuadrilateralCartesian3D_Segmentation *segmentation = NULL);
	
	QuadrilateralCartesian3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(QuadrilateralCartesian3D_Domain_overloads, QuadrilateralCartesian3D_Domain::write_vtk, 1, 2)

class QuadrilateralCylindrical3D_Domain {
	QuadrilateralCylindrical3D_Domain_t     domain;
public:
	QuadrilateralCylindrical3D_Domain() {};
	
	unsigned int num_vertices();
	void make_vertex(PointCylindrical3D point);
	QuadrilateralCylindrical3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	QuadrilateralCylindrical3D_Segmentation read_netgen(std::string const &filename);
	QuadrilateralCylindrical3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, QuadrilateralCylindrical3D_Segmentation *segmentation = NULL);
	
	QuadrilateralCylindrical3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(QuadrilateralCylindrical3D_Domain_overloads, QuadrilateralCylindrical3D_Domain::write_vtk, 1, 2)

class QuadrilateralPolar2D_Domain {
	QuadrilateralPolar2D_Domain_t     domain;
public:
	QuadrilateralPolar2D_Domain() {};
	
	unsigned int num_vertices();
	void make_vertex(PointPolar2D point);
	QuadrilateralPolar2D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	QuadrilateralPolar2D_Segmentation read_netgen(std::string const &filename);
	QuadrilateralPolar2D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, QuadrilateralPolar2D_Segmentation *segmentation = NULL);
	
	QuadrilateralPolar2D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(QuadrilateralPolar2D_Domain_overloads, QuadrilateralPolar2D_Domain::write_vtk, 1, 2)

class QuadrilateralSpherical3D_Domain {
	QuadrilateralSpherical3D_Domain_t     domain;
public:
	QuadrilateralSpherical3D_Domain() {};
	
	unsigned int num_vertices();
	void make_vertex(PointSpherical3D point);
	QuadrilateralSpherical3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	QuadrilateralSpherical3D_Segmentation read_netgen(std::string const &filename);
	QuadrilateralSpherical3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, QuadrilateralSpherical3D_Segmentation *segmentation = NULL);
	
	QuadrilateralSpherical3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(QuadrilateralSpherical3D_Domain_overloads, QuadrilateralSpherical3D_Domain::write_vtk, 1, 2)

#endif /* end of include guard: DOMAINS_QUADRILATERAL_HPP */
