/**
 * @file
 * @brief Type definitions for ViennaGrid segmentations.
 */

#ifndef SEGMENTATION_TYPES_HPP
#define SEGMENTATION_TYPES_HPP

#include "../domains/types.hpp"

#include <viennagrid/domain/segmentation.hpp>

/***************
 * LINEAR MESH *
 ***************/

// Line, cartesian 1D
typedef viennagrid::result_of::segmentation<LinearCartesian1D_Domain_t>::type             LinearCartesian1D_Segmentation_t;

// Line, cartesian 2D
typedef viennagrid::result_of::segmentation<LinearCartesian2D_Domain_t>::type             LinearCartesian2D_Segmentation_t;

// Line, cartesian 3D
typedef viennagrid::result_of::segmentation<LinearCartesian3D_Domain_t>::type             LinearCartesian3D_Segmentation_t;

// Line, cylindrical (3D)
typedef viennagrid::result_of::segmentation<LinearCylindrical3D_Domain_t>::type           LinearCylindrical3D_Segmentation_t;

// Line, polar (2D)
typedef viennagrid::result_of::segmentation<LinearPolar2D_Domain_t>::type                 LinearPolar2D_Segmentation_t;

// Line, spherical (3D)
typedef viennagrid::result_of::segmentation<LinearSpherical3D_Domain_t>::type             LinearSpherical3D_Segmentation_t;

/*******************
 * TRIANGULAR MESH *
 *******************/

// Triangle, cartesian 2D
typedef viennagrid::result_of::segmentation<TriangularCartesian2D_Domain_t>::type         TriangularCartesian2D_Segmentation_t;

// Triangle, cartesian 3D
typedef viennagrid::result_of::segmentation<TriangularCartesian3D_Domain_t>::type         TriangularCartesian3D_Segmentation_t;

// Triangle, cylindrical (3D)
typedef viennagrid::result_of::segmentation<TriangularCylindrical3D_Domain_t>::type       TriangularCylindrical3D_Segmentation_t;

// Triangle, polar (2D)
typedef viennagrid::result_of::segmentation<TriangularPolar2D_Domain_t>::type             TriangularPolar2D_Segmentation_t;

// Triangle, spherical (3D)
typedef viennagrid::result_of::segmentation<TriangularSpherical3D_Domain_t>::type         TriangularSpherical3D_Segmentation_t;

/**********************
 * QUADRILATERAL MESH *
 **********************/

// Quadrilateral, cartesian 2D
typedef viennagrid::result_of::segmentation<QuadrilateralCartesian2D_Domain_t>::type      QuadrilateralCartesian2D_Segmentation_t;
// Quadrilateral, cartesian 3D
typedef viennagrid::result_of::segmentation<QuadrilateralCartesian3D_Domain_t>::type      QuadrilateralCartesian3D_Segmentation_t;
// Quadrilateral, cylindrical (3D)
typedef viennagrid::result_of::segmentation<QuadrilateralCylindrical3D_Domain_t>::type    QuadrilateralCylindrical3D_Segmentation_t;
// Quadrilateral, polar (2D)
typedef viennagrid::result_of::segmentation<QuadrilateralPolar2D_Domain_t>::type          QuadrilateralPolar2D_Segmentation_t;
// Quadrilateral, spherical (3D)
typedef viennagrid::result_of::segmentation<QuadrilateralSpherical3D_Domain_t>::type      QuadrilateralSpherical3D_Segmentation_t;

/********************
 * TETRAHEDRAL MESH *
 ********************/

// Tetrahedral, cartesian 3D
typedef viennagrid::result_of::segmentation<TetrahedralCartesian3D_Domain_t>::type        TetrahedralCartesian3D_Segmentation_t;
// Tetrahedral, cylindrical (3D)
typedef viennagrid::result_of::segmentation<TetrahedralCylindrical3D_Domain_t>::type      TetrahedralCylindrical3D_Segmentation_t;
// Tetrahedral, spherical (3D)
typedef viennagrid::result_of::segmentation<TetrahedralSpherical3D_Domain_t>::type        TetrahedralSpherical3D_Segmentation_t;

#endif
