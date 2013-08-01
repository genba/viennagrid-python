#ifndef QUADRILATERAL_HPP_ASEQMOCM
#define QUADRILATERAL_HPP_ASEQMOCM

#include "types.hpp"

#include "../domains/forward.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../cells/quadrilateral.hpp"
#include "../segmentations/forward.hpp"
#include "../vertices/quadrilateral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/////////////////////////////////
// Quadrilateral, cartesian 2D //
/////////////////////////////////

class QuadrilateralCartesian2D_Segment
{
	QuadrilateralCartesian2D_Segment_t        segment;
	QuadrilateralCartesian2D_Segmentation    *segmentation;
public:
	QuadrilateralCartesian2D_Segment(QuadrilateralCartesian2D_Segment_t &initial_segment, QuadrilateralCartesian2D_Segmentation &initial_segmentation);
	unsigned int num_cells();
	QuadrilateralCartesian2D_Cell make_cell(QuadrilateralCartesian2D_Vertex vertex1, QuadrilateralCartesian2D_Vertex vertex2, QuadrilateralCartesian2D_Vertex vertex3, QuadrilateralCartesian2D_Vertex vertex4);
	list get_cells();
};

/////////////////////////////////
// Quadrilateral, cartesian 3D //
/////////////////////////////////

class QuadrilateralCartesian3D_Segment
{
	QuadrilateralCartesian3D_Segment_t        segment;
	QuadrilateralCartesian3D_Segmentation    *segmentation;
public:
	QuadrilateralCartesian3D_Segment(QuadrilateralCartesian3D_Segment_t &initial_segment, QuadrilateralCartesian3D_Segmentation &initial_segmentation);
	unsigned int num_cells();
	QuadrilateralCartesian3D_Cell make_cell(QuadrilateralCartesian3D_Vertex vertex1, QuadrilateralCartesian3D_Vertex vertex2, QuadrilateralCartesian3D_Vertex vertex3, QuadrilateralCartesian3D_Vertex vertex4);
	list get_cells();
};

/////////////////////////////////////
// Quadrilateral, cylindrical (3D) //
/////////////////////////////////////

class QuadrilateralCylindrical3D_Segment
{
	QuadrilateralCylindrical3D_Segment_t        segment;
	QuadrilateralCylindrical3D_Segmentation    *segmentation;
public:
	QuadrilateralCylindrical3D_Segment(QuadrilateralCylindrical3D_Segment_t &initial_segment, QuadrilateralCylindrical3D_Segmentation &initial_segmentation);
	unsigned int num_cells();
	QuadrilateralCylindrical3D_Cell make_cell(QuadrilateralCylindrical3D_Vertex vertex1, QuadrilateralCylindrical3D_Vertex vertex2, QuadrilateralCylindrical3D_Vertex vertex3, QuadrilateralCylindrical3D_Vertex vertex4);
	list get_cells();
};

///////////////////////////////
// Quadrilateral, polar (2D) //
///////////////////////////////

class QuadrilateralPolar2D_Segment
{
	QuadrilateralPolar2D_Segment_t        segment;
	QuadrilateralPolar2D_Segmentation    *segmentation;
public:
	QuadrilateralPolar2D_Segment(QuadrilateralPolar2D_Segment_t &initial_segment, QuadrilateralPolar2D_Segmentation &initial_segmentation);
	unsigned int num_cells();
	QuadrilateralPolar2D_Cell make_cell(QuadrilateralPolar2D_Vertex vertex1, QuadrilateralPolar2D_Vertex vertex2, QuadrilateralPolar2D_Vertex vertex3, QuadrilateralPolar2D_Vertex vertex4);
	list get_cells();
};

///////////////////////////////////
// Quadrilateral, spherical (3D) //
///////////////////////////////////

class QuadrilateralSpherical3D_Segment
{
	QuadrilateralSpherical3D_Segment_t        segment;
	QuadrilateralSpherical3D_Segmentation    *segmentation;
public:
	QuadrilateralSpherical3D_Segment(QuadrilateralSpherical3D_Segment_t &initial_segment, QuadrilateralSpherical3D_Segmentation &initial_segmentation);
	unsigned int num_cells();
	QuadrilateralSpherical3D_Cell make_cell(QuadrilateralSpherical3D_Vertex vertex1, QuadrilateralSpherical3D_Vertex vertex2, QuadrilateralSpherical3D_Vertex vertex3, QuadrilateralSpherical3D_Vertex vertex4);
	list get_cells();
};

#endif /* end of include guard: QUADRILATERAL_HPP_ASEQMOCM */
