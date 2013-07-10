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

list LinearCartesian1D_Segmentation::get_segments()
{
	typedef LinearCartesian1D_Segmentation_t::iterator iterator;
	list segment_list;
	for (iterator it = segmentation.begin(); it != segmentation.end(); ++it)
		segment_list.append<LinearCartesian1D_Segment>(LinearCartesian1D_Segment(*it));
	return segment_list;
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

list LinearCartesian2D_Segmentation::get_segments()
{
	typedef LinearCartesian2D_Segmentation_t::iterator iterator;
	list segment_list;
	for (iterator it = segmentation.begin(); it != segmentation.end(); ++it)
		segment_list.append<LinearCartesian2D_Segment>(LinearCartesian2D_Segment(*it));
	return segment_list;
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

list LinearCartesian3D_Segmentation::get_segments()
{
	typedef LinearCartesian3D_Segmentation_t::iterator iterator;
	list segment_list;
	for (iterator it = segmentation.begin(); it != segmentation.end(); ++it)
		segment_list.append<LinearCartesian3D_Segment>(LinearCartesian3D_Segment(*it));
	return segment_list;
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

list LinearCylindrical3D_Segmentation::get_segments()
{
	typedef LinearCylindrical3D_Segmentation_t::iterator iterator;
	list segment_list;
	for (iterator it = segmentation.begin(); it != segmentation.end(); ++it)
		segment_list.append<LinearCylindrical3D_Segment>(LinearCylindrical3D_Segment(*it));
	return segment_list;
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

list LinearPolar2D_Segmentation::get_segments()
{
	typedef LinearPolar2D_Segmentation_t::iterator iterator;
	list segment_list;
	for (iterator it = segmentation.begin(); it != segmentation.end(); ++it)
		segment_list.append<LinearPolar2D_Segment>(LinearPolar2D_Segment(*it));
	return segment_list;
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

list LinearSpherical3D_Segmentation::get_segments()
{
	typedef LinearSpherical3D_Segmentation_t::iterator iterator;
	list segment_list;
	for (iterator it = segmentation.begin(); it != segmentation.end(); ++it)
		segment_list.append<LinearSpherical3D_Segment>(LinearSpherical3D_Segment(*it));
	return segment_list;
}
