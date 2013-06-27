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
	list                              segments;
	list                              vertices;
	unsigned int                      num_vertices;
	list                              cells;
public:
	TriangularCartesian2D_Domain();

	void create_segments(unsigned int amount);
	list get_segments();

	void add_vertex(PointCartesian2D vertex);
	list get_vertices();
	
	void create_cell(PointCartesian2D vertex1, PointCartesian2D vertex2, PointCartesian2D vertex3);

	TriangularCartesian2D_Domain_t & get_domain();
};

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

class TriangularCartesian3D_Domain {
	TriangularCartesian3D_Domain_t    domain;
	list                              segments;
	list                              vertices;
	unsigned int                      num_vertices;
	list                              cells;
public:
	TriangularCartesian3D_Domain();

	void create_segments(unsigned int amount);
	list get_segments();

	void add_vertex(PointCartesian3D vertex);
	list get_vertices();
	
	void create_cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3);

	TriangularCartesian3D_Domain_t & get_domain();
};

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

class TriangularCylindrical3D_Domain {
	TriangularCylindrical3D_Domain_t    domain;
	list                                segments;
	list                                vertices;
	unsigned int                        num_vertices;
	list                                cells;
public:
	TriangularCylindrical3D_Domain();

	void create_segments(unsigned int amount);
	list get_segments();

	void add_vertex(PointCylindrical3D vertex);
	list get_vertices();
	
	void create_cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3);

	TriangularCylindrical3D_Domain_t & get_domain();
};

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

class TriangularPolar2D_Domain {
	TriangularPolar2D_Domain_t    domain;
	list                          segments;
	list                          vertices;
	unsigned int                  num_vertices;
	list                          cells;
public:
	TriangularPolar2D_Domain();

	void create_segments(unsigned int amount);
	list get_segments();

	void add_vertex(PointPolar2D vertex);
	list get_vertices();
	
	void create_cell(PointPolar2D vertex1, PointPolar2D vertex2, PointPolar2D vertex3);

	TriangularPolar2D_Domain_t & get_domain();
};

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

class TriangularSpherical3D_Domain {
	TriangularSpherical3D_Domain_t    domain;
	list                              segments;
	list                              vertices;
	unsigned int                      num_vertices;
	list                              cells;
public:
	TriangularSpherical3D_Domain();

	void create_segments(unsigned int amount);
	list get_segments();
	
	void add_vertex(PointSpherical3D vertex);
	list get_vertices();
	
	void create_cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3);

	TriangularSpherical3D_Domain_t & get_domain();
};

#endif /* end of include guard: TRIANGULAR_HPP_40OZO3A3 */
