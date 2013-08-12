#ifndef ALGORITHMS_REFINE_HPP
#define ALGORITHMS_REFINE_HPP

#include "../domains/triangular.hpp"
#include "../domains/tetrahedral.hpp"

#include "../segmentations/triangular.hpp"
#include "../segmentations/tetrahedral.hpp"

#include "../edges/triangular.hpp"
#include "../edges/tetrahedral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/**********
 * REFINE *
 **********/

tuple TriangularCartesian2D_Domain_refine(TriangularCartesian2D_Domain domain_in, TriangularCartesian2D_Segmentation segmentation_in, bool (*predicate)(const TriangularCartesian2D_Edge &));
tuple TriangularCartesian3D_Domain_refine(TriangularCartesian3D_Domain domain_in, TriangularCartesian3D_Segmentation segmentation_in, bool (*predicate)(const TriangularCartesian3D_Edge &));
tuple TriangularCylindrical3D_Domain_refine(TriangularCylindrical3D_Domain domain_in, TriangularCylindrical3D_Segmentation segmentation_in, bool (*predicate)(const TriangularCylindrical3D_Edge &));
tuple TriangularPolar2D_Domain_refine(TriangularPolar2D_Domain domain_in, TriangularPolar2D_Segmentation segmentation_in, bool (*predicate)(const TriangularPolar2D_Edge &));
tuple TriangularSpherical3D_Domain_refine(TriangularSpherical3D_Domain domain_in, TriangularSpherical3D_Segmentation segmentation_in, bool (*predicate)(const TriangularSpherical3D_Edge &));

tuple TetrahedralCartesian3D_Domain_refine(TetrahedralCartesian3D_Domain domain_in, TetrahedralCartesian3D_Segmentation segmentation_in, bool (*predicate)(const TetrahedralCartesian3D_Edge &));
tuple TetrahedralCylindrical3D_Domain_refine(TetrahedralCylindrical3D_Domain domain_in, TetrahedralCylindrical3D_Segmentation segmentation_in, bool (*predicate)(const TetrahedralCylindrical3D_Edge &));
tuple TetrahedralSpherical3D_Domain_refine(TetrahedralSpherical3D_Domain domain_in, TetrahedralSpherical3D_Segmentation segmentation_in, bool (*predicate)(const TetrahedralSpherical3D_Edge &));

#endif /* end of include guard: ALGORITHMS_REFINE_HPP */
