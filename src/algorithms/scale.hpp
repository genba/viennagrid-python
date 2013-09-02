/**
 * @file
 * @brief Implement function to scale domains by a given factor.
 */

#ifndef ALGORITHMS_SCALE_HPP
#define ALGORITHMS_SCALE_HPP

#include "../domains/linear.hpp"
#include "../domains/triangular.hpp"
#include "../domains/quadrilateral.hpp"
#include "../domains/tetrahedral.hpp"

////////////
// Linear //
////////////

/**
 * Scale a linear cartesian 1D domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void LinearCartesian1D_Domain_scale(LinearCartesian1D_Domain domain, double factor);

/**
 * Scale a linear cartesian 2D domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void LinearCartesian2D_Domain_scale(LinearCartesian2D_Domain domain, double factor);

/**
 * Scale a linear cartesian 3D domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void LinearCartesian3D_Domain_scale(LinearCartesian3D_Domain domain, double factor);

/**
 * Scale a linear cylindrical domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void LinearCylindrical3D_Domain_scale(LinearCylindrical3D_Domain domain, double factor);

/**
 * Scale a linear polar domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void LinearPolar2D_Domain_scale(LinearPolar2D_Domain domain, double factor);

/**
 * Scale a linear spherical domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void LinearSpherical3D_Domain_scale(LinearSpherical3D_Domain domain, double factor);

////////////////
// Triangular //
////////////////

/**
 * Scale a linear cartesian 2D domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void TriangularCartesian2D_Domain_scale(TriangularCartesian2D_Domain domain, double factor);

/**
 * Scale a linear cartesian 3D domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void TriangularCartesian3D_Domain_scale(TriangularCartesian3D_Domain domain, double factor);

/**
 * Scale a linear cylindrical domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void TriangularCylindrical3D_Domain_scale(TriangularCylindrical3D_Domain domain, double factor);

/**
 * Scale a linear polar domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void TriangularPolar2D_Domain_scale(TriangularPolar2D_Domain domain, double factor);

/**
 * Scale a linear spherical domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void TriangularSpherical3D_Domain_scale(TriangularSpherical3D_Domain domain, double factor);

///////////////////
// Quadrilateral //
///////////////////

/**
 * Scale a linear cartesian 2D domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void QuadrilateralCartesian2D_Domain_scale(QuadrilateralCartesian2D_Domain domain, double factor);

/**
 * Scale a linear cartesian 3D domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void QuadrilateralCartesian3D_Domain_scale(QuadrilateralCartesian3D_Domain domain, double factor);

/**
 * Scale a linear cylindrical domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void QuadrilateralCylindrical3D_Domain_scale(QuadrilateralCylindrical3D_Domain domain, double factor);

/**
 * Scale a linear polar domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void QuadrilateralPolar2D_Domain_scale(QuadrilateralPolar2D_Domain domain, double factor);

/**
 * Scale a linear spherical domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void QuadrilateralSpherical3D_Domain_scale(QuadrilateralSpherical3D_Domain domain, double factor);

/////////////////
// Tetrahedral //
/////////////////

/**
 * Scale a linear cartesian 3D domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void TetrahedralCartesian3D_Domain_scale(TetrahedralCartesian3D_Domain domain, double factor);

/**
 * Scale a linear cylindrical domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void TetrahedralCylindrical3D_Domain_scale(TetrahedralCylindrical3D_Domain domain, double factor);

/**
 * Scale a linear spherical domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 * 
 * @since 0.1.0
 */
void TetrahedralSpherical3D_Domain_scale(TetrahedralSpherical3D_Domain domain, double factor);

#endif /* end of include guard: ALGORITHMS_SCALE_HPP */
