#ifndef TETRAHEDRAL_HPP_66FKMIZO
#define TETRAHEDRAL_HPP_66FKMIZO

#include "types.hpp"
#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"
#include "../segments/tetrahedral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

class TetrahedralCartesian3D_Domain {
	TetrahedralCartesian3D_Domain_t     domain;
public:
	TetrahedralCartesian3D_Domain() {};
	
	unsigned int num_vertices();
	void add_vertex(PointCartesian3D vertex);
	PointCartesian3D get_vertex(unsigned int index);
	
	TetrahedralCartesian3D_Domain_t & get_domain();
};

class TetrahedralCylindrical3D_Domain {
	TetrahedralCylindrical3D_Domain_t     domain;
public:
	TetrahedralCylindrical3D_Domain() {};
	
	unsigned int num_vertices();
	void add_vertex(PointCylindrical3D vertex);
	PointCylindrical3D get_vertex(unsigned int index);
	
	TetrahedralCylindrical3D_Domain_t & get_domain();
};

class TetrahedralSpherical3D_Domain {
	TetrahedralSpherical3D_Domain_t     domain;
public:
	TetrahedralSpherical3D_Domain() {};
	
	unsigned int num_vertices();
	void add_vertex(PointSpherical3D vertex);
	PointSpherical3D get_vertex(unsigned int index);
	
	TetrahedralSpherical3D_Domain_t & get_domain();
};

#endif /* end of include guard: TETRAHEDRAL_HPP_66FKMIZO */
