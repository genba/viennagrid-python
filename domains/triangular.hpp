#ifndef TRIANGULAR_HPP_40OZO3A3
#define TRIANGULAR_HPP_40OZO3A3

#include "types.hpp"
#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"
#include "../segments/triangular.hpp"

#include <vector>

#include <boost/python.hpp>
using namespace boost::python;

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

class TriangularCartesian2D_Domain {
	TriangularCartesian2D_Domain_t                domain;
	std::vector<TriangularCartesian2D_Segment>    segments;
	std::vector<PointCartesian2D>                 vertices;
public:
	TriangularCartesian2D_Domain() {};

	void create_segments(unsigned int amount);
	unsigned int get_num_segments();
	TriangularCartesian2D_Segment get_segment(unsigned int index);
	std::vector<TriangularCartesian2D_Segment>::iterator segments_begin();
	std::vector<TriangularCartesian2D_Segment>::iterator segments_end();
	list get_segments();

	void add_vertex(PointCartesian2D vertex);
	unsigned int get_num_vertices();
	PointCartesian2D get_vertex(unsigned int index);
	std::vector<PointCartesian2D>::iterator vertices_begin();
	std::vector<PointCartesian2D>::iterator vertices_end();
	list get_vertices();

	TriangularCartesian2D_Domain_t & get_domain();
};

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

class TriangularCartesian3D_Domain {
	TriangularCartesian3D_Domain_t                domain;
	std::vector<TriangularCartesian3D_Segment>    segments;
	std::vector<PointCartesian3D>                 vertices;
public:
	TriangularCartesian3D_Domain() {};

	void create_segments(unsigned int amount);
	unsigned int get_num_segments();
	TriangularCartesian3D_Segment get_segment(unsigned int index);
	std::vector<TriangularCartesian3D_Segment>::iterator segments_begin();
	std::vector<TriangularCartesian3D_Segment>::iterator segments_end();
	list get_segments();

	void add_vertex(PointCartesian3D vertex);
	unsigned int get_num_vertices();
	PointCartesian3D get_vertex(unsigned int index);
	std::vector<PointCartesian3D>::iterator vertices_begin();
	std::vector<PointCartesian3D>::iterator vertices_end();
	list get_vertices();

	TriangularCartesian3D_Domain_t & get_domain();
};

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

class TriangularCylindrical3D_Domain {
	TriangularCylindrical3D_Domain_t                domain;
	std::vector<TriangularCylindrical3D_Segment>    segments;
	std::vector<PointCylindrical3D>                 vertices;
public:
	TriangularCylindrical3D_Domain() {};

	void create_segments(unsigned int amount);
	unsigned int get_num_segments();
	TriangularCylindrical3D_Segment get_segment(unsigned int index);
	std::vector<TriangularCylindrical3D_Segment>::iterator segments_begin();
	std::vector<TriangularCylindrical3D_Segment>::iterator segments_end();
	list get_segments();

	void add_vertex(PointCylindrical3D vertex);
	unsigned int get_num_vertices();
	PointCylindrical3D get_vertex(unsigned int index);
	std::vector<PointCylindrical3D>::iterator vertices_begin();
	std::vector<PointCylindrical3D>::iterator vertices_end();
	list get_vertices();

	TriangularCylindrical3D_Domain_t & get_domain();
};

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

class TriangularPolar2D_Domain {
	TriangularPolar2D_Domain_t                domain;
	std::vector<TriangularPolar2D_Segment>    segments;
	std::vector<PointPolar2D>                 vertices;
public:
	TriangularPolar2D_Domain() {};

	void create_segments(unsigned int amount);
	unsigned int get_num_segments();
	TriangularPolar2D_Segment get_segment(unsigned int index);
	std::vector<TriangularPolar2D_Segment>::iterator segments_begin();
	std::vector<TriangularPolar2D_Segment>::iterator segments_end();
	list get_segments();

	void add_vertex(PointPolar2D vertex);
	unsigned int get_num_vertices();
	PointPolar2D get_vertex(unsigned int index);
	std::vector<PointPolar2D>::iterator vertices_begin();
	std::vector<PointPolar2D>::iterator vertices_end();
	list get_vertices();

	TriangularPolar2D_Domain_t & get_domain();
};

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

class TriangularSpherical3D_Domain {
	TriangularSpherical3D_Domain_t                domain;
	std::vector<TriangularSpherical3D_Segment>    segments;
	std::vector<PointSpherical3D>                 vertices;
public:
	TriangularSpherical3D_Domain() {};

	void create_segments(unsigned int amount);
	unsigned int get_num_segments();
	TriangularSpherical3D_Segment get_segment(unsigned int index);
	std::vector<TriangularSpherical3D_Segment>::iterator segments_begin();
	std::vector<TriangularSpherical3D_Segment>::iterator segments_end();
	list get_segments();
	
	void add_vertex(PointSpherical3D vertex);
	unsigned int get_num_vertices();
	PointSpherical3D get_vertex(unsigned int index);
	std::vector<PointSpherical3D>::iterator vertices_begin();
	std::vector<PointSpherical3D>::iterator vertices_end();
	list get_vertices();

	TriangularSpherical3D_Domain_t & get_domain();
};

#endif /* end of include guard: TRIANGULAR_HPP_40OZO3A3 */
