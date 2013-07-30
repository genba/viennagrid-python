#include "segment_based.hpp"

#include <viennagrid/algorithm/interface.hpp>
#include <viennagrid/algorithm/surface.hpp>
#include <viennagrid/algorithm/volume.hpp>

/****************
 * IS_INTERFACE *
 ****************/

// Linear

bool LinearCartesian1D_Segment_is_interface(LinearCartesian1D_Segment seg0, LinearCartesian1D_Segment seg1, LinearCartesian1D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

bool LinearCartesian2D_Segment_is_interface(LinearCartesian2D_Segment seg0, LinearCartesian2D_Segment seg1, LinearCartesian2D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

bool LinearCartesian3D_Segment_is_interface(LinearCartesian3D_Segment seg0, LinearCartesian3D_Segment seg1, LinearCartesian3D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

bool LinearCylindrical3D_Segment_is_interface(LinearCylindrical3D_Segment seg0, LinearCylindrical3D_Segment seg1, LinearCylindrical3D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

bool LinearPolar2D_Segment_is_interface(LinearPolar2D_Segment seg0, LinearPolar2D_Segment seg1, LinearPolar2D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

bool LinearSpherical3D_Segment_is_interface(LinearSpherical3D_Segment seg0, LinearSpherical3D_Segment seg1, LinearSpherical3D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

// Triangular

bool TriangularCartesian2D_Segment_is_interface(TriangularCartesian2D_Segment seg0, TriangularCartesian2D_Segment seg1, TriangularCartesian2D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

bool TriangularCartesian3D_Segment_is_interface(TriangularCartesian3D_Segment seg0, TriangularCartesian3D_Segment seg1, TriangularCartesian3D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

bool TriangularCylindrical3D_Segment_is_interface(TriangularCylindrical3D_Segment seg0, TriangularCylindrical3D_Segment seg1, TriangularCylindrical3D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

bool TriangularPolar2D_Segment_is_interface(TriangularPolar2D_Segment seg0, TriangularPolar2D_Segment seg1, TriangularPolar2D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

bool TriangularSpherical3D_Segment_is_interface(TriangularSpherical3D_Segment seg0, TriangularSpherical3D_Segment seg1, TriangularSpherical3D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

// Quadrilateral

bool QuadrilateralCartesian2D_Segment_is_interface(QuadrilateralCartesian2D_Segment seg0, QuadrilateralCartesian2D_Segment seg1, QuadrilateralCartesian2D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

bool QuadrilateralCartesian3D_Segment_is_interface(QuadrilateralCartesian3D_Segment seg0, QuadrilateralCartesian3D_Segment seg1, QuadrilateralCartesian3D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

bool QuadrilateralCylindrical3D_Segment_is_interface(QuadrilateralCylindrical3D_Segment seg0, QuadrilateralCylindrical3D_Segment seg1, QuadrilateralCylindrical3D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

bool QuadrilateralPolar2D_Segment_is_interface(QuadrilateralPolar2D_Segment seg0, QuadrilateralPolar2D_Segment seg1, QuadrilateralPolar2D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

bool QuadrilateralSpherical3D_Segment_is_interface(QuadrilateralSpherical3D_Segment seg0, QuadrilateralSpherical3D_Segment seg1, QuadrilateralSpherical3D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

// Tetrahedral

bool TetrahedralCartesian3D_Segment_is_interface(TetrahedralCartesian3D_Segment seg0, TetrahedralCartesian3D_Segment seg1, TetrahedralCartesian3D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

bool TetrahedralCylindrical3D_Segment_is_interface(TetrahedralCylindrical3D_Segment seg0, TetrahedralCylindrical3D_Segment seg1, TetrahedralCylindrical3D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

bool TetrahedralSpherical3D_Segment_is_interface(TetrahedralSpherical3D_Segment seg0, TetrahedralSpherical3D_Segment seg1, TetrahedralSpherical3D_Cell cell)
{
	return viennagrid::is_interface(seg0.get_segment(), seg1.get_segment(), cell.get_cell());
}

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

/**********
 * VOLUME *
 **********/

// Linear

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

// Triangular

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

// Quadrilateral

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

// Tetrahedral

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
