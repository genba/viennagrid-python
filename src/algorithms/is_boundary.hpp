/**
 * @file
 * @brief Implement algorithm `is_boundary` to check if a facet, edge or vertex is a boundary element
 *        of a domain or segment.
 */

#ifndef ALGORITHMS_IS_BOUNDARY_HPP
#define ALGORITHMS_IS_BOUNDARY_HPP

#include "../domains/linear.hpp"
#include "../domains/triangular.hpp"
#include "../domains/quadrilateral.hpp"
#include "../domains/tetrahedral.hpp"

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

/*****************************************
 * IS_BOUNDARY (with domains and facets) *
 *****************************************/

////////////
// Linear //
////////////

/**
 * `is_boundary` for linear cartesian 1D domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool LinearCartesian1D_Domain_Facet_is_boundary(LinearCartesian1D_Domain dom, LinearCartesian1D_Facet facet);

/**
 * `is_boundary` for linear cartesian 2D domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool LinearCartesian2D_Domain_Facet_is_boundary(LinearCartesian2D_Domain dom, LinearCartesian2D_Facet facet);

/**
 * `is_boundary` for linear cartesian 3D domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool LinearCartesian3D_Domain_Facet_is_boundary(LinearCartesian3D_Domain dom, LinearCartesian3D_Facet facet);

/**
 * `is_boundary` for linear cylindrical domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool LinearCylindrical3D_Domain_Facet_is_boundary(LinearCylindrical3D_Domain dom, LinearCylindrical3D_Facet facet);

/**
 * `is_boundary` for linear polar domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool LinearPolar2D_Domain_Facet_is_boundary(LinearPolar2D_Domain dom, LinearPolar2D_Facet facet);

/**
 * `is_boundary` for linear spherical domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool LinearSpherical3D_Domain_Facet_is_boundary(LinearSpherical3D_Domain dom, LinearSpherical3D_Facet facet);

////////////////
// Triangular //
////////////////

/**
 * `is_boundary` for triangular cartesian 2D domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian2D_Domain_Facet_is_boundary(TriangularCartesian2D_Domain dom, TriangularCartesian2D_Facet facet);

/**
 * `is_boundary` for triangular cartesian 3D domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian3D_Domain_Facet_is_boundary(TriangularCartesian3D_Domain dom, TriangularCartesian3D_Facet facet);

/**
 * `is_boundary` for triangular cylindrical domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TriangularCylindrical3D_Domain_Facet_is_boundary(TriangularCylindrical3D_Domain dom, TriangularCylindrical3D_Facet facet);

/**
 * `is_boundary` for triangular polar domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TriangularPolar2D_Domain_Facet_is_boundary(TriangularPolar2D_Domain dom, TriangularPolar2D_Facet facet);

/**
 * `is_boundary` for triangular spherical domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TriangularSpherical3D_Domain_Facet_is_boundary(TriangularSpherical3D_Domain dom, TriangularSpherical3D_Facet facet);

///////////////////
// Quadrilateral //
///////////////////

/**
 * `is_boundary` for quadrilateral cartesian 2D domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian2D_Domain_Facet_is_boundary(QuadrilateralCartesian2D_Domain dom, QuadrilateralCartesian2D_Facet facet);

/**
 * `is_boundary` for quadrilateral cartesian 3D domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian3D_Domain_Facet_is_boundary(QuadrilateralCartesian3D_Domain dom, QuadrilateralCartesian3D_Facet facet);

/**
 * `is_boundary` for quadrilateral cylindrical domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCylindrical3D_Domain_Facet_is_boundary(QuadrilateralCylindrical3D_Domain dom, QuadrilateralCylindrical3D_Facet facet);

/**
 * `is_boundary` for quadrilateral polar domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool QuadrilateralPolar2D_Domain_Facet_is_boundary(QuadrilateralPolar2D_Domain dom, QuadrilateralPolar2D_Facet facet);

/**
 * `is_boundary` for quadrilateral spherical domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool QuadrilateralSpherical3D_Domain_Facet_is_boundary(QuadrilateralSpherical3D_Domain dom, QuadrilateralSpherical3D_Facet facet);

/////////////////
// Tetrahedral //
/////////////////

/**
 * `is_boundary` for tetrahedral cartesian 3D domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TetrahedralCartesian3D_Domain_Facet_is_boundary(TetrahedralCartesian3D_Domain dom, TetrahedralCartesian3D_Facet facet);

/**
 * `is_boundary` for tetrahedral cylindrical domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TetrahedralCylindrical3D_Domain_Facet_is_boundary(TetrahedralCylindrical3D_Domain dom, TetrahedralCylindrical3D_Facet facet);

/**
 * `is_boundary` for tetrahedral spherical domains and facets.
 * 
 * @param dom Domain
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the domain.
 * @retval false the facet **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TetrahedralSpherical3D_Domain_Facet_is_boundary(TetrahedralSpherical3D_Domain dom, TetrahedralSpherical3D_Facet facet);

/****************************************
 * IS_BOUNDARY (with domains and edges) *
 ****************************************/

