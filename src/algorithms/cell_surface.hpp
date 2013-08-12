#ifndef ALGORHITHMS_CELL_SURFACE_HPP
#define ALGORHITHMS_CELL_SURFACE_HPP

#include <boost/python.hpp>
using namespace boost::python;

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../cells/linear.hpp"
#include "../cells/triangular.hpp"
#include "../cells/quadrilateral.hpp"
#include "../cells/tetrahedral.hpp"

/***********
 * SURFACE *
 ***********/

double LinearCartesian1D_Cell_surface(LinearCartesian1D_Cell cell);
double LinearCartesian2D_Cell_surface(LinearCartesian2D_Cell cell);
double LinearCartesian3D_Cell_surface(LinearCartesian3D_Cell cell);
double LinearCylindrical3D_Cell_surface(LinearCylindrical3D_Cell cell);
double LinearPolar2D_Cell_surface(LinearPolar2D_Cell cell);
double LinearSpherical3D_Cell_surface(LinearSpherical3D_Cell cell);

double TriangularCartesian2D_Cell_surface(TriangularCartesian2D_Cell cell);
double TriangularCartesian3D_Cell_surface(TriangularCartesian3D_Cell cell);
double TriangularCylindrical3D_Cell_surface(TriangularCylindrical3D_Cell cell);
double TriangularPolar2D_Cell_surface(TriangularPolar2D_Cell cell);
double TriangularSpherical3D_Cell_surface(TriangularSpherical3D_Cell cell);

double QuadrilateralCartesian2D_Cell_surface(QuadrilateralCartesian2D_Cell cell);
double QuadrilateralCartesian3D_Cell_surface(QuadrilateralCartesian3D_Cell cell);
double QuadrilateralCylindrical3D_Cell_surface(QuadrilateralCylindrical3D_Cell cell);
double QuadrilateralPolar2D_Cell_surface(QuadrilateralPolar2D_Cell cell);
double QuadrilateralSpherical3D_Cell_surface(QuadrilateralSpherical3D_Cell cell);

double TetrahedralCartesian3D_Cell_surface(TetrahedralCartesian3D_Cell cell);
double TetrahedralCylindrical3D_Cell_surface(TetrahedralCylindrical3D_Cell cell);
double TetrahedralSpherical3D_Cell_surface(TetrahedralSpherical3D_Cell cell);

#endif
