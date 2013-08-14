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

// #include "../edges/linear.hpp"
#include "../edges/triangular.hpp"
#include "../edges/quadrilateral.hpp"
#include "../edges/tetrahedral.hpp"

/******************************************
 * IS_INTERFACE (with domains and facets) *
 ******************************************/

bool LinearCartesian1D_Domain_Facet_is_boundary(LinearCartesian1D_Domain dom, LinearCartesian1D_Facet facet);
bool LinearCartesian2D_Domain_Facet_is_boundary(LinearCartesian2D_Domain dom, LinearCartesian2D_Facet facet);
bool LinearCartesian3D_Domain_Facet_is_boundary(LinearCartesian3D_Domain dom, LinearCartesian3D_Facet facet);
bool LinearCylindrical3D_Domain_Facet_is_boundary(LinearCylindrical3D_Domain dom, LinearCylindrical3D_Facet facet);
bool LinearPolar2D_Domain_Facet_is_boundary(LinearPolar2D_Domain dom, LinearPolar2D_Facet facet);
bool LinearSpherical3D_Domain_Facet_is_boundary(LinearSpherical3D_Domain dom, LinearSpherical3D_Facet facet);

bool TriangularCartesian2D_Domain_Facet_is_boundary(TriangularCartesian2D_Domain dom, TriangularCartesian2D_Facet facet);
bool TriangularCartesian3D_Domain_Facet_is_boundary(TriangularCartesian3D_Domain dom, TriangularCartesian3D_Facet facet);
bool TriangularCylindrical3D_Domain_Facet_is_boundary(TriangularCylindrical3D_Domain dom, TriangularCylindrical3D_Facet facet);
bool TriangularPolar2D_Domain_Facet_is_boundary(TriangularPolar2D_Domain dom, TriangularPolar2D_Facet facet);
bool TriangularSpherical3D_Domain_Facet_is_boundary(TriangularSpherical3D_Domain dom, TriangularSpherical3D_Facet facet);

bool QuadrilateralCartesian2D_Domain_Facet_is_boundary(QuadrilateralCartesian2D_Domain dom, QuadrilateralCartesian2D_Facet facet);
bool QuadrilateralCartesian3D_Domain_Facet_is_boundary(QuadrilateralCartesian3D_Domain dom, QuadrilateralCartesian3D_Facet facet);
bool QuadrilateralCylindrical3D_Domain_Facet_is_boundary(QuadrilateralCylindrical3D_Domain dom, QuadrilateralCylindrical3D_Facet facet);
bool QuadrilateralPolar2D_Domain_Facet_is_boundary(QuadrilateralPolar2D_Domain dom, QuadrilateralPolar2D_Facet facet);
bool QuadrilateralSpherical3D_Domain_Facet_is_boundary(QuadrilateralSpherical3D_Domain dom, QuadrilateralSpherical3D_Facet facet);

bool TetrahedralCartesian3D_Domain_Facet_is_boundary(TetrahedralCartesian3D_Domain dom, TetrahedralCartesian3D_Facet facet);
bool TetrahedralCylindrical3D_Domain_Facet_is_boundary(TetrahedralCylindrical3D_Domain dom, TetrahedralCylindrical3D_Facet facet);
bool TetrahedralSpherical3D_Domain_Facet_is_boundary(TetrahedralSpherical3D_Domain dom, TetrahedralSpherical3D_Facet facet);

/*****************************************
 * IS_INTERFACE (with domains and edges) *
 *****************************************/

/*
bool LinearCartesian1D_Domain_Edge_is_boundary(LinearCartesian1D_Domain dom, LinearCartesian1D_Edge edge);
bool LinearCartesian2D_Domain_Edge_is_boundary(LinearCartesian2D_Domain dom, LinearCartesian2D_Edge edge);
bool LinearCartesian3D_Domain_Edge_is_boundary(LinearCartesian3D_Domain dom, LinearCartesian3D_Edge edge);
bool LinearCylindrical3D_Domain_Edge_is_boundary(LinearCylindrical3D_Domain dom, LinearCylindrical3D_Edge edge);
bool LinearPolar2D_Domain_Edge_is_boundary(LinearPolar2D_Domain dom, LinearPolar2D_Edge edge);
bool LinearSpherical3D_Domain_Edge_is_boundary(LinearSpherical3D_Domain dom, LinearSpherical3D_Edge edge);
*/