////////////////
// Triangular //
////////////////

/**
 * `is_boundary` for triangular cartesian 2D domains and edges.
 * 
 * @param dom Domain
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the domain.
 * @retval false the edge **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian2D_Domain_Edge_is_boundary(TriangularCartesian2D_Domain dom, TriangularCartesian2D_Edge edge);

/**
 * `is_boundary` for triangular cartesian 3D domains and edges.
 * 
 * @param dom Domain
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the domain.
 * @retval false the edge **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian3D_Domain_Edge_is_boundary(TriangularCartesian3D_Domain dom, TriangularCartesian3D_Edge edge);

/**
 * `is_boundary` for triangular cylindrical domains and edges.
 * 
 * @param dom Domain
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the domain.
 * @retval false the edge **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TriangularCylindrical3D_Domain_Edge_is_boundary(TriangularCylindrical3D_Domain dom, TriangularCylindrical3D_Edge edge);

/**
 * `is_boundary` for triangular polar domains and edges.
 * 
 * @param dom Domain
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the domain.
 * @retval false the edge **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TriangularPolar2D_Domain_Edge_is_boundary(TriangularPolar2D_Domain dom, TriangularPolar2D_Edge edge);

/**
 * `is_boundary` for triangular spherical domains and edges.
 * 
 * @param dom Domain
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the domain.
 * @retval false the edge **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TriangularSpherical3D_Domain_Edge_is_boundary(TriangularSpherical3D_Domain dom, TriangularSpherical3D_Edge edge);

///////////////////
// Quadrilateral //
///////////////////

/**
 * `is_boundary` for quadrilateral cartesian 2D domains and edges.
 * 
 * @param dom Domain
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the domain.
 * @retval false the edge **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian2D_Domain_Edge_is_boundary(QuadrilateralCartesian2D_Domain dom, QuadrilateralCartesian2D_Edge edge);

/**
 * `is_boundary` for quadrilateral cartesian 3D domains and edges.
 * 
 * @param dom Domain
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the domain.
 * @retval false the edge **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian3D_Domain_Edge_is_boundary(QuadrilateralCartesian3D_Domain dom, QuadrilateralCartesian3D_Edge edge);

/**
 * `is_boundary` for quadrilateral cylindrical domains and edges.
 * 
 * @param dom Domain
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the domain.
 * @retval false the edge **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCylindrical3D_Domain_Edge_is_boundary(QuadrilateralCylindrical3D_Domain dom, QuadrilateralCylindrical3D_Edge edge);

/**
 * `is_boundary` for quadrilateral polar domains and edges.
 * 
 * @param dom Domain
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the domain.
 * @retval false the edge **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool QuadrilateralPolar2D_Domain_Edge_is_boundary(QuadrilateralPolar2D_Domain dom, QuadrilateralPolar2D_Edge edge);

/**
 * `is_boundary` for quadrilateral spherical domains and edges.
 * 
 * @param dom Domain
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the domain.
 * @retval false the edge **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool QuadrilateralSpherical3D_Domain_Edge_is_boundary(QuadrilateralSpherical3D_Domain dom, QuadrilateralSpherical3D_Edge edge);

/////////////////
// Tetrahedral //
/////////////////

/**
 * `is_boundary` for tetrahedral cartesian 3D domains and edges.
 * 
 * @param dom Domain
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the domain.
 * @retval false the edge **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TetrahedralCartesian3D_Domain_Edge_is_boundary(TetrahedralCartesian3D_Domain dom, TetrahedralCartesian3D_Edge edge);

/**
 * `is_boundary` for tetrahedral cylindrical domains and edges.
 * 
 * @param dom Domain
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the domain.
 * @retval false the edge **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TetrahedralCylindrical3D_Domain_Edge_is_boundary(TetrahedralCylindrical3D_Domain dom, TetrahedralCylindrical3D_Edge edge);

/**
 * `is_boundary` for tetrahedral spherical domains and edges.
 * 
 * @param dom Domain
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the domain.
 * @retval false the edge **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TetrahedralSpherical3D_Domain_Edge_is_boundary(TetrahedralSpherical3D_Domain dom, TetrahedralSpherical3D_Edge edge);

/*******************************************
 * IS_BOUNDARY (with domains and vertices) *
 *******************************************/

