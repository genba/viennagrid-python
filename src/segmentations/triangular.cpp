#include "triangular.hpp"

////////////////////////////////////////
// TriangularCartesian2D_Segmentation //
////////////////////////////////////////

TriangularCartesian2D_Segmentation::TriangularCartesian2D_Segmentation(TriangularCartesian2D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

TriangularCartesian2D_Segment TriangularCartesian2D_Segmentation::create_segment()
{
	TriangularCartesian2D_Segment_t seg = segmentation.make_segment();
	TriangularCartesian2D_Segment new_segment(seg);
	return new_segment;
}

////////////////////////////////////////
// TriangularCartesian3D_Segmentation //
////////////////////////////////////////

TriangularCartesian3D_Segmentation::TriangularCartesian3D_Segmentation(TriangularCartesian3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

TriangularCartesian3D_Segment TriangularCartesian3D_Segmentation::create_segment()
{
	TriangularCartesian3D_Segment_t seg = segmentation.make_segment();
	TriangularCartesian3D_Segment new_segment(seg);
	return new_segment;
}

//////////////////////////////////////////
// TriangularCylindrical3D_Segmentation //
//////////////////////////////////////////

TriangularCylindrical3D_Segmentation::TriangularCylindrical3D_Segmentation(TriangularCylindrical3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

TriangularCylindrical3D_Segment TriangularCylindrical3D_Segmentation::create_segment()
{
	TriangularCylindrical3D_Segment_t seg = segmentation.make_segment();
	TriangularCylindrical3D_Segment new_segment(seg);
	return new_segment;
}

////////////////////////////////////
// TriangularPolar2D_Segmentation //
////////////////////////////////////

TriangularPolar2D_Segmentation::TriangularPolar2D_Segmentation(TriangularPolar2D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

TriangularPolar2D_Segment TriangularPolar2D_Segmentation::create_segment()
{
	TriangularPolar2D_Segment_t seg = segmentation.make_segment();
	TriangularPolar2D_Segment new_segment(seg);
	return new_segment;
}

////////////////////////////////////////
// TriangularSpherical3D_Segmentation //
////////////////////////////////////////

TriangularSpherical3D_Segmentation::TriangularSpherical3D_Segmentation(TriangularSpherical3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

TriangularSpherical3D_Segment TriangularSpherical3D_Segmentation::create_segment()
{
	TriangularSpherical3D_Segment_t seg = segmentation.make_segment();
	TriangularSpherical3D_Segment new_segment(seg);
	return new_segment;
}
