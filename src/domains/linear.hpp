#ifndef DOMAINS_LINEAR_HPP
#define DOMAINS_LINEAR_HPP

#include "types.hpp"
#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../vertices/linear.hpp"
#include "../segmentations/linear.hpp"

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
	void make_vertex(PointCartesian1D point); // TODO: rename to make_vertex or make_vertex?
	LinearCartesian1D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	LinearCartesian1D_Segmentation read_netgen(std::string const &filename);
	LinearCartesian1D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, LinearCartesian1D_Segmentation *segmentation = NULL);

	LinearCartesian1D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(LinearCartesian1D_Domain_overloads, LinearCartesian1D_Domain::write_vtk, 1, 2)

//////////////////////////
// Linear, cartesian 2D //
//////////////////////////

class LinearCartesian2D_Domain {
	LinearCartesian2D_Domain_t    domain;
public:
	LinearCartesian2D_Domain() {};

	unsigned int num_vertices();
	void make_vertex(PointCartesian2D point); // TODO: rename to make_vertex or make_vertex?
	LinearCartesian2D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	LinearCartesian2D_Segmentation read_netgen(std::string const &filename);
	LinearCartesian2D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, LinearCartesian2D_Segmentation *segmentation = NULL);

	LinearCartesian2D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(LinearCartesian2D_Domain_overloads, LinearCartesian2D_Domain::write_vtk, 1, 2)

//////////////////////////
// Linear, cartesian 3D //
//////////////////////////

class LinearCartesian3D_Domain {
	LinearCartesian3D_Domain_t    domain;
public:
	LinearCartesian3D_Domain() {};

	unsigned int num_vertices();
	void make_vertex(PointCartesian3D point); // TODO: rename to make_vertex or make_vertex?
	LinearCartesian3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	LinearCartesian3D_Segmentation read_netgen(std::string const &filename);
	LinearCartesian3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, LinearCartesian3D_Segmentation *segmentation = NULL);

	LinearCartesian3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(LinearCartesian3D_Domain_overloads, LinearCartesian3D_Domain::write_vtk, 1, 2)

//////////////////////////////
// Linear, cylindrical (3D) //
//////////////////////////////

class LinearCylindrical3D_Domain {
	LinearCylindrical3D_Domain_t    domain;
public:
	LinearCylindrical3D_Domain() {};

	unsigned int num_vertices();
	void make_vertex(PointCylindrical3D point); // TODO: rename to make_vertex or make_vertex?
	LinearCylindrical3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	LinearCylindrical3D_Segmentation read_netgen(std::string const &filename);
	LinearCylindrical3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, LinearCylindrical3D_Segmentation *segmentation = NULL);

	LinearCylindrical3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(LinearCylindrical3D_Domain_overloads, LinearCylindrical3D_Domain::write_vtk, 1, 2)

////////////////////////
// Linear, polar (2D) //
////////////////////////

class LinearPolar2D_Domain {
	LinearPolar2D_Domain_t    domain;
public:
	LinearPolar2D_Domain() {};

	unsigned int num_vertices();
	void make_vertex(PointPolar2D point); // TODO: rename to make_vertex or make_vertex?
	LinearPolar2D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	LinearPolar2D_Segmentation read_netgen(std::string const &filename);
	LinearPolar2D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, LinearPolar2D_Segmentation *segmentation = NULL);

	LinearPolar2D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(LinearPolar2D_Domain_overloads, LinearPolar2D_Domain::write_vtk, 1, 2)

////////////////////////////
// Linear, spherical (3D) //
////////////////////////////

class LinearSpherical3D_Domain {
	LinearSpherical3D_Domain_t    domain;
public:
	LinearSpherical3D_Domain() {};

	unsigned int num_vertices();
	void make_vertex(PointSpherical3D point); // TODO: rename to make_vertex or make_vertex?
	LinearSpherical3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	LinearSpherical3D_Segmentation read_netgen(std::string const &filename);
	LinearSpherical3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, LinearSpherical3D_Segmentation *segmentation = NULL);

	LinearSpherical3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(LinearSpherical3D_Domain_overloads, LinearSpherical3D_Domain::write_vtk, 1, 2)

#endif
