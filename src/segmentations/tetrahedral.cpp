#include "tetrahedral.hpp"
#include "../domains/tetrahedral.hpp"

/////////////////////////////////////////
// TetrahedralCartesian3D_Segmentation //
/////////////////////////////////////////

TetrahedralCartesian3D_Segmentation::TetrahedralCartesian3D_Segmentation(TetrahedralCartesian3D_Domain &dom) : segmentation(dom.get_domain())
{
	domain = &dom;
}

unsigned int TetrahedralCartesian3D_Segmentation::num_segments()
{
	return segmentation.size();
}

TetrahedralCartesian3D_Segment TetrahedralCartesian3D_Segmentation::make_segment()
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

TetrahedralCartesian3D_Segmentation_t & TetrahedralCartesian3D_Segmentation::get_segmentation()
{
	return segmentation;
}

///////////////////////////////////////////
// TetrahedralCylindrical3D_Segmentation //
///////////////////////////////////////////

TetrahedralCylindrical3D_Segmentation::TetrahedralCylindrical3D_Segmentation(TetrahedralCylindrical3D_Domain &dom) : segmentation(dom.get_domain())
{
	domain = &dom;
}

unsigned int TetrahedralCylindrical3D_Segmentation::num_segments()
{
	return segmentation.size();
}

TetrahedralCylindrical3D_Segment TetrahedralCylindrical3D_Segmentation::make_segment()
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

TetrahedralCylindrical3D_Segmentation_t & TetrahedralCylindrical3D_Segmentation::get_segmentation()
{
	return segmentation;
}

/////////////////////////////////////////
// TetrahedralSpherical3D_Segmentation //
/////////////////////////////////////////

TetrahedralSpherical3D_Segmentation::TetrahedralSpherical3D_Segmentation(TetrahedralSpherical3D_Domain &dom) : segmentation(dom.get_domain())
{
	domain = &dom;
}

unsigned int TetrahedralSpherical3D_Segmentation::num_segments()
{
	return segmentation.size();
}

TetrahedralSpherical3D_Segment TetrahedralSpherical3D_Segmentation::make_segment()
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

TetrahedralSpherical3D_Segmentation_t & TetrahedralSpherical3D_Segmentation::get_segmentation()
{
	return segmentation;
}
