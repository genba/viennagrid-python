#ifndef TRIANGULAR_HPP_40OZO3A3
#define TRIANGULAR_HPP_40OZO3A3

#include "types.hpp"
#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"
#include "../segments/triangular.hpp"

#include <boost/python.hpp>
using namespace boost::python;

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

class TriangularCartesian2D_Domain {
	TriangularCartesian2D_Domain_t    domain;
public:
	TriangularCartesian2D_Domain() {};

	unsigned int num_vertices();
	void add_vertex(PointCartesian2D vertex);
	PointCartesian2D get_vertex(unsigned int index);

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
	void add_vertex(PointCartesian3D vertex);
	PointCartesian3D get_vertex(unsigned int index);

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
	void add_vertex(PointCylindrical3D vertex);
	PointCylindrical3D get_vertex(unsigned int index);

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
	void add_vertex(PointPolar2D vertex);
	PointPolar2D get_vertex(unsigned int index);

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
	void add_vertex(PointSpherical3D vertex);
	PointSpherical3D get_vertex(unsigned int index);

	TriangularSpherical3D_Domain_t & get_domain();
};

#endif /* end of include guard: TRIANGULAR_HPP_40OZO3A3 */
