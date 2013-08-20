/**
 * @file
 * @brief Class definitions of wrapped segmentations from tetrahedral domains.
 */

#ifndef SEGMENTATION_TETRAHEDRAL_HPP
#define SEGMENTATION_TETRAHEDRAL_HPP

#include "types.hpp"

#include "../domains/tetrahedral.hpp"
#include "../segments/tetrahedral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

//////////////////////////////
// TETRAHEDRAL CARTESIAN 3D //
//////////////////////////////

class TetrahedralCartesian3D_Segmentation
{
	TetrahedralCartesian3D_Segmentation_t    segmentation;
	TetrahedralCartesian3D_Domain           *domain;
public:
	TetrahedralCartesian3D_Segmentation(TetrahedralCartesian3D_Domain &dom);
	unsigned int num_segments();
	TetrahedralCartesian3D_Segment make_segment();
	list get_segments();
	TetrahedralCartesian3D_Domain_t & get_domain();
};

////////////////////////////////
// TETRAHEDRAL CYLINDRICAL 3D //
////////////////////////////////

class TetrahedralCylindrical3D_Segmentation
{
	TetrahedralCylindrical3D_Segmentation_t    segmentation;
	TetrahedralCylindrical3D_Domain           *domain;
public:
	TetrahedralCylindrical3D_Segmentation(TetrahedralCylindrical3D_Domain &dom);
	unsigned int num_segments();
	TetrahedralCylindrical3D_Segment make_segment();
	list get_segments();
	TetrahedralCylindrical3D_Domain_t & get_domain();
};

//////////////////////////////
// TETRAHEDRAL SPHERICAL 3D //
//////////////////////////////

class TetrahedralSpherical3D_Segmentation
{
	TetrahedralSpherical3D_Segmentation_t    segmentation;
	TetrahedralSpherical3D_Domain           *domain;
public:
	TetrahedralSpherical3D_Segmentation(TetrahedralSpherical3D_Domain &dom);
	unsigned int num_segments();
	TetrahedralSpherical3D_Segment make_segment();
	list get_segments();
	TetrahedralSpherical3D_Domain_t & get_domain();
};

#endif
