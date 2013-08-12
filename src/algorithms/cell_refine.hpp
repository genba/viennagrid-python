#ifndef ALGORITHMS_CELL_REFINE_HPP
#define ALGORITHMS_CELL_REFINE_HPP

#include "../domains/triangular.hpp"
#include "../domains/tetrahedral.hpp"

#include "../segmentations/triangular.hpp"
#include "../segmentations/tetrahedral.hpp"

#include "../cells/triangular.hpp"
#include "../cells/tetrahedral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/***************
 * CELL_REFINE *
 ***************/

tuple TriangularCartesian2D_Domain_cell_refine(TriangularCartesian2D_Domain domain_in, TriangularCartesian2D_Segmentation segmentation_in, bool (*predicate)(const TriangularCartesian2D_Cell &));
tuple TriangularCartesian3D_Domain_cell_refine(TriangularCartesian3D_Domain domain_in, TriangularCartesian3D_Segmentation segmentation_in, bool (*predicate)(const TriangularCartesian3D_Cell &));
tuple TriangularCylindrical3D_Domain_cell_refine(TriangularCylindrical3D_Domain domain_in, TriangularCylindrical3D_Segmentation segmentation_in, bool (*predicate)(const TriangularCylindrical3D_Cell &));
tuple TriangularPolar2D_Domain_cell_refine(TriangularPolar2D_Domain domain_in, TriangularPolar2D_Segmentation segmentation_in, bool (*predicate)(const TriangularPolar2D_Cell &));
tuple TriangularSpherical3D_Domain_cell_refine(TriangularSpherical3D_Domain domain_in, TriangularSpherical3D_Segmentation segmentation_in, bool (*predicate)(const TriangularSpherical3D_Cell &));

tuple TetrahedralCartesian3D_Domain_cell_refine(TetrahedralCartesian3D_Domain domain_in, TetrahedralCartesian3D_Segmentation segmentation_in, bool (*predicate)(const TetrahedralCartesian3D_Cell &));
tuple TetrahedralCylindrical3D_Domain_cell_refine(TetrahedralCylindrical3D_Domain domain_in, TetrahedralCylindrical3D_Segmentation segmentation_in, bool (*predicate)(const TetrahedralCylindrical3D_Cell &));
tuple TetrahedralSpherical3D_Domain_cell_refine(TetrahedralSpherical3D_Domain domain_in, TetrahedralSpherical3D_Segmentation segmentation_in, bool (*predicate)(const TetrahedralSpherical3D_Cell &));

#endif /* end of include guard: ALGORITHMS_CELL_REFINE_HPP */
