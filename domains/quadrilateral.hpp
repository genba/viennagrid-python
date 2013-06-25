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

class QuadrilateralCartesian2D_Domain {
	QuadrilateralCartesian2D_Domain_t    domain;
	list                                 segments;
	list                                 vertices;
	unsigned int                         num_vertices;
public:
	QuadrilateralCartesian2D_Domain();
	
	void create_segments(unsigned int amount);
	list get_segments();
	
	void add_vertex(PointCartesian2D vertex);
	list get_vertices();
	
	QuadrilateralCartesian2D_Domain_t & get_domain();
};

class QuadrilateralCartesian3D_Domain {
	QuadrilateralCartesian3D_Domain_t     domain;
	list                                  segments;
	list                                  vertices;
	unsigned int                          num_vertices;
public:
	QuadrilateralCartesian3D_Domain();
	
	void create_segments(unsigned int amount);
	list get_segments();
	
	void add_vertex(PointCartesian3D vertex);
	list get_vertices();
	
	QuadrilateralCartesian3D_Domain_t & get_domain();
};

class QuadrilateralCylindrical3D_Domain {
	QuadrilateralCylindrical3D_Domain_t     domain;
	list                                    segments;
	list                                    vertices;
	unsigned int                            num_vertices;
public:
	QuadrilateralCylindrical3D_Domain();
	
	void create_segments(unsigned int amount);
	list get_segments();
	
	void add_vertex(PointCylindrical3D vertex);
	list get_vertices();
	
	QuadrilateralCylindrical3D_Domain_t & get_domain();
};

class QuadrilateralPolar2D_Domain {
	QuadrilateralPolar2D_Domain_t     domain;
	list                              segments;
	list                              vertices;
	unsigned int                      num_vertices;
public:
	QuadrilateralPolar2D_Domain();
	
	void create_segments(unsigned int amount);
	list get_segments();
	
	void add_vertex(PointPolar2D vertex);
	list get_vertices();
	
	QuadrilateralPolar2D_Domain_t & get_domain();
};

class QuadrilateralSpherical3D_Domain {
	QuadrilateralSpherical3D_Domain_t     domain;
	list                                  segments;
	list                                  vertices;
	unsigned int                          num_vertices;
public:
	QuadrilateralSpherical3D_Domain();
	
	void create_segments(unsigned int amount);
	list get_segments();
	
	void add_vertex(PointSpherical3D vertex);
	list get_vertices();
	
	QuadrilateralSpherical3D_Domain_t & get_domain();
};

#endif /* end of include guard: QUADRILATERAL_HPP_N3ZDFQTY */
