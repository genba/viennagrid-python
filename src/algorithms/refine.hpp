/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Implement domain refinement.
 * 
 * This module provides the `refine` function for triangular and tetrahedral domains. This function
 * refines all edges of the given domain and segmentation which match a given predicate.
 */

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

////////////////
// Triangular //
////////////////

/**
 * Refine all edges of the given triangular cartesian 2D domain and segmentation which match a given
 * predicate.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @param predicate Predicate to test if an edge should be marked for refinement.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 * 
 * @since 0.1.0
 */
tuple TriangularCartesian2D_Domain_refine(TriangularCartesian2D_Domain domain_in, TriangularCartesian2D_Segmentation segmentation_in, object predicate);

/**
 * Refine all edges of the given triangular cartesian 3D domain and segmentation which match a given
 * predicate.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @param predicate Predicate to test if an edge should be marked for refinement.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 * 
 * @since 0.1.0
 */
tuple TriangularCartesian3D_Domain_refine(TriangularCartesian3D_Domain domain_in, TriangularCartesian3D_Segmentation segmentation_in, object predicate);

/**
 * Refine all edges of the given triangular cylindrical domain and segmentation which match a given
 * predicate.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @param predicate Predicate to test if an edge should be marked for refinement.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 * 
 * @since 0.1.0
 */
tuple TriangularCylindrical3D_Domain_refine(TriangularCylindrical3D_Domain domain_in, TriangularCylindrical3D_Segmentation segmentation_in, object predicate);

/**
 * Refine all edges of the given triangular polar domain and segmentation which match a given
 * predicate.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @param predicate Predicate to test if an edge should be marked for refinement.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 * 
 * @since 0.1.0
 */
tuple TriangularPolar2D_Domain_refine(TriangularPolar2D_Domain domain_in, TriangularPolar2D_Segmentation segmentation_in, object predicate);

/**
 * Refine all edges of the given triangular spherical domain and segmentation which match a given
 * predicate.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @param predicate Predicate to test if an edge should be marked for refinement.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 * 
 * @since 0.1.0
 */
tuple TriangularSpherical3D_Domain_refine(TriangularSpherical3D_Domain domain_in, TriangularSpherical3D_Segmentation segmentation_in, object predicate);

/////////////////
// Tetrahedral //
/////////////////

/**
 * Refine all edges of the given tetrahedral cartesian 3D domain and segmentation which match a given
 * predicate.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @param predicate Predicate to test if an edge should be marked for refinement.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 * 
 * @since 0.1.0
 */
tuple TetrahedralCartesian3D_Domain_refine(TetrahedralCartesian3D_Domain domain_in, TetrahedralCartesian3D_Segmentation segmentation_in, object predicate);

/**
 * Refine all edges of the given tetrahedral cylindrical domain and segmentation which match a given
 * predicate.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @param predicate Predicate to test if an edge should be marked for refinement.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 * 
 * @since 0.1.0
 */
tuple TetrahedralCylindrical3D_Domain_refine(TetrahedralCylindrical3D_Domain domain_in, TetrahedralCylindrical3D_Segmentation segmentation_in, object predicate);

/**
 * Refine all edges of the given tetrahedral spherical domain and segmentation which match a given
 * predicate.
 * 
 * @param domain_in Domain to be refined.
 * @param segmentation_in Segmentation of the domain to be refined.
 * @param predicate Predicate to test if an edge should be marked for refinement.
 * @return Python tuple with two elements:
 *         1. the refined domain, and
 *         2. the refined segmentation.
 * 
 * @since 0.1.0
 */
tuple TetrahedralSpherical3D_Domain_refine(TetrahedralSpherical3D_Domain domain_in, TetrahedralSpherical3D_Segmentation segmentation_in, object predicate);

#endif /* end of include guard: ALGORITHMS_REFINE_HPP */
