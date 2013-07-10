#include "quadrilateral.hpp"

///////////////////////////////////////////
// QuadrilateralCartesian2D_Segmentation //
///////////////////////////////////////////

QuadrilateralCartesian2D_Segmentation::QuadrilateralCartesian2D_Segmentation(QuadrilateralCartesian2D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

///////////////////////////////////////////
// QuadrilateralCartesian3D_Segmentation //
///////////////////////////////////////////

QuadrilateralCartesian3D_Segmentation::QuadrilateralCartesian3D_Segmentation(QuadrilateralCartesian3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

/////////////////////////////////////////////
// QuadrilateralCylindrical3D_Segmentation //
/////////////////////////////////////////////

QuadrilateralCylindrical3D_Segmentation::QuadrilateralCylindrical3D_Segmentation(QuadrilateralCylindrical3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

///////////////////////////////////////
// QuadrilateralPolar2D_Segmentation //
///////////////////////////////////////

QuadrilateralPolar2D_Segmentation::QuadrilateralPolar2D_Segmentation(QuadrilateralPolar2D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

///////////////////////////////////////////
// QuadrilateralSpherical3D_Segmentation //
///////////////////////////////////////////

QuadrilateralSpherical3D_Segmentation::QuadrilateralSpherical3D_Segmentation(QuadrilateralSpherical3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}
