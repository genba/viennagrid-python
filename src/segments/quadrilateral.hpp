#ifndef QUADRILATERAL_HPP_ASEQMOCM
#define QUADRILATERAL_HPP_ASEQMOCM

#include "types.hpp"

#include "../domains/forward.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../cells/quadrilateral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/////////////////////////////////
// Quadrilateral, cartesian 2D //
/////////////////////////////////

class QuadrilateralCartesian2D_Segment
{
	QuadrilateralCartesian2D_Domain      *domain;
	QuadrilateralCartesian2D_Segment_t    segment;
	list                                  cells;
public:
	QuadrilateralCartesian2D_Segment() {} // TODO: delete
	QuadrilateralCartesian2D_Segment(QuadrilateralCartesian2D_Domain &initial_domain, QuadrilateralCartesian2D_Segment_t &initial_segment);
	void create_cell(PointCartesian2D vertex1, PointCartesian2D vertex2, PointCartesian2D vertex3, PointCartesian2D vertex4);
	list get_cells();
};

/////////////////////////////////
// Quadrilateral, cartesian 3D //
/////////////////////////////////

class QuadrilateralCartesian3D_Segment
{
	QuadrilateralCartesian3D_Domain      *domain;
	QuadrilateralCartesian3D_Segment_t    segment;
	list                                  cells;
public:
	QuadrilateralCartesian3D_Segment() {} // TODO: delete
	QuadrilateralCartesian3D_Segment(QuadrilateralCartesian3D_Domain &initial_domain, QuadrilateralCartesian3D_Segment_t &initial_segment);
	void create_cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3, PointCartesian3D vertex4);
	list get_cells();
};

/////////////////////////////////////
// Quadrilateral, cylindrical (3D) //
/////////////////////////////////////

class QuadrilateralCylindrical3D_Segment
{
	QuadrilateralCylindrical3D_Domain      *domain;
	QuadrilateralCylindrical3D_Segment_t    segment;
	list                                    cells;
public:
	QuadrilateralCylindrical3D_Segment() {} // TODO: delete
	QuadrilateralCylindrical3D_Segment(QuadrilateralCylindrical3D_Domain &initial_domain, QuadrilateralCylindrical3D_Segment_t &initial_segment);
	void create_cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3, PointCylindrical3D vertex4);
	list get_cells();
};

///////////////////////////////
// Quadrilateral, polar (2D) //
///////////////////////////////

class QuadrilateralPolar2D_Segment
{
	QuadrilateralPolar2D_Domain      *domain;
	QuadrilateralPolar2D_Segment_t    segment;
	list                              cells;
public:
	QuadrilateralPolar2D_Segment() {} // TODO: delete
	QuadrilateralPolar2D_Segment(QuadrilateralPolar2D_Domain &initial_domain, QuadrilateralPolar2D_Segment_t &initial_segment);
	void create_cell(PointPolar2D vertex1, PointPolar2D vertex2, PointPolar2D vertex3, PointPolar2D vertex4);
	list get_cells();
};

///////////////////////////////////
// Quadrilateral, spherical (3D) //
///////////////////////////////////

class QuadrilateralSpherical3D_Segment
{
	QuadrilateralSpherical3D_Domain      *domain;
	QuadrilateralSpherical3D_Segment_t    segment;
	list                                  cells;
public:
	QuadrilateralSpherical3D_Segment() {} // TODO: delete
	QuadrilateralSpherical3D_Segment(QuadrilateralSpherical3D_Domain &initial_domain, QuadrilateralSpherical3D_Segment_t &initial_segment);
	void create_cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3, PointSpherical3D vertex4);
	list get_cells();
};

#endif /* end of include guard: QUADRILATERAL_HPP_ASEQMOCM */
