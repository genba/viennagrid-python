#ifndef TRIANGULAR_HPP_ASEQMOCM
#define TRIANGULAR_HPP_ASEQMOCM

#include "types.hpp"

#include "../domains/forward.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

class TriangularCartesian2D_Segment
{
	TriangularCartesian2D_Domain      *domain;
	TriangularCartesian2D_Segment_t    segment;
public:
	TriangularCartesian2D_Segment() {} // TODO: delete
	TriangularCartesian2D_Segment(TriangularCartesian2D_Domain &initial_domain, TriangularCartesian2D_Segment_t &initial_segment);
	void create_cell(PointCartesian2D vertex1, PointCartesian2D vertex2, PointCartesian2D vertex3);
};

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

class TriangularCartesian3D_Segment
{
	TriangularCartesian3D_Domain      *domain;
	TriangularCartesian3D_Segment_t    segment;
public:
	TriangularCartesian3D_Segment() {} // TODO: delete
	TriangularCartesian3D_Segment(TriangularCartesian3D_Domain &initial_domain, TriangularCartesian3D_Segment_t &initial_segment);
	void create_cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3);
};

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

class TriangularCylindrical3D_Segment
{
	TriangularCylindrical3D_Domain      *domain;
	TriangularCylindrical3D_Segment_t    segment;
public:
	TriangularCylindrical3D_Segment() {} // TODO: delete
	TriangularCylindrical3D_Segment(TriangularCylindrical3D_Domain &initial_domain, TriangularCylindrical3D_Segment_t &initial_segment);
	void create_cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3);
};

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

class TriangularPolar2D_Segment
{
	TriangularPolar2D_Domain      *domain;
	TriangularPolar2D_Segment_t    segment;
public:
	TriangularPolar2D_Segment() {} // TODO: delete
	TriangularPolar2D_Segment(TriangularPolar2D_Domain &initial_domain, TriangularPolar2D_Segment_t &initial_segment);
	void create_cell(PointPolar2D vertex1, PointPolar2D vertex2, PointPolar2D vertex3);
};

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

class TriangularSpherical3D_Segment
{
	TriangularSpherical3D_Domain      *domain;
	TriangularSpherical3D_Segment_t    segment;
public:
	TriangularSpherical3D_Segment() {} // TODO: delete
	TriangularSpherical3D_Segment(TriangularSpherical3D_Domain &initial_domain, TriangularSpherical3D_Segment_t &initial_segment);
	void create_cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3);
};

#endif /* end of include guard: TRIANGULAR_HPP_ASEQMOCM */
