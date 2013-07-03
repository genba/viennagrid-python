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
public:
	QuadrilateralCartesian2D_Domain() {};
	
	unsigned int num_vertices();
	void add_vertex(PointCartesian2D vertex);
	PointCartesian2D get_vertex(unsigned int index);
	
	QuadrilateralCartesian2D_Domain_t & get_domain();
};

class QuadrilateralCartesian3D_Domain {
	QuadrilateralCartesian3D_Domain_t     domain;
public:
	QuadrilateralCartesian3D_Domain() {};
	
	unsigned int num_vertices();
	void add_vertex(PointCartesian3D vertex);
	PointCartesian3D get_vertex(unsigned int index);
	
	QuadrilateralCartesian3D_Domain_t & get_domain();
};

class QuadrilateralCylindrical3D_Domain {
	QuadrilateralCylindrical3D_Domain_t     domain;
public:
	QuadrilateralCylindrical3D_Domain() {};
	
	unsigned int num_vertices();
	void add_vertex(PointCylindrical3D vertex);
	PointCylindrical3D get_vertex(unsigned int index);
	
	QuadrilateralCylindrical3D_Domain_t & get_domain();
};

class QuadrilateralPolar2D_Domain {
	QuadrilateralPolar2D_Domain_t     domain;
public:
	QuadrilateralPolar2D_Domain() {};
	
	unsigned int num_vertices();
	void add_vertex(PointPolar2D vertex);
	PointPolar2D get_vertex(unsigned int index);
	
	QuadrilateralPolar2D_Domain_t & get_domain();
};

class QuadrilateralSpherical3D_Domain {
	QuadrilateralSpherical3D_Domain_t     domain;
public:
	QuadrilateralSpherical3D_Domain() {};
	
	unsigned int num_vertices();
	void add_vertex(PointSpherical3D vertex);
	PointSpherical3D get_vertex(unsigned int index);
	
	QuadrilateralSpherical3D_Domain_t & get_domain();
};

#endif /* end of include guard: QUADRILATERAL_HPP_N3ZDFQTY */