////////////
// Linear //
////////////

/**
 * `is_boundary` for linear cartesian 1D domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool LinearCartesian1D_Domain_Vertex_is_boundary(LinearCartesian1D_Domain dom, LinearCartesian1D_Vertex vertex);

/**
 * `is_boundary` for linear cartesian 2D domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool LinearCartesian2D_Domain_Vertex_is_boundary(LinearCartesian2D_Domain dom, LinearCartesian2D_Vertex vertex);

/**
 * `is_boundary` for linear cartesian 3D domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool LinearCartesian3D_Domain_Vertex_is_boundary(LinearCartesian3D_Domain dom, LinearCartesian3D_Vertex vertex);

/**
 * `is_boundary` for linear cylindrical domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool LinearCylindrical3D_Domain_Vertex_is_boundary(LinearCylindrical3D_Domain dom, LinearCylindrical3D_Vertex vertex);

/**
 * `is_boundary` for linear polar domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool LinearPolar2D_Domain_Vertex_is_boundary(LinearPolar2D_Domain dom, LinearPolar2D_Vertex vertex);

/**
 * `is_boundary` for linear spherical domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool LinearSpherical3D_Domain_Vertex_is_boundary(LinearSpherical3D_Domain dom, LinearSpherical3D_Vertex vertex);

////////////////
// Triangular //
////////////////

/**
 * `is_boundary` for triangular cartesian 2D domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian2D_Domain_Vertex_is_boundary(TriangularCartesian2D_Domain dom, TriangularCartesian2D_Vertex vertex);

/**
 * `is_boundary` for triangular cartesian 3D domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian3D_Domain_Vertex_is_boundary(TriangularCartesian3D_Domain dom, TriangularCartesian3D_Vertex vertex);

/**
 * `is_boundary` for triangular cylindrical domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TriangularCylindrical3D_Domain_Vertex_is_boundary(TriangularCylindrical3D_Domain dom, TriangularCylindrical3D_Vertex vertex);

/**
 * `is_boundary` for triangular polar domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TriangularPolar2D_Domain_Vertex_is_boundary(TriangularPolar2D_Domain dom, TriangularPolar2D_Vertex vertex);

/**
 * `is_boundary` for triangular spherical domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TriangularSpherical3D_Domain_Vertex_is_boundary(TriangularSpherical3D_Domain dom, TriangularSpherical3D_Vertex vertex);

///////////////////
// Quadrilateral //
///////////////////

/**
 * `is_boundary` for quadrilateral cartesian 2D domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian2D_Domain_Vertex_is_boundary(QuadrilateralCartesian2D_Domain dom, QuadrilateralCartesian2D_Vertex vertex);

/**
 * `is_boundary` for quadrilateral cartesian 3D domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian3D_Domain_Vertex_is_boundary(QuadrilateralCartesian3D_Domain dom, QuadrilateralCartesian3D_Vertex vertex);

/**
 * `is_boundary` for quadrilateral cylindrical domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCylindrical3D_Domain_Vertex_is_boundary(QuadrilateralCylindrical3D_Domain dom, QuadrilateralCylindrical3D_Vertex vertex);

/**
 * `is_boundary` for quadrilateral polar domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool QuadrilateralPolar2D_Domain_Vertex_is_boundary(QuadrilateralPolar2D_Domain dom, QuadrilateralPolar2D_Vertex vertex);

/**
 * `is_boundary` for quadrilateral spherical domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool QuadrilateralSpherical3D_Domain_Vertex_is_boundary(QuadrilateralSpherical3D_Domain dom, QuadrilateralSpherical3D_Vertex vertex);

/////////////////
// Tetrahedral //
/////////////////

/**
 * `is_boundary` for tetrahedral cartesian 3D domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TetrahedralCartesian3D_Domain_Vertex_is_boundary(TetrahedralCartesian3D_Domain dom, TetrahedralCartesian3D_Vertex vertex);

/**
 * `is_boundary` for tetrahedral cylindrical domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TetrahedralCylindrical3D_Domain_Vertex_is_boundary(TetrahedralCylindrical3D_Domain dom, TetrahedralCylindrical3D_Vertex vertex);

/**
 * `is_boundary` for tetrahedral spherical domains and vertices.
 * 
 * @param dom Domain
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the domain.
 * @retval false the vertex **is not** a boundary element of the domain.
 * 
 * @since 0.1.0
 */
