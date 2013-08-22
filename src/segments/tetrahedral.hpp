#ifndef SEGMENTS_TETRAHEDRAL_HPP
#define SEGMENTS_TETRAHEDRAL_HPP

#include "types.hpp"

#include "../domains/forward.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../cells/tetrahedral.hpp"
#include "../segmentations/forward.hpp"
#include "../vertices/tetrahedral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

///////////////////////////////
// Tetrahedral, cartesian 3D //
///////////////////////////////

class TetrahedralCartesian3D_Segment
{
	TetrahedralCartesian3D_Segment_t        segment;
	TetrahedralCartesian3D_Segmentation    *segmentation;
public:
	TetrahedralCartesian3D_Segment(TetrahedralCartesian3D_Segment_t &initial_segment, TetrahedralCartesian3D_Segmentation &initial_segmentation);
	unsigned int num_cells();
	TetrahedralCartesian3D_Cell make_cell(TetrahedralCartesian3D_Vertex vertex1, TetrahedralCartesian3D_Vertex vertex2, TetrahedralCartesian3D_Vertex vertex3, TetrahedralCartesian3D_Vertex vertex4);
	list get_cells();
	TetrahedralCartesian3D_Segment_t & get_segment();
};

///////////////////////////////////
// Tetrahedral, cylindrical (3D) //
///////////////////////////////////

class TetrahedralCylindrical3D_Segment
{
	TetrahedralCylindrical3D_Segment_t        segment;
	TetrahedralCylindrical3D_Segmentation    *segmentation;
public:
	TetrahedralCylindrical3D_Segment(TetrahedralCylindrical3D_Segment_t &initial_segment, TetrahedralCylindrical3D_Segmentation &initial_segmentation);
	unsigned int num_cells();
	TetrahedralCylindrical3D_Cell make_cell(TetrahedralCylindrical3D_Vertex vertex1, TetrahedralCylindrical3D_Vertex vertex2, TetrahedralCylindrical3D_Vertex vertex3, TetrahedralCylindrical3D_Vertex vertex4);
	list get_cells();
	TetrahedralCylindrical3D_Segment_t & get_segment();
};

/////////////////////////////////
// Tetrahedral, spherical (3D) //
/////////////////////////////////

class TetrahedralSpherical3D_Segment
{
	TetrahedralSpherical3D_Segment_t        segment;
	TetrahedralSpherical3D_Segmentation    *segmentation;
public:
	TetrahedralSpherical3D_Segment(TetrahedralSpherical3D_Segment_t &initial_segment, TetrahedralSpherical3D_Segmentation &initial_segmentation);
	unsigned int num_cells();
	TetrahedralSpherical3D_Cell make_cell(TetrahedralSpherical3D_Vertex vertex1, TetrahedralSpherical3D_Vertex vertex2, TetrahedralSpherical3D_Vertex vertex3, TetrahedralSpherical3D_Vertex vertex4);
	list get_cells();
	TetrahedralSpherical3D_Segment_t & get_segment();
};

#endif /* end of include guard: SEGMENTS_TETRAHEDRAL_HPP */
