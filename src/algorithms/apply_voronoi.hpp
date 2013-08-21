#ifndef ALGORITHMS_APPLY_VORONOI_HPP
#define ALGORITHMS_APPLY_VORONOI_HPP

#include "../domains/linear.hpp"
#include "../domains/triangular.hpp"
#include "../domains/quadrilateral.hpp"
#include "../domains/tetrahedral.hpp"

/*****************
 * APPLY_VORONOI *
 *****************/

void LinearCartesian1D_Domain_apply_voronoi(LinearCartesian1D_Domain domain);
void LinearCartesian2D_Domain_apply_voronoi(LinearCartesian2D_Domain domain);
void LinearCartesian3D_Domain_apply_voronoi(LinearCartesian3D_Domain domain);
void LinearCylindrical3D_Domain_apply_voronoi(LinearCylindrical3D_Domain domain);
void LinearPolar2D_Domain_apply_voronoi(LinearPolar2D_Domain domain);
void LinearSpherical3D_Domain_apply_voronoi(LinearSpherical3D_Domain domain);

void TriangularCartesian2D_Domain_apply_voronoi(TriangularCartesian2D_Domain domain);
void TriangularCartesian3D_Domain_apply_voronoi(TriangularCartesian3D_Domain domain);
void TriangularCylindrical3D_Domain_apply_voronoi(TriangularCylindrical3D_Domain domain);
void TriangularPolar2D_Domain_apply_voronoi(TriangularPolar2D_Domain domain);
void TriangularSpherical3D_Domain_apply_voronoi(TriangularSpherical3D_Domain domain);

void QuadrilateralCartesian2D_Domain_apply_voronoi(QuadrilateralCartesian2D_Domain domain);
void QuadrilateralCartesian3D_Domain_apply_voronoi(QuadrilateralCartesian3D_Domain domain);
void QuadrilateralCylindrical3D_Domain_apply_voronoi(QuadrilateralCylindrical3D_Domain domain);
void QuadrilateralPolar2D_Domain_apply_voronoi(QuadrilateralPolar2D_Domain domain);
void QuadrilateralSpherical3D_Domain_apply_voronoi(QuadrilateralSpherical3D_Domain domain);

void TetrahedralCartesian3D_Domain_apply_voronoi(TetrahedralCartesian3D_Domain domain);
void TetrahedralCylindrical3D_Domain_apply_voronoi(TetrahedralCylindrical3D_Domain domain);
void TetrahedralSpherical3D_Domain_apply_voronoi(TetrahedralSpherical3D_Domain domain);

#endif /* end of include guard: ALGORITHMS_APPLY_VORONOI_HPP */
