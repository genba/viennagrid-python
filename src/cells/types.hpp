#ifndef TYPES_HPP_NFUQ9SMB
#define TYPES_HPP_NFUQ9SMB

#include "../domains/types.hpp"

#include <vector>

typedef std::vector<bool>    CellRefinementFlagContainerType;

/***************
 * LINEAR MESH *
 ***************/

// Line, cartesian 1D
typedef viennagrid::result_of::element<LinearCartesian1D_Domain_t, viennagrid::line_tag>::type      LinearCartesian1D_Cell_t;

// Line, cartesian 2D
typedef viennagrid::result_of::element<LinearCartesian2D_Domain_t, viennagrid::line_tag>::type      LinearCartesian2D_Cell_t;

// Line, cartesian 3D
typedef viennagrid::result_of::element<LinearCartesian3D_Domain_t, viennagrid::line_tag>::type      LinearCartesian3D_Cell_t;

// Line, cylindrical (3D)
typedef viennagrid::result_of::element<LinearCylindrical3D_Domain_t, viennagrid::line_tag>::type    LinearCylindrical3D_Cell_t;

// Line, polar (2D)
typedef viennagrid::result_of::element<LinearPolar2D_Domain_t, viennagrid::line_tag>::type          LinearPolar2D_Cell_t;

// Line, spherical (3D)
typedef viennagrid::result_of::element<LinearSpherical3D_Domain_t, viennagrid::line_tag>::type      LinearSpherical3D_Cell_t;

/*******************
 * TRIANGULAR MESH *
 *******************/

// Triangle, cartesian 2D
typedef viennagrid::result_of::element<TriangularCartesian2D_Domain_t, viennagrid::triangle_tag>::type      TriangularCartesian2D_Cell_t;
typedef viennagrid::result_of::cell_range<TriangularCartesian2D_Domain_t>::type                             TriangularCartesian2D_CellRange_t;

// Triangle, cartesian 3D
typedef viennagrid::result_of::element<TriangularCartesian3D_Domain_t, viennagrid::triangle_tag>::type      TriangularCartesian3D_Cell_t;
typedef viennagrid::result_of::cell_range<TriangularCartesian3D_Domain_t>::type                             TriangularCartesian3D_CellRange_t;

// Triangle, cylindrical (3D)
typedef viennagrid::result_of::element<TriangularCylindrical3D_Domain_t, viennagrid::triangle_tag>::type    TriangularCylindrical3D_Cell_t;
typedef viennagrid::result_of::cell_range<TriangularCylindrical3D_Domain_t>::type                           TriangularCylindrical3D_CellRange_t;

// Triangle, polar (2D)
typedef viennagrid::result_of::element<TriangularPolar2D_Domain_t, viennagrid::triangle_tag>::type          TriangularPolar2D_Cell_t;
typedef viennagrid::result_of::cell_range<TriangularPolar2D_Domain_t>::type                                 TriangularPolar2D_CellRange_t;

// Triangle, spherical (3D)
typedef viennagrid::result_of::element<TriangularSpherical3D_Domain_t, viennagrid::triangle_tag>::type      TriangularSpherical3D_Cell_t;
typedef viennagrid::result_of::cell_range<TriangularSpherical3D_Domain_t>::type                             TriangularSpherical3D_CellRange_t;

/**********************
 * QUADRILATERAL MESH *
 **********************/

// Quadrilateral, cartesian 2D
typedef viennagrid::result_of::element<QuadrilateralCartesian2D_Domain_t, viennagrid::quadrilateral_tag>::type      QuadrilateralCartesian2D_Cell_t;

// Quadrilateral, cartesian 3D
typedef viennagrid::result_of::element<QuadrilateralCartesian3D_Domain_t, viennagrid::quadrilateral_tag>::type      QuadrilateralCartesian3D_Cell_t;

// Quadrilateral, cylindrical (3D)
typedef viennagrid::result_of::element<QuadrilateralCylindrical3D_Domain_t, viennagrid::quadrilateral_tag>::type    QuadrilateralCylindrical3D_Cell_t;

// Quadrilateral, polar (2D)
typedef viennagrid::result_of::element<QuadrilateralPolar2D_Domain_t, viennagrid::quadrilateral_tag>::type          QuadrilateralPolar2D_Cell_t;

// Quadrilateral, spherical (3D)
typedef viennagrid::result_of::element<QuadrilateralSpherical3D_Domain_t, viennagrid::quadrilateral_tag>::type      QuadrilateralSpherical3D_Cell_t;

/**********************
 * TETRAHEDRAL MESH *
 **********************/

// Tetrahedral, cartesian 3D
typedef viennagrid::result_of::element<TetrahedralCartesian3D_Domain_t, viennagrid::tetrahedron_tag>::type      TetrahedralCartesian3D_Cell_t;
typedef viennagrid::result_of::cell_range<TetrahedralCartesian3D_Domain_t>::type                                TetrahedralCartesian3D_CellRange_t;

// Tetrahedral, cylindrical (3D)
typedef viennagrid::result_of::element<TetrahedralCylindrical3D_Domain_t, viennagrid::tetrahedron_tag>::type    TetrahedralCylindrical3D_Cell_t;
typedef viennagrid::result_of::cell_range<TetrahedralCylindrical3D_Domain_t>::type                              TetrahedralCylindrical3D_CellRange_t;

// Tetrahedral, spherical (3D)
typedef viennagrid::result_of::element<TetrahedralSpherical3D_Domain_t, viennagrid::tetrahedron_tag>::type      TetrahedralSpherical3D_Cell_t;
typedef viennagrid::result_of::cell_range<TetrahedralSpherical3D_Domain_t>::type                                TetrahedralSpherical3D_CellRange_t;

#endif /* end of include guard: TYPES_HPP_NFUQ9SMB */
