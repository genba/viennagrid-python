#include "tetrahedral.hpp"

/////////////////////////////////////////
// TetrahedralCartesian3D_Segmentation //
/////////////////////////////////////////

TetrahedralCartesian3D_Segmentation::TetrahedralCartesian3D_Segmentation(TetrahedralCartesian3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

TetrahedralCartesian3D_Segment TetrahedralCartesian3D_Segmentation::create_segment()
{
	TetrahedralCartesian3D_Segment_t seg = segmentation.make_segment();
	TetrahedralCartesian3D_Segment new_segment(seg);
	return new_segment;
}

///////////////////////////////////////////
// TetrahedralCylindrical3D_Segmentation //
///////////////////////////////////////////

TetrahedralCylindrical3D_Segmentation::TetrahedralCylindrical3D_Segmentation(TetrahedralCylindrical3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

TetrahedralCylindrical3D_Segment TetrahedralCylindrical3D_Segmentation::create_segment()
{
	TetrahedralCylindrical3D_Segment_t seg = segmentation.make_segment();
	TetrahedralCylindrical3D_Segment new_segment(seg);
	return new_segment;
}

/////////////////////////////////////////
// TetrahedralSpherical3D_Segmentation //
/////////////////////////////////////////

TetrahedralSpherical3D_Segmentation::TetrahedralSpherical3D_Segmentation(TetrahedralSpherical3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

TetrahedralSpherical3D_Segment TetrahedralSpherical3D_Segmentation::create_segment()
{
	TetrahedralSpherical3D_Segment_t seg = segmentation.make_segment();
	TetrahedralSpherical3D_Segment new_segment(seg);
	return new_segment;
}
