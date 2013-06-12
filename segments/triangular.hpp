#ifndef TRIANGULAR_HPP_ASEQMOCM
#define TRIANGULAR_HPP_ASEQMOCM

#include "types.hpp"

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

class TriangularCartesian2D_Segment
{
	TriangularCartesian2D_Segment_t segment;
public:
	TriangularCartesian2D_Segment() {}
	TriangularCartesian2D_Segment(TriangularCartesian2D_Segment_t initial_segment);
};

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

class TriangularCartesian3D_Segment
{
	TriangularCartesian3D_Segment_t segment;
public:
	TriangularCartesian3D_Segment() {}
	TriangularCartesian3D_Segment(TriangularCartesian3D_Segment_t initial_segment);
};

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

class TriangularCylindrical3D_Segment
{
	TriangularCylindrical3D_Segment_t segment;
public:
	TriangularCylindrical3D_Segment() {}
	TriangularCylindrical3D_Segment(TriangularCylindrical3D_Segment_t initial_segment);
};

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

class TriangularPolar2D_Segment
{
	TriangularPolar2D_Segment_t segment;
public:
	TriangularPolar2D_Segment() {}
	TriangularPolar2D_Segment(TriangularPolar2D_Segment_t initial_segment);
};

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

class TriangularSpherical3D_Segment
{
	TriangularSpherical3D_Segment_t segment;
public:
	TriangularSpherical3D_Segment() {}
	TriangularSpherical3D_Segment(TriangularSpherical3D_Segment_t initial_segment);
};

#endif /* end of include guard: TRIANGULAR_HPP_ASEQMOCM */
