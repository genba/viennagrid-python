#include "quadrilateral.hpp"
#include "../domains/quadrilateral.hpp"

///////////////////////////////////////////
// QuadrilateralCartesian2D_Segmentation //
///////////////////////////////////////////

QuadrilateralCartesian2D_Segmentation::QuadrilateralCartesian2D_Segmentation(QuadrilateralCartesian2D_Domain &dom) : segmentation(dom.get_domain())
{
	domain = &dom;
}

QuadrilateralCartesian2D_Segment QuadrilateralCartesian2D_Segmentation::create_segment()
{
	QuadrilateralCartesian2D_Segment_t seg = segmentation.make_segment();
	QuadrilateralCartesian2D_Segment new_segment(seg, *this);
	return new_segment;
}

list QuadrilateralCartesian2D_Segmentation::get_segments()
{
	typedef QuadrilateralCartesian2D_Segmentation_t::iterator iterator;
	list segment_list;
	for (iterator it = segmentation.begin(); it != segmentation.end(); ++it)
		segment_list.append<QuadrilateralCartesian2D_Segment>(QuadrilateralCartesian2D_Segment(*it, *this));
	return segment_list;
}

QuadrilateralCartesian2D_Domain_t & QuadrilateralCartesian2D_Segmentation::get_domain()
{
	return domain->get_domain();
}

QuadrilateralCartesian2D_Segmentation_t & QuadrilateralCartesian2D_Segmentation::get_segmentation()
{
	return segmentation;
}

///////////////////////////////////////////
// QuadrilateralCartesian3D_Segmentation //
///////////////////////////////////////////

QuadrilateralCartesian3D_Segmentation::QuadrilateralCartesian3D_Segmentation(QuadrilateralCartesian3D_Domain &dom) : segmentation(dom.get_domain())
{
	domain = &dom;
}

QuadrilateralCartesian3D_Segment QuadrilateralCartesian3D_Segmentation::create_segment()
{
	QuadrilateralCartesian3D_Segment_t seg = segmentation.make_segment();
	QuadrilateralCartesian3D_Segment new_segment(seg, *this);
	return new_segment;
}

list QuadrilateralCartesian3D_Segmentation::get_segments()
{
	typedef QuadrilateralCartesian3D_Segmentation_t::iterator iterator;
	list segment_list;
	for (iterator it = segmentation.begin(); it != segmentation.end(); ++it)
		segment_list.append<QuadrilateralCartesian3D_Segment>(QuadrilateralCartesian3D_Segment(*it, *this));
	return segment_list;
}

QuadrilateralCartesian3D_Domain_t & QuadrilateralCartesian3D_Segmentation::get_domain()
{
	return domain->get_domain();
}

QuadrilateralCartesian3D_Segmentation_t & QuadrilateralCartesian3D_Segmentation::get_segmentation()
{
	return segmentation;
}

/////////////////////////////////////////////
// QuadrilateralCylindrical3D_Segmentation //
/////////////////////////////////////////////

QuadrilateralCylindrical3D_Segmentation::QuadrilateralCylindrical3D_Segmentation(QuadrilateralCylindrical3D_Domain &dom) : segmentation(dom.get_domain())
{
	domain = &dom;
}

QuadrilateralCylindrical3D_Segment QuadrilateralCylindrical3D_Segmentation::create_segment()
{
	QuadrilateralCylindrical3D_Segment_t seg = segmentation.make_segment();
	QuadrilateralCylindrical3D_Segment new_segment(seg, *this);
	return new_segment;
}

list QuadrilateralCylindrical3D_Segmentation::get_segments()
{
	typedef QuadrilateralCylindrical3D_Segmentation_t::iterator iterator;
	list segment_list;
	for (iterator it = segmentation.begin(); it != segmentation.end(); ++it)
		segment_list.append<QuadrilateralCylindrical3D_Segment>(QuadrilateralCylindrical3D_Segment(*it, *this));
	return segment_list;
}

QuadrilateralCylindrical3D_Domain_t & QuadrilateralCylindrical3D_Segmentation::get_domain()
{
	return domain->get_domain();
}

QuadrilateralCylindrical3D_Segmentation_t & QuadrilateralCylindrical3D_Segmentation::get_segmentation()
{
	return segmentation;
}

///////////////////////////////////////
// QuadrilateralPolar2D_Segmentation //
///////////////////////////////////////

QuadrilateralPolar2D_Segmentation::QuadrilateralPolar2D_Segmentation(QuadrilateralPolar2D_Domain &dom) : segmentation(dom.get_domain())
{
	domain = &dom;
}

QuadrilateralPolar2D_Segment QuadrilateralPolar2D_Segmentation::create_segment()
{
	QuadrilateralPolar2D_Segment_t seg = segmentation.make_segment();
	QuadrilateralPolar2D_Segment new_segment(seg, *this);
	return new_segment;
}

list QuadrilateralPolar2D_Segmentation::get_segments()
{
	typedef QuadrilateralPolar2D_Segmentation_t::iterator iterator;
	list segment_list;
	for (iterator it = segmentation.begin(); it != segmentation.end(); ++it)
		segment_list.append<QuadrilateralPolar2D_Segment>(QuadrilateralPolar2D_Segment(*it, *this));
	return segment_list;
}

QuadrilateralPolar2D_Domain_t & QuadrilateralPolar2D_Segmentation::get_domain()
{
	return domain->get_domain();
}

QuadrilateralPolar2D_Segmentation_t & QuadrilateralPolar2D_Segmentation::get_segmentation()
{
	return segmentation;
}

///////////////////////////////////////////
// QuadrilateralSpherical3D_Segmentation //
///////////////////////////////////////////

QuadrilateralSpherical3D_Segmentation::QuadrilateralSpherical3D_Segmentation(QuadrilateralSpherical3D_Domain &dom) : segmentation(dom.get_domain())
{
	domain = &dom;
}

QuadrilateralSpherical3D_Segment QuadrilateralSpherical3D_Segmentation::create_segment()
{
	QuadrilateralSpherical3D_Segment_t seg = segmentation.make_segment();
	QuadrilateralSpherical3D_Segment new_segment(seg, *this);
	return new_segment;
}

list QuadrilateralSpherical3D_Segmentation::get_segments()
{
	typedef QuadrilateralSpherical3D_Segmentation_t::iterator iterator;
	list segment_list;
	for (iterator it = segmentation.begin(); it != segmentation.end(); ++it)
		segment_list.append<QuadrilateralSpherical3D_Segment>(QuadrilateralSpherical3D_Segment(*it, *this));
	return segment_list;
}

QuadrilateralSpherical3D_Domain_t & QuadrilateralSpherical3D_Segmentation::get_domain()
{
	return domain->get_domain();
}

QuadrilateralSpherical3D_Segmentation_t & QuadrilateralSpherical3D_Segmentation::get_segmentation()
{
	return segmentation;
}