bool TetrahedralSpherical3D_Domain_Vertex_is_boundary(TetrahedralSpherical3D_Domain dom, TetrahedralSpherical3D_Vertex vertex);

/******************************************
 * IS_BOUNDARY (with segments and facets) *
 ******************************************/

////////////
// Linear //
////////////

/**
 * `is_boundary` for linear cartesian 1D segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool LinearCartesian1D_Segment_Facet_is_boundary(LinearCartesian1D_Segment seg, LinearCartesian1D_Facet facet);

/**
 * `is_boundary` for linear cartesian 2D segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool LinearCartesian2D_Segment_Facet_is_boundary(LinearCartesian2D_Segment seg, LinearCartesian2D_Facet facet);

/**
 * `is_boundary` for linear cartesian 3D segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool LinearCartesian3D_Segment_Facet_is_boundary(LinearCartesian3D_Segment seg, LinearCartesian3D_Facet facet);

/**
 * `is_boundary` for linear cylindrical segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool LinearCylindrical3D_Segment_Facet_is_boundary(LinearCylindrical3D_Segment seg, LinearCylindrical3D_Facet facet);

/**
 * `is_boundary` for linear polar segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool LinearPolar2D_Segment_Facet_is_boundary(LinearPolar2D_Segment seg, LinearPolar2D_Facet facet);

/**
 * `is_boundary` for linear spherical segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool LinearSpherical3D_Segment_Facet_is_boundary(LinearSpherical3D_Segment seg, LinearSpherical3D_Facet facet);

////////////////
// Triangular //
////////////////

/**
 * `is_boundary` for triangular cartesian 2D segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian2D_Segment_Facet_is_boundary(TriangularCartesian2D_Segment seg, TriangularCartesian2D_Facet facet);

/**
 * `is_boundary` for triangular cartesian 3D segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian3D_Segment_Facet_is_boundary(TriangularCartesian3D_Segment seg, TriangularCartesian3D_Facet facet);

/**
 * `is_boundary` for triangular cylindrical segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TriangularCylindrical3D_Segment_Facet_is_boundary(TriangularCylindrical3D_Segment seg, TriangularCylindrical3D_Facet facet);

/**
 * `is_boundary` for triangular polar segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TriangularPolar2D_Segment_Facet_is_boundary(TriangularPolar2D_Segment seg, TriangularPolar2D_Facet facet);

/**
 * `is_boundary` for triangular spherical segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TriangularSpherical3D_Segment_Facet_is_boundary(TriangularSpherical3D_Segment seg, TriangularSpherical3D_Facet facet);

///////////////////
// Quadrilateral //
///////////////////

/**
 * `is_boundary` for quadrilateral cartesian 2D segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian2D_Segment_Facet_is_boundary(QuadrilateralCartesian2D_Segment seg, QuadrilateralCartesian2D_Facet facet);

/**
 * `is_boundary` for quadrilateral cartesian 3D segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian3D_Segment_Facet_is_boundary(QuadrilateralCartesian3D_Segment seg, QuadrilateralCartesian3D_Facet facet);

/**
 * `is_boundary` for quadrilateral cylindrical segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCylindrical3D_Segment_Facet_is_boundary(QuadrilateralCylindrical3D_Segment seg, QuadrilateralCylindrical3D_Facet facet);

/**
 * `is_boundary` for quadrilateral polar segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool QuadrilateralPolar2D_Segment_Facet_is_boundary(QuadrilateralPolar2D_Segment seg, QuadrilateralPolar2D_Facet facet);

/**
 * `is_boundary` for quadrilateral spherical segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool QuadrilateralSpherical3D_Segment_Facet_is_boundary(QuadrilateralSpherical3D_Segment seg, QuadrilateralSpherical3D_Facet facet);

/////////////////
// Tetrahedral //
/////////////////

/**
 * `is_boundary` for tetrahedral cartesian 3D segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TetrahedralCartesian3D_Segment_Facet_is_boundary(TetrahedralCartesian3D_Segment seg, TetrahedralCartesian3D_Facet facet);

/**
 * `is_boundary` for tetrahedral cylindrical segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TetrahedralCylindrical3D_Segment_Facet_is_boundary(TetrahedralCylindrical3D_Segment seg, TetrahedralCylindrical3D_Facet facet);

/**
 * `is_boundary` for tetrahedral spherical segments and facets.
 * 
 * @param seg Segment
 * @param facet Facet
 * 
 * @retval true the facet **is** a boundary element of the segment.
 * @retval false the facet **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TetrahedralSpherical3D_Segment_Facet_is_boundary(TetrahedralSpherical3D_Segment seg, TetrahedralSpherical3D_Facet facet);

/*****************************************
 * IS_BOUNDARY (with segments and edges) *
 *****************************************/

