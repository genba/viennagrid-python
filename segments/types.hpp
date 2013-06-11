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

#endif /* end of include guard: TYPES_HPP_LQVAVLAX */
