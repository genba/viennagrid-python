#include "segment_surface.hpp"

#include <viennagrid/algorithm/surface.hpp>

/***********
 * SURFACE *
 ***********/

// Linear

double LinearCartesian1D_Segment_surface(LinearCartesian1D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

double LinearCartesian2D_Segment_surface(LinearCartesian2D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

double LinearCartesian3D_Segment_surface(LinearCartesian3D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

double LinearCylindrical3D_Segment_surface(LinearCylindrical3D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

double LinearPolar2D_Segment_surface(LinearPolar2D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

double LinearSpherical3D_Segment_surface(LinearSpherical3D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

// Triangular

double TriangularCartesian2D_Segment_surface(TriangularCartesian2D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

double TriangularCartesian3D_Segment_surface(TriangularCartesian3D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

double TriangularCylindrical3D_Segment_surface(TriangularCylindrical3D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

double TriangularPolar2D_Segment_surface(TriangularPolar2D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

double TriangularSpherical3D_Segment_surface(TriangularSpherical3D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

// Quadrilateral

double QuadrilateralCartesian2D_Segment_surface(QuadrilateralCartesian2D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

double QuadrilateralCartesian3D_Segment_surface(QuadrilateralCartesian3D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

double QuadrilateralCylindrical3D_Segment_surface(QuadrilateralCylindrical3D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

double QuadrilateralPolar2D_Segment_surface(QuadrilateralPolar2D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

double QuadrilateralSpherical3D_Segment_surface(QuadrilateralSpherical3D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

// Tetrahedral

double TetrahedralCartesian3D_Segment_surface(TetrahedralCartesian3D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

double TetrahedralCylindrical3D_Segment_surface(TetrahedralCylindrical3D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}

double TetrahedralSpherical3D_Segment_surface(TetrahedralSpherical3D_Segment segment)
{
	return viennagrid::surface(segment.get_segment());
}
