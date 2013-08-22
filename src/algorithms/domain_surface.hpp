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
 */
double LinearCartesian1D_Domain_surface(LinearCartesian1D_Domain domain);

/**
 * Calculate the surface of a linear cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 */
double LinearCartesian2D_Domain_surface(LinearCartesian2D_Domain domain);

/**
 * Calculate the surface of a linear cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 */
double LinearCartesian3D_Domain_surface(LinearCartesian3D_Domain domain);

/**
 * Calculate the surface of a linear cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 */
double LinearCylindrical3D_Domain_surface(LinearCylindrical3D_Domain domain);

/**
 * Calculate the surface of a linear cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 */
double LinearPolar2D_Domain_surface(LinearPolar2D_Domain domain);

/**
 * Calculate the surface of a linear cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
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
 */
double TriangularCartesian2D_Domain_surface(TriangularCartesian2D_Domain domain);

/**
 * Calculate the surface of a triangular cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 */
double TriangularCartesian3D_Domain_surface(TriangularCartesian3D_Domain domain);

/**
 * Calculate the surface of a triangular cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 */
double TriangularCylindrical3D_Domain_surface(TriangularCylindrical3D_Domain domain);

/**
 * Calculate the surface of a triangular cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 */
double TriangularPolar2D_Domain_surface(TriangularPolar2D_Domain domain);

/**
 * Calculate the surface of a triangular cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
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
 */
double QuadrilateralCartesian2D_Domain_surface(QuadrilateralCartesian2D_Domain domain);

/**
 * Calculate the surface of a quadrilateral cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 */
double QuadrilateralCartesian3D_Domain_surface(QuadrilateralCartesian3D_Domain domain);

/**
 * Calculate the surface of a quadrilateral cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 */
double QuadrilateralCylindrical3D_Domain_surface(QuadrilateralCylindrical3D_Domain domain);

/**
 * Calculate the surface of a quadrilateral cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 */
double QuadrilateralPolar2D_Domain_surface(QuadrilateralPolar2D_Domain domain);

/**
 * Calculate the surface of a quadrilateral cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
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
 */
double TetrahedralCartesian3D_Domain_surface(TetrahedralCartesian3D_Domain domain);

/**
 * Calculate the surface of a tetrahedral cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 */
double TetrahedralCylindrical3D_Domain_surface(TetrahedralCylindrical3D_Domain domain);

/**
 * Calculate the surface of a tetrahedral cartesian 3D domain.
 * 
 * @param domain Domain whose surface will be computed.
 * @return Real number in double precision which represents the surface of the domain.
 */
double TetrahedralSpherical3D_Domain_surface(TetrahedralSpherical3D_Domain domain);

#endif /* end of include guard: ALGORITHMS_DOMAIN_SURFACE_HPP */