bool TriangularCartesian2D_Domain_Edge_is_boundary(TriangularCartesian2D_Domain dom, TriangularCartesian2D_Edge edge);
bool TriangularCartesian3D_Domain_Edge_is_boundary(TriangularCartesian3D_Domain dom, TriangularCartesian3D_Edge edge);
bool TriangularCylindrical3D_Domain_Edge_is_boundary(TriangularCylindrical3D_Domain dom, TriangularCylindrical3D_Edge edge);
bool TriangularPolar2D_Domain_Edge_is_boundary(TriangularPolar2D_Domain dom, TriangularPolar2D_Edge edge);
bool TriangularSpherical3D_Domain_Edge_is_boundary(TriangularSpherical3D_Domain dom, TriangularSpherical3D_Edge edge);

bool QuadrilateralCartesian2D_Domain_Edge_is_boundary(QuadrilateralCartesian2D_Domain dom, QuadrilateralCartesian2D_Edge edge);
bool QuadrilateralCartesian3D_Domain_Edge_is_boundary(QuadrilateralCartesian3D_Domain dom, QuadrilateralCartesian3D_Edge edge);
bool QuadrilateralCylindrical3D_Domain_Edge_is_boundary(QuadrilateralCylindrical3D_Domain dom, QuadrilateralCylindrical3D_Edge edge);
bool QuadrilateralPolar2D_Domain_Edge_is_boundary(QuadrilateralPolar2D_Domain dom, QuadrilateralPolar2D_Edge edge);
bool QuadrilateralSpherical3D_Domain_Edge_is_boundary(QuadrilateralSpherical3D_Domain dom, QuadrilateralSpherical3D_Edge edge);

bool TetrahedralCartesian3D_Domain_Edge_is_boundary(TetrahedralCartesian3D_Domain dom, TetrahedralCartesian3D_Edge edge);
bool TetrahedralCylindrical3D_Domain_Edge_is_boundary(TetrahedralCylindrical3D_Domain dom, TetrahedralCylindrical3D_Edge edge);
bool TetrahedralSpherical3D_Domain_Edge_is_boundary(TetrahedralSpherical3D_Domain dom, TetrahedralSpherical3D_Edge edge);

/********************************************
 * IS_INTERFACE (with domains and vertices) *
 ********************************************/

bool LinearCartesian1D_Domain_Vertex_is_boundary(LinearCartesian1D_Domain dom, LinearCartesian1D_Vertex vertex);
bool LinearCartesian2D_Domain_Vertex_is_boundary(LinearCartesian2D_Domain dom, LinearCartesian2D_Vertex vertex);
bool LinearCartesian3D_Domain_Vertex_is_boundary(LinearCartesian3D_Domain dom, LinearCartesian3D_Vertex vertex);
bool LinearCylindrical3D_Domain_Vertex_is_boundary(LinearCylindrical3D_Domain dom, LinearCylindrical3D_Vertex vertex);
bool LinearPolar2D_Domain_Vertex_is_boundary(LinearPolar2D_Domain dom, LinearPolar2D_Vertex vertex);
bool LinearSpherical3D_Domain_Vertex_is_boundary(LinearSpherical3D_Domain dom, LinearSpherical3D_Vertex vertex);

