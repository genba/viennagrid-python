#ifndef TYPES_HPP_LQVAVLAX
#define TYPES_HPP_LQVAVLAX

#include "../domains/types.hpp"
#include "../segmentations/types.hpp"

/***************
 * LINEAR MESH *
 ***************/

// Line, cartesian 1D
typedef viennagrid::result_of::segment<LinearCartesian1D_Segmentation_t>::type      LinearCartesian1D_Segment_t;

// Line, cartesian 2D
typedef viennagrid::result_of::segment<LinearCartesian2D_Segmentation_t>::type      LinearCartesian2D_Segment_t;

// Line, cartesian 3D
typedef viennagrid::result_of::segment<LinearCartesian3D_Segmentation_t>::type      LinearCartesian3D_Segment_t;

// Line, cylindrical (3D)
typedef viennagrid::result_of::segment<LinearCylindrical3D_Segmentation_t>::type    LinearCylindrical3D_Segment_t;

// Line, polar (2D)
typedef viennagrid::result_of::segment<LinearPolar2D_Segmentation_t>::type          LinearPolar2D_Segment_t;

// Line, spherical (3D)
typedef viennagrid::result_of::segment<LinearSpherical3D_Segmentation_t>::type      LinearSpherical3D_Segment_t;

/*******************
 * TRIANGULAR MESH *
 *******************/

// Triangle, cartesian 2D
typedef viennagrid::result_of::segment<TriangularCartesian2D_Segmentation_t>::type      TriangularCartesian2D_Segment_t;

// Triangle, cartesian 3D
typedef viennagrid::result_of::segment<TriangularCartesian3D_Segmentation_t>::type      TriangularCartesian3D_Segment_t;

// Triangle, cylindrical (3D)
typedef viennagrid::result_of::segment<TriangularCylindrical3D_Segmentation_t>::type    TriangularCylindrical3D_Segment_t;

// Triangle, polar (2D)
typedef viennagrid::result_of::segment<TriangularPolar2D_Segmentation_t>::type          TriangularPolar2D_Segment_t;

// Triangle, spherical (3D)
typedef viennagrid::result_of::segment<TriangularSpherical3D_Segmentation_t>::type      TriangularSpherical3D_Segment_t;

/**********************
 * QUADRILATERAL MESH *
 **********************/

// Quadrilateral, cartesian 2D
typedef viennagrid::result_of::segment<QuadrilateralCartesian2D_Segmentation_t>::type      QuadrilateralCartesian2D_Segment_t;

// Quadrilateral, cartesian 3D
typedef viennagrid::result_of::segment<QuadrilateralCartesian3D_Segmentation_t>::type      QuadrilateralCartesian3D_Segment_t;

// Quadrilateral, cylindrical (3D)
typedef viennagrid::result_of::segment<QuadrilateralCylindrical3D_Segmentation_t>::type    QuadrilateralCylindrical3D_Segment_t;

// Quadrilateral, polar (2D)
typedef viennagrid::result_of::segment<QuadrilateralPolar2D_Segmentation_t>::type          QuadrilateralPolar2D_Segment_t;

// Quadrilateral, spherical (3D)
typedef viennagrid::result_of::segment<QuadrilateralSpherical3D_Segmentation_t>::type      QuadrilateralSpherical3D_Segment_t;

/**********************
 * TETRAHEDRAL MESH *
 **********************/

// Tetrahedral, cartesian 3D
typedef viennagrid::result_of::segment<TetrahedralCartesian3D_Segmentation_t>::type      TetrahedralCartesian3D_Segment_t;

// Tetrahedral, cylindrical (3D)
typedef viennagrid::result_of::segment<TetrahedralCylindrical3D_Segmentation_t>::type    TetrahedralCylindrical3D_Segment_t;

// Tetrahedral, spherical (3D)
typedef viennagrid::result_of::segment<TetrahedralSpherical3D_Segmentation_t>::type      TetrahedralSpherical3D_Segment_t;

#endif /* end of include guard: TYPES_HPP_LQVAVLAX */