////////////////
// Triangular //
////////////////

/**
 * `is_boundary` for triangular cartesian 2D segments and edges.
 * 
 * @param seg Segment
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the segment.
 * @retval false the edge **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian2D_Segment_Edge_is_boundary(TriangularCartesian2D_Segment seg, TriangularCartesian2D_Edge edge);

/**
 * `is_boundary` for triangular cartesian 3D segments and edges.
 * 
 * @param seg Segment
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the segment.
 * @retval false the edge **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian3D_Segment_Edge_is_boundary(TriangularCartesian3D_Segment seg, TriangularCartesian3D_Edge edge);

/**
 * `is_boundary` for triangular cylindrical segments and edges.
 * 
 * @param seg Segment
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the segment.
 * @retval false the edge **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TriangularCylindrical3D_Segment_Edge_is_boundary(TriangularCylindrical3D_Segment seg, TriangularCylindrical3D_Edge edge);

/**
 * `is_boundary` for triangular polar segments and edges.
 * 
 * @param seg Segment
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the segment.
 * @retval false the edge **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TriangularPolar2D_Segment_Edge_is_boundary(TriangularPolar2D_Segment seg, TriangularPolar2D_Edge edge);

/**
 * `is_boundary` for triangular spherical segments and edges.
 * 
 * @param seg Segment
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the segment.
 * @retval false the edge **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TriangularSpherical3D_Segment_Edge_is_boundary(TriangularSpherical3D_Segment seg, TriangularSpherical3D_Edge edge);

///////////////////
// Quadrilateral //
///////////////////

/**
 * `is_boundary` for quadrilateral cartesian 2D segments and edges.
 * 
 * @param seg Segment
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the segment.
 * @retval false the edge **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian2D_Segment_Edge_is_boundary(QuadrilateralCartesian2D_Segment seg, QuadrilateralCartesian2D_Edge edge);

/**
 * `is_boundary` for quadrilateral cartesian 3D segments and edges.
 * 
 * @param seg Segment
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the segment.
 * @retval false the edge **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian3D_Segment_Edge_is_boundary(QuadrilateralCartesian3D_Segment seg, QuadrilateralCartesian3D_Edge edge);

/**
 * `is_boundary` for quadrilateral cylindrical segments and edges.
 * 
 * @param seg Segment
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the segment.
 * @retval false the edge **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCylindrical3D_Segment_Edge_is_boundary(QuadrilateralCylindrical3D_Segment seg, QuadrilateralCylindrical3D_Edge edge);

/**
 * `is_boundary` for quadrilateral polar segments and edges.
 * 
 * @param seg Segment
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the segment.
 * @retval false the edge **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool QuadrilateralPolar2D_Segment_Edge_is_boundary(QuadrilateralPolar2D_Segment seg, QuadrilateralPolar2D_Edge edge);

/**
 * `is_boundary` for quadrilateral spherical segments and edges.
 * 
 * @param seg Segment
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the segment.
 * @retval false the edge **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool QuadrilateralSpherical3D_Segment_Edge_is_boundary(QuadrilateralSpherical3D_Segment seg, QuadrilateralSpherical3D_Edge edge);

/////////////////
// Tetrahedral //
/////////////////

/**
 * `is_boundary` for tetrahedral cartesian 3D segments and edges.
 * 
 * @param seg Segment
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the segment.
 * @retval false the edge **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TetrahedralCartesian3D_Segment_Edge_is_boundary(TetrahedralCartesian3D_Segment seg, TetrahedralCartesian3D_Edge edge);

/**
 * `is_boundary` for tetrahedral cylindrical segments and edges.
 * 
 * @param seg Segment
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the segment.
 * @retval false the edge **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TetrahedralCylindrical3D_Segment_Edge_is_boundary(TetrahedralCylindrical3D_Segment seg, TetrahedralCylindrical3D_Edge edge);

/**
 * `is_boundary` for tetrahedral spherical segments and edges.
 * 
 * @param seg Segment
 * @param edge Edge
 * 
 * @retval true the edge **is** a boundary element of the segment.
 * @retval false the edge **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TetrahedralSpherical3D_Segment_Edge_is_boundary(TetrahedralSpherical3D_Segment seg, TetrahedralSpherical3D_Edge edge);

/********************************************
 * IS_BOUNDARY (with segments and vertices) *
 ********************************************/

