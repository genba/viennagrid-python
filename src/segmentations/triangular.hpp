#ifndef SEGMENTATIONS_TRIANGULAR_HPP
#define SEGMENTATIONS_TRIANGULAR_HPP

#include "types.hpp"

#include "../domains/triangular.hpp"
#include "../segments/triangular.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/////////////////////////////
// TRIANGULAR CARTESIAN 2D //
/////////////////////////////

class TriangularCartesian2D_Segmentation
{
	TriangularCartesian2D_Segmentation_t    segmentation;
	TriangularCartesian2D_Domain           *domain;
public:
	TriangularCartesian2D_Segmentation(TriangularCartesian2D_Domain &dom);
	unsigned int num_segments();
	TriangularCartesian2D_Segment make_segment();
	list get_segments();
	TriangularCartesian2D_Domain_t & get_domain();
	TriangularCartesian2D_Segmentation_t & get_segmentation();
};

/////////////////////////////
// TRIANGULAR CARTESIAN 3D //
/////////////////////////////

class TriangularCartesian3D_Segmentation
{
	TriangularCartesian3D_Segmentation_t    segmentation;
	TriangularCartesian3D_Domain           *domain;
public:
	TriangularCartesian3D_Segmentation(TriangularCartesian3D_Domain &dom);
	unsigned int num_segments();
	TriangularCartesian3D_Segment make_segment();
	list get_segments();
	TriangularCartesian3D_Domain_t & get_domain();
	TriangularCartesian3D_Segmentation_t & get_segmentation();
};

///////////////////////////////
// TRIANGULAR CYLINDRICAL 3D //
///////////////////////////////

class TriangularCylindrical3D_Segmentation
{
	TriangularCylindrical3D_Segmentation_t    segmentation;
	TriangularCylindrical3D_Domain           *domain;
public:
	TriangularCylindrical3D_Segmentation(TriangularCylindrical3D_Domain &dom);
	unsigned int num_segments();
	TriangularCylindrical3D_Segment make_segment();
	list get_segments();
	TriangularCylindrical3D_Domain_t & get_domain();
	TriangularCylindrical3D_Segmentation_t & get_segmentation();
};

/////////////////////////
// TRIANGULAR POLAR 2D //
/////////////////////////

class TriangularPolar2D_Segmentation
{
	TriangularPolar2D_Segmentation_t    segmentation;
	TriangularPolar2D_Domain           *domain;
public:
	TriangularPolar2D_Segmentation(TriangularPolar2D_Domain &dom);
	unsigned int num_segments();
	TriangularPolar2D_Segment make_segment();
	list get_segments();
	TriangularPolar2D_Domain_t & get_domain();
	TriangularPolar2D_Segmentation_t & get_segmentation();
};

/////////////////////////////
// TRIANGULAR SPHERICAL 3D //
/////////////////////////////

class TriangularSpherical3D_Segmentation
{
	TriangularSpherical3D_Segmentation_t    segmentation;
	TriangularSpherical3D_Domain           *domain;
public:
	TriangularSpherical3D_Segmentation(TriangularSpherical3D_Domain &dom);
	unsigned int num_segments();
	TriangularSpherical3D_Segment make_segment();
	list get_segments();
	TriangularSpherical3D_Domain_t & get_domain();
	TriangularSpherical3D_Segmentation_t & get_segmentation();
};

#endif /* end of include guard: SEGMENTATIONS_TRIANGULAR_HPP */
