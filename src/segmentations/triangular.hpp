#ifndef SEGMENTATION_TRIANGULAR_HPP
#define SEGMENTATION_TRIANGULAR_HPP

#include "types.hpp"

#include "../domains/triangular.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/////////////////////////////
// TRIANGULAR CARTESIAN 2D //
/////////////////////////////

class TriangularCartesian2D_Segmentation
{
	TriangularCartesian2D_Segmentation_t    segmentation;
	//TriangularCartesian2D_Domain           *domain;
public:
	TriangularCartesian2D_Segmentation(TriangularCartesian2D_Domain &dom);
	TriangularCartesian2D_Segment create_segment();
	list get_segments();
};

/////////////////////////////
// TRIANGULAR CARTESIAN 3D //
/////////////////////////////

class TriangularCartesian3D_Segmentation
{
	TriangularCartesian3D_Segmentation_t    segmentation;
	//TriangularCartesian3D_Domain           *domain;
public:
	TriangularCartesian3D_Segmentation(TriangularCartesian3D_Domain &dom);
	TriangularCartesian3D_Segment create_segment();
	list get_segments();
};

///////////////////////////////
// TRIANGULAR CYLINDRICAL 3D //
///////////////////////////////

class TriangularCylindrical3D_Segmentation
{
	TriangularCylindrical3D_Segmentation_t    segmentation;
	//TriangularCylindrical3D_Domain           *domain;
public:
	TriangularCylindrical3D_Segmentation(TriangularCylindrical3D_Domain &dom);
	TriangularCylindrical3D_Segment create_segment();
	list get_segments();
};

/////////////////////////
// TRIANGULAR POLAR 2D //
/////////////////////////

class TriangularPolar2D_Segmentation
{
	TriangularPolar2D_Segmentation_t    segmentation;
	//TriangularPolar2D_Domain           *domain;
public:
	TriangularPolar2D_Segmentation(TriangularPolar2D_Domain &dom);
	TriangularPolar2D_Segment create_segment();
	list get_segments();
};

/////////////////////////////
// TRIANGULAR SPHERICAL 3D //
/////////////////////////////

class TriangularSpherical3D_Segmentation
{
	TriangularSpherical3D_Segmentation_t    segmentation;
	//TriangularSpherical3D_Domain           *domain;
public:
	TriangularSpherical3D_Segmentation(TriangularSpherical3D_Domain &dom);
	TriangularSpherical3D_Segment create_segment();
	list get_segments();
};

#endif
