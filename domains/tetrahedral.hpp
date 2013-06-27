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
	list                                cells;
public:
	TetrahedralCartesian3D_Domain();
	
	void create_segments(unsigned int amount);
	list get_segments();
	
	void add_vertex(PointCartesian3D vertex);
	list get_vertices();
	
	void create_cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3, PointCartesian3D vertex4);
	
	TetrahedralCartesian3D_Domain_t & get_domain();
};

class TetrahedralCylindrical3D_Domain {
	TetrahedralCylindrical3D_Domain_t     domain;
	list                                  segments;
	list                                  vertices;
	unsigned int                          num_vertices;
	list                                  cells;
public:
	TetrahedralCylindrical3D_Domain();
	
	void create_segments(unsigned int amount);
	list get_segments();
	
	void add_vertex(PointCylindrical3D vertex);
	list get_vertices();
	
	void create_cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3, PointCylindrical3D vertex4);
	
	TetrahedralCylindrical3D_Domain_t & get_domain();
};

class TetrahedralSpherical3D_Domain {
	TetrahedralSpherical3D_Domain_t     domain;
	list                                segments;
	list                                vertices;
	unsigned int                        num_vertices;
	list                                cells;
public:
	TetrahedralSpherical3D_Domain();
	
	void create_segments(unsigned int amount);
	list get_segments();
	
	void add_vertex(PointSpherical3D vertex);
	list get_vertices();
	
	void create_cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3, PointSpherical3D vertex4);
	
	TetrahedralSpherical3D_Domain_t & get_domain();
};

#endif /* end of include guard: TETRAHEDRAL_HPP_66FKMIZO */
