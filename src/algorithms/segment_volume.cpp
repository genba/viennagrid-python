#include "segment_volume.hpp"

#include <viennagrid/algorithm/volume.hpp>

////////////
// Linear //
////////////

double LinearCartesian1D_Segment_volume(LinearCartesian1D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

double LinearCartesian2D_Segment_volume(LinearCartesian2D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

double LinearCartesian3D_Segment_volume(LinearCartesian3D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

double LinearCylindrical3D_Segment_volume(LinearCylindrical3D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

double LinearPolar2D_Segment_volume(LinearPolar2D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

double LinearSpherical3D_Segment_volume(LinearSpherical3D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

////////////////
// Triangular //
////////////////

double TriangularCartesian2D_Segment_volume(TriangularCartesian2D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

double TriangularCartesian3D_Segment_volume(TriangularCartesian3D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

double TriangularCylindrical3D_Segment_volume(TriangularCylindrical3D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

double TriangularPolar2D_Segment_volume(TriangularPolar2D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

double TriangularSpherical3D_Segment_volume(TriangularSpherical3D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

///////////////////
// Quadrilateral //
///////////////////

double QuadrilateralCartesian2D_Segment_volume(QuadrilateralCartesian2D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

double QuadrilateralCartesian3D_Segment_volume(QuadrilateralCartesian3D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

double QuadrilateralCylindrical3D_Segment_volume(QuadrilateralCylindrical3D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

double QuadrilateralPolar2D_Segment_volume(QuadrilateralPolar2D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

double QuadrilateralSpherical3D_Segment_volume(QuadrilateralSpherical3D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

/////////////////
// Tetrahedral //
/////////////////

double TetrahedralCartesian3D_Segment_volume(TetrahedralCartesian3D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

double TetrahedralCylindrical3D_Segment_volume(TetrahedralCylindrical3D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}

double TetrahedralSpherical3D_Segment_volume(TetrahedralSpherical3D_Segment segment)
{
	return viennagrid::volume(segment.get_segment());
}