bool TriangularCartesian2D_Domain_Vertex_is_boundary(TriangularCartesian2D_Domain dom, TriangularCartesian2D_Vertex vertex);
bool TriangularCartesian3D_Domain_Vertex_is_boundary(TriangularCartesian3D_Domain dom, TriangularCartesian3D_Vertex vertex);
bool TriangularCylindrical3D_Domain_Vertex_is_boundary(TriangularCylindrical3D_Domain dom, TriangularCylindrical3D_Vertex vertex);
bool TriangularPolar2D_Domain_Vertex_is_boundary(TriangularPolar2D_Domain dom, TriangularPolar2D_Vertex vertex);
bool TriangularSpherical3D_Domain_Vertex_is_boundary(TriangularSpherical3D_Domain dom, TriangularSpherical3D_Vertex vertex);

bool QuadrilateralCartesian2D_Domain_Vertex_is_boundary(QuadrilateralCartesian2D_Domain dom, QuadrilateralCartesian2D_Vertex vertex);
bool QuadrilateralCartesian3D_Domain_Vertex_is_boundary(QuadrilateralCartesian3D_Domain dom, QuadrilateralCartesian3D_Vertex vertex);
bool QuadrilateralCylindrical3D_Domain_Vertex_is_boundary(QuadrilateralCylindrical3D_Domain dom, QuadrilateralCylindrical3D_Vertex vertex);
bool QuadrilateralPolar2D_Domain_Vertex_is_boundary(QuadrilateralPolar2D_Domain dom, QuadrilateralPolar2D_Vertex vertex);
bool QuadrilateralSpherical3D_Domain_Vertex_is_boundary(QuadrilateralSpherical3D_Domain dom, QuadrilateralSpherical3D_Vertex vertex);

bool TetrahedralCartesian3D_Domain_Vertex_is_boundary(TetrahedralCartesian3D_Domain dom, TetrahedralCartesian3D_Vertex vertex);
bool TetrahedralCylindrical3D_Domain_Vertex_is_boundary(TetrahedralCylindrical3D_Domain dom, TetrahedralCylindrical3D_Vertex vertex);
bool TetrahedralSpherical3D_Domain_Vertex_is_boundary(TetrahedralSpherical3D_Domain dom, TetrahedralSpherical3D_Vertex vertex);

/*******************************************
 * IS_INTERFACE (with segments and facets) *
 *******************************************/

bool LinearCartesian1D_Segment_Facet_is_boundary(LinearCartesian1D_Segment seg, LinearCartesian1D_Facet facet);
bool LinearCartesian2D_Segment_Facet_is_boundary(LinearCartesian2D_Segment seg, LinearCartesian2D_Facet facet);
bool LinearCartesian3D_Segment_Facet_is_boundary(LinearCartesian3D_Segment seg, LinearCartesian3D_Facet facet);
bool LinearCylindrical3D_Segment_Facet_is_boundary(LinearCylindrical3D_Segment seg, LinearCylindrical3D_Facet facet);
bool LinearPolar2D_Segment_Facet_is_boundary(LinearPolar2D_Segment seg, LinearPolar2D_Facet facet);
bool LinearSpherical3D_Segment_Facet_is_boundary(LinearSpherical3D_Segment seg, LinearSpherical3D_Facet facet);

bool TriangularCartesian2D_Segment_Facet_is_boundary(TriangularCartesian2D_Segment seg, TriangularCartesian2D_Facet facet);
bool TriangularCartesian3D_Segment_Facet_is_boundary(TriangularCartesian3D_Segment seg, TriangularCartesian3D_Facet facet);
bool TriangularCylindrical3D_Segment_Facet_is_boundary(TriangularCylindrical3D_Segment seg, TriangularCylindrical3D_Facet facet);
bool TriangularPolar2D_Segment_Facet_is_boundary(TriangularPolar2D_Segment seg, TriangularPolar2D_Facet facet);
bool TriangularSpherical3D_Segment_Facet_is_boundary(TriangularSpherical3D_Segment seg, TriangularSpherical3D_Facet facet);

