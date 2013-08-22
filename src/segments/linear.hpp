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
	unsigned int num_cells();
	LinearCartesian1D_Cell make_cell(LinearCartesian1D_Vertex vertex1, LinearCartesian1D_Vertex vertex2);
	list get_cells();
	LinearCartesian1D_Segment_t & get_segment();
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
	unsigned int num_cells();
	LinearCartesian2D_Cell make_cell(LinearCartesian2D_Vertex vertex1, LinearCartesian2D_Vertex vertex2);
	list get_cells();
	LinearCartesian2D_Segment_t & get_segment();
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
	unsigned int num_cells();
	LinearCartesian3D_Cell make_cell(LinearCartesian3D_Vertex vertex1, LinearCartesian3D_Vertex vertex2);
	list get_cells();
	LinearCartesian3D_Segment_t & get_segment();
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
	unsigned int num_cells();
	LinearCylindrical3D_Cell make_cell(LinearCylindrical3D_Vertex vertex1, LinearCylindrical3D_Vertex vertex2);
	list get_cells();
	LinearCylindrical3D_Segment_t & get_segment();
};

//////////////////////
// Line, polar (2D) //
//////////////////////

class LinearPolar2D_Segment
{
	LinearPolar2D_Segment_t        segment;
	LinearPolar2D_Segmentation    *segmentation;
public:
	LinearPolar2D_Segment(LinearPolar2D_Segment_t &initial_segment, LinearPolar2D_Segmentation &initial_segmentation);
	unsigned int num_cells();
	LinearPolar2D_Cell make_cell(LinearPolar2D_Vertex vertex1, LinearPolar2D_Vertex vertex2);
	list get_cells();
	LinearPolar2D_Segment_t & get_segment();
};

//////////////////////////
// Line, spherical (3D) //
//////////////////////////

class LinearSpherical3D_Segment
{
	LinearSpherical3D_Segment_t        segment;
	LinearSpherical3D_Segmentation    *segmentation;
public:
	LinearSpherical3D_Segment(LinearSpherical3D_Segment_t &initial_segment, LinearSpherical3D_Segmentation &initial_segmentation);
	unsigned int num_cells();
	LinearSpherical3D_Cell make_cell(LinearSpherical3D_Vertex vertex1, LinearSpherical3D_Vertex vertex2);
	list get_cells();
	LinearSpherical3D_Segment_t & get_segment();
};

#endif /* end of include guard: SEGMENTS_LINEAR_HPP */
