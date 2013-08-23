/**
 * @file
 * @brief Implement algorithm `is_interface` to check if a facet, edge or vertex is an interface element
 *        of two segments.
 */

#ifndef ALGORITHMS_IS_INTERFACE_HPP
#define ALGORITHMS_IS_INTERFACE_HPP

#include "../segments/linear.hpp"
#include "../segments/triangular.hpp"
#include "../segments/quadrilateral.hpp"
#include "../segments/tetrahedral.hpp"

#include "../facets/linear.hpp"
#include "../facets/triangular.hpp"
#include "../facets/quadrilateral.hpp"
#include "../facets/tetrahedral.hpp"

#include "../edges/triangular.hpp"
#include "../edges/quadrilateral.hpp"
#include "../edges/tetrahedral.hpp"

/******************************
 * IS_INTERFACE (with facets) *
 ******************************/

////////////
// Linear //
////////////

/**
 * `is_interface` for linear cartesian 1D segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool LinearCartesian1D_Facet_is_interface(LinearCartesian1D_Segment seg0, LinearCartesian1D_Segment seg1, LinearCartesian1D_Facet facet);

/**
 * `is_interface` for linear cartesian 2D segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool LinearCartesian2D_Facet_is_interface(LinearCartesian2D_Segment seg0, LinearCartesian2D_Segment seg1, LinearCartesian2D_Facet facet);

/**
 * `is_interface` for linear cartesian 3D segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool LinearCartesian3D_Facet_is_interface(LinearCartesian3D_Segment seg0, LinearCartesian3D_Segment seg1, LinearCartesian3D_Facet facet);

/**
 * `is_interface` for linear cylindrical segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool LinearCylindrical3D_Facet_is_interface(LinearCylindrical3D_Segment seg0, LinearCylindrical3D_Segment seg1, LinearCylindrical3D_Facet facet);

/**
 * `is_interface` for linear polar segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool LinearPolar2D_Facet_is_interface(LinearPolar2D_Segment seg0, LinearPolar2D_Segment seg1, LinearPolar2D_Facet facet);

/**
 * `is_interface` for linear spherical segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool LinearSpherical3D_Facet_is_interface(LinearSpherical3D_Segment seg0, LinearSpherical3D_Segment seg1, LinearSpherical3D_Facet facet);

////////////////
// Triangular //
////////////////

/**
 * `is_interface` for linear cartesian 2D segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian2D_Facet_is_interface(TriangularCartesian2D_Segment seg0, TriangularCartesian2D_Segment seg1, TriangularCartesian2D_Facet facet);

/**
 * `is_interface` for linear cartesian 3D segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian3D_Facet_is_interface(TriangularCartesian3D_Segment seg0, TriangularCartesian3D_Segment seg1, TriangularCartesian3D_Facet facet);

/**
 * `is_interface` for linear cylindrical segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TriangularCylindrical3D_Facet_is_interface(TriangularCylindrical3D_Segment seg0, TriangularCylindrical3D_Segment seg1, TriangularCylindrical3D_Facet facet);

/**
 * `is_interface` for linear polar segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TriangularPolar2D_Facet_is_interface(TriangularPolar2D_Segment seg0, TriangularPolar2D_Segment seg1, TriangularPolar2D_Facet facet);

/**
 * `is_interface` for linear spherical segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TriangularSpherical3D_Facet_is_interface(TriangularSpherical3D_Segment seg0, TriangularSpherical3D_Segment seg1, TriangularSpherical3D_Facet facet);

///////////////////
// Quadrilateral //
///////////////////

/**
 * `is_interface` for linear cartesian 2D segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian2D_Facet_is_interface(QuadrilateralCartesian2D_Segment seg0, QuadrilateralCartesian2D_Segment seg1, QuadrilateralCartesian2D_Facet facet);

/**
 * `is_interface` for linear cartesian 3D segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian3D_Facet_is_interface(QuadrilateralCartesian3D_Segment seg0, QuadrilateralCartesian3D_Segment seg1, QuadrilateralCartesian3D_Facet facet);

/**
 * `is_interface` for linear cylindrical segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCylindrical3D_Facet_is_interface(QuadrilateralCylindrical3D_Segment seg0, QuadrilateralCylindrical3D_Segment seg1, QuadrilateralCylindrical3D_Facet facet);

/**
 * `is_interface` for linear polar segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool QuadrilateralPolar2D_Facet_is_interface(QuadrilateralPolar2D_Segment seg0, QuadrilateralPolar2D_Segment seg1, QuadrilateralPolar2D_Facet facet);

/**
 * `is_interface` for linear spherical segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool QuadrilateralSpherical3D_Facet_is_interface(QuadrilateralSpherical3D_Segment seg0, QuadrilateralSpherical3D_Segment seg1, QuadrilateralSpherical3D_Facet facet);

/////////////////
// Tetrahedral //
/////////////////

/**
 * `is_interface` for linear cartesian 3D segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TetrahedralCartesian3D_Facet_is_interface(TetrahedralCartesian3D_Segment seg0, TetrahedralCartesian3D_Segment seg1, TetrahedralCartesian3D_Facet facet);

/**
 * `is_interface` for linear cylindrical segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TetrahedralCylindrical3D_Facet_is_interface(TetrahedralCylindrical3D_Segment seg0, TetrahedralCylindrical3D_Segment seg1, TetrahedralCylindrical3D_Facet facet);

/**
 * `is_interface` for linear spherical segments and facets.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param facet Facet
 * 
 * @retval true the facet **is** an interface element of the two segments.
 * @retval false the facet **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TetrahedralSpherical3D_Facet_is_interface(TetrahedralSpherical3D_Segment seg0, TetrahedralSpherical3D_Segment seg1, TetrahedralSpherical3D_Facet facet);

/*****************************
 * IS_INTERFACE (with edges) *
 *****************************/

