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

tuple TriangularCartesian2D_Domain_refine_uniformly(TriangularCartesian2D_Domain domain_in, TriangularCartesian2D_Segmentation segmentation_in);
tuple TriangularCartesian3D_Domain_refine_uniformly(TriangularCartesian3D_Domain domain_in, TriangularCartesian3D_Segmentation segmentation_in);
tuple TriangularCylindrical3D_Domain_refine_uniformly(TriangularCylindrical3D_Domain domain_in, TriangularCylindrical3D_Segmentation segmentation_in);
tuple TriangularPolar2D_Domain_refine_uniformly(TriangularPolar2D_Domain domain_in, TriangularPolar2D_Segmentation segmentation_in);
tuple TriangularSpherical3D_Domain_refine_uniformly(TriangularSpherical3D_Domain domain_in, TriangularSpherical3D_Segmentation segmentation_in);

tuple TetrahedralCartesian3D_Domain_refine_uniformly(TetrahedralCartesian3D_Domain domain_in, TetrahedralCartesian3D_Segmentation segmentation_in);
tuple TetrahedralCylindrical3D_Domain_refine_uniformly(TetrahedralCylindrical3D_Domain domain_in, TetrahedralCylindrical3D_Segmentation segmentation_in);
tuple TetrahedralSpherical3D_Domain_refine_uniformly(TetrahedralSpherical3D_Domain domain_in, TetrahedralSpherical3D_Segmentation segmentation_in);

#endif
