#ifndef FACETS_TYPES_HPP
#define FACETS_TYPES_HPP

#include "../domains/types.hpp"

/**************
 * Triangular *
 **************/

typedef viennagrid::result_of::facet<TriangularCartesian2D_Domain_t>::type          TriangularCartesian2D_Facet_t;
typedef viennagrid::result_of::facet<TriangularCartesian3D_Domain_t>::type          TriangularCartesian3D_Facet_t;
typedef viennagrid::result_of::facet<TriangularCylindrical3D_Domain_t>::type        TriangularCylindrical3D_Facet_t;
typedef viennagrid::result_of::facet<TriangularPolar2D_Domain_t>::type              TriangularPolar2D_Facet_t;
typedef viennagrid::result_of::facet<TriangularSpherical3D_Domain_t>::type          TriangularSpherical3D_Facet_t;

/*****************
 * Quadrilateral *
 *****************/

typedef viennagrid::result_of::facet<QuadrilateralCartesian2D_Domain_t>::type       QuadrilateralCartesian2D_Facet_t;
typedef viennagrid::result_of::facet<QuadrilateralCartesian3D_Domain_t>::type       QuadrilateralCartesian3D_Facet_t;
typedef viennagrid::result_of::facet<QuadrilateralCylindrical3D_Domain_t>::type     QuadrilateralCylindrical3D_Facet_t;
typedef viennagrid::result_of::facet<QuadrilateralPolar2D_Domain_t>::type           QuadrilateralPolar2D_Facet_t;
typedef viennagrid::result_of::facet<QuadrilateralSpherical3D_Domain_t>::type       QuadrilateralSpherical3D_Facet_t;

/***************
 * Tetrahedral *
 ***************/

typedef viennagrid::result_of::facet<TetrahedralCartesian3D_Domain_t>::type         TetrahedralCartesian3D_Facet_t;
typedef viennagrid::result_of::facet<TetrahedralCylindrical3D_Domain_t>::type       TetrahedralCylindrical3D_Facet_t;
typedef viennagrid::result_of::facet<TetrahedralSpherical3D_Domain_t>::type         TetrahedralSpherical3D_Facet_t;

#endif /* end of include guard: FACETS_TYPES_HPP */