////////////////
// Triangular //
////////////////

/**
 * `is_interface` for linear cartesian 2D segments and edges.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param edge Edge
 * 
 * @retval true the edge **is** an interface element of the two segments.
 * @retval false the edge **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian2D_Edge_is_interface(TriangularCartesian2D_Segment seg0, TriangularCartesian2D_Segment seg1, TriangularCartesian2D_Edge edge);

/**
 * `is_interface` for linear cartesian 3D segments and edges.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param edge Edge
 * 
 * @retval true the edge **is** an interface element of the two segments.
 * @retval false the edge **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian3D_Edge_is_interface(TriangularCartesian3D_Segment seg0, TriangularCartesian3D_Segment seg1, TriangularCartesian3D_Edge edge);

/**
 * `is_interface` for linear cylindrical segments and edges.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param edge Edge
 * 
 * @retval true the edge **is** an interface element of the two segments.
 * @retval false the edge **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TriangularCylindrical3D_Edge_is_interface(TriangularCylindrical3D_Segment seg0, TriangularCylindrical3D_Segment seg1, TriangularCylindrical3D_Edge edge);

/**
 * `is_interface` for linear polar segments and edges.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param edge Edge
 * 
 * @retval true the edge **is** an interface element of the two segments.
 * @retval false the edge **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TriangularPolar2D_Edge_is_interface(TriangularPolar2D_Segment seg0, TriangularPolar2D_Segment seg1, TriangularPolar2D_Edge edge);

/**
 * `is_interface` for linear spherical segments and edges.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param edge Edge
 * 
 * @retval true the edge **is** an interface element of the two segments.
 * @retval false the edge **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TriangularSpherical3D_Edge_is_interface(TriangularSpherical3D_Segment seg0, TriangularSpherical3D_Segment seg1, TriangularSpherical3D_Edge edge);

///////////////////
// Quadrilateral //
///////////////////

/**
 * `is_interface` for linear cartesian 2D segments and edges.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param edge Edge
 * 
 * @retval true the edge **is** an interface element of the two segments.
 * @retval false the edge **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian2D_Edge_is_interface(QuadrilateralCartesian2D_Segment seg0, QuadrilateralCartesian2D_Segment seg1, QuadrilateralCartesian2D_Edge edge);

/**
 * `is_interface` for linear cartesian 3D segments and edges.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param edge Edge
 * 
 * @retval true the edge **is** an interface element of the two segments.
 * @retval false the edge **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian3D_Edge_is_interface(QuadrilateralCartesian3D_Segment seg0, QuadrilateralCartesian3D_Segment seg1, QuadrilateralCartesian3D_Edge edge);

/**
 * `is_interface` for linear cylindrical segments and edges.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param edge Edge
 * 
 * @retval true the edge **is** an interface element of the two segments.
 * @retval false the edge **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCylindrical3D_Edge_is_interface(QuadrilateralCylindrical3D_Segment seg0, QuadrilateralCylindrical3D_Segment seg1, QuadrilateralCylindrical3D_Edge edge);

/**
 * `is_interface` for linear polar segments and edges.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param edge Edge
 * 
 * @retval true the edge **is** an interface element of the two segments.
 * @retval false the edge **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool QuadrilateralPolar2D_Edge_is_interface(QuadrilateralPolar2D_Segment seg0, QuadrilateralPolar2D_Segment seg1, QuadrilateralPolar2D_Edge edge);

/**
 * `is_interface` for linear spherical segments and edges.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param edge Edge
 * 
 * @retval true the edge **is** an interface element of the two segments.
 * @retval false the edge **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool QuadrilateralSpherical3D_Edge_is_interface(QuadrilateralSpherical3D_Segment seg0, QuadrilateralSpherical3D_Segment seg1, QuadrilateralSpherical3D_Edge edge);

/////////////////
// Tetrahedral //
/////////////////

/**
 * `is_interface` for linear cartesian 3D segments and edges.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param edge Edge
 * 
 * @retval true the edge **is** an interface element of the two segments.
 * @retval false the edge **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TetrahedralCartesian3D_Edge_is_interface(TetrahedralCartesian3D_Segment seg0, TetrahedralCartesian3D_Segment seg1, TetrahedralCartesian3D_Edge edge);

/**
 * `is_interface` for linear cylindrical segments and edges.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param edge Edge
 * 
 * @retval true the edge **is** an interface element of the two segments.
 * @retval false the edge **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TetrahedralCylindrical3D_Edge_is_interface(TetrahedralCylindrical3D_Segment seg0, TetrahedralCylindrical3D_Segment seg1, TetrahedralCylindrical3D_Edge edge);

/**
 * `is_interface` for linear spherical segments and edges.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param edge Edge
 * 
 * @retval true the edge **is** an interface element of the two segments.
 * @retval false the edge **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TetrahedralSpherical3D_Edge_is_interface(TetrahedralSpherical3D_Segment seg0, TetrahedralSpherical3D_Segment seg1, TetrahedralSpherical3D_Edge edge);

/********************************
 * IS_INTERFACE (with vertices) *
 ********************************/

