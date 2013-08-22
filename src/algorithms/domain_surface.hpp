#ifndef ALGORITHMS_DOMAIN_SURFACE_HPP
#define ALGORITHMS_DOMAIN_SURFACE_HPP

#include "../domains/linear.hpp"
#include "../domains/triangular.hpp"
#include "../domains/quadrilateral.hpp"
#include "../domains/tetrahedral.hpp"

/***********
 * SURFACE *
 ***********/

double LinearCartesian1D_Domain_surface(LinearCartesian1D_Domain domain);
double LinearCartesian2D_Domain_surface(LinearCartesian2D_Domain domain);
double LinearCartesian3D_Domain_surface(LinearCartesian3D_Domain domain);
double LinearCylindrical3D_Domain_surface(LinearCylindrical3D_Domain domain);
double LinearPolar2D_Domain_surface(LinearPolar2D_Domain domain);
double LinearSpherical3D_Domain_surface(LinearSpherical3D_Domain domain);

double TriangularCartesian2D_Domain_surface(TriangularCartesian2D_Domain domain);
double TriangularCartesian3D_Domain_surface(TriangularCartesian3D_Domain domain);
double TriangularCylindrical3D_Domain_surface(TriangularCylindrical3D_Domain domain);
double TriangularPolar2D_Domain_surface(TriangularPolar2D_Domain domain);
double TriangularSpherical3D_Domain_surface(TriangularSpherical3D_Domain domain);

double QuadrilateralCartesian2D_Domain_surface(QuadrilateralCartesian2D_Domain domain);
double QuadrilateralCartesian3D_Domain_surface(QuadrilateralCartesian3D_Domain domain);
double QuadrilateralCylindrical3D_Domain_surface(QuadrilateralCylindrical3D_Domain domain);
double QuadrilateralPolar2D_Domain_surface(QuadrilateralPolar2D_Domain domain);
double QuadrilateralSpherical3D_Domain_surface(QuadrilateralSpherical3D_Domain domain);

double TetrahedralCartesian3D_Domain_surface(TetrahedralCartesian3D_Domain domain);
double TetrahedralCylindrical3D_Domain_surface(TetrahedralCylindrical3D_Domain domain);
double TetrahedralSpherical3D_Domain_surface(TetrahedralSpherical3D_Domain domain);

#endif /* end of include guard: ALGORITHMS_DOMAIN_SURFACE_HPP */
