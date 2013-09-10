/**
 * @file
 * @brief Type definitions for ViennaGrid accessors.
 */

#ifndef ACCESSORS_TYPES_HPP
#define ACCESSORS_TYPES_HPP

#include "../cells/types.hpp"

#include <viennagrid/domain/accessor.hpp>

#include <vector>

typedef std::vector<double>    AccessorContainer_t;

/***************
 * LINEAR MESH *
 ***************/

// Line, cartesian 1D
typedef viennagrid::result_of::element<AccessorContainer_t, LinearCartesian1D_Cell_t>::type      LinearCartesian1D_Accessor_t;

// Line, cartesian 2D
typedef viennagrid::result_of::element<AccessorContainer_t, LinearCartesian2D_Cell_t>::type      LinearCartesian2D_Accessor_t;

// Line, cartesian 3D
typedef viennagrid::result_of::element<AccessorContainer_t, LinearCartesian3D_Cell_t>::type      LinearCartesian3D_Accessor_t;

// Line, cylindrical (3D)
typedef viennagrid::result_of::element<AccessorContainer_t, LinearCylindrical3D_Cell_t>::type    LinearCylindrical3D_Accessor_t;

// Line, polar (2D)
typedef viennagrid::result_of::element<AccessorContainer_t, LinearPolar2D_Cell_t>::type          LinearPolar2D_Accessor_t;

// Line, spherical (3D)
typedef viennagrid::result_of::element<AccessorContainer_t, LinearSpherical3D_Cell_t>::type      LinearSpherical3D_Accessor_t;

/*******************
 * TRIANGULAR MESH *
 *******************/

// Triangle, cartesian 2D
typedef viennagrid::result_of::element<AccessorContainer_t, TriangularCartesian2D_Cell_t>::type      TriangularCartesian2D_Accessor_t;

// Triangle, cartesian 3D
typedef viennagrid::result_of::element<AccessorContainer_t, TriangularCartesian3D_Cell_t>::type      TriangularCartesian3D_Accessor_t;

// Triangle, cylindrical (3D)
typedef viennagrid::result_of::element<AccessorContainer_t, TriangularCylindrical3D_Cell_t>::type    TriangularCylindrical3D_Accessor_t;

// Triangle, polar (2D)
typedef viennagrid::result_of::element<AccessorContainer_t, TriangularPolar2D_Cell_t>::type          TriangularPolar2D_Accessor_t;

// Triangle, spherical (3D)
typedef viennagrid::result_of::element<AccessorContainer_t, TriangularSpherical3D_Cell_t>::type      TriangularSpherical3D_Accessor_t;

/**********************
 * QUADRILATERAL MESH *
 **********************/

// Quadrilateral, cartesian 2D
typedef viennagrid::result_of::element<AccessorContainer_t, QuadrilateralCartesian2D_Cell_t>::type      QuadrilateralCartesian2D_Accessor_t;

// Quadrilateral, cartesian 3D
typedef viennagrid::result_of::element<AccessorContainer_t, QuadrilateralCartesian3D_Cell_t>::type      QuadrilateralCartesian3D_Accessor_t;

// Quadrilateral, cylindrical (3D)
typedef viennagrid::result_of::element<AccessorContainer_t, QuadrilateralCylindrical3D_Cell_t>::type    QuadrilateralCylindrical3D_Accessor_t;

// Quadrilateral, polar (2D)
typedef viennagrid::result_of::element<AccessorContainer_t, QuadrilateralPolar2D_Cell_t>::type          QuadrilateralPolar2D_Accessor_t;

// Quadrilateral, spherical (3D)
typedef viennagrid::result_of::element<AccessorContainer_t, QuadrilateralSpherical3D_Cell_t>::type      QuadrilateralSpherical3D_Accessor_t;

/**********************
 * TETRAHEDRAL MESH *
 **********************/

// Tetrahedral, cartesian 3D
typedef viennagrid::result_of::element<AccessorContainer_t, TetrahedralCartesian3D_Cell_t>::type      TetrahedralCartesian3D_Accessor_t;

// Tetrahedral, cylindrical (3D)
typedef viennagrid::result_of::element<AccessorContainer_t, TetrahedralCylindrical3D_Cell_t>::type    TetrahedralCylindrical3D_Accessor_t;

// Tetrahedral, spherical (3D)
typedef viennagrid::result_of::element<AccessorContainer_t, TetrahedralSpherical3D_Cell_t>::type      TetrahedralSpherical3D_Accessor_t;

#endif /* end of include guard: ACCESSORS_TYPES_HPP */