////////////
// Linear //
////////////

/**
 * `is_boundary` for linear cartesian 1D segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool LinearCartesian1D_Segment_Vertex_is_boundary(LinearCartesian1D_Segment seg, LinearCartesian1D_Vertex vertex);

/**
 * `is_boundary` for linear cartesian 2D segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool LinearCartesian2D_Segment_Vertex_is_boundary(LinearCartesian2D_Segment seg, LinearCartesian2D_Vertex vertex);

/**
 * `is_boundary` for linear cartesian 3D segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool LinearCartesian3D_Segment_Vertex_is_boundary(LinearCartesian3D_Segment seg, LinearCartesian3D_Vertex vertex);

/**
 * `is_boundary` for linear cylindrical segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool LinearCylindrical3D_Segment_Vertex_is_boundary(LinearCylindrical3D_Segment seg, LinearCylindrical3D_Vertex vertex);

/**
 * `is_boundary` for linear polar segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool LinearPolar2D_Segment_Vertex_is_boundary(LinearPolar2D_Segment seg, LinearPolar2D_Vertex vertex);

/**
 * `is_boundary` for linear spherical segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool LinearSpherical3D_Segment_Vertex_is_boundary(LinearSpherical3D_Segment seg, LinearSpherical3D_Vertex vertex);

////////////////
// Triangular //
////////////////

/**
 * `is_boundary` for triangular cartesian 2D segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian2D_Segment_Vertex_is_boundary(TriangularCartesian2D_Segment seg, TriangularCartesian2D_Vertex vertex);

/**
 * `is_boundary` for triangular cartesian 3D segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TriangularCartesian3D_Segment_Vertex_is_boundary(TriangularCartesian3D_Segment seg, TriangularCartesian3D_Vertex vertex);

/**
 * `is_boundary` for triangular cylindrical segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TriangularCylindrical3D_Segment_Vertex_is_boundary(TriangularCylindrical3D_Segment seg, TriangularCylindrical3D_Vertex vertex);

/**
 * `is_boundary` for triangular polar segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TriangularPolar2D_Segment_Vertex_is_boundary(TriangularPolar2D_Segment seg, TriangularPolar2D_Vertex vertex);

/**
 * `is_boundary` for triangular spherical segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TriangularSpherical3D_Segment_Vertex_is_boundary(TriangularSpherical3D_Segment seg, TriangularSpherical3D_Vertex vertex);

///////////////////
// Quadrilateral //
///////////////////

/**
 * `is_boundary` for quadrilateral cartesian 2D segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian2D_Segment_Vertex_is_boundary(QuadrilateralCartesian2D_Segment seg, QuadrilateralCartesian2D_Vertex vertex);

/**
 * `is_boundary` for quadrilateral cartesian 3D segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCartesian3D_Segment_Vertex_is_boundary(QuadrilateralCartesian3D_Segment seg, QuadrilateralCartesian3D_Vertex vertex);

/**
 * `is_boundary` for quadrilateral cylindrical segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool QuadrilateralCylindrical3D_Segment_Vertex_is_boundary(QuadrilateralCylindrical3D_Segment seg, QuadrilateralCylindrical3D_Vertex vertex);

/**
 * `is_boundary` for quadrilateral polar segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool QuadrilateralPolar2D_Segment_Vertex_is_boundary(QuadrilateralPolar2D_Segment seg, QuadrilateralPolar2D_Vertex vertex);

/**
 * `is_boundary` for quadrilateral spherical segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool QuadrilateralSpherical3D_Segment_Vertex_is_boundary(QuadrilateralSpherical3D_Segment seg, QuadrilateralSpherical3D_Vertex vertex);

/////////////////
// Tetrahedral //
/////////////////

/**
 * `is_boundary` for tetrahedral cartesian 3D segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TetrahedralCartesian3D_Segment_Vertex_is_boundary(TetrahedralCartesian3D_Segment seg, TetrahedralCartesian3D_Vertex vertex);

/**
 * `is_boundary` for tetrahedral cylindrical segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TetrahedralCylindrical3D_Segment_Vertex_is_boundary(TetrahedralCylindrical3D_Segment seg, TetrahedralCylindrical3D_Vertex vertex);

/**
 * `is_boundary` for tetrahedral spherical segments and vertices.
 * 
 * @param seg Segment
 * @param vertex Vertex
 * 
 * @retval true the vertex **is** a boundary element of the segment.
 * @retval false the vertex **is not** a boundary element of the segment.
 * 
 * @since 0.1.0
 */
bool TetrahedralSpherical3D_Segment_Vertex_is_boundary(TetrahedralSpherical3D_Segment seg, TetrahedralSpherical3D_Vertex vertex);

#endif /* end of include guard: ALGORITHMS_IS_BOUNDARY_HPP */
