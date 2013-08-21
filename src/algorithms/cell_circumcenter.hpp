#ifndef ALGORHITHMS_CELL_CIRCUMCENTER_HPP
#define ALGORHITHMS_CELL_CIRCUMCENTER_HPP

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

/****************
 * CIRCUMCENTER *
 ****************/

PointCartesian1D LinearCartesian1D_Cell_circumcenter(LinearCartesian1D_Cell cell);
PointCartesian2D LinearCartesian2D_Cell_circumcenter(LinearCartesian2D_Cell cell);
PointCartesian3D LinearCartesian3D_Cell_circumcenter(LinearCartesian3D_Cell cell);
PointCylindrical3D LinearCylindrical3D_Cell_circumcenter(LinearCylindrical3D_Cell cell);
PointPolar2D LinearPolar2D_Cell_circumcenter(LinearPolar2D_Cell cell);
PointSpherical3D LinearSpherical3D_Cell_circumcenter(LinearSpherical3D_Cell cell);

PointCartesian2D TriangularCartesian2D_Cell_circumcenter(TriangularCartesian2D_Cell cell);
PointCartesian3D TriangularCartesian3D_Cell_circumcenter(TriangularCartesian3D_Cell cell);
PointCylindrical3D TriangularCylindrical3D_Cell_circumcenter(TriangularCylindrical3D_Cell cell);
PointPolar2D TriangularPolar2D_Cell_circumcenter(TriangularPolar2D_Cell cell);
PointSpherical3D TriangularSpherical3D_Cell_circumcenter(TriangularSpherical3D_Cell cell);

PointCartesian2D QuadrilateralCartesian2D_Cell_circumcenter(QuadrilateralCartesian2D_Cell cell);
PointCartesian3D QuadrilateralCartesian3D_Cell_circumcenter(QuadrilateralCartesian3D_Cell cell);
PointCylindrical3D QuadrilateralCylindrical3D_Cell_circumcenter(QuadrilateralCylindrical3D_Cell cell);
PointPolar2D QuadrilateralPolar2D_Cell_circumcenter(QuadrilateralPolar2D_Cell cell);
PointSpherical3D QuadrilateralSpherical3D_Cell_circumcenter(QuadrilateralSpherical3D_Cell cell);

PointCartesian3D TetrahedralCartesian3D_Cell_circumcenter(TetrahedralCartesian3D_Cell cell);
PointCylindrical3D TetrahedralCylindrical3D_Cell_circumcenter(TetrahedralCylindrical3D_Cell cell);
PointSpherical3D TetrahedralSpherical3D_Cell_circumcenter(TetrahedralSpherical3D_Cell cell);

#endif /* end of include guard: ALGORHITHMS_CELL_CIRCUMCENTER_HPP */
