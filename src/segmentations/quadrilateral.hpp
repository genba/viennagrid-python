#ifndef SEGMENTATIONS_QUADRILATERAL_HPP
#define SEGMENTATIONS_QUADRILATERAL_HPP

#include "types.hpp"

#include "../domains/forward.hpp"
#include "../segments/quadrilateral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

////////////////////////////////
// QUADRILATERAL CARTESIAN 2D //
////////////////////////////////

class QuadrilateralCartesian2D_Segmentation
{
	QuadrilateralCartesian2D_Segmentation_t    segmentation;
	QuadrilateralCartesian2D_Domain           *domain;
public:
	QuadrilateralCartesian2D_Segmentation(QuadrilateralCartesian2D_Domain &dom);
	unsigned int num_segments();
	QuadrilateralCartesian2D_Segment make_segment();
	list get_segments();
	QuadrilateralCartesian2D_Domain_t & get_domain();
	QuadrilateralCartesian2D_Segmentation_t & get_segmentation();
};

////////////////////////////////
// QUADRILATERAL CARTESIAN 3D //
////////////////////////////////

class QuadrilateralCartesian3D_Segmentation
{
	QuadrilateralCartesian3D_Segmentation_t    segmentation;
	QuadrilateralCartesian3D_Domain           *domain;
public:
	QuadrilateralCartesian3D_Segmentation(QuadrilateralCartesian3D_Domain &dom);
	unsigned int num_segments();
	QuadrilateralCartesian3D_Segment make_segment();
	list get_segments();
	QuadrilateralCartesian3D_Domain_t & get_domain();
	QuadrilateralCartesian3D_Segmentation_t & get_segmentation();
};

//////////////////////////////////
// QUADRILATERAL CYLINDRICAL 3D //
//////////////////////////////////

class QuadrilateralCylindrical3D_Segmentation
{
	QuadrilateralCylindrical3D_Segmentation_t    segmentation;
	QuadrilateralCylindrical3D_Domain           *domain;
public:
	QuadrilateralCylindrical3D_Segmentation(QuadrilateralCylindrical3D_Domain &dom);
	unsigned int num_segments();
	QuadrilateralCylindrical3D_Segment make_segment();
	list get_segments();
	QuadrilateralCylindrical3D_Domain_t & get_domain();
	QuadrilateralCylindrical3D_Segmentation_t & get_segmentation();
};

////////////////////////////
// QUADRILATERAL POLAR 2D //
////////////////////////////

class QuadrilateralPolar2D_Segmentation
{
	QuadrilateralPolar2D_Segmentation_t    segmentation;
	QuadrilateralPolar2D_Domain           *domain;
public:
	QuadrilateralPolar2D_Segmentation(QuadrilateralPolar2D_Domain &dom);
	unsigned int num_segments();
	QuadrilateralPolar2D_Segment make_segment();
	list get_segments();
	QuadrilateralPolar2D_Domain_t & get_domain();
	QuadrilateralPolar2D_Segmentation_t & get_segmentation();
};

////////////////////////////////
// QUADRILATERAL SPHERICAL 3D //
////////////////////////////////

class QuadrilateralSpherical3D_Segmentation
{
	QuadrilateralSpherical3D_Segmentation_t    segmentation;
	QuadrilateralSpherical3D_Domain           *domain;
public:
	QuadrilateralSpherical3D_Segmentation(QuadrilateralSpherical3D_Domain &dom);
	unsigned int num_segments();
	QuadrilateralSpherical3D_Segment make_segment();
	list get_segments();
	QuadrilateralSpherical3D_Domain_t & get_domain();
	QuadrilateralSpherical3D_Segmentation_t & get_segmentation();
};

#endif /* end of include guard: SEGMENTATIONS_QUADRILATERAL_HPP */
