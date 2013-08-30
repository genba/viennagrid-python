#ifndef TRIANGULAR_HPP_40OZO3A3
#define TRIANGULAR_HPP_40OZO3A3

#include "types.hpp"
#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../vertices/triangular.hpp"
#include "../segmentations/triangular.hpp"

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
	void add_vertex(PointCartesian2D point); // TODO: rename to create_vertex or make_vertex?
	TriangularCartesian2D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	TriangularCartesian2D_Segmentation read_netgen(std::string const &filename);
	TriangularCartesian2D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, TriangularCartesian2D_Segmentation *segmentation = NULL);

	TriangularCartesian2D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(TriangularCartesian2D_Domain_overloads, TriangularCartesian2D_Domain::write_vtk, 1, 2)

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

class TriangularCartesian3D_Domain {
	TriangularCartesian3D_Domain_t    domain;
public:
	TriangularCartesian3D_Domain() {};

	unsigned int num_vertices();
	void add_vertex(PointCartesian3D point); // TODO: rename to create_vertex or make_vertex?
	TriangularCartesian3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	TriangularCartesian3D_Segmentation read_netgen(std::string const &filename);
	TriangularCartesian3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, TriangularCartesian3D_Segmentation *segmentation = NULL);

	TriangularCartesian3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(TriangularCartesian3D_Domain_overloads, TriangularCartesian3D_Domain::write_vtk, 1, 2)

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

class TriangularCylindrical3D_Domain {
	TriangularCylindrical3D_Domain_t    domain;
public:
	TriangularCylindrical3D_Domain() {};

	unsigned int num_vertices();
	void add_vertex(PointCylindrical3D point); // TODO: rename to create_vertex or make_vertex?
	TriangularCylindrical3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	TriangularCylindrical3D_Segmentation read_netgen(std::string const &filename);
	TriangularCylindrical3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, TriangularCylindrical3D_Segmentation *segmentation = NULL);

	TriangularCylindrical3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(TriangularCylindrical3D_Domain_overloads, TriangularCylindrical3D_Domain::write_vtk, 1, 2)

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

class TriangularPolar2D_Domain {
	TriangularPolar2D_Domain_t    domain;
public:
	TriangularPolar2D_Domain() {};

	unsigned int num_vertices();
	void add_vertex(PointPolar2D point); // TODO: rename to create_vertex or make_vertex?
	TriangularPolar2D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	TriangularPolar2D_Segmentation read_netgen(std::string const &filename);
	TriangularPolar2D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, TriangularPolar2D_Segmentation *segmentation = NULL);

	TriangularPolar2D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(TriangularPolar2D_Domain_overloads, TriangularPolar2D_Domain::write_vtk, 1, 2)

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

class TriangularSpherical3D_Domain {
	TriangularSpherical3D_Domain_t    domain;
public:
	TriangularSpherical3D_Domain() {};

	unsigned int num_vertices();
	void add_vertex(PointSpherical3D point); // TODO: rename to create_vertex or make_vertex?
	TriangularSpherical3D_Vertex get_vertex(unsigned int index);
	list get_vertices();
	
	TriangularSpherical3D_Segmentation read_netgen(std::string const &filename);
	TriangularSpherical3D_Segmentation read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename, TriangularSpherical3D_Segmentation *segmentation = NULL);

	TriangularSpherical3D_Domain_t & get_domain();
};

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(TriangularSpherical3D_Domain_overloads, TriangularSpherical3D_Domain::write_vtk, 1, 2)

#endif /* end of include guard: TRIANGULAR_HPP_40OZO3A3 */
