#ifndef SEGMENTATION_LINEAR_HPP
#define SEGMENTATION_LINEAR_HPP

#include "types.hpp"

#include "../domains/linear.hpp"

/////////////////////////
// LINEAR CARTESIAN 1D //
/////////////////////////

class LinearCartesian1D_Segmentation
{
	LinearCartesian1D_Segmentation_t    segmentation;
	//LinearCartesian1D_Domain           *domain;
public:
	LinearCartesian1D_Segmentation(LinearCartesian1D_Domain &dom);
	LinearCartesian1D_Segment create_segment();
};

/////////////////////////
// LINEAR CARTESIAN 2D //
/////////////////////////

class LinearCartesian2D_Segmentation
{
	LinearCartesian2D_Segmentation_t    segmentation;
	//LinearCartesian2D_Domain           *domain;
public:
	LinearCartesian2D_Segmentation(LinearCartesian2D_Domain &dom);
	LinearCartesian2D_Segment create_segment();
};

/////////////////////////
// LINEAR CARTESIAN 3D //
/////////////////////////

class LinearCartesian3D_Segmentation
{
	LinearCartesian3D_Segmentation_t    segmentation;
	//LinearCartesian3D_Domain           *domain;
public:
	LinearCartesian3D_Segmentation(LinearCartesian3D_Domain &dom);
	LinearCartesian3D_Segment create_segment();
};

///////////////////////////
// LINEAR CYLINDRICAL 3D //
///////////////////////////

class LinearCylindrical3D_Segmentation
{
	LinearCylindrical3D_Segmentation_t    segmentation;
	//LinearCylindrical3D_Domain           *domain;
public:
	LinearCylindrical3D_Segmentation(LinearCylindrical3D_Domain &dom);
	LinearCylindrical3D_Segment create_segment();
};

/////////////////////
// LINEAR POLAR 2D //
/////////////////////

class LinearPolar2D_Segmentation
{
	LinearPolar2D_Segmentation_t    segmentation;
	//LinearPolar2D_Domain           *domain;
public:
	LinearPolar2D_Segmentation(LinearPolar2D_Domain &dom);
	LinearPolar2D_Segment create_segment();
};

/////////////////////////
// LINEAR SPHERICAL 3D //
/////////////////////////

class LinearSpherical3D_Segmentation
{
	LinearSpherical3D_Segmentation_t    segmentation;
	//LinearSpherical3D_Domain           *domain;
public:
	LinearSpherical3D_Segmentation(LinearSpherical3D_Domain &dom);
	LinearSpherical3D_Segment create_segment();
};

#endif
