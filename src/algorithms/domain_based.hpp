#ifndef ALGORITHMS_DOMAIN_BASED_HPP
#define ALGORITHMS_DOMAIN_BASED_HPP

#include "../domains/linear.hpp"
#include "../domains/triangular.hpp"
#include "../domains/quadrilateral.hpp"
#include "../domains/tetrahedral.hpp"

#include "../segmentations/linear.hpp"
#include "../segmentations/triangular.hpp"
#include "../segmentations/quadrilateral.hpp"
#include "../segmentations/tetrahedral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

/********************
 * REFINE_UNIFORMLY *
 ********************/

/*
tuple LinearCartesian1D_Domain_refine_uniformly(LinearCartesian1D_Domain domain_in, LinearCartesian1D_Segmentation segmentation_in);
tuple LinearCartesian2D_Domain_refine_uniformly(LinearCartesian2D_Domain domain_in, LinearCartesian2D_Segmentation segmentation_in);
tuple LinearCartesian3D_Domain_refine_uniformly(LinearCartesian3D_Domain domain_in, LinearCartesian3D_Segmentation segmentation_in);
tuple LinearCylindrical3D_Domain_refine_uniformly(LinearCylindrical3D_Domain domain_in, LinearCylindrical3D_Segmentation segmentation_in);
tuple LinearPolar2D_Domain_refine_uniformly(LinearPolar2D_Domain domain_in, LinearPolar2D_Segmentation segmentation_in);
tuple LinearSpherical3D_Domain_refine_uniformly(LinearSpherical3D_Domain domain_in, LinearSpherical3D_Segmentation segmentation_in);

tuple TriangularCartesian2D_Domain_refine_uniformly(TriangularCartesian2D_Domain domain_in, TriangularCartesian2D_Segmentation segmentation_in);
tuple TriangularCartesian3D_Domain_refine_uniformly(TriangularCartesian3D_Domain domain_in, TriangularCartesian3D_Segmentation segmentation_in);
tuple TriangularCylindrical3D_Domain_refine_uniformly(TriangularCylindrical3D_Domain domain_in, TriangularCylindrical3D_Segmentation segmentation_in);
tuple TriangularPolar2D_Domain_refine_uniformly(TriangularPolar2D_Domain domain_in, TriangularPolar2D_Segmentation segmentation_in);
tuple TriangularSpherical3D_Domain_refine_uniformly(TriangularSpherical3D_Domain domain_in, TriangularSpherical3D_Segmentation segmentation_in);

tuple QuadrilateralCartesian2D_Domain_refine_uniformly(QuadrilateralCartesian2D_Domain domain_in, QuadrilateralCartesian2D_Segmentation segmentation_in);
tuple QuadrilateralCartesian3D_Domain_refine_uniformly(QuadrilateralCartesian3D_Domain domain_in, QuadrilateralCartesian3D_Segmentation segmentation_in);
tuple QuadrilateralCylindrical3D_Domain_refine_uniformly(QuadrilateralCylindrical3D_Domain domain_in, QuadrilateralCylindrical3D_Segmentation segmentation_in);
tuple QuadrilateralPolar2D_Domain_refine_uniformly(QuadrilateralPolar2D_Domain domain_in, QuadrilateralPolar2D_Segmentation segmentation_in);
tuple QuadrilateralSpherical3D_Domain_refine_uniformly(QuadrilateralSpherical3D_Domain domain_in, QuadrilateralSpherical3D_Segmentation segmentation_in);

tuple TetrahedralCartesian3D_Domain_refine_uniformly(TetrahedralCartesian3D_Domain domain_in, TetrahedralCartesian3D_Segmentation segmentation_in);
tuple TetrahedralCylindrical3D_Domain_refine_uniformly(TetrahedralCylindrical3D_Domain domain_in, TetrahedralCylindrical3D_Segmentation segmentation_in);
tuple TetrahedralSpherical3D_Domain_refine_uniformly(TetrahedralSpherical3D_Domain domain_in, TetrahedralSpherical3D_Segmentation segmentation_in);
*/

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

#endif
