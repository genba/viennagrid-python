/**
 * @file
 * @brief Implement cell refinement.
 * 
 * This module provides the `cell_refine` function for triangular and tetrahedral domains. This function
 * refines all cells of the given domain and segmentation which match a given predicate.
 */

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

////////////////
// Triangular //
////////////////

/**
 * Refine all cells of the given triangular cartesian 2D domain and segmentation which match a given
 * predicate.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @param predicate Predicate to test if a cell should be marked for refinement.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 */
tuple TriangularCartesian2D_Domain_cell_refine(TriangularCartesian2D_Domain domain_in, TriangularCartesian2D_Segmentation segmentation_in, bool (*predicate)(const TriangularCartesian2D_Cell &));

/**
 * Refine all cells of the given triangular cartesian 3D domain and segmentation which match a given
 * predicate.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @param predicate Predicate to test if a cell should be marked for refinement.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 */
tuple TriangularCartesian3D_Domain_cell_refine(TriangularCartesian3D_Domain domain_in, TriangularCartesian3D_Segmentation segmentation_in, bool (*predicate)(const TriangularCartesian3D_Cell &));

/**
 * Refine all cells of the given triangular cylindrical domain and segmentation which match a given
 * predicate.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @param predicate Predicate to test if a cell should be marked for refinement.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 */
tuple TriangularCylindrical3D_Domain_cell_refine(TriangularCylindrical3D_Domain domain_in, TriangularCylindrical3D_Segmentation segmentation_in, bool (*predicate)(const TriangularCylindrical3D_Cell &));

/**
 * Refine all cells of the given triangular polar domain and segmentation which match a given
 * predicate.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @param predicate Predicate to test if a cell should be marked for refinement.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 */
tuple TriangularPolar2D_Domain_cell_refine(TriangularPolar2D_Domain domain_in, TriangularPolar2D_Segmentation segmentation_in, bool (*predicate)(const TriangularPolar2D_Cell &));

/**
 * Refine all cells of the given triangular spherical domain and segmentation which match a given
 * predicate.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @param predicate Predicate to test if a cell should be marked for refinement.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 */
tuple TriangularSpherical3D_Domain_cell_refine(TriangularSpherical3D_Domain domain_in, TriangularSpherical3D_Segmentation segmentation_in, bool (*predicate)(const TriangularSpherical3D_Cell &));

/////////////////
// Tetrahedral //
/////////////////

/**
 * Refine all cells of the given tetrahedral cartesian 3D domain and segmentation which match a given
 * predicate.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @param predicate Predicate to test if a cell should be marked for refinement.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 */
tuple TetrahedralCartesian3D_Domain_cell_refine(TetrahedralCartesian3D_Domain domain_in, TetrahedralCartesian3D_Segmentation segmentation_in, bool (*predicate)(const TetrahedralCartesian3D_Cell &));

/**
 * Refine all cells of the given tetrahedral cylindrical domain and segmentation which match a given
 * predicate.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @param predicate Predicate to test if a cell should be marked for refinement.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 */
tuple TetrahedralCylindrical3D_Domain_cell_refine(TetrahedralCylindrical3D_Domain domain_in, TetrahedralCylindrical3D_Segmentation segmentation_in, bool (*predicate)(const TetrahedralCylindrical3D_Cell &));

/**
 * Refine all cells of the given tetrahedral spherical domain and segmentation which match a given
 * predicate.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @param predicate Predicate to test if a cell should be marked for refinement.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 */
tuple TetrahedralSpherical3D_Domain_cell_refine(TetrahedralSpherical3D_Domain domain_in, TetrahedralSpherical3D_Segmentation segmentation_in, bool (*predicate)(const TetrahedralSpherical3D_Cell &));

#endif /* end of include guard: ALGORITHMS_CELL_REFINE_HPP */