////////////
// Linear //
////////////

/**
 * `is_interface` for linear cartesian 1D segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool LinearCartesian1D_Vertex_is_interface(LinearCartesian1D_Segment seg0, LinearCartesian1D_Segment seg1, LinearCartesian1D_Vertex vertex);

/**
 * `is_interface` for linear cartesian 2D segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool LinearCartesian2D_Vertex_is_interface(LinearCartesian2D_Segment seg0, LinearCartesian2D_Segment seg1, LinearCartesian2D_Vertex vertex);

/**
 * `is_interface` for linear cartesian 3D segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool LinearCartesian3D_Vertex_is_interface(LinearCartesian3D_Segment seg0, LinearCartesian3D_Segment seg1, LinearCartesian3D_Vertex vertex);

/**
 * `is_interface` for linear cylindrical segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool LinearCylindrical3D_Vertex_is_interface(LinearCylindrical3D_Segment seg0, LinearCylindrical3D_Segment seg1, LinearCylindrical3D_Vertex vertex);

/**
 * `is_interface` for linear polar segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool LinearPolar2D_Vertex_is_interface(LinearPolar2D_Segment seg0, LinearPolar2D_Segment seg1, LinearPolar2D_Vertex vertex);

/**
 * `is_interface` for linear spherical segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool LinearSpherical3D_Vertex_is_interface(LinearSpherical3D_Segment seg0, LinearSpherical3D_Segment seg1, LinearSpherical3D_Vertex vertex);

////////////////
// Triangular //
////////////////

/**
 * `is_interface` for linear cartesian 2D segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian2D_Vertex_is_interface(TriangularCartesian2D_Segment seg0, TriangularCartesian2D_Segment seg1, TriangularCartesian2D_Vertex vertex);

/**
 * `is_interface` for linear cartesian 3D segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian3D_Vertex_is_interface(TriangularCartesian3D_Segment seg0, TriangularCartesian3D_Segment seg1, TriangularCartesian3D_Vertex vertex);

/**
 * `is_interface` for linear cylindrical segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TriangularCylindrical3D_Vertex_is_interface(TriangularCylindrical3D_Segment seg0, TriangularCylindrical3D_Segment seg1, TriangularCylindrical3D_Vertex vertex);

/**
 * `is_interface` for linear polar segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TriangularPolar2D_Vertex_is_interface(TriangularPolar2D_Segment seg0, TriangularPolar2D_Segment seg1, TriangularPolar2D_Vertex vertex);

/**
 * `is_interface` for linear spherical segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TriangularSpherical3D_Vertex_is_interface(TriangularSpherical3D_Segment seg0, TriangularSpherical3D_Segment seg1, TriangularSpherical3D_Vertex vertex);

///////////////////
// Quadrilateral //
///////////////////

/**
 * `is_interface` for linear cartesian 2D segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian2D_Vertex_is_interface(QuadrilateralCartesian2D_Segment seg0, QuadrilateralCartesian2D_Segment seg1, QuadrilateralCartesian2D_Vertex vertex);

/**
 * `is_interface` for linear cartesian 3D segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian3D_Vertex_is_interface(QuadrilateralCartesian3D_Segment seg0, QuadrilateralCartesian3D_Segment seg1, QuadrilateralCartesian3D_Vertex vertex);

/**
 * `is_interface` for linear cylindrical segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCylindrical3D_Vertex_is_interface(QuadrilateralCylindrical3D_Segment seg0, QuadrilateralCylindrical3D_Segment seg1, QuadrilateralCylindrical3D_Vertex vertex);

/**
 * `is_interface` for linear polar segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool QuadrilateralPolar2D_Vertex_is_interface(QuadrilateralPolar2D_Segment seg0, QuadrilateralPolar2D_Segment seg1, QuadrilateralPolar2D_Vertex vertex);

/**
 * `is_interface` for linear spherical segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool QuadrilateralSpherical3D_Vertex_is_interface(QuadrilateralSpherical3D_Segment seg0, QuadrilateralSpherical3D_Segment seg1, QuadrilateralSpherical3D_Vertex vertex);

/////////////////
// Tetrahedral //
/////////////////

/**
 * `is_interface` for linear cartesian 3D segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TetrahedralCartesian3D_Vertex_is_interface(TetrahedralCartesian3D_Segment seg0, TetrahedralCartesian3D_Segment seg1, TetrahedralCartesian3D_Vertex vertex);

/**
 * `is_interface` for linear cylindrical segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TetrahedralCylindrical3D_Vertex_is_interface(TetrahedralCylindrical3D_Segment seg0, TetrahedralCylindrical3D_Segment seg1, TetrahedralCylindrical3D_Vertex vertex);

/**
 * `is_interface` for linear spherical segments and vertices.
 * 
 * @param seg0 First segment
 * @param seg1 Second segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** an interface element of the two segments.
 * @retval false the vertex **is not** an interface element of the two segments.
 * 
 * @since 0.1.0
 */
bool TetrahedralSpherical3D_Vertex_is_interface(TetrahedralSpherical3D_Segment seg0, TetrahedralSpherical3D_Segment seg1, TetrahedralSpherical3D_Vertex vertex);

#endif /* end of include guard: ALGORITHMS_IS_INTERFACE_HPP */
