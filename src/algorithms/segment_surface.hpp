/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Implement calculation of the surface of a segment.
 */

#ifndef ALGORITHMS_SEGMENT_SURFACE_HPP
#define ALGORITHMS_SEGMENT_SURFACE_HPP

#include "../segments/linear.hpp"
#include "../segments/triangular.hpp"
#include "../segments/quadrilateral.hpp"
#include "../segments/tetrahedral.hpp"

////////////
// Linear //
////////////

/**
 * Calculate the surface of a linear cartesian 1D segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double LinearCartesian1D_Segment_surface(LinearCartesian1D_Segment segment);

/**
 * Calculate the surface of a linear cartesian 2D segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double LinearCartesian2D_Segment_surface(LinearCartesian2D_Segment segment);

/**
 * Calculate the surface of a linear cartesian 3D segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double LinearCartesian3D_Segment_surface(LinearCartesian3D_Segment segment);

/**
 * Calculate the surface of a linear cylindrical segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double LinearCylindrical3D_Segment_surface(LinearCylindrical3D_Segment segment);

/**
 * Calculate the surface of a linear polar segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double LinearPolar2D_Segment_surface(LinearPolar2D_Segment segment);

/**
 * Calculate the surface of a linear spherical segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double LinearSpherical3D_Segment_surface(LinearSpherical3D_Segment segment);

////////////////
// Triangular //
////////////////

/**
 * Calculate the surface of a triangular cartesian 2D segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double TriangularCartesian2D_Segment_surface(TriangularCartesian2D_Segment segment);

/**
 * Calculate the surface of a triangular cartesian 3D segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double TriangularCartesian3D_Segment_surface(TriangularCartesian3D_Segment segment);

/**
 * Calculate the surface of a triangular cylindrical segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double TriangularCylindrical3D_Segment_surface(TriangularCylindrical3D_Segment segment);

/**
 * Calculate the surface of a triangular polar segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double TriangularPolar2D_Segment_surface(TriangularPolar2D_Segment segment);

/**
 * Calculate the surface of a triangular spherical segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double TriangularSpherical3D_Segment_surface(TriangularSpherical3D_Segment segment);

///////////////////
// Quadrilateral //
///////////////////

/**
 * Calculate the surface of a quadrilateral cartesian 2D segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double QuadrilateralCartesian2D_Segment_surface(QuadrilateralCartesian2D_Segment segment);

/**
 * Calculate the surface of a quadrilateral cartesian 3D segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double QuadrilateralCartesian3D_Segment_surface(QuadrilateralCartesian3D_Segment segment);

/**
 * Calculate the surface of a quadrilateral cylindrical segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double QuadrilateralCylindrical3D_Segment_surface(QuadrilateralCylindrical3D_Segment segment);

/**
 * Calculate the surface of a quadrilateral polar segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double QuadrilateralPolar2D_Segment_surface(QuadrilateralPolar2D_Segment segment);

/**
 * Calculate the surface of a quadrilateral spherical segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double QuadrilateralSpherical3D_Segment_surface(QuadrilateralSpherical3D_Segment segment);

/////////////////
// Tetrahedral //
/////////////////

/**
 * Calculate the surface of a tetrahedral cartesian 3D segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double TetrahedralCartesian3D_Segment_surface(TetrahedralCartesian3D_Segment segment);

/**
 * Calculate the surface of a tetrahedral cylindrical segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double TetrahedralCylindrical3D_Segment_surface(TetrahedralCylindrical3D_Segment segment);

/**
 * Calculate the surface of a tetrahedral spherical segment.
 * 
 * @param segment Segment whose surface will be computed.
 * @return Real number in double precision which represents the surface of the segment.
 * 
 * @since 0.1.0
 */
double TetrahedralSpherical3D_Segment_surface(TetrahedralSpherical3D_Segment segment);

#endif /* end of include guard: ALGORITHMS_SEGMENT_SURFACE_HPP */
