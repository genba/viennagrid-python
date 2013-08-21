#include "spanned_volume.hpp"

#include <viennagrid/algorithm/spanned_volume.hpp>

//////////////////////
// Length of a line //
//////////////////////

double LinearCartesian1D_spanned_volume(PointCartesian1D p1, PointCartesian1D p2)
{
	return viennagrid::spanned_volume(p1.get_point(), p2.get_point());
}

double LinearCartesian2D_spanned_volume(PointCartesian2D p1, PointCartesian2D p2)
{
	return viennagrid::spanned_volume(p1.get_point(), p2.get_point());
}

double LinearCartesian3D_spanned_volume(PointCartesian3D p1, PointCartesian3D p2)
{
	return viennagrid::spanned_volume(p1.get_point(), p2.get_point());
}

///////////////////////////
// Surface of a triangle //
///////////////////////////

double TriangularCartesian2D_spanned_volume(PointCartesian2D p1, PointCartesian2D p2, PointCartesian2D p3)
{
	return viennagrid::spanned_volume(p1.get_point(), p2.get_point(), p3.get_point());
}

double TriangularCartesian3D_spanned_volume(PointCartesian3D p1, PointCartesian3D p2, PointCartesian3D p3)
{
	return viennagrid::spanned_volume(p1.get_point(), p2.get_point(), p3.get_point());
}

/////////////////////////////
// Volume of a tetrahedron //
/////////////////////////////

double TetrahedralCartesian3D_spanned_volume(PointCartesian3D p1, PointCartesian3D p2, PointCartesian3D p3, PointCartesian3D p4)
{
	return viennagrid::spanned_volume(p1.get_point(), p2.get_point(), p3.get_point(), p4.get_point());
}
