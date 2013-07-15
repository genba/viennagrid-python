#include "tetrahedral.hpp"

/////////////////////////////////////////
// TetrahedralCartesian3D_Segmentation //
/////////////////////////////////////////

TetrahedralCartesian3D_Segmentation::TetrahedralCartesian3D_Segmentation(TetrahedralCartesian3D_Domain &dom) : segmentation(dom.get_domain())
{
	domain = &dom;
}

TetrahedralCartesian3D_Segment TetrahedralCartesian3D_Segmentation::create_segment()
{
	TetrahedralCartesian3D_Segment_t seg = segmentation.make_segment();
	TetrahedralCartesian3D_Segment new_segment(seg, *this);
	return new_segment;
}

list TetrahedralCartesian3D_Segmentation::get_segments()
{
	typedef TetrahedralCartesian3D_Segmentation_t::iterator iterator;
	list segment_list;
	for (iterator it = segmentation.begin(); it != segmentation.end(); ++it)
		segment_list.append<TetrahedralCartesian3D_Segment>(TetrahedralCartesian3D_Segment(*it, *this));
	return segment_list;
}

TetrahedralCartesian3D_Domain_t & TetrahedralCartesian3D_Segmentation::get_domain()
{
	return domain->get_domain();
}

///////////////////////////////////////////
// TetrahedralCylindrical3D_Segmentation //
///////////////////////////////////////////

TetrahedralCylindrical3D_Segmentation::TetrahedralCylindrical3D_Segmentation(TetrahedralCylindrical3D_Domain &dom) : segmentation(dom.get_domain())
{
	domain = &dom;
}

TetrahedralCylindrical3D_Segment TetrahedralCylindrical3D_Segmentation::create_segment()
{
	TetrahedralCylindrical3D_Segment_t seg = segmentation.make_segment();
	TetrahedralCylindrical3D_Segment new_segment(seg, *this);
	return new_segment;
}

list TetrahedralCylindrical3D_Segmentation::get_segments()
{
	typedef TetrahedralCylindrical3D_Segmentation_t::iterator iterator;
	list segment_list;
	for (iterator it = segmentation.begin(); it != segmentation.end(); ++it)
		segment_list.append<TetrahedralCylindrical3D_Segment>(TetrahedralCylindrical3D_Segment(*it, *this));
	return segment_list;
}

TetrahedralCylindrical3D_Domain_t & TetrahedralCylindrical3D_Segmentation::get_domain()
{
	return domain->get_domain();
}

/////////////////////////////////////////
// TetrahedralSpherical3D_Segmentation //
/////////////////////////////////////////

TetrahedralSpherical3D_Segmentation::TetrahedralSpherical3D_Segmentation(TetrahedralSpherical3D_Domain &dom) : segmentation(dom.get_domain())
{
	domain = &dom;
}

TetrahedralSpherical3D_Segment TetrahedralSpherical3D_Segmentation::create_segment()
{
	TetrahedralSpherical3D_Segment_t seg = segmentation.make_segment();
	TetrahedralSpherical3D_Segment new_segment(seg, *this);
	return new_segment;
}

list TetrahedralSpherical3D_Segmentation::get_segments()
{
	typedef TetrahedralSpherical3D_Segmentation_t::iterator iterator;
	list segment_list;
	for (iterator it = segmentation.begin(); it != segmentation.end(); ++it)
		segment_list.append<TetrahedralSpherical3D_Segment>(TetrahedralSpherical3D_Segment(*it, *this));
	return segment_list;
}

TetrahedralSpherical3D_Domain_t & TetrahedralSpherical3D_Segmentation::get_domain()
{
	return domain->get_domain();
}
