#ifndef TYPES_HPP_NFUQ9SMB
#define TYPES_HPP_NFUQ9SMB

#include "../domains/types.hpp"

/*******************
 * TRIANGULAR MESH *
 *******************/

// Triangle, cartesian 2D
typedef viennagrid::result_of::element<TriangularCartesian2D_Domain_t, viennagrid::triangle_tag>::type      TriangularCartesian2D_Cell_t;

// Triangle, cartesian 3D
typedef viennagrid::result_of::element<TriangularCartesian3D_Domain_t, viennagrid::triangle_tag>::type      TriangularCartesian3D_Cell_t;

// Triangle, cylindrical (3D)
typedef viennagrid::result_of::element<TriangularCylindrical3D_Domain_t, viennagrid::triangle_tag>::type    TriangularCylindrical3D_Cell_t;

// Triangle, polar (2D)
typedef viennagrid::result_of::element<TriangularPolar2D_Domain_t, viennagrid::triangle_tag>::type          TriangularPolar2D_Cell_t;

// Triangle, spherical (3D)
typedef viennagrid::result_of::element<TriangularSpherical3D_Domain_t, viennagrid::triangle_tag>::type      TriangularSpherical3D_Cell_t;

#endif /* end of include guard: TYPES_HPP_NFUQ9SMB */
