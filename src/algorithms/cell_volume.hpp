#ifndef ALGORHITHMS_CELL_VOLUME_HPP
#define ALGORHITHMS_CELL_VOLUME_HPP

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

/**********
 * VOLUME *
 **********/

double LinearCartesian1D_Cell_volume(LinearCartesian1D_Cell cell);
double LinearCartesian2D_Cell_volume(LinearCartesian2D_Cell cell);
double LinearCartesian3D_Cell_volume(LinearCartesian3D_Cell cell);
double LinearCylindrical3D_Cell_volume(LinearCylindrical3D_Cell cell);
double LinearPolar2D_Cell_volume(LinearPolar2D_Cell cell);
double LinearSpherical3D_Cell_volume(LinearSpherical3D_Cell cell);

double TriangularCartesian2D_Cell_volume(TriangularCartesian2D_Cell cell);
double TriangularCartesian3D_Cell_volume(TriangularCartesian3D_Cell cell);
double TriangularCylindrical3D_Cell_volume(TriangularCylindrical3D_Cell cell);
double TriangularPolar2D_Cell_volume(TriangularPolar2D_Cell cell);
double TriangularSpherical3D_Cell_volume(TriangularSpherical3D_Cell cell);

double QuadrilateralCartesian2D_Cell_volume(QuadrilateralCartesian2D_Cell cell);
double QuadrilateralCartesian3D_Cell_volume(QuadrilateralCartesian3D_Cell cell);
double QuadrilateralCylindrical3D_Cell_volume(QuadrilateralCylindrical3D_Cell cell);
double QuadrilateralPolar2D_Cell_volume(QuadrilateralPolar2D_Cell cell);
double QuadrilateralSpherical3D_Cell_volume(QuadrilateralSpherical3D_Cell cell);

double TetrahedralCartesian3D_Cell_volume(TetrahedralCartesian3D_Cell cell);
double TetrahedralCylindrical3D_Cell_volume(TetrahedralCylindrical3D_Cell cell);
double TetrahedralSpherical3D_Cell_volume(TetrahedralSpherical3D_Cell cell);

#endif /* end of include guard: ALGORHITHMS_CELL_VOLUME_HPP */
