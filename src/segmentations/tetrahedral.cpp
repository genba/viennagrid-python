#include "tetrahedral.hpp"

/////////////////////////////////////////
// TetrahedralCartesian3D_Segmentation //
/////////////////////////////////////////

TetrahedralCartesian3D_Segmentation::TetrahedralCartesian3D_Segmentation(TetrahedralCartesian3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

///////////////////////////////////////////
// TetrahedralCylindrical3D_Segmentation //
///////////////////////////////////////////

TetrahedralCylindrical3D_Segmentation::TetrahedralCylindrical3D_Segmentation(TetrahedralCylindrical3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

/////////////////////////////////////////
// TetrahedralSpherical3D_Segmentation //
/////////////////////////////////////////

TetrahedralSpherical3D_Segmentation::TetrahedralSpherical3D_Segmentation(TetrahedralSpherical3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}
