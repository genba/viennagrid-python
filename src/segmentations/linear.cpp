#include "linear.hpp"

LinearCartesian1D_Segmentation::LinearCartesian1D_Segmentation(LinearCartesian1D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

LinearCartesian2D_Segmentation::LinearCartesian2D_Segmentation(LinearCartesian2D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

LinearCartesian3D_Segmentation::LinearCartesian3D_Segmentation(LinearCartesian3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

LinearCylindrical3D_Segmentation::LinearCylindrical3D_Segmentation(LinearCylindrical3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

LinearPolar2D_Segmentation::LinearPolar2D_Segmentation(LinearPolar2D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}

LinearSpherical3D_Segmentation::LinearSpherical3D_Segmentation(LinearSpherical3D_Domain &dom) : segmentation(dom.get_domain())
{
	//domain = &dom;
}
