/**
 * @file
 * @brief Implement calculation of the volume of a domain.
 */

#ifndef ALGORITHMS_DOMAIN_VOLUME_HPP
#define ALGORITHMS_DOMAIN_VOLUME_HPP

#include "../domains/linear.hpp"
#include "../domains/triangular.hpp"
#include "../domains/quadrilateral.hpp"
#include "../domains/tetrahedral.hpp"

////////////
// Linear //
////////////

/**
 * Calculate the volume of a linear cartesian 1D domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double LinearCartesian1D_Domain_volume(LinearCartesian1D_Domain domain);

/**
 * Calculate the volume of a linear cartesian 2D domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double LinearCartesian2D_Domain_volume(LinearCartesian2D_Domain domain);

/**
 * Calculate the volume of a linear cartesian 3D domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double LinearCartesian3D_Domain_volume(LinearCartesian3D_Domain domain);

/**
 * Calculate the volume of a linear cylindrical domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double LinearCylindrical3D_Domain_volume(LinearCylindrical3D_Domain domain);

/**
 * Calculate the volume of a linear polar domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double LinearPolar2D_Domain_volume(LinearPolar2D_Domain domain);

/**
 * Calculate the volume of a linear spherical domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double LinearSpherical3D_Domain_volume(LinearSpherical3D_Domain domain);

////////////////
// Triangular //
////////////////

/**
 * Calculate the volume of a triangular cartesian 2D domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double TriangularCartesian2D_Domain_volume(TriangularCartesian2D_Domain domain);

/**
 * Calculate the volume of a triangular cartesian 3D domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double TriangularCartesian3D_Domain_volume(TriangularCartesian3D_Domain domain);

/**
 * Calculate the volume of a triangular cylindrical domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double TriangularCylindrical3D_Domain_volume(TriangularCylindrical3D_Domain domain);

/**
 * Calculate the volume of a triangular polar domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double TriangularPolar2D_Domain_volume(TriangularPolar2D_Domain domain);

/**
 * Calculate the volume of a triangular spherical domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double TriangularSpherical3D_Domain_volume(TriangularSpherical3D_Domain domain);

///////////////////
// Quadrilateral //
///////////////////

/**
 * Calculate the volume of a quadrilateral cartesian 2D domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double QuadrilateralCartesian2D_Domain_volume(QuadrilateralCartesian2D_Domain domain);

/**
 * Calculate the volume of a quadrilateral cartesian 3D domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double QuadrilateralCartesian3D_Domain_volume(QuadrilateralCartesian3D_Domain domain);

/**
 * Calculate the volume of a quadrilateral cylindrical domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double QuadrilateralCylindrical3D_Domain_volume(QuadrilateralCylindrical3D_Domain domain);

/**
 * Calculate the volume of a quadrilateral polar domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double QuadrilateralPolar2D_Domain_volume(QuadrilateralPolar2D_Domain domain);

/**
 * Calculate the volume of a quadrilateral spherical domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double QuadrilateralSpherical3D_Domain_volume(QuadrilateralSpherical3D_Domain domain);

/////////////////
// Tetrahedral //
/////////////////

/**
 * Calculate the volume of a tetrahedral cartesian 3D domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double TetrahedralCartesian3D_Domain_volume(TetrahedralCartesian3D_Domain domain);

/**
 * Calculate the volume of a tetrahedral cylindrical domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double TetrahedralCylindrical3D_Domain_volume(TetrahedralCylindrical3D_Domain domain);

/**
 * Calculate the volume of a tetrahedral spherical domain.
 * 
 * @param domain Domain whose volume will be computed.
 * @return Real number in double precision which represents the volume of the domain.
 */
double TetrahedralSpherical3D_Domain_volume(TetrahedralSpherical3D_Domain domain);

#endif /* end of include guard: ALGORITHMS_DOMAIN_VOLUME_HPP */
