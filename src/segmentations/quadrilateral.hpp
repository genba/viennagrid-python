#ifndef SEGMENTATION_QUADRILATERAL_HPP
#define SEGMENTATION_QUADRILATERAL_HPP

#include "types.hpp"

#include "../domains/quadrilateral.hpp"

////////////////////////////////
// QUADRILATERAL CARTESIAN 2D //
////////////////////////////////

class QuadrilateralCartesian2D_Segmentation
{
	QuadrilateralCartesian2D_Segmentation_t    segmentation;
	//QuadrilateralCartesian2D_Domain           *domain;
public:
	QuadrilateralCartesian2D_Segmentation(QuadrilateralCartesian2D_Domain &dom);
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
};

#endif
