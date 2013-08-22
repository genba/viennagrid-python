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
 */
double LinearCartesian1D_Segment_volume(LinearCartesian1D_Segment segment);

/**
 * Calculate the volume of a linear cartesian 2D segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 */
double LinearCartesian2D_Segment_volume(LinearCartesian2D_Segment segment);

/**
 * Calculate the volume of a linear cartesian 3D segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 */
double LinearCartesian3D_Segment_volume(LinearCartesian3D_Segment segment);

/**
 * Calculate the volume of a linear cylindrical segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 */
double LinearCylindrical3D_Segment_volume(LinearCylindrical3D_Segment segment);

/**
 * Calculate the volume of a linear polar segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 */
double LinearPolar2D_Segment_volume(LinearPolar2D_Segment segment);

/**
 * Calculate the volume of a linear spherical segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
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
 */
double TriangularCartesian2D_Segment_volume(TriangularCartesian2D_Segment segment);

/**
 * Calculate the volume of a triangular cartesian 3D segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 */
double TriangularCartesian3D_Segment_volume(TriangularCartesian3D_Segment segment);

/**
 * Calculate the volume of a triangular cylindrical segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 */
double TriangularCylindrical3D_Segment_volume(TriangularCylindrical3D_Segment segment);

/**
 * Calculate the volume of a triangular polar segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 */
double TriangularPolar2D_Segment_volume(TriangularPolar2D_Segment segment);

/**
 * Calculate the volume of a triangular spherical segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
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
 */
double QuadrilateralCartesian2D_Segment_volume(QuadrilateralCartesian2D_Segment segment);

/**
 * Calculate the volume of a quadrilateral cartesian 3D segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 */
double QuadrilateralCartesian3D_Segment_volume(QuadrilateralCartesian3D_Segment segment);

/**
 * Calculate the volume of a quadrilateral cylindrical segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 */
double QuadrilateralCylindrical3D_Segment_volume(QuadrilateralCylindrical3D_Segment segment);

/**
 * Calculate the volume of a quadrilateral polar segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 */
double QuadrilateralPolar2D_Segment_volume(QuadrilateralPolar2D_Segment segment);

/**
 * Calculate the volume of a quadrilateral spherical segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
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
 */
double TetrahedralCartesian3D_Segment_volume(TetrahedralCartesian3D_Segment segment);

/**
 * Calculate the volume of a tetrahedral cylindrical segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 */
double TetrahedralCylindrical3D_Segment_volume(TetrahedralCylindrical3D_Segment segment);

/**
 * Calculate the volume of a tetrahedral spherical segment.
 * 
 * @param segment Segment whose volume will be computed.
 * @return Real number in double precision which represents the volume of the segment.
 */
double TetrahedralSpherical3D_Segment_volume(TetrahedralSpherical3D_Segment segment);

#endif /* end of include guard: ALGORITHMS_SEGMENT_VOLUME_HPP */
