#ifndef SEGMENTS_LINEAR_HPP
#define SEGMENTS_LINEAR_HPP

#include "types.hpp"

#include "../domains/forward.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../cells/linear.hpp"

#include <boost/python.hpp>
using namespace boost::python;

////////////////////////
// Line, cartesian 1D //
////////////////////////

class LinearCartesian1D_Segment
{
	LinearCartesian1D_Segment_t    segment;
public:
	LinearCartesian1D_Segment(LinearCartesian1D_Segment_t &initial_segment);
	void create_cell(PointCartesian1D vertex1, PointCartesian1D vertex2);
	list get_cells();
};

////////////////////////
// Line, cartesian 2D //
////////////////////////

class LinearCartesian2D_Segment
{
	LinearCartesian2D_Segment_t    segment;
public:
	LinearCartesian2D_Segment(LinearCartesian2D_Segment_t &initial_segment);
	void create_cell(PointCartesian2D vertex1, PointCartesian2D vertex2);
	list get_cells();
};

////////////////////////
// Line, cartesian 3D //
////////////////////////

class LinearCartesian3D_Segment
{
	LinearCartesian3D_Segment_t    segment;
public:
	LinearCartesian3D_Segment(LinearCartesian3D_Segment_t &initial_segment);
	void create_cell(PointCartesian3D vertex1, PointCartesian3D vertex2);
	list get_cells();
};

////////////////////////////
// Line, cylindrical (3D) //
////////////////////////////

class LinearCylindrical3D_Segment
{
	LinearCylindrical3D_Segment_t    segment;
public:
	LinearCylindrical3D_Segment(LinearCylindrical3D_Segment_t &initial_segment);
	void create_cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2);
	list get_cells();
};

//////////////////////
// Line, polar (2D) //
//////////////////////

class LinearPolar2D_Segment
{
	LinearPolar2D_Segment_t    segment;
public:
	LinearPolar2D_Segment(LinearPolar2D_Segment_t &initial_segment);
	void create_cell(PointPolar2D vertex1, PointPolar2D vertex2);
	list get_cells();
};

//////////////////////////
// Line, spherical (3D) //
//////////////////////////

class LinearSpherical3D_Segment
{
	LinearSpherical3D_Segment_t    segment;
public:
	LinearSpherical3D_Segment(LinearSpherical3D_Segment_t &initial_segment);
	void create_cell(PointSpherical3D vertex1, PointSpherical3D vertex2);
	list get_cells();
};

#endif
