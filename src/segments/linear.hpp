#ifndef SEGMENTS_LINEAR_HPP
#define SEGMENTS_LINEAR_HPP

#include "types.hpp"

#include "../domains/forward.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../segmentations/forward.hpp"
#include "../cells/linear.hpp"
#include "../vertices/linear.hpp"

#include <boost/python.hpp>
using namespace boost::python;

////////////////////////
// Line, cartesian 1D //
////////////////////////

class LinearCartesian1D_Segment
{
	LinearCartesian1D_Segment_t        segment;
	LinearCartesian1D_Segmentation    *segmentation;
public:
	LinearCartesian1D_Segment(LinearCartesian1D_Segment_t &initial_segment, LinearCartesian1D_Segmentation &initial_segmentation);
	void create_cell(LinearCartesian1D_Vertex vertex1, LinearCartesian1D_Vertex vertex2);
	list get_cells();
};

////////////////////////
// Line, cartesian 2D //
////////////////////////

class LinearCartesian2D_Segment
{
	LinearCartesian2D_Segment_t        segment;
	LinearCartesian2D_Segmentation    *segmentation;
public:
	LinearCartesian2D_Segment(LinearCartesian2D_Segment_t &initial_segment, LinearCartesian2D_Segmentation &initial_segmentation);
	void create_cell(LinearCartesian2D_Vertex vertex1, LinearCartesian2D_Vertex vertex2);
	list get_cells();
};

////////////////////////
// Line, cartesian 3D //
////////////////////////

class LinearCartesian3D_Segment
{
	LinearCartesian3D_Segment_t        segment;
	LinearCartesian3D_Segmentation    *segmentation;
public:
	LinearCartesian3D_Segment(LinearCartesian3D_Segment_t &initial_segment, LinearCartesian3D_Segmentation &initial_segmentation);
	void create_cell(LinearCartesian3D_Vertex vertex1, LinearCartesian3D_Vertex vertex2);
	list get_cells();
};

////////////////////////////
// Line, cylindrical (3D) //
////////////////////////////

class LinearCylindrical3D_Segment
{
	LinearCylindrical3D_Segment_t        segment;
	LinearCylindrical3D_Segmentation    *segmentation;
public:
	LinearCylindrical3D_Segment(LinearCylindrical3D_Segment_t &initial_segment, LinearCylindrical3D_Segmentation &initial_segmentation);
	void create_cell(LinearCylindrical3D_Vertex vertex1, LinearCylindrical3D_Vertex vertex2);
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
