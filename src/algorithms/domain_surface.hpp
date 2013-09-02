/**
 * @file
 * @brief Implement calculation of the surface of a domain.
 */

#ifndef ALGORITHMS_DOMAIN_SURFACE_HPP
#define ALGORITHMS_DOMAIN_SURFACE_HPP

#include "../domains/linear.hpp"
#include "../domains/triangular.hpp"
#include "../domains/quadrilateral.hpp"
#include "../domains/tetrahedral.hpp"

////////////
// Linear //
////////////

/**
 * Calculate the surface of a linear cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double LinearCartesian1D_Domain_surface(LinearCartesian1D_Domain domain);

/**
 * Calculate the surface of a linear cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double LinearCartesian2D_Domain_surface(LinearCartesian2D_Domain domain);

/**
 * Calculate the surface of a linear cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double LinearCartesian3D_Domain_surface(LinearCartesian3D_Domain domain);

/**
 * Calculate the surface of a linear cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double LinearCylindrical3D_Domain_surface(LinearCylindrical3D_Domain domain);

/**
 * Calculate the surface of a linear cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double LinearPolar2D_Domain_surface(LinearPolar2D_Domain domain);

/**
 * Calculate the surface of a linear cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double LinearSpherical3D_Domain_surface(LinearSpherical3D_Domain domain);

////////////////
// Triangular //
////////////////

/**
 * Calculate the surface of a triangular cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double TriangularCartesian2D_Domain_surface(TriangularCartesian2D_Domain domain);

/**
 * Calculate the surface of a triangular cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double TriangularCartesian3D_Domain_surface(TriangularCartesian3D_Domain domain);

/**
 * Calculate the surface of a triangular cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double TriangularCylindrical3D_Domain_surface(TriangularCylindrical3D_Domain domain);

/**
 * Calculate the surface of a triangular cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double TriangularPolar2D_Domain_surface(TriangularPolar2D_Domain domain);

/**
 * Calculate the surface of a triangular cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double TriangularSpherical3D_Domain_surface(TriangularSpherical3D_Domain domain);

///////////////////
// Quadrilateral //
///////////////////

/**
 * Calculate the surface of a quadrilateral cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double QuadrilateralCartesian2D_Domain_surface(QuadrilateralCartesian2D_Domain domain);

/**
 * Calculate the surface of a quadrilateral cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double QuadrilateralCartesian3D_Domain_surface(QuadrilateralCartesian3D_Domain domain);

/**
 * Calculate the surface of a quadrilateral cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double QuadrilateralCylindrical3D_Domain_surface(QuadrilateralCylindrical3D_Domain domain);

/**
 * Calculate the surface of a quadrilateral cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double QuadrilateralPolar2D_Domain_surface(QuadrilateralPolar2D_Domain domain);

/**
 * Calculate the surface of a quadrilateral cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double QuadrilateralSpherical3D_Domain_surface(QuadrilateralSpherical3D_Domain domain);

/////////////////
// Tetrahedral //
/////////////////

/**
 * Calculate the surface of a tetrahedral cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double TetrahedralCartesian3D_Domain_surface(TetrahedralCartesian3D_Domain domain);

/**
 * Calculate the surface of a tetrahedral cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double TetrahedralCylindrical3D_Domain_surface(TetrahedralCylindrical3D_Domain domain);

/**
 * Calculate the surface of a tetrahedral cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 * 
 * @since 0.1.0
 */
double TetrahedralSpherical3D_Domain_surface(TetrahedralSpherical3D_Domain domain);

#endif /* end of include guard: ALGORITHMS_DOMAIN_SURFACE_HPP */
