#ifndef ALGORITHMS_SEGMENT_VOLUME_HPP
#define ALGORITHMS_SEGMENT_VOLUME_HPP

#include "../segments/linear.hpp"
#include "../segments/triangular.hpp"
#include "../segments/quadrilateral.hpp"
#include "../segments/tetrahedral.hpp"

/**********
 * VOLUME *
 **********/

double LinearCartesian1D_Segment_volume(LinearCartesian1D_Segment segment);
double LinearCartesian2D_Segment_volume(LinearCartesian2D_Segment segment);
double LinearCartesian3D_Segment_volume(LinearCartesian3D_Segment segment);
double LinearCylindrical3D_Segment_volume(LinearCylindrical3D_Segment segment);
double LinearPolar2D_Segment_volume(LinearPolar2D_Segment segment);
double LinearSpherical3D_Segment_volume(LinearSpherical3D_Segment segment);

double TriangularCartesian2D_Segment_volume(TriangularCartesian2D_Segment segment);
double TriangularCartesian3D_Segment_volume(TriangularCartesian3D_Segment segment);
double TriangularCylindrical3D_Segment_volume(TriangularCylindrical3D_Segment segment);
double TriangularPolar2D_Segment_volume(TriangularPolar2D_Segment segment);
double TriangularSpherical3D_Segment_volume(TriangularSpherical3D_Segment segment);

double QuadrilateralCartesian2D_Segment_volume(QuadrilateralCartesian2D_Segment segment);
double QuadrilateralCartesian3D_Segment_volume(QuadrilateralCartesian3D_Segment segment);
double QuadrilateralCylindrical3D_Segment_volume(QuadrilateralCylindrical3D_Segment segment);
double QuadrilateralPolar2D_Segment_volume(QuadrilateralPolar2D_Segment segment);
double QuadrilateralSpherical3D_Segment_volume(QuadrilateralSpherical3D_Segment segment);

double TetrahedralCartesian3D_Segment_volume(TetrahedralCartesian3D_Segment segment);
double TetrahedralCylindrical3D_Segment_volume(TetrahedralCylindrical3D_Segment segment);
double TetrahedralSpherical3D_Segment_volume(TetrahedralSpherical3D_Segment segment);

#endif /* end of include guard: ALGORITHMS_SEGMENT_VOLUME_HPP */
