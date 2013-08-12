#ifndef ALGORHITHMS_CELL_CENTROID_HPP
#define ALGORHITHMS_CELL_CENTROID_HPP

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

/************
 * CENTROID *
 ************/

PointCartesian1D LinearCartesian1D_Cell_centroid(LinearCartesian1D_Cell cell);
PointCartesian2D LinearCartesian2D_Cell_centroid(LinearCartesian2D_Cell cell);
PointCartesian3D LinearCartesian3D_Cell_centroid(LinearCartesian3D_Cell cell);
PointCylindrical3D LinearCylindrical3D_Cell_centroid(LinearCylindrical3D_Cell cell);
PointPolar2D LinearPolar2D_Cell_centroid(LinearPolar2D_Cell cell);
PointSpherical3D LinearSpherical3D_Cell_centroid(LinearSpherical3D_Cell cell);

PointCartesian2D TriangularCartesian2D_Cell_centroid(TriangularCartesian2D_Cell cell);
PointCartesian3D TriangularCartesian3D_Cell_centroid(TriangularCartesian3D_Cell cell);
PointCylindrical3D TriangularCylindrical3D_Cell_centroid(TriangularCylindrical3D_Cell cell);
PointPolar2D TriangularPolar2D_Cell_centroid(TriangularPolar2D_Cell cell);
PointSpherical3D TriangularSpherical3D_Cell_centroid(TriangularSpherical3D_Cell cell);

PointCartesian2D QuadrilateralCartesian2D_Cell_centroid(QuadrilateralCartesian2D_Cell cell);
PointCartesian3D QuadrilateralCartesian3D_Cell_centroid(QuadrilateralCartesian3D_Cell cell);
PointCylindrical3D QuadrilateralCylindrical3D_Cell_centroid(QuadrilateralCylindrical3D_Cell cell);
PointPolar2D QuadrilateralPolar2D_Cell_centroid(QuadrilateralPolar2D_Cell cell);
PointSpherical3D QuadrilateralSpherical3D_Cell_centroid(QuadrilateralSpherical3D_Cell cell);

PointCartesian3D TetrahedralCartesian3D_Cell_centroid(TetrahedralCartesian3D_Cell cell);
PointCylindrical3D TetrahedralCylindrical3D_Cell_centroid(TetrahedralCylindrical3D_Cell cell);
PointSpherical3D TetrahedralSpherical3D_Cell_centroid(TetrahedralSpherical3D_Cell cell);

#endif