bool QuadrilateralCartesian2D_Segment_Facet_is_boundary(QuadrilateralCartesian2D_Segment seg, QuadrilateralCartesian2D_Facet facet);
bool QuadrilateralCartesian3D_Segment_Facet_is_boundary(QuadrilateralCartesian3D_Segment seg, QuadrilateralCartesian3D_Facet facet);
bool QuadrilateralCylindrical3D_Segment_Facet_is_boundary(QuadrilateralCylindrical3D_Segment seg, QuadrilateralCylindrical3D_Facet facet);
bool QuadrilateralPolar2D_Segment_Facet_is_boundary(QuadrilateralPolar2D_Segment seg, QuadrilateralPolar2D_Facet facet);
bool QuadrilateralSpherical3D_Segment_Facet_is_boundary(QuadrilateralSpherical3D_Segment seg, QuadrilateralSpherical3D_Facet facet);

bool TetrahedralCartesian3D_Segment_Facet_is_boundary(TetrahedralCartesian3D_Segment seg, TetrahedralCartesian3D_Facet facet);
bool TetrahedralCylindrical3D_Segment_Facet_is_boundary(TetrahedralCylindrical3D_Segment seg, TetrahedralCylindrical3D_Facet facet);
bool TetrahedralSpherical3D_Segment_Facet_is_boundary(TetrahedralSpherical3D_Segment seg, TetrahedralSpherical3D_Facet facet);

/******************************************
 * IS_INTERFACE (with segments and edges) *
 ******************************************/

/*
bool LinearCartesian1D_Segment_Edge_is_boundary(LinearCartesian1D_Segment seg, LinearCartesian1D_Edge edge);
bool LinearCartesian2D_Segment_Edge_is_boundary(LinearCartesian2D_Segment seg, LinearCartesian2D_Edge edge);
bool LinearCartesian3D_Segment_Edge_is_boundary(LinearCartesian3D_Segment seg, LinearCartesian3D_Edge edge);
bool LinearCylindrical3D_Segment_Edge_is_boundary(LinearCylindrical3D_Segment seg, LinearCylindrical3D_Edge edge);
bool LinearPolar2D_Segment_Edge_is_boundary(LinearPolar2D_Segment seg, LinearPolar2D_Edge edge);
bool LinearSpherical3D_Segment_Edge_is_boundary(LinearSpherical3D_Segment seg, LinearSpherical3D_Edge edge);
*/

bool TriangularCartesian2D_Segment_Edge_is_boundary(TriangularCartesian2D_Segment seg, TriangularCartesian2D_Edge edge);
bool TriangularCartesian3D_Segment_Edge_is_boundary(TriangularCartesian3D_Segment seg, TriangularCartesian3D_Edge edge);
bool TriangularCylindrical3D_Segment_Edge_is_boundary(TriangularCylindrical3D_Segment seg, TriangularCylindrical3D_Edge edge);
bool TriangularPolar2D_Segment_Edge_is_boundary(TriangularPolar2D_Segment seg, TriangularPolar2D_Edge edge);
bool TriangularSpherical3D_Segment_Edge_is_boundary(TriangularSpherical3D_Segment seg, TriangularSpherical3D_Edge edge);

bool QuadrilateralCartesian2D_Segment_Edge_is_boundary(QuadrilateralCartesian2D_Segment seg, QuadrilateralCartesian2D_Edge edge);
bool QuadrilateralCartesian3D_Segment_Edge_is_boundary(QuadrilateralCartesian3D_Segment seg, QuadrilateralCartesian3D_Edge edge);
bool QuadrilateralCylindrical3D_Segment_Edge_is_boundary(QuadrilateralCylindrical3D_Segment seg, QuadrilateralCylindrical3D_Edge edge);
bool QuadrilateralPolar2D_Segment_Edge_is_boundary(QuadrilateralPolar2D_Segment seg, QuadrilateralPolar2D_Edge edge);
bool QuadrilateralSpherical3D_Segment_Edge_is_boundary(QuadrilateralSpherical3D_Segment seg, QuadrilateralSpherical3D_Edge edge);

