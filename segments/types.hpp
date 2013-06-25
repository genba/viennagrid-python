#ifndef TYPES_HPP_LQVAVLAX
#define TYPES_HPP_LQVAVLAX

#include "../domains/types.hpp"

/*******************
 * TRIANGULAR MESH *
 *******************/

// Triangle, cartesian 2D
typedef viennagrid::result_of::geometric_view<TriangularCartesian2D_Domain_t>::type      TriangularCartesian2D_Segment_t;

// Triangle, cartesian 3D
typedef viennagrid::result_of::geometric_view<TriangularCartesian3D_Domain_t>::type      TriangularCartesian3D_Segment_t;

// Triangle, cylindrical (3D)
typedef viennagrid::result_of::geometric_view<TriangularCylindrical3D_Domain_t>::type    TriangularCylindrical3D_Segment_t;

// Triangle, polar (2D)
typedef viennagrid::result_of::geometric_view<TriangularPolar2D_Domain_t>::type          TriangularPolar2D_Segment_t;

// Triangle, spherical (3D)
typedef viennagrid::result_of::geometric_view<TriangularSpherical3D_Domain_t>::type      TriangularSpherical3D_Segment_t;

/**********************
 * QUADRILATERAL MESH *
 **********************/

// Quadrilateral, cartesian 2D
typedef viennagrid::result_of::geometric_view<QuadrilateralCartesian2D_Domain_t>::type      QuadrilateralCartesian2D_Segment_t;

// Quadrilateral, cartesian 3D
typedef viennagrid::result_of::geometric_view<QuadrilateralCartesian3D_Domain_t>::type      QuadrilateralCartesian3D_Segment_t;

// Quadrilateral, cylindrical (3D)
typedef viennagrid::result_of::geometric_view<QuadrilateralCylindrical3D_Domain_t>::type    QuadrilateralCylindrical3D_Segment_t;

// Quadrilateral, polar (2D)
typedef viennagrid::result_of::geometric_view<QuadrilateralPolar2D_Domain_t>::type          QuadrilateralPolar2D_Segment_t;

// Quadrilateral, spherical (3D)
typedef viennagrid::result_of::geometric_view<QuadrilateralSpherical3D_Domain_t>::type      QuadrilateralSpherical3D_Segment_t;

#endif /* end of include guard: TYPES_HPP_LQVAVLAX */
