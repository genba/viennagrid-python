#include "linear.hpp"

////////////////////////////////////
// LinearCartesian1D_Segmentation //
////////////////////////////////////

LinearCartesian1D_Segmentation::LinearCartesian1D_Segmentation(LinearCartesian1D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

LinearCartesian1D_Segment LinearCartesian1D_Segmentation::create_segment()
{
	LinearCartesian1D_Segment_t seg = segmentation.make_segment();
	LinearCartesian1D_Segment new_segment(seg);
	return new_segment;
}

////////////////////////////////////
// LinearCartesian2D_Segmentation //
////////////////////////////////////

LinearCartesian2D_Segmentation::LinearCartesian2D_Segmentation(LinearCartesian2D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

LinearCartesian2D_Segment LinearCartesian2D_Segmentation::create_segment()
{
	LinearCartesian2D_Segment_t seg = segmentation.make_segment();
	LinearCartesian2D_Segment new_segment(seg);
	return new_segment;
}

////////////////////////////////////
// LinearCartesian3D_Segmentation //
////////////////////////////////////

LinearCartesian3D_Segmentation::LinearCartesian3D_Segmentation(LinearCartesian3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

LinearCartesian3D_Segment LinearCartesian3D_Segmentation::create_segment()
{
	LinearCartesian3D_Segment_t seg = segmentation.make_segment();
	LinearCartesian3D_Segment new_segment(seg);
	return new_segment;
}

//////////////////////////////////////
// LinearCylindrical3D_Segmentation //
//////////////////////////////////////

LinearCylindrical3D_Segmentation::LinearCylindrical3D_Segmentation(LinearCylindrical3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

LinearCylindrical3D_Segment LinearCylindrical3D_Segmentation::create_segment()
{
	LinearCylindrical3D_Segment_t seg = segmentation.make_segment();
	LinearCylindrical3D_Segment new_segment(seg);
	return new_segment;
}

////////////////////////////////
// LinearPolar2D_Segmentation //
////////////////////////////////

LinearPolar2D_Segmentation::LinearPolar2D_Segmentation(LinearPolar2D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

LinearPolar2D_Segment LinearPolar2D_Segmentation::create_segment()
{
	LinearPolar2D_Segment_t seg = segmentation.make_segment();
	LinearPolar2D_Segment new_segment(seg);
	return new_segment;
}

////////////////////////////////////
// LinearSpherical3D_Segmentation //
////////////////////////////////////

LinearSpherical3D_Segmentation::LinearSpherical3D_Segmentation(LinearSpherical3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

LinearSpherical3D_Segment LinearSpherical3D_Segmentation::create_segment()
{
	LinearSpherical3D_Segment_t seg = segmentation.make_segment();
	LinearSpherical3D_Segment new_segment(seg);
	return new_segment;
}
