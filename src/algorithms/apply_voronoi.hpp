#ifndef ALGORITHMS_APPLY_VORONOI_HPP
#define ALGORITHMS_APPLY_VORONOI_HPP

#include "../domains/triangular.hpp"
#include "../domains/tetrahedral.hpp"

/*****************
 * APPLY_VORONOI *
 *****************/

void TriangularCartesian2D_Domain_apply_voronoi(TriangularCartesian2D_Domain domain);
void TriangularCartesian3D_Domain_apply_voronoi(TriangularCartesian3D_Domain domain);
void TriangularCylindrical3D_Domain_apply_voronoi(TriangularCylindrical3D_Domain domain);
void TriangularPolar2D_Domain_apply_voronoi(TriangularPolar2D_Domain domain);
void TriangularSpherical3D_Domain_apply_voronoi(TriangularSpherical3D_Domain domain);

void TetrahedralCartesian3D_Domain_apply_voronoi(TetrahedralCartesian3D_Domain domain);
void TetrahedralCylindrical3D_Domain_apply_voronoi(TetrahedralCylindrical3D_Domain domain);
void TetrahedralSpherical3D_Domain_apply_voronoi(TetrahedralSpherical3D_Domain domain);

#endif /* end of include guard: ALGORITHMS_APPLY_VORONOI_HPP */
