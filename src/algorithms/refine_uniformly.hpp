/**
 * @file
 * @brief Implement uniform refinement of a domain.
 * 
 * This module provides the `refine_uniformly` function for triangular and tetrahedral domains. This
 * function refines all edges of the given domain and segmentation.
 */

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

////////////////
// Triangular //
////////////////

/**
 * Refine all edges of the given triangular cartesian 2D domain and segmentation.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 * 
 * @since 0.1.0
 */
tuple TriangularCartesian2D_Domain_refine_uniformly(TriangularCartesian2D_Domain domain_in, TriangularCartesian2D_Segmentation segmentation_in);

/**
 * Refine all edges of the given triangular cartesian 3D domain and segmentation.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 * 
 * @since 0.1.0
 */
tuple TriangularCartesian3D_Domain_refine_uniformly(TriangularCartesian3D_Domain domain_in, TriangularCartesian3D_Segmentation segmentation_in);

/**
 * Refine all edges of the given triangular cylindrical domain and segmentation.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 * 
 * @since 0.1.0
 */
tuple TriangularCylindrical3D_Domain_refine_uniformly(TriangularCylindrical3D_Domain domain_in, TriangularCylindrical3D_Segmentation segmentation_in);

/**
 * Refine all edges of the given triangular polar domain and segmentation.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 * 
 * @since 0.1.0
 */
tuple TriangularPolar2D_Domain_refine_uniformly(TriangularPolar2D_Domain domain_in, TriangularPolar2D_Segmentation segmentation_in);

/**
 * Refine all edges of the given triangular spherical domain and segmentation.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 * 
 * @since 0.1.0
 */
tuple TriangularSpherical3D_Domain_refine_uniformly(TriangularSpherical3D_Domain domain_in, TriangularSpherical3D_Segmentation segmentation_in);

/////////////////
// Tetrahedral //
/////////////////

/**
 * Refine all edges of the given tetrahedral cartesian 3D domain and segmentation.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 * 
 * @since 0.1.0
 */
tuple TetrahedralCartesian3D_Domain_refine_uniformly(TetrahedralCartesian3D_Domain domain_in, TetrahedralCartesian3D_Segmentation segmentation_in);

/**
 * Refine all edges of the given tetrahedral cylindrical domain and segmentation.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 * 
 * @since 0.1.0
 */
tuple TetrahedralCylindrical3D_Domain_refine_uniformly(TetrahedralCylindrical3D_Domain domain_in, TetrahedralCylindrical3D_Segmentation segmentation_in);

/**
 * Refine all edges of the given tetrahedral spherical domain and segmentation.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 * 
 * @since 0.1.0
 */
tuple TetrahedralSpherical3D_Domain_refine_uniformly(TetrahedralSpherical3D_Domain domain_in, TetrahedralSpherical3D_Segmentation segmentation_in);

#endif /* end of include guard: ALGORITHMS_REFINE_UNIFORMLY_HPP */
