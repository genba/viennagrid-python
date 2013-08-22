/**
 * @file
 * @brief Class definitions of wrapped segments from triangular domains.
 */

#ifndef TRIANGULAR_HPP_ASEQMOCM
#define TRIANGULAR_HPP_ASEQMOCM

#include "types.hpp"

#include "../domains/forward.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../cells/triangular.hpp"
#include "../vertices/triangular.hpp"
#include "../segmentations/forward.hpp"

#include <boost/python.hpp>
using namespace boost::python;

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

class TriangularCartesian2D_Segment
{
	TriangularCartesian2D_Segment_t        segment;
	TriangularCartesian2D_Segmentation    *segmentation;
public:
	TriangularCartesian2D_Segment(TriangularCartesian2D_Segment_t &initial_segment, TriangularCartesian2D_Segmentation &initial_segmentation);
	unsigned int num_cells();
	TriangularCartesian2D_Cell make_cell(TriangularCartesian2D_Vertex vertex1, TriangularCartesian2D_Vertex vertex2, TriangularCartesian2D_Vertex vertex3);
	list get_cells();
	TriangularCartesian2D_Segment_t & get_segment();
};

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

class TriangularCartesian3D_Segment
{
	TriangularCartesian3D_Segment_t        segment;
	TriangularCartesian3D_Segmentation    *segmentation;
public:
	TriangularCartesian3D_Segment(TriangularCartesian3D_Segment_t &initial_segment, TriangularCartesian3D_Segmentation &initial_segmentation);
	unsigned int num_cells();
	TriangularCartesian3D_Cell make_cell(TriangularCartesian3D_Vertex vertex1, TriangularCartesian3D_Vertex vertex2, TriangularCartesian3D_Vertex vertex3);
	list get_cells();
	TriangularCartesian3D_Segment_t & get_segment();
};

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

class TriangularCylindrical3D_Segment
{
	TriangularCylindrical3D_Segment_t        segment;
	TriangularCylindrical3D_Segmentation    *segmentation;
public:
	TriangularCylindrical3D_Segment(TriangularCylindrical3D_Segment_t &initial_segment, TriangularCylindrical3D_Segmentation &initial_segmentation);
	unsigned int num_cells();
	TriangularCylindrical3D_Cell make_cell(TriangularCylindrical3D_Vertex vertex1, TriangularCylindrical3D_Vertex vertex2, TriangularCylindrical3D_Vertex vertex3);
	list get_cells();
	TriangularCylindrical3D_Segment_t & get_segment();
};

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

class TriangularPolar2D_Segment
{
	TriangularPolar2D_Segment_t        segment;
	TriangularPolar2D_Segmentation    *segmentation;
public:
	TriangularPolar2D_Segment(TriangularPolar2D_Segment_t &initial_segment, TriangularPolar2D_Segmentation &initial_segmentation);
	unsigned int num_cells();
	TriangularPolar2D_Cell make_cell(TriangularPolar2D_Vertex vertex1, TriangularPolar2D_Vertex vertex2, TriangularPolar2D_Vertex vertex3);
	list get_cells();
	TriangularPolar2D_Segment_t & get_segment();
};

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

class TriangularSpherical3D_Segment
{
	TriangularSpherical3D_Segment_t        segment;
	TriangularSpherical3D_Segmentation    *segmentation;
public:
	TriangularSpherical3D_Segment(TriangularSpherical3D_Segment_t &initial_segment, TriangularSpherical3D_Segmentation &initial_segmentation);
	unsigned int num_cells();
	TriangularSpherical3D_Cell make_cell(TriangularSpherical3D_Vertex vertex1, TriangularSpherical3D_Vertex vertex2, TriangularSpherical3D_Vertex vertex3);
	list get_cells();
	TriangularSpherical3D_Segment_t & get_segment();
};

#endif /* end of include guard: TRIANGULAR_HPP_ASEQMOCM */
