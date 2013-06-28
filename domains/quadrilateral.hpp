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
	list                                 cells;
public:
	QuadrilateralCartesian2D_Domain();
	
	void create_segments(unsigned int amount);
	list get_segments();
	
	void add_vertex(PointCartesian2D vertex);
	list get_vertices();
	
	void create_cell(PointCartesian2D vertex1, PointCartesian2D vertex2, PointCartesian2D vertex3, PointCartesian2D vertex4);
	list get_cells();
	
	QuadrilateralCartesian2D_Domain_t & get_domain();
};

class QuadrilateralCartesian3D_Domain {
	QuadrilateralCartesian3D_Domain_t     domain;
	list                                  segments;
	list                                  vertices;
	unsigned int                          num_vertices;
	list                                  cells;
public:
	QuadrilateralCartesian3D_Domain();
	
	void create_segments(unsigned int amount);
	list get_segments();
	
	void add_vertex(PointCartesian3D vertex);
	list get_vertices();
	
	void create_cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3, PointCartesian3D vertex4);
	list get_cells();
	
	QuadrilateralCartesian3D_Domain_t & get_domain();
};

class QuadrilateralCylindrical3D_Domain {
	QuadrilateralCylindrical3D_Domain_t     domain;
	list                                    segments;
	list                                    vertices;
	unsigned int                            num_vertices;
	list                                    cells;
public:
	QuadrilateralCylindrical3D_Domain();
	
	void create_segments(unsigned int amount);
	list get_segments();
	
	void add_vertex(PointCylindrical3D vertex);
	list get_vertices();
	
	void create_cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3, PointCylindrical3D vertex4);
	list get_cells();
	
	QuadrilateralCylindrical3D_Domain_t & get_domain();
};

class QuadrilateralPolar2D_Domain {
	QuadrilateralPolar2D_Domain_t     domain;
	list                              segments;
	list                              vertices;
	unsigned int                      num_vertices;
	list                              cells;
public:
	QuadrilateralPolar2D_Domain();
	
	void create_segments(unsigned int amount);
	list get_segments();
	
	void add_vertex(PointPolar2D vertex);
	list get_vertices();
	
	void create_cell(PointPolar2D vertex1, PointPolar2D vertex2, PointPolar2D vertex3, PointPolar2D vertex4);
	list get_cells();
	
	QuadrilateralPolar2D_Domain_t & get_domain();
};

class QuadrilateralSpherical3D_Domain {
	QuadrilateralSpherical3D_Domain_t     domain;
	list                                  segments;
	list                                  vertices;
	unsigned int                          num_vertices;
	list                                  cells;
public:
	QuadrilateralSpherical3D_Domain();
	
	void create_segments(unsigned int amount);
	list get_segments();
	
	void add_vertex(PointSpherical3D vertex);
	list get_vertices();
	
	void create_cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3, PointSpherical3D vertex4);
	list get_cells();
	
	QuadrilateralSpherical3D_Domain_t & get_domain();
};

#endif /* end of include guard: QUADRILATERAL_HPP_N3ZDFQTY */
