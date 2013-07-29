#ifndef ALGORHITHMS_CELL_BASED_HPP
#define ALGORHITHMS_CELL_BASED_HPP

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

#endif
