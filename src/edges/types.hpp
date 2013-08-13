#ifndef EDGES_TYPES_HPP
#define EDGES_TYPES_HPP

#include "../domains/types.hpp"

#include <vector>

typedef std::vector<bool>    EdgeRefinementFlagContainerType;

/**********
 * Linear *
 **********/

typedef viennagrid::result_of::line<LinearCartesian1D_Domain_t>::type                   LinearCartesian1D_Edge_t;
typedef viennagrid::result_of::line_range<LinearCartesian1D_Domain_t>::type             LinearCartesian1D_EdgeRange_t;

typedef viennagrid::result_of::line<LinearCartesian2D_Domain_t>::type                   LinearCartesian2D_Edge_t;
typedef viennagrid::result_of::line_range<LinearCartesian2D_Domain_t>::type             LinearCartesian2D_EdgeRange_t;

typedef viennagrid::result_of::line<LinearCartesian3D_Domain_t>::type                   LinearCartesian3D_Edge_t;
typedef viennagrid::result_of::line_range<LinearCartesian3D_Domain_t>::type             LinearCartesian3D_EdgeRange_t;

typedef viennagrid::result_of::line<LinearCylindrical3D_Domain_t>::type                 LinearCylindrical3D_Edge_t;
typedef viennagrid::result_of::line_range<LinearCylindrical3D_Domain_t>::type           LinearCylindrical3D_EdgeRange_t;

typedef viennagrid::result_of::line<LinearPolar2D_Domain_t>::type                       LinearPolar2D_Edge_t;
typedef viennagrid::result_of::line_range<LinearPolar2D_Domain_t>::type                 LinearPolar2D_EdgeRange_t;

typedef viennagrid::result_of::line<LinearSpherical3D_Domain_t>::type                   LinearSpherical3D_Edge_t;
typedef viennagrid::result_of::line_range<LinearSpherical3D_Domain_t>::type             LinearSpherical3D_EdgeRange_t;

/**************
 * Triangular *
 **************/

typedef viennagrid::result_of::line<TriangularCartesian2D_Domain_t>::type               TriangularCartesian2D_Edge_t;
typedef viennagrid::result_of::line_range<TriangularCartesian2D_Domain_t>::type         TriangularCartesian2D_EdgeRange_t;

typedef viennagrid::result_of::line<TriangularCartesian3D_Domain_t>::type               TriangularCartesian3D_Edge_t;
typedef viennagrid::result_of::line_range<TriangularCartesian3D_Domain_t>::type         TriangularCartesian3D_EdgeRange_t;

typedef viennagrid::result_of::line<TriangularCylindrical3D_Domain_t>::type             TriangularCylindrical3D_Edge_t;
typedef viennagrid::result_of::line_range<TriangularCylindrical3D_Domain_t>::type       TriangularCylindrical3D_EdgeRange_t;

typedef viennagrid::result_of::line<TriangularPolar2D_Domain_t>::type                   TriangularPolar2D_Edge_t;
typedef viennagrid::result_of::line_range<TriangularPolar2D_Domain_t>::type             TriangularPolar2D_EdgeRange_t;

typedef viennagrid::result_of::line<TriangularSpherical3D_Domain_t>::type               TriangularSpherical3D_Edge_t;
typedef viennagrid::result_of::line_range<TriangularSpherical3D_Domain_t>::type         TriangularSpherical3D_EdgeRange_t;

/*****************
 * Quadrilateral *
 *****************/

typedef viennagrid::result_of::line<QuadrilateralCartesian2D_Domain_t>::type            QuadrilateralCartesian2D_Edge_t;
typedef viennagrid::result_of::line_range<QuadrilateralCartesian2D_Domain_t>::type      QuadrilateralCartesian2D_EdgeRange_t;

typedef viennagrid::result_of::line<QuadrilateralCartesian3D_Domain_t>::type            QuadrilateralCartesian3D_Edge_t;
typedef viennagrid::result_of::line_range<QuadrilateralCartesian3D_Domain_t>::type      QuadrilateralCartesian3D_EdgeRange_t;

typedef viennagrid::result_of::line<QuadrilateralCylindrical3D_Domain_t>::type          QuadrilateralCylindrical3D_Edge_t;
typedef viennagrid::result_of::line_range<QuadrilateralCylindrical3D_Domain_t>::type    QuadrilateralCylindrical3D_EdgeRange_t;

typedef viennagrid::result_of::line<QuadrilateralPolar2D_Domain_t>::type                QuadrilateralPolar2D_Edge_t;
typedef viennagrid::result_of::line_range<QuadrilateralPolar2D_Domain_t>::type          QuadrilateralPolar2D_EdgeRange_t;

typedef viennagrid::result_of::line<QuadrilateralSpherical3D_Domain_t>::type            QuadrilateralSpherical3D_Edge_t;
typedef viennagrid::result_of::line_range<QuadrilateralSpherical3D_Domain_t>::type      QuadrilateralSpherical3D_EdgeRange_t;

/***************
 * Tetrahedral *
 ***************/

typedef viennagrid::result_of::line<TetrahedralCartesian3D_Domain_t>::type              TetrahedralCartesian3D_Edge_t;
typedef viennagrid::result_of::line_range<TetrahedralCartesian3D_Domain_t>::type        TetrahedralCartesian3D_EdgeRange_t;

typedef viennagrid::result_of::line<TetrahedralCylindrical3D_Domain_t>::type            TetrahedralCylindrical3D_Edge_t;
typedef viennagrid::result_of::line_range<TetrahedralCylindrical3D_Domain_t>::type      TetrahedralCylindrical3D_EdgeRange_t;

typedef viennagrid::result_of::line<TetrahedralSpherical3D_Domain_t>::type              TetrahedralSpherical3D_Edge_t;
typedef viennagrid::result_of::line_range<TetrahedralSpherical3D_Domain_t>::type        TetrahedralSpherical3D_EdgeRange_t;

#endif /* end of include guard: EDGES_TYPES_HPP */
