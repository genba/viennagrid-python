#ifndef ALGORITHMS_REFINE_UNIFORMLY_HPP
#define ALGORITHMS_REFINE_UNIFORMLY_HPP

#include "../domains/linear.hpp"
#include "../domains/triangular.hpp"
#include "../domains/quadrilateral.hpp"
#include "../domains/tetrahedral.hpp"

#include "../segmentations/linear.hpp"
#include "../segmentations/triangular.hpp"
#include "../segmentations/quadrilateral.hpp"
#include "../segmentations/tetrahedral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/********************
 * REFINE_UNIFORMLY *
 ********************/

/*
tuple LinearCartesian1D_Domain_refine_uniformly(LinearCartesian1D_Domain domain_in, LinearCartesian1D_Segmentation segmentation_in);
tuple LinearCartesian2D_Domain_refine_uniformly(LinearCartesian2D_Domain domain_in, LinearCartesian2D_Segmentation segmentation_in);
tuple LinearCartesian3D_Domain_refine_uniformly(LinearCartesian3D_Domain domain_in, LinearCartesian3D_Segmentation segmentation_in);
tuple LinearCylindrical3D_Domain_refine_uniformly(LinearCylindrical3D_Domain domain_in, LinearCylindrical3D_Segmentation segmentation_in);
tuple LinearPolar2D_Domain_refine_uniformly(LinearPolar2D_Domain domain_in, LinearPolar2D_Segmentation segmentation_in);
tuple LinearSpherical3D_Domain_refine_uniformly(LinearSpherical3D_Domain domain_in, LinearSpherical3D_Segmentation segmentation_in);
*/

tuple TriangularCartesian2D_Domain_refine_uniformly(TriangularCartesian2D_Domain domain_in, TriangularCartesian2D_Segmentation segmentation_in);
tuple TriangularCartesian3D_Domain_refine_uniformly(TriangularCartesian3D_Domain domain_in, TriangularCartesian3D_Segmentation segmentation_in);
tuple TriangularCylindrical3D_Domain_refine_uniformly(TriangularCylindrical3D_Domain domain_in, TriangularCylindrical3D_Segmentation segmentation_in);
tuple TriangularPolar2D_Domain_refine_uniformly(TriangularPolar2D_Domain domain_in, TriangularPolar2D_Segmentation segmentation_in);
tuple TriangularSpherical3D_Domain_refine_uniformly(TriangularSpherical3D_Domain domain_in, TriangularSpherical3D_Segmentation segmentation_in);

/*
tuple QuadrilateralCartesian2D_Domain_refine_uniformly(QuadrilateralCartesian2D_Domain domain_in, QuadrilateralCartesian2D_Segmentation segmentation_in);
tuple QuadrilateralCartesian3D_Domain_refine_uniformly(QuadrilateralCartesian3D_Domain domain_in, QuadrilateralCartesian3D_Segmentation segmentation_in);
tuple QuadrilateralCylindrical3D_Domain_refine_uniformly(QuadrilateralCylindrical3D_Domain domain_in, QuadrilateralCylindrical3D_Segmentation segmentation_in);
tuple QuadrilateralPolar2D_Domain_refine_uniformly(QuadrilateralPolar2D_Domain domain_in, QuadrilateralPolar2D_Segmentation segmentation_in);
tuple QuadrilateralSpherical3D_Domain_refine_uniformly(QuadrilateralSpherical3D_Domain domain_in, QuadrilateralSpherical3D_Segmentation segmentation_in);
*/

tuple TetrahedralCartesian3D_Domain_refine_uniformly(TetrahedralCartesian3D_Domain domain_in, TetrahedralCartesian3D_Segmentation segmentation_in);
tuple TetrahedralCylindrical3D_Domain_refine_uniformly(TetrahedralCylindrical3D_Domain domain_in, TetrahedralCylindrical3D_Segmentation segmentation_in);
tuple TetrahedralSpherical3D_Domain_refine_uniformly(TetrahedralSpherical3D_Domain domain_in, TetrahedralSpherical3D_Segmentation segmentation_in);

#endif
