#ifndef ALGORITHMS_SEGMENT_SURFACE_HPP
#define ALGORITHMS_SEGMENT_SURFACE_HPP

#include "../segments/linear.hpp"
#include "../segments/triangular.hpp"
#include "../segments/quadrilateral.hpp"
#include "../segments/tetrahedral.hpp"

/***********
 * SURFACE *
 ***********/

double LinearCartesian1D_Segment_surface(LinearCartesian1D_Segment segment);
double LinearCartesian2D_Segment_surface(LinearCartesian2D_Segment segment);
double LinearCartesian3D_Segment_surface(LinearCartesian3D_Segment segment);
double LinearCylindrical3D_Segment_surface(LinearCylindrical3D_Segment segment);
double LinearPolar2D_Segment_surface(LinearPolar2D_Segment segment);
double LinearSpherical3D_Segment_surface(LinearSpherical3D_Segment segment);

double TriangularCartesian2D_Segment_surface(TriangularCartesian2D_Segment segment);
double TriangularCartesian3D_Segment_surface(TriangularCartesian3D_Segment segment);
double TriangularCylindrical3D_Segment_surface(TriangularCylindrical3D_Segment segment);
double TriangularPolar2D_Segment_surface(TriangularPolar2D_Segment segment);
double TriangularSpherical3D_Segment_surface(TriangularSpherical3D_Segment segment);

double QuadrilateralCartesian2D_Segment_surface(QuadrilateralCartesian2D_Segment segment);
double QuadrilateralCartesian3D_Segment_surface(QuadrilateralCartesian3D_Segment segment);
double QuadrilateralCylindrical3D_Segment_surface(QuadrilateralCylindrical3D_Segment segment);
double QuadrilateralPolar2D_Segment_surface(QuadrilateralPolar2D_Segment segment);
double QuadrilateralSpherical3D_Segment_surface(QuadrilateralSpherical3D_Segment segment);

double TetrahedralCartesian3D_Segment_surface(TetrahedralCartesian3D_Segment segment);
double TetrahedralCylindrical3D_Segment_surface(TetrahedralCylindrical3D_Segment segment);
double TetrahedralSpherical3D_Segment_surface(TetrahedralSpherical3D_Segment segment);

#endif /* end of include guard: ALGORITHMS_SEGMENT_SURFACE_HPP */
