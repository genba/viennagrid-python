#ifndef TETRAHEDRAL_HPP_ASEQMOCM
#define TETRAHEDRAL_HPP_ASEQMOCM

#include "types.hpp"

#include "../domains/forward.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../cells/tetrahedral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

///////////////////////////////
// Tetrahedral, cartesian 3D //
///////////////////////////////

class TetrahedralCartesian3D_Segment
{
	TetrahedralCartesian3D_Segment_t    segment;
public:
	TetrahedralCartesian3D_Segment(TetrahedralCartesian3D_Segment_t &initial_segment);
	void create_cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3, PointCartesian3D vertex4);
	list get_cells();
};

///////////////////////////////////
// Tetrahedral, cylindrical (3D) //
///////////////////////////////////

class TetrahedralCylindrical3D_Segment
{
	TetrahedralCylindrical3D_Segment_t    segment;
public:
	TetrahedralCylindrical3D_Segment(TetrahedralCylindrical3D_Segment_t &initial_segment);
	void create_cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3, PointCylindrical3D vertex4);
	list get_cells();
};

/////////////////////////////////
// Tetrahedral, spherical (3D) //
/////////////////////////////////

class TetrahedralSpherical3D_Segment
{
	TetrahedralSpherical3D_Segment_t    segment;
public:
	TetrahedralSpherical3D_Segment(TetrahedralSpherical3D_Segment_t &initial_segment);
	void create_cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3, PointSpherical3D vertex4);
	list get_cells();
};

#endif /* end of include guard: TETRAHEDRAL_HPP_ASEQMOCM */