bool TetrahedralCartesian3D_Segment_Edge_is_boundary(TetrahedralCartesian3D_Segment seg, TetrahedralCartesian3D_Edge edge);
bool TetrahedralCylindrical3D_Segment_Edge_is_boundary(TetrahedralCylindrical3D_Segment seg, TetrahedralCylindrical3D_Edge edge);
bool TetrahedralSpherical3D_Segment_Edge_is_boundary(TetrahedralSpherical3D_Segment seg, TetrahedralSpherical3D_Edge edge);

/*********************************************
 * IS_INTERFACE (with segments and vertices) *
 *********************************************/

bool LinearCartesian1D_Segment_Vertex_is_boundary(LinearCartesian1D_Segment seg, LinearCartesian1D_Vertex vertex);
bool LinearCartesian2D_Segment_Vertex_is_boundary(LinearCartesian2D_Segment seg, LinearCartesian2D_Vertex vertex);
bool LinearCartesian3D_Segment_Vertex_is_boundary(LinearCartesian3D_Segment seg, LinearCartesian3D_Vertex vertex);
bool LinearCylindrical3D_Segment_Vertex_is_boundary(LinearCylindrical3D_Segment seg, LinearCylindrical3D_Vertex vertex);
bool LinearPolar2D_Segment_Vertex_is_boundary(LinearPolar2D_Segment seg, LinearPolar2D_Vertex vertex);
bool LinearSpherical3D_Segment_Vertex_is_boundary(LinearSpherical3D_Segment seg, LinearSpherical3D_Vertex vertex);

bool TriangularCartesian2D_Segment_Vertex_is_boundary(TriangularCartesian2D_Segment seg, TriangularCartesian2D_Vertex vertex);
bool TriangularCartesian3D_Segment_Vertex_is_boundary(TriangularCartesian3D_Segment seg, TriangularCartesian3D_Vertex vertex);
bool TriangularCylindrical3D_Segment_Vertex_is_boundary(TriangularCylindrical3D_Segment seg, TriangularCylindrical3D_Vertex vertex);
bool TriangularPolar2D_Segment_Vertex_is_boundary(TriangularPolar2D_Segment seg, TriangularPolar2D_Vertex vertex);
bool TriangularSpherical3D_Segment_Vertex_is_boundary(TriangularSpherical3D_Segment seg, TriangularSpherical3D_Vertex vertex);

bool QuadrilateralCartesian2D_Segment_Vertex_is_boundary(QuadrilateralCartesian2D_Segment seg, QuadrilateralCartesian2D_Vertex vertex);
bool QuadrilateralCartesian3D_Segment_Vertex_is_boundary(QuadrilateralCartesian3D_Segment seg, QuadrilateralCartesian3D_Vertex vertex);
bool QuadrilateralCylindrical3D_Segment_Vertex_is_boundary(QuadrilateralCylindrical3D_Segment seg, QuadrilateralCylindrical3D_Vertex vertex);
bool QuadrilateralPolar2D_Segment_Vertex_is_boundary(QuadrilateralPolar2D_Segment seg, QuadrilateralPolar2D_Vertex vertex);
bool QuadrilateralSpherical3D_Segment_Vertex_is_boundary(QuadrilateralSpherical3D_Segment seg, QuadrilateralSpherical3D_Vertex vertex);

bool TetrahedralCartesian3D_Segment_Vertex_is_boundary(TetrahedralCartesian3D_Segment seg, TetrahedralCartesian3D_Vertex vertex);
bool TetrahedralCylindrical3D_Segment_Vertex_is_boundary(TetrahedralCylindrical3D_Segment seg, TetrahedralCylindrical3D_Vertex vertex);
bool TetrahedralSpherical3D_Segment_Vertex_is_boundary(TetrahedralSpherical3D_Segment seg, TetrahedralSpherical3D_Vertex vertex);

#endif /* end of include guard: ALGORITHMS_IS_BOUNDARY_HPP */
