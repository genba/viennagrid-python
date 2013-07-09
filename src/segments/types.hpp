#ifndef TYPES_HPP_LQVAVLAX
#define TYPES_HPP_LQVAVLAX

#include "../domains/types.hpp"

/***************
 * LINEAR MESH *
 ***************/

// Line, cartesian 1D
typedef viennagrid::result_of::domain_view<LinearCartesian1D_Domain_t>::type      LinearCartesian1D_Segment_t;

// Line, cartesian 2D
typedef viennagrid::result_of::domain_view<LinearCartesian2D_Domain_t>::type      LinearCartesian2D_Segment_t;

// Line, cartesian 3D
typedef viennagrid::result_of::domain_view<LinearCartesian3D_Domain_t>::type      LinearCartesian3D_Segment_t;

// Line, cylindrical (3D)
typedef viennagrid::result_of::domain_view<LinearCylindrical3D_Domain_t>::type    LinearCylindrical3D_Segment_t;

// Line, polar (2D)
typedef viennagrid::result_of::domain_view<LinearPolar2D_Domain_t>::type          LinearPolar2D_Segment_t;

// Line, spherical (3D)
typedef viennagrid::result_of::domain_view<LinearSpherical3D_Domain_t>::type      LinearSpherical3D_Segment_t;

/*******************
 * TRIANGULAR MESH *
 *******************/

// Triangle, cartesian 2D
typedef viennagrid::result_of::domain_view<TriangularCartesian2D_Domain_t>::type      TriangularCartesian2D_Segment_t;

// Triangle, cartesian 3D
typedef viennagrid::result_of::domain_view<TriangularCartesian3D_Domain_t>::type      TriangularCartesian3D_Segment_t;

// Triangle, cylindrical (3D)
typedef viennagrid::result_of::domain_view<TriangularCylindrical3D_Domain_t>::type    TriangularCylindrical3D_Segment_t;

// Triangle, polar (2D)
typedef viennagrid::result_of::domain_view<TriangularPolar2D_Domain_t>::type          TriangularPolar2D_Segment_t;

// Triangle, spherical (3D)
typedef viennagrid::result_of::domain_view<TriangularSpherical3D_Domain_t>::type      TriangularSpherical3D_Segment_t;

/**********************
 * QUADRILATERAL MESH *
 **********************/

// Quadrilateral, cartesian 2D
typedef viennagrid::result_of::domain_view<QuadrilateralCartesian2D_Domain_t>::type      QuadrilateralCartesian2D_Segment_t;

// Quadrilateral, cartesian 3D
typedef viennagrid::result_of::domain_view<QuadrilateralCartesian3D_Domain_t>::type      QuadrilateralCartesian3D_Segment_t;

// Quadrilateral, cylindrical (3D)
typedef viennagrid::result_of::domain_view<QuadrilateralCylindrical3D_Domain_t>::type    QuadrilateralCylindrical3D_Segment_t;

// Quadrilateral, polar (2D)
typedef viennagrid::result_of::domain_view<QuadrilateralPolar2D_Domain_t>::type          QuadrilateralPolar2D_Segment_t;

// Quadrilateral, spherical (3D)
typedef viennagrid::result_of::domain_view<QuadrilateralSpherical3D_Domain_t>::type      QuadrilateralSpherical3D_Segment_t;

/**********************
 * TETRAHEDRAL MESH *
 **********************/

// Tetrahedral, cartesian 3D
typedef viennagrid::result_of::domain_view<TetrahedralCartesian3D_Domain_t>::type      TetrahedralCartesian3D_Segment_t;

// Tetrahedral, cylindrical (3D)
typedef viennagrid::result_of::domain_view<TetrahedralCylindrical3D_Domain_t>::type    TetrahedralCylindrical3D_Segment_t;

// Tetrahedral, spherical (3D)
typedef viennagrid::result_of::domain_view<TetrahedralSpherical3D_Domain_t>::type      TetrahedralSpherical3D_Segment_t;

#endif /* end of include guard: TYPES_HPP_LQVAVLAX */
