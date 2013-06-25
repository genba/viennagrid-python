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
	list                                segments;
	list                                vertices;
	unsigned int                        num_vertices;
public:
	TetrahedralCartesian3D_Domain();
	
	void create_segments(unsigned int amount);
	list get_segments();
	
	void add_vertex(PointCartesian3D vertex);
	list get_vertices();
	
	TetrahedralCartesian3D_Domain_t & get_domain();
};

class TetrahedralCylindrical3D_Domain {
	TetrahedralCylindrical3D_Domain_t     domain;
	list                                  segments;
	list                                  vertices;
	unsigned int                          num_vertices;
public:
	TetrahedralCylindrical3D_Domain();
	
	void create_segments(unsigned int amount);
	list get_segments();
	
	void add_vertex(PointCylindrical3D vertex);
	list get_vertices();
	
	TetrahedralCylindrical3D_Domain_t & get_domain();
};

class TetrahedralSpherical3D_Domain {
	TetrahedralSpherical3D_Domain_t     domain;
	list                                segments;
	list                                vertices;
	unsigned int                        num_vertices;
public:
	TetrahedralSpherical3D_Domain();
	
	void create_segments(unsigned int amount);
	list get_segments();
	
	void add_vertex(PointSpherical3D vertex);
	list get_vertices();
	
	TetrahedralSpherical3D_Domain_t & get_domain();
};

#endif /* end of include guard: TETRAHEDRAL_HPP_66FKMIZO */
