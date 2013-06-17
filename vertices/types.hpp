#ifndef TYPES_HPP_1AMW8QS7
#define TYPES_HPP_1AMW8QS7

#include "../domains/types.hpp"

typedef viennagrid::result_of::element<TriangularCartesian2D_Domain_t, viennagrid::vertex_tag>::type      TriangularCartesian2D_Vertex_t;
typedef viennagrid::result_of::handle<TriangularCartesian2D_Domain_t, viennagrid::vertex_tag>::type       TriangularCartesian2D_VertexHandle_t;

typedef viennagrid::result_of::element<TriangularCartesian3D_Domain_t, viennagrid::vertex_tag>::type      TriangularCartesian3D_Vertex_t;
typedef viennagrid::result_of::handle<TriangularCartesian3D_Domain_t, viennagrid::vertex_tag>::type       TriangularCartesian3D_VertexHandle_t;

typedef viennagrid::result_of::element<TriangularCylindrical3D_Domain_t, viennagrid::vertex_tag>::type    TriangularCylindrical3D_Vertex_t;
typedef viennagrid::result_of::handle<TriangularCylindrical3D_Domain_t, viennagrid::vertex_tag>::type     TriangularCylindrical3D_VertexHandle_t;

typedef viennagrid::result_of::element<TriangularPolar2D_Domain_t, viennagrid::vertex_tag>::type          TriangularPolar2D_Vertex_t;
typedef viennagrid::result_of::handle<TriangularPolar2D_Domain_t, viennagrid::vertex_tag>::type           TriangularPolar2D_VertexHandle_t;

typedef viennagrid::result_of::element<TriangularSpherical3D_Domain_t, viennagrid::vertex_tag>::type      TriangularSpherical3D_Vertex_t;
typedef viennagrid::result_of::handle<TriangularSpherical3D_Domain_t, viennagrid::vertex_tag>::type       TriangularSpherical3D_VertexHandle_t;


#endif /* end of include guard: TYPES_HPP_1AMW8QS7 */
