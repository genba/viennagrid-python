#ifndef TYPES_HPP_1AMW8QS7
#define TYPES_HPP_1AMW8QS7

#include "../domains/types.hpp"

/**************
 * Triangular *
 **************/

typedef viennagrid::result_of::element<TriangularCartesian2D_Domain_t, viennagrid::vertex_tag>::type               TriangularCartesian2D_Vertex_t;
typedef viennagrid::result_of::handle<TriangularCartesian2D_Domain_t, viennagrid::vertex_tag>::type                TriangularCartesian2D_VertexHandle_t;
typedef viennagrid::result_of::element_range<TriangularCartesian2D_Domain_t, viennagrid::vertex_tag>::type         TriangularCartesian2D_VertexRange_t;

typedef viennagrid::result_of::element<TriangularCartesian3D_Domain_t, viennagrid::vertex_tag>::type               TriangularCartesian3D_Vertex_t;
typedef viennagrid::result_of::handle<TriangularCartesian3D_Domain_t, viennagrid::vertex_tag>::type                TriangularCartesian3D_VertexHandle_t;
typedef viennagrid::result_of::element_range<TriangularCartesian3D_Domain_t, viennagrid::vertex_tag>::type         TriangularCartesian3D_VertexRange_t;

typedef viennagrid::result_of::element<TriangularCylindrical3D_Domain_t, viennagrid::vertex_tag>::type             TriangularCylindrical3D_Vertex_t;
typedef viennagrid::result_of::handle<TriangularCylindrical3D_Domain_t, viennagrid::vertex_tag>::type              TriangularCylindrical3D_VertexHandle_t;
typedef viennagrid::result_of::element_range<TriangularCylindrical3D_Domain_t, viennagrid::vertex_tag>::type       TriangularCylindrical3D_VertexRange_t;

typedef viennagrid::result_of::element<TriangularPolar2D_Domain_t, viennagrid::vertex_tag>::type                   TriangularPolar2D_Vertex_t;
typedef viennagrid::result_of::handle<TriangularPolar2D_Domain_t, viennagrid::vertex_tag>::type                    TriangularPolar2D_VertexHandle_t;
typedef viennagrid::result_of::element_range<TriangularPolar2D_Domain_t, viennagrid::vertex_tag>::type             TriangularPolar2D_VertexRange_t;

typedef viennagrid::result_of::element<TriangularSpherical3D_Domain_t, viennagrid::vertex_tag>::type               TriangularSpherical3D_Vertex_t;
typedef viennagrid::result_of::handle<TriangularSpherical3D_Domain_t, viennagrid::vertex_tag>::type                TriangularSpherical3D_VertexHandle_t;
typedef viennagrid::result_of::element_range<TriangularSpherical3D_Domain_t, viennagrid::vertex_tag>::type         TriangularSpherical3D_VertexRange_t;

/*****************
 * Quadrilateral *
 *****************/

typedef viennagrid::result_of::element<QuadrilateralCartesian2D_Domain_t, viennagrid::vertex_tag>::type            QuadrilateralCartesian2D_Vertex_t;
typedef viennagrid::result_of::handle<QuadrilateralCartesian2D_Domain_t, viennagrid::vertex_tag>::type             QuadrilateralCartesian2D_VertexHandle_t;
typedef viennagrid::result_of::element_range<QuadrilateralCartesian2D_Domain_t, viennagrid::vertex_tag>::type      QuadrilateralCartesian2D_VertexRange_t;

typedef viennagrid::result_of::element<QuadrilateralCartesian3D_Domain_t, viennagrid::vertex_tag>::type            QuadrilateralCartesian3D_Vertex_t;
typedef viennagrid::result_of::handle<QuadrilateralCartesian3D_Domain_t, viennagrid::vertex_tag>::type             QuadrilateralCartesian3D_VertexHandle_t;
typedef viennagrid::result_of::element_range<QuadrilateralCartesian3D_Domain_t, viennagrid::vertex_tag>::type      QuadrilateralCartesian3D_VertexRange_t;

typedef viennagrid::result_of::element<QuadrilateralCylindrical3D_Domain_t, viennagrid::vertex_tag>::type          QuadrilateralCylindrical3D_Vertex_t;
typedef viennagrid::result_of::handle<QuadrilateralCylindrical3D_Domain_t, viennagrid::vertex_tag>::type           QuadrilateralCylindrical3D_VertexHandle_t;
typedef viennagrid::result_of::element_range<QuadrilateralCylindrical3D_Domain_t, viennagrid::vertex_tag>::type    QuadrilateralCylindrical3D_VertexRange_t;

typedef viennagrid::result_of::element<QuadrilateralPolar2D_Domain_t, viennagrid::vertex_tag>::type                QuadrilateralPolar2D_Vertex_t;
typedef viennagrid::result_of::handle<QuadrilateralPolar2D_Domain_t, viennagrid::vertex_tag>::type                 QuadrilateralPolar2D_VertexHandle_t;
typedef viennagrid::result_of::element_range<QuadrilateralPolar2D_Domain_t, viennagrid::vertex_tag>::type          QuadrilateralPolar2D_VertexRange_t;

typedef viennagrid::result_of::element<QuadrilateralSpherical3D_Domain_t, viennagrid::vertex_tag>::type            QuadrilateralSpherical3D_Vertex_t;
typedef viennagrid::result_of::handle<QuadrilateralSpherical3D_Domain_t, viennagrid::vertex_tag>::type             QuadrilateralSpherical3D_VertexHandle_t;
typedef viennagrid::result_of::element_range<QuadrilateralSpherical3D_Domain_t, viennagrid::vertex_tag>::type      QuadrilateralSpherical3D_VertexRange_t;

/*****************
 * Tetrahedral *
 *****************/

typedef viennagrid::result_of::element<TetrahedralCartesian3D_Domain_t, viennagrid::vertex_tag>::type              TetrahedralCartesian3D_Vertex_t;
typedef viennagrid::result_of::handle<TetrahedralCartesian3D_Domain_t, viennagrid::vertex_tag>::type               TetrahedralCartesian3D_VertexHandle_t;
typedef viennagrid::result_of::element_range<TetrahedralCartesian3D_Domain_t, viennagrid::vertex_tag>::type        TetrahedralCartesian3D_VertexRange_t;

typedef viennagrid::result_of::element<TetrahedralCylindrical3D_Domain_t, viennagrid::vertex_tag>::type            TetrahedralCylindrical3D_Vertex_t;
typedef viennagrid::result_of::handle<TetrahedralCylindrical3D_Domain_t, viennagrid::vertex_tag>::type             TetrahedralCylindrical3D_VertexHandle_t;
typedef viennagrid::result_of::element_range<TetrahedralCylindrical3D_Domain_t, viennagrid::vertex_tag>::type      TetrahedralCylindrical3D_VertexRange_t;

typedef viennagrid::result_of::element<TetrahedralSpherical3D_Domain_t, viennagrid::vertex_tag>::type              TetrahedralSpherical3D_Vertex_t;
typedef viennagrid::result_of::handle<TetrahedralSpherical3D_Domain_t, viennagrid::vertex_tag>::type               TetrahedralSpherical3D_VertexHandle_t;
typedef viennagrid::result_of::element_range<TetrahedralSpherical3D_Domain_t, viennagrid::vertex_tag>::type        TetrahedralSpherical3D_VertexRange_t;

#endif /* end of include guard: TYPES_HPP_1AMW8QS7 */
