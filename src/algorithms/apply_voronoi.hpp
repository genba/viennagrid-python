/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Implement algorithm `apply_voronoi`.
 */

#ifndef ALGORITHMS_APPLY_VORONOI_HPP
#define ALGORITHMS_APPLY_VORONOI_HPP

#include "../domains/linear.hpp"
#include "../domains/triangular.hpp"
#include "../domains/quadrilateral.hpp"
#include "../domains/tetrahedral.hpp"

////////////
// Linear //
////////////

/**
 * `apply_voronoi` for linear cartesian 1D domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void LinearCartesian1D_Domain_apply_voronoi(LinearCartesian1D_Domain domain);

/**
 * `apply_voronoi` for linear cartesian 2D domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void LinearCartesian2D_Domain_apply_voronoi(LinearCartesian2D_Domain domain);

/**
 * `apply_voronoi` for linear cartesian 3D domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void LinearCartesian3D_Domain_apply_voronoi(LinearCartesian3D_Domain domain);

/**
 * `apply_voronoi` for linear cylindrical domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void LinearCylindrical3D_Domain_apply_voronoi(LinearCylindrical3D_Domain domain);

/**
 * `apply_voronoi` for linear polar domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void LinearPolar2D_Domain_apply_voronoi(LinearPolar2D_Domain domain);

/**
 * `apply_voronoi` for linear spherical domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void LinearSpherical3D_Domain_apply_voronoi(LinearSpherical3D_Domain domain);

////////////////
// Triangular //
////////////////

/**
 * `apply_voronoi` for triangular cartesian 2D domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void TriangularCartesian2D_Domain_apply_voronoi(TriangularCartesian2D_Domain domain);

/**
 * `apply_voronoi` for triangular cartesian 3D domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void TriangularCartesian3D_Domain_apply_voronoi(TriangularCartesian3D_Domain domain);

/**
 * `apply_voronoi` for triangular cylindrical domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void TriangularCylindrical3D_Domain_apply_voronoi(TriangularCylindrical3D_Domain domain);

/**
 * `apply_voronoi` for triangular polar domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void TriangularPolar2D_Domain_apply_voronoi(TriangularPolar2D_Domain domain);

/**
 * `apply_voronoi` for triangular spherical domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void TriangularSpherical3D_Domain_apply_voronoi(TriangularSpherical3D_Domain domain);

///////////////////
// Quadrilateral //
///////////////////

/**
 * `apply_voronoi` for quadrilateral cartesian 2D domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void QuadrilateralCartesian2D_Domain_apply_voronoi(QuadrilateralCartesian2D_Domain domain);

/**
 * `apply_voronoi` for quadrilateral cartesian 3D domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void QuadrilateralCartesian3D_Domain_apply_voronoi(QuadrilateralCartesian3D_Domain domain);

/**
 * `apply_voronoi` for quadrilateral cylindrical domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void QuadrilateralCylindrical3D_Domain_apply_voronoi(QuadrilateralCylindrical3D_Domain domain);

/**
 * `apply_voronoi` for quadrilateral polar domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void QuadrilateralPolar2D_Domain_apply_voronoi(QuadrilateralPolar2D_Domain domain);

/**
 * `apply_voronoi` for quadrilateral spherical domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void QuadrilateralSpherical3D_Domain_apply_voronoi(QuadrilateralSpherical3D_Domain domain);

/////////////////
// Tetrahedral //
/////////////////

/**
 * `apply_voronoi` for tetrahedral cartesian 3D domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void TetrahedralCartesian3D_Domain_apply_voronoi(TetrahedralCartesian3D_Domain domain);

/**
 * `apply_voronoi` for tetrahedral cylindrical domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void TetrahedralCylindrical3D_Domain_apply_voronoi(TetrahedralCylindrical3D_Domain domain);

/**
 * `apply_voronoi` for tetrahedral spherical domains.
 * 
 * @param domain Domain
 * 
 * @since 0.1.0
 */
void TetrahedralSpherical3D_Domain_apply_voronoi(TetrahedralSpherical3D_Domain domain);

#endif /* end of include guard: ALGORITHMS_APPLY_VORONOI_HPP */
