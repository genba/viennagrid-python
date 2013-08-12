#ifndef EDGES_TYPES_HPP
#define EDGES_TYPES_HPP

#include "../domains/types.hpp"

#include <vector>

typedef std::vector<bool>    EdgeRefinementFlagContainerType;

/**************
 * Triangular *
 **************/

typedef viennagrid::result_of::line<TriangularCartesian2D_Domain_t>::type          TriangularCartesian2D_Edge_t;
typedef viennagrid::result_of::line_range<TriangularCartesian2D_Domain_t>::type    TriangularCartesian2D_EdgeRange_t;

typedef viennagrid::result_of::line<TriangularCartesian3D_Domain_t>::type          TriangularCartesian3D_Edge_t;
typedef viennagrid::result_of::line_range<TriangularCartesian3D_Domain_t>::type    TriangularCartesian3D_EdgeRange_t;

typedef viennagrid::result_of::line<TriangularCylindrical3D_Domain_t>::type          TriangularCylindrical3D_Edge_t;
typedef viennagrid::result_of::line_range<TriangularCylindrical3D_Domain_t>::type    TriangularCylindrical3D_EdgeRange_t;

typedef viennagrid::result_of::line<TriangularPolar2D_Domain_t>::type          TriangularPolar2D_Edge_t;
typedef viennagrid::result_of::line_range<TriangularPolar2D_Domain_t>::type    TriangularPolar2D_EdgeRange_t;

typedef viennagrid::result_of::line<TriangularSpherical3D_Domain_t>::type          TriangularSpherical3D_Edge_t;
typedef viennagrid::result_of::line_range<TriangularSpherical3D_Domain_t>::type    TriangularSpherical3D_EdgeRange_t;

/***************
 * Tetrahedral *
 ***************/

typedef viennagrid::result_of::line<TetrahedralCartesian3D_Domain_t>::type          TetrahedralCartesian3D_Edge_t;
typedef viennagrid::result_of::line_range<TetrahedralCartesian3D_Domain_t>::type    TetrahedralCartesian3D_EdgeRange_t;

typedef viennagrid::result_of::line<TetrahedralCylindrical3D_Domain_t>::type          TetrahedralCylindrical3D_Edge_t;
typedef viennagrid::result_of::line_range<TetrahedralCylindrical3D_Domain_t>::type    TetrahedralCylindrical3D_EdgeRange_t;

typedef viennagrid::result_of::line<TetrahedralSpherical3D_Domain_t>::type          TetrahedralSpherical3D_Edge_t;
typedef viennagrid::result_of::line_range<TetrahedralSpherical3D_Domain_t>::type    TetrahedralSpherical3D_EdgeRange_t;

#endif /* end of include guard: EDGES_TYPES_HPP */
