/**
 * @file
 * @brief Implement calculation of the volume of a segment.
 */

#ifndef ALGORITHMS_SEGMENT_VOLUME_HPP
#define ALGORITHMS_SEGMENT_VOLUME_HPP

#include "../segments/linear.hpp"
#include "../segments/triangular.hpp"
#include "../segments/quadrilateral.hpp"
#include "../segments/tetrahedral.hpp"

////////////
// Linear //
////////////

/**
 * Calculate the volume of a linear cartesian 1D segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double LinearCartesian1D_Segment_volume(LinearCartesian1D_Segment segment);

/**
 * Calculate the volume of a linear cartesian 2D segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double LinearCartesian2D_Segment_volume(LinearCartesian2D_Segment segment);

/**
 * Calculate the volume of a linear cartesian 3D segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double LinearCartesian3D_Segment_volume(LinearCartesian3D_Segment segment);

/**
 * Calculate the volume of a linear cylindrical segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double LinearCylindrical3D_Segment_volume(LinearCylindrical3D_Segment segment);

/**
 * Calculate the volume of a linear polar segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double LinearPolar2D_Segment_volume(LinearPolar2D_Segment segment);

/**
 * Calculate the volume of a linear spherical segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double LinearSpherical3D_Segment_volume(LinearSpherical3D_Segment segment);

////////////////
// Triangular //
////////////////

/**
 * Calculate the volume of a triangular cartesian 2D segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double TriangularCartesian2D_Segment_volume(TriangularCartesian2D_Segment segment);

/**
 * Calculate the volume of a triangular cartesian 3D segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double TriangularCartesian3D_Segment_volume(TriangularCartesian3D_Segment segment);

/**
 * Calculate the volume of a triangular cylindrical segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double TriangularCylindrical3D_Segment_volume(TriangularCylindrical3D_Segment segment);

/**
 * Calculate the volume of a triangular polar segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double TriangularPolar2D_Segment_volume(TriangularPolar2D_Segment segment);

/**
 * Calculate the volume of a triangular spherical segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double TriangularSpherical3D_Segment_volume(TriangularSpherical3D_Segment segment);

///////////////////
// Quadrilateral //
///////////////////

/**
 * Calculate the volume of a quadrilateral cartesian 2D segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double QuadrilateralCartesian2D_Segment_volume(QuadrilateralCartesian2D_Segment segment);

/**
 * Calculate the volume of a quadrilateral cartesian 3D segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double QuadrilateralCartesian3D_Segment_volume(QuadrilateralCartesian3D_Segment segment);

/**
 * Calculate the volume of a quadrilateral cylindrical segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double QuadrilateralCylindrical3D_Segment_volume(QuadrilateralCylindrical3D_Segment segment);

/**
 * Calculate the volume of a quadrilateral polar segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double QuadrilateralPolar2D_Segment_volume(QuadrilateralPolar2D_Segment segment);

/**
 * Calculate the volume of a quadrilateral spherical segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double QuadrilateralSpherical3D_Segment_volume(QuadrilateralSpherical3D_Segment segment);

/////////////////
// Tetrahedral //
/////////////////

/**
 * Calculate the volume of a tetrahedral cartesian 3D segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double TetrahedralCartesian3D_Segment_volume(TetrahedralCartesian3D_Segment segment);

/**
 * Calculate the volume of a tetrahedral cylindrical segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double TetrahedralCylindrical3D_Segment_volume(TetrahedralCylindrical3D_Segment segment);

/**
 * Calculate the volume of a tetrahedral spherical segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 * 
 * @since 0.1.0
 */
double TetrahedralSpherical3D_Segment_volume(TetrahedralSpherical3D_Segment segment);

#endif /* end of include guard: ALGORITHMS_SEGMENT_VOLUME_HPP */
