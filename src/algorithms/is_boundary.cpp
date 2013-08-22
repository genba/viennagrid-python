#include "is_boundary.hpp"

#include <viennagrid/algorithm/boundary.hpp>

/******************************************
 * IS_BOUNDARY (with domains and facets) *
 ******************************************/

// Linear

bool LinearCartesian1D_Domain_Facet_is_boundary(LinearCartesian1D_Domain dom, LinearCartesian1D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

bool LinearCartesian2D_Domain_Facet_is_boundary(LinearCartesian2D_Domain dom, LinearCartesian2D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

bool LinearCartesian3D_Domain_Facet_is_boundary(LinearCartesian3D_Domain dom, LinearCartesian3D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

bool LinearCylindrical3D_Domain_Facet_is_boundary(LinearCylindrical3D_Domain dom, LinearCylindrical3D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

bool LinearPolar2D_Domain_Facet_is_boundary(LinearPolar2D_Domain dom, LinearPolar2D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

bool LinearSpherical3D_Domain_Facet_is_boundary(LinearSpherical3D_Domain dom, LinearSpherical3D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

// Triangular

bool TriangularCartesian2D_Domain_Facet_is_boundary(TriangularCartesian2D_Domain dom, TriangularCartesian2D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

bool TriangularCartesian3D_Domain_Facet_is_boundary(TriangularCartesian3D_Domain dom, TriangularCartesian3D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

bool TriangularCylindrical3D_Domain_Facet_is_boundary(TriangularCylindrical3D_Domain dom, TriangularCylindrical3D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

bool TriangularPolar2D_Domain_Facet_is_boundary(TriangularPolar2D_Domain dom, TriangularPolar2D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

bool TriangularSpherical3D_Domain_Facet_is_boundary(TriangularSpherical3D_Domain dom, TriangularSpherical3D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

// Quadrilateral

bool QuadrilateralCartesian2D_Domain_Facet_is_boundary(QuadrilateralCartesian2D_Domain dom, QuadrilateralCartesian2D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

bool QuadrilateralCartesian3D_Domain_Facet_is_boundary(QuadrilateralCartesian3D_Domain dom, QuadrilateralCartesian3D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

bool QuadrilateralCylindrical3D_Domain_Facet_is_boundary(QuadrilateralCylindrical3D_Domain dom, QuadrilateralCylindrical3D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

bool QuadrilateralPolar2D_Domain_Facet_is_boundary(QuadrilateralPolar2D_Domain dom, QuadrilateralPolar2D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

bool QuadrilateralSpherical3D_Domain_Facet_is_boundary(QuadrilateralSpherical3D_Domain dom, QuadrilateralSpherical3D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

// Tetrahedral

bool TetrahedralCartesian3D_Domain_Facet_is_boundary(TetrahedralCartesian3D_Domain dom, TetrahedralCartesian3D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

bool TetrahedralCylindrical3D_Domain_Facet_is_boundary(TetrahedralCylindrical3D_Domain dom, TetrahedralCylindrical3D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

bool TetrahedralSpherical3D_Domain_Facet_is_boundary(TetrahedralSpherical3D_Domain dom, TetrahedralSpherical3D_Facet facet)
{
	return viennagrid::is_boundary(dom.get_domain(), facet.get_facet());
}

/*****************************************
 * IS_BOUNDARY (with domains and edges) *
 *****************************************/

// Triangular

bool TriangularCartesian2D_Domain_Edge_is_boundary(TriangularCartesian2D_Domain dom, TriangularCartesian2D_Edge edge)
{
	return viennagrid::is_boundary(dom.get_domain(), edge.get_edge());
}

bool TriangularCartesian3D_Domain_Edge_is_boundary(TriangularCartesian3D_Domain dom, TriangularCartesian3D_Edge edge)
{
	return viennagrid::is_boundary(dom.get_domain(), edge.get_edge());
}

bool TriangularCylindrical3D_Domain_Edge_is_boundary(TriangularCylindrical3D_Domain dom, TriangularCylindrical3D_Edge edge)
{
	return viennagrid::is_boundary(dom.get_domain(), edge.get_edge());
}

bool TriangularPolar2D_Domain_Edge_is_boundary(TriangularPolar2D_Domain dom, TriangularPolar2D_Edge edge)
{
	return viennagrid::is_boundary(dom.get_domain(), edge.get_edge());
}

bool TriangularSpherical3D_Domain_Edge_is_boundary(TriangularSpherical3D_Domain dom, TriangularSpherical3D_Edge edge)
{
	return viennagrid::is_boundary(dom.get_domain(), edge.get_edge());
}

// Quadrilateral

bool QuadrilateralCartesian2D_Domain_Edge_is_boundary(QuadrilateralCartesian2D_Domain dom, QuadrilateralCartesian2D_Edge edge)
{
	return viennagrid::is_boundary(dom.get_domain(), edge.get_edge());
}

bool QuadrilateralCartesian3D_Domain_Edge_is_boundary(QuadrilateralCartesian3D_Domain dom, QuadrilateralCartesian3D_Edge edge)
{
	return viennagrid::is_boundary(dom.get_domain(), edge.get_edge());
}

bool QuadrilateralCylindrical3D_Domain_Edge_is_boundary(QuadrilateralCylindrical3D_Domain dom, QuadrilateralCylindrical3D_Edge edge)
{
	return viennagrid::is_boundary(dom.get_domain(), edge.get_edge());
}

bool QuadrilateralPolar2D_Domain_Edge_is_boundary(QuadrilateralPolar2D_Domain dom, QuadrilateralPolar2D_Edge edge)
{
	return viennagrid::is_boundary(dom.get_domain(), edge.get_edge());
}

bool QuadrilateralSpherical3D_Domain_Edge_is_boundary(QuadrilateralSpherical3D_Domain dom, QuadrilateralSpherical3D_Edge edge)
{
	return viennagrid::is_boundary(dom.get_domain(), edge.get_edge());
}

// Tetrahedral

bool TetrahedralCartesian3D_Domain_Edge_is_boundary(TetrahedralCartesian3D_Domain dom, TetrahedralCartesian3D_Edge edge)
{
	return viennagrid::is_boundary(dom.get_domain(), edge.get_edge());
}

bool TetrahedralCylindrical3D_Domain_Edge_is_boundary(TetrahedralCylindrical3D_Domain dom, TetrahedralCylindrical3D_Edge edge)
{
	return viennagrid::is_boundary(dom.get_domain(), edge.get_edge());
}

bool TetrahedralSpherical3D_Domain_Edge_is_boundary(TetrahedralSpherical3D_Domain dom, TetrahedralSpherical3D_Edge edge)
{
	return viennagrid::is_boundary(dom.get_domain(), edge.get_edge());
}

/********************************************
 * IS_BOUNDARY (with domains and vertices) *
 ********************************************/

// Linear

bool LinearCartesian1D_Domain_Vertex_is_boundary(LinearCartesian1D_Domain dom, LinearCartesian1D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

bool LinearCartesian2D_Domain_Vertex_is_boundary(LinearCartesian2D_Domain dom, LinearCartesian2D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

bool LinearCartesian3D_Domain_Vertex_is_boundary(LinearCartesian3D_Domain dom, LinearCartesian3D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

bool LinearCylindrical3D_Domain_Vertex_is_boundary(LinearCylindrical3D_Domain dom, LinearCylindrical3D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

bool LinearPolar2D_Domain_Vertex_is_boundary(LinearPolar2D_Domain dom, LinearPolar2D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

bool LinearSpherical3D_Domain_Vertex_is_boundary(LinearSpherical3D_Domain dom, LinearSpherical3D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

// Triangular

bool TriangularCartesian2D_Domain_Vertex_is_boundary(TriangularCartesian2D_Domain dom, TriangularCartesian2D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

bool TriangularCartesian3D_Domain_Vertex_is_boundary(TriangularCartesian3D_Domain dom, TriangularCartesian3D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

bool TriangularCylindrical3D_Domain_Vertex_is_boundary(TriangularCylindrical3D_Domain dom, TriangularCylindrical3D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

bool TriangularPolar2D_Domain_Vertex_is_boundary(TriangularPolar2D_Domain dom, TriangularPolar2D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

bool TriangularSpherical3D_Domain_Vertex_is_boundary(TriangularSpherical3D_Domain dom, TriangularSpherical3D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

// Quadrilateral

bool QuadrilateralCartesian2D_Domain_Vertex_is_boundary(QuadrilateralCartesian2D_Domain dom, QuadrilateralCartesian2D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

bool QuadrilateralCartesian3D_Domain_Vertex_is_boundary(QuadrilateralCartesian3D_Domain dom, QuadrilateralCartesian3D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

bool QuadrilateralCylindrical3D_Domain_Vertex_is_boundary(QuadrilateralCylindrical3D_Domain dom, QuadrilateralCylindrical3D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

bool QuadrilateralPolar2D_Domain_Vertex_is_boundary(QuadrilateralPolar2D_Domain dom, QuadrilateralPolar2D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

bool QuadrilateralSpherical3D_Domain_Vertex_is_boundary(QuadrilateralSpherical3D_Domain dom, QuadrilateralSpherical3D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

// Tetrahedral

bool TetrahedralCartesian3D_Domain_Vertex_is_boundary(TetrahedralCartesian3D_Domain dom, TetrahedralCartesian3D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

bool TetrahedralCylindrical3D_Domain_Vertex_is_boundary(TetrahedralCylindrical3D_Domain dom, TetrahedralCylindrical3D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

bool TetrahedralSpherical3D_Domain_Vertex_is_boundary(TetrahedralSpherical3D_Domain dom, TetrahedralSpherical3D_Vertex vertex)
{
	return viennagrid::is_boundary(dom.get_domain(), vertex.get_vertex());
}

/*******************************************
 * IS_BOUNDARY (with segments and facets) *
 *******************************************/

// Linear

bool LinearCartesian1D_Segment_Facet_is_boundary(LinearCartesian1D_Segment seg, LinearCartesian1D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

bool LinearCartesian2D_Segment_Facet_is_boundary(LinearCartesian2D_Segment seg, LinearCartesian2D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

bool LinearCartesian3D_Segment_Facet_is_boundary(LinearCartesian3D_Segment seg, LinearCartesian3D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

bool LinearCylindrical3D_Segment_Facet_is_boundary(LinearCylindrical3D_Segment seg, LinearCylindrical3D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

bool LinearPolar2D_Segment_Facet_is_boundary(LinearPolar2D_Segment seg, LinearPolar2D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

bool LinearSpherical3D_Segment_Facet_is_boundary(LinearSpherical3D_Segment seg, LinearSpherical3D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

// Triangular

bool TriangularCartesian2D_Segment_Facet_is_boundary(TriangularCartesian2D_Segment seg, TriangularCartesian2D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

bool TriangularCartesian3D_Segment_Facet_is_boundary(TriangularCartesian3D_Segment seg, TriangularCartesian3D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

bool TriangularCylindrical3D_Segment_Facet_is_boundary(TriangularCylindrical3D_Segment seg, TriangularCylindrical3D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

bool TriangularPolar2D_Segment_Facet_is_boundary(TriangularPolar2D_Segment seg, TriangularPolar2D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

bool TriangularSpherical3D_Segment_Facet_is_boundary(TriangularSpherical3D_Segment seg, TriangularSpherical3D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

// Quadrilateral

bool QuadrilateralCartesian2D_Segment_Facet_is_boundary(QuadrilateralCartesian2D_Segment seg, QuadrilateralCartesian2D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

bool QuadrilateralCartesian3D_Segment_Facet_is_boundary(QuadrilateralCartesian3D_Segment seg, QuadrilateralCartesian3D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

bool QuadrilateralCylindrical3D_Segment_Facet_is_boundary(QuadrilateralCylindrical3D_Segment seg, QuadrilateralCylindrical3D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

bool QuadrilateralPolar2D_Segment_Facet_is_boundary(QuadrilateralPolar2D_Segment seg, QuadrilateralPolar2D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

bool QuadrilateralSpherical3D_Segment_Facet_is_boundary(QuadrilateralSpherical3D_Segment seg, QuadrilateralSpherical3D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

// Tetrahedral

bool TetrahedralCartesian3D_Segment_Facet_is_boundary(TetrahedralCartesian3D_Segment seg, TetrahedralCartesian3D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

bool TetrahedralCylindrical3D_Segment_Facet_is_boundary(TetrahedralCylindrical3D_Segment seg, TetrahedralCylindrical3D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

bool TetrahedralSpherical3D_Segment_Facet_is_boundary(TetrahedralSpherical3D_Segment seg, TetrahedralSpherical3D_Facet facet)
{
	return viennagrid::is_boundary(seg.get_segment(), facet.get_facet());
}

/******************************************
 * IS_BOUNDARY (with segments and edges) *
 ******************************************/

// Triangular

bool TriangularCartesian2D_Segment_Edge_is_boundary(TriangularCartesian2D_Segment seg, TriangularCartesian2D_Edge edge)
{
	return viennagrid::is_boundary(seg.get_segment(), edge.get_edge());
}

bool TriangularCartesian3D_Segment_Edge_is_boundary(TriangularCartesian3D_Segment seg, TriangularCartesian3D_Edge edge)
{
	return viennagrid::is_boundary(seg.get_segment(), edge.get_edge());
}

bool TriangularCylindrical3D_Segment_Edge_is_boundary(TriangularCylindrical3D_Segment seg, TriangularCylindrical3D_Edge edge)
{
	return viennagrid::is_boundary(seg.get_segment(), edge.get_edge());
}

bool TriangularPolar2D_Segment_Edge_is_boundary(TriangularPolar2D_Segment seg, TriangularPolar2D_Edge edge)
{
	return viennagrid::is_boundary(seg.get_segment(), edge.get_edge());
}

bool TriangularSpherical3D_Segment_Edge_is_boundary(TriangularSpherical3D_Segment seg, TriangularSpherical3D_Edge edge)
{
	return viennagrid::is_boundary(seg.get_segment(), edge.get_edge());
}

// Quadrilateral

bool QuadrilateralCartesian2D_Segment_Edge_is_boundary(QuadrilateralCartesian2D_Segment seg, QuadrilateralCartesian2D_Edge edge)
{
	return viennagrid::is_boundary(seg.get_segment(), edge.get_edge());
}

bool QuadrilateralCartesian3D_Segment_Edge_is_boundary(QuadrilateralCartesian3D_Segment seg, QuadrilateralCartesian3D_Edge edge)
{
	return viennagrid::is_boundary(seg.get_segment(), edge.get_edge());
}

bool QuadrilateralCylindrical3D_Segment_Edge_is_boundary(QuadrilateralCylindrical3D_Segment seg, QuadrilateralCylindrical3D_Edge edge)
{
	return viennagrid::is_boundary(seg.get_segment(), edge.get_edge());
}

bool QuadrilateralPolar2D_Segment_Edge_is_boundary(QuadrilateralPolar2D_Segment seg, QuadrilateralPolar2D_Edge edge)
{
	return viennagrid::is_boundary(seg.get_segment(), edge.get_edge());
}

bool QuadrilateralSpherical3D_Segment_Edge_is_boundary(QuadrilateralSpherical3D_Segment seg, QuadrilateralSpherical3D_Edge edge)
{
	return viennagrid::is_boundary(seg.get_segment(), edge.get_edge());
}

// Tetrahedral

bool TetrahedralCartesian3D_Segment_Edge_is_boundary(TetrahedralCartesian3D_Segment seg, TetrahedralCartesian3D_Edge edge)
{
	return viennagrid::is_boundary(seg.get_segment(), edge.get_edge());
}

bool TetrahedralCylindrical3D_Segment_Edge_is_boundary(TetrahedralCylindrical3D_Segment seg, TetrahedralCylindrical3D_Edge edge)
{
	return viennagrid::is_boundary(seg.get_segment(), edge.get_edge());
}

bool TetrahedralSpherical3D_Segment_Edge_is_boundary(TetrahedralSpherical3D_Segment seg, TetrahedralSpherical3D_Edge edge)
{
	return viennagrid::is_boundary(seg.get_segment(), edge.get_edge());
}

/*********************************************
 * IS_BOUNDARY (with segments and vertices) *
 *********************************************/

// Linear

bool LinearCartesian1D_Segment_Vertex_is_boundary(LinearCartesian1D_Segment seg, LinearCartesian1D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

bool LinearCartesian2D_Segment_Vertex_is_boundary(LinearCartesian2D_Segment seg, LinearCartesian2D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

bool LinearCartesian3D_Segment_Vertex_is_boundary(LinearCartesian3D_Segment seg, LinearCartesian3D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

bool LinearCylindrical3D_Segment_Vertex_is_boundary(LinearCylindrical3D_Segment seg, LinearCylindrical3D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

bool LinearPolar2D_Segment_Vertex_is_boundary(LinearPolar2D_Segment seg, LinearPolar2D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

bool LinearSpherical3D_Segment_Vertex_is_boundary(LinearSpherical3D_Segment seg, LinearSpherical3D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

// Triangular

bool TriangularCartesian2D_Segment_Vertex_is_boundary(TriangularCartesian2D_Segment seg, TriangularCartesian2D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

bool TriangularCartesian3D_Segment_Vertex_is_boundary(TriangularCartesian3D_Segment seg, TriangularCartesian3D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

bool TriangularCylindrical3D_Segment_Vertex_is_boundary(TriangularCylindrical3D_Segment seg, TriangularCylindrical3D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

bool TriangularPolar2D_Segment_Vertex_is_boundary(TriangularPolar2D_Segment seg, TriangularPolar2D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

bool TriangularSpherical3D_Segment_Vertex_is_boundary(TriangularSpherical3D_Segment seg, TriangularSpherical3D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

// Quadrilateral

bool QuadrilateralCartesian2D_Segment_Vertex_is_boundary(QuadrilateralCartesian2D_Segment seg, QuadrilateralCartesian2D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

bool QuadrilateralCartesian3D_Segment_Vertex_is_boundary(QuadrilateralCartesian3D_Segment seg, QuadrilateralCartesian3D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

bool QuadrilateralCylindrical3D_Segment_Vertex_is_boundary(QuadrilateralCylindrical3D_Segment seg, QuadrilateralCylindrical3D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

bool QuadrilateralPolar2D_Segment_Vertex_is_boundary(QuadrilateralPolar2D_Segment seg, QuadrilateralPolar2D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

bool QuadrilateralSpherical3D_Segment_Vertex_is_boundary(QuadrilateralSpherical3D_Segment seg, QuadrilateralSpherical3D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

// Tetrahedral

bool TetrahedralCartesian3D_Segment_Vertex_is_boundary(TetrahedralCartesian3D_Segment seg, TetrahedralCartesian3D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

bool TetrahedralCylindrical3D_Segment_Vertex_is_boundary(TetrahedralCylindrical3D_Segment seg, TetrahedralCylindrical3D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}

bool TetrahedralSpherical3D_Segment_Vertex_is_boundary(TetrahedralSpherical3D_Segment seg, TetrahedralSpherical3D_Vertex vertex)
{
	return viennagrid::is_boundary(seg.get_segment(), vertex.get_vertex());
}
