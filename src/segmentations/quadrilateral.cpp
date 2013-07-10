#include "quadrilateral.hpp"

///////////////////////////////////////////
// QuadrilateralCartesian2D_Segmentation //
///////////////////////////////////////////

QuadrilateralCartesian2D_Segmentation::QuadrilateralCartesian2D_Segmentation(QuadrilateralCartesian2D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

QuadrilateralCartesian2D_Segment QuadrilateralCartesian2D_Segmentation::create_segment()
{
	QuadrilateralCartesian2D_Segment_t seg = segmentation.make_segment();
	QuadrilateralCartesian2D_Segment new_segment(seg);
	return new_segment;
}

///////////////////////////////////////////
// QuadrilateralCartesian3D_Segmentation //
///////////////////////////////////////////

QuadrilateralCartesian3D_Segmentation::QuadrilateralCartesian3D_Segmentation(QuadrilateralCartesian3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

QuadrilateralCartesian3D_Segment QuadrilateralCartesian3D_Segmentation::create_segment()
{
	QuadrilateralCartesian3D_Segment_t seg = segmentation.make_segment();
	QuadrilateralCartesian3D_Segment new_segment(seg);
	return new_segment;
}

/////////////////////////////////////////////
// QuadrilateralCylindrical3D_Segmentation //
/////////////////////////////////////////////

QuadrilateralCylindrical3D_Segmentation::QuadrilateralCylindrical3D_Segmentation(QuadrilateralCylindrical3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

QuadrilateralCylindrical3D_Segment QuadrilateralCylindrical3D_Segmentation::create_segment()
{
	QuadrilateralCylindrical3D_Segment_t seg = segmentation.make_segment();
	QuadrilateralCylindrical3D_Segment new_segment(seg);
	return new_segment;
}

///////////////////////////////////////
// QuadrilateralPolar2D_Segmentation //
///////////////////////////////////////

QuadrilateralPolar2D_Segmentation::QuadrilateralPolar2D_Segmentation(QuadrilateralPolar2D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

QuadrilateralPolar2D_Segment QuadrilateralPolar2D_Segmentation::create_segment()
{
	QuadrilateralPolar2D_Segment_t seg = segmentation.make_segment();
	QuadrilateralPolar2D_Segment new_segment(seg);
	return new_segment;
}

///////////////////////////////////////////
// QuadrilateralSpherical3D_Segmentation //
///////////////////////////////////////////

QuadrilateralSpherical3D_Segmentation::QuadrilateralSpherical3D_Segmentation(QuadrilateralSpherical3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

QuadrilateralSpherical3D_Segment QuadrilateralSpherical3D_Segmentation::create_segment()
{
	QuadrilateralSpherical3D_Segment_t seg = segmentation.make_segment();
	QuadrilateralSpherical3D_Segment new_segment(seg);
	return new_segment;
}
