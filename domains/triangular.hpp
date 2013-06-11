#ifndef TRIANGULAR_HPP_40OZO3A3
#define TRIANGULAR_HPP_40OZO3A3

#include "types.hpp"
#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

class TriangularCartesian2D_Domain {
	TriangularCartesian2D_Domain_t domain;
	unsigned int num_segments;
public:
	TriangularCartesian2D_Domain();
	unsigned int get_num_segments();
	void create_segments(unsigned int amount);
	void add_vertex(PointCartesian2D vertex);
};

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

class TriangularCartesian3D_Domain {
	TriangularCartesian3D_Domain_t domain;
	unsigned int num_segments;
public:
	TriangularCartesian3D_Domain();
	unsigned int get_num_segments();
	void create_segments(unsigned int amount);
	void add_vertex(PointCartesian3D vertex);
};

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

class TriangularCylindrical3D_Domain {
	TriangularCylindrical3D_Domain_t domain;
	unsigned int num_segments;
public:
	TriangularCylindrical3D_Domain();
	unsigned int get_num_segments();
	void create_segments(unsigned int amount);
	void add_vertex(PointCylindrical3D vertex);
};

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

class TriangularPolar2D_Domain {
	TriangularPolar2D_Domain_t domain;
	unsigned int num_segments;
public:
	TriangularPolar2D_Domain();
	unsigned int get_num_segments();
	void create_segments(unsigned int amount);
	void add_vertex(PointPolar2D vertex);
};

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

class TriangularSpherical3D_Domain {
	TriangularSpherical3D_Domain_t domain;
	unsigned int num_segments;
public:
	TriangularSpherical3D_Domain();
	unsigned int get_num_segments();
	void create_segments(unsigned int amount);
	void add_vertex(PointSpherical3D vertex);
};

#endif /* end of include guard: TRIANGULAR_HPP_40OZO3A3 */
