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
 */
void LinearCartesian1D_Domain_scale(LinearCartesian1D_Domain domain, double factor);

/**
 * Scale a linear cartesian 2D domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 */
void LinearCartesian2D_Domain_scale(LinearCartesian2D_Domain domain, double factor);

/**
 * Scale a linear cartesian 3D domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 */
void LinearCartesian3D_Domain_scale(LinearCartesian3D_Domain domain, double factor);

/**
 * Scale a linear cylindrical domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 */
void LinearCylindrical3D_Domain_scale(LinearCylindrical3D_Domain domain, double factor);

/**
 * Scale a linear polar domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 */
void LinearPolar2D_Domain_scale(LinearPolar2D_Domain domain, double factor);

/**
 * Scale a linear spherical domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
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
 */
void TriangularCartesian2D_Domain_scale(TriangularCartesian2D_Domain domain, double factor);

/**
 * Scale a linear cartesian 3D domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 */
void TriangularCartesian3D_Domain_scale(TriangularCartesian3D_Domain domain, double factor);

/**
 * Scale a linear cylindrical domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 */
void TriangularCylindrical3D_Domain_scale(TriangularCylindrical3D_Domain domain, double factor);

/**
 * Scale a linear polar domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 */
void TriangularPolar2D_Domain_scale(TriangularPolar2D_Domain domain, double factor);

/**
 * Scale a linear spherical domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
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
 */
void QuadrilateralCartesian2D_Domain_scale(QuadrilateralCartesian2D_Domain domain, double factor);

/**
 * Scale a linear cartesian 3D domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 */
void QuadrilateralCartesian3D_Domain_scale(QuadrilateralCartesian3D_Domain domain, double factor);

/**
 * Scale a linear cylindrical domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 */
void QuadrilateralCylindrical3D_Domain_scale(QuadrilateralCylindrical3D_Domain domain, double factor);

/**
 * Scale a linear polar domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 */
void QuadrilateralPolar2D_Domain_scale(QuadrilateralPolar2D_Domain domain, double factor);

/**
 * Scale a linear spherical domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
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
 */
void TetrahedralCartesian3D_Domain_scale(TetrahedralCartesian3D_Domain domain, double factor);

/**
 * Scale a linear cylindrical domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 */
void TetrahedralCylindrical3D_Domain_scale(TetrahedralCylindrical3D_Domain domain, double factor);

/**
 * Scale a linear spherical domain by a given factor.
 * 
 * @param domain Domain to be scaled.
 * @param factor Scalation factor.
 */
void TetrahedralSpherical3D_Domain_scale(TetrahedralSpherical3D_Domain domain, double factor);

#endif /* end of include guard: ALGORITHMS_SCALE_HPP */
