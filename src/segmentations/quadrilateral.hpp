#ifndef SEGMENTATION_QUADRILATERAL_HPP
#define SEGMENTATION_QUADRILATERAL_HPP

#include "types.hpp"

#include "../domains/quadrilateral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

////////////////////////////////
// QUADRILATERAL CARTESIAN 2D //
////////////////////////////////

class QuadrilateralCartesian2D_Segmentation
{
	QuadrilateralCartesian2D_Segmentation_t    segmentation;
	//QuadrilateralCartesian2D_Domain           *domain;
public:
	QuadrilateralCartesian2D_Segmentation(QuadrilateralCartesian2D_Domain &dom);
	QuadrilateralCartesian2D_Segment create_segment();
	list get_segments();
};

////////////////////////////////
// QUADRILATERAL CARTESIAN 3D //
////////////////////////////////

class QuadrilateralCartesian3D_Segmentation
{
	QuadrilateralCartesian3D_Segmentation_t    segmentation;
	//QuadrilateralCartesian3D_Domain           *domain;
public:
	QuadrilateralCartesian3D_Segmentation(QuadrilateralCartesian3D_Domain &dom);
	QuadrilateralCartesian3D_Segment create_segment();
	list get_segments();
};

//////////////////////////////////
// QUADRILATERAL CYLINDRICAL 3D //
//////////////////////////////////

class QuadrilateralCylindrical3D_Segmentation
{
	QuadrilateralCylindrical3D_Segmentation_t    segmentation;
	//QuadrilateralCylindrical3D_Domain           *domain;
public:
	QuadrilateralCylindrical3D_Segmentation(QuadrilateralCylindrical3D_Domain &dom);
	QuadrilateralCylindrical3D_Segment create_segment();
	list get_segments();
};

////////////////////////////
// QUADRILATERAL POLAR 2D //
////////////////////////////

class QuadrilateralPolar2D_Segmentation
{
	QuadrilateralPolar2D_Segmentation_t    segmentation;
	//QuadrilateralPolar2D_Domain           *domain;
public:
	QuadrilateralPolar2D_Segmentation(QuadrilateralPolar2D_Domain &dom);
	QuadrilateralPolar2D_Segment create_segment();
	list get_segments();
};

////////////////////////////////
// QUADRILATERAL SPHERICAL 3D //
////////////////////////////////

class QuadrilateralSpherical3D_Segmentation
{
	QuadrilateralSpherical3D_Segmentation_t    segmentation;
	//QuadrilateralSpherical3D_Domain           *domain;
public:
	QuadrilateralSpherical3D_Segmentation(QuadrilateralSpherical3D_Domain &dom);
	QuadrilateralSpherical3D_Segment create_segment();
	list get_segments();
};

#endif
