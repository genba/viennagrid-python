#ifndef ALGORITHMS_DOMAIN_VOLUME_HPP
#define ALGORITHMS_DOMAIN_VOLUME_HPP

#include "../domains/linear.hpp"
#include "../domains/triangular.hpp"
#include "../domains/quadrilateral.hpp"
#include "../domains/tetrahedral.hpp"

/**********
 * VOLUME *
 **********/

double LinearCartesian1D_Domain_volume(LinearCartesian1D_Domain domain);
double LinearCartesian2D_Domain_volume(LinearCartesian2D_Domain domain);
double LinearCartesian3D_Domain_volume(LinearCartesian3D_Domain domain);
double LinearCylindrical3D_Domain_volume(LinearCylindrical3D_Domain domain);
double LinearPolar2D_Domain_volume(LinearPolar2D_Domain domain);
double LinearSpherical3D_Domain_volume(LinearSpherical3D_Domain domain);

double TriangularCartesian2D_Domain_volume(TriangularCartesian2D_Domain domain);
double TriangularCartesian3D_Domain_volume(TriangularCartesian3D_Domain domain);
double TriangularCylindrical3D_Domain_volume(TriangularCylindrical3D_Domain domain);
double TriangularPolar2D_Domain_volume(TriangularPolar2D_Domain domain);
double TriangularSpherical3D_Domain_volume(TriangularSpherical3D_Domain domain);

double QuadrilateralCartesian2D_Domain_volume(QuadrilateralCartesian2D_Domain domain);
double QuadrilateralCartesian3D_Domain_volume(QuadrilateralCartesian3D_Domain domain);
double QuadrilateralCylindrical3D_Domain_volume(QuadrilateralCylindrical3D_Domain domain);
double QuadrilateralPolar2D_Domain_volume(QuadrilateralPolar2D_Domain domain);
double QuadrilateralSpherical3D_Domain_volume(QuadrilateralSpherical3D_Domain domain);

double TetrahedralCartesian3D_Domain_volume(TetrahedralCartesian3D_Domain domain);
double TetrahedralCylindrical3D_Domain_volume(TetrahedralCylindrical3D_Domain domain);
double TetrahedralSpherical3D_Domain_volume(TetrahedralSpherical3D_Domain domain);

#endif /* end of include guard: ALGORITHMS_DOMAIN_VOLUME_HPP */
