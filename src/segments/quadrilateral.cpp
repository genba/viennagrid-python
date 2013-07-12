#include "quadrilateral.hpp"

#include "../domains/quadrilateral.hpp"
#include "../cells/types.hpp"
#include "../vertices/types.hpp"
#include "../segmentations/quadrilateral.hpp"

//////////////////////////////////////
// QuadrilateralCartesian2D_Segment //
//////////////////////////////////////

QuadrilateralCartesian2D_Segment::QuadrilateralCartesian2D_Segment(QuadrilateralCartesian2D_Segment_t &initial_segment, QuadrilateralCartesian2D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void QuadrilateralCartesian2D_Segment::create_cell(QuadrilateralCartesian2D_Vertex vertex1, QuadrilateralCartesian2D_Vertex vertex2, QuadrilateralCartesian2D_Vertex vertex3, QuadrilateralCartesian2D_Vertex vertex4)
{
	viennagrid::storage::static_array<QuadrilateralCartesian2D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	vertices[3] = viennagrid::handle(segmentation->get_domain(), vertex4.get_vertex());
	viennagrid::make_element<viennagrid::quadrilateral_tag>(segment, vertices.begin(), vertices.end());
}

list QuadrilateralCartesian2D_Segment::get_cells()
{
	list cells;
	// TODO: implement
	return cells;
}

//////////////////////////////////////
// QuadrilateralCartesian3D_Segment //
//////////////////////////////////////

QuadrilateralCartesian3D_Segment::QuadrilateralCartesian3D_Segment(QuadrilateralCartesian3D_Segment_t &initial_segment, QuadrilateralCartesian3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void QuadrilateralCartesian3D_Segment::create_cell(QuadrilateralCartesian3D_Vertex vertex1, QuadrilateralCartesian3D_Vertex vertex2, QuadrilateralCartesian3D_Vertex vertex3, QuadrilateralCartesian3D_Vertex vertex4)
{
	viennagrid::storage::static_array<QuadrilateralCartesian3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	vertices[3] = viennagrid::handle(segmentation->get_domain(), vertex4.get_vertex());
	viennagrid::make_element<viennagrid::quadrilateral_tag>(segment, vertices.begin(), vertices.end());
}

list QuadrilateralCartesian3D_Segment::get_cells()
{
	list cells;
	// TODO: implement
	return cells;
}

////////////////////////////////////////
// QuadrilateralCylindrical3D_Segment //
////////////////////////////////////////

QuadrilateralCylindrical3D_Segment::QuadrilateralCylindrical3D_Segment(QuadrilateralCylindrical3D_Segment_t &initial_segment, QuadrilateralCylindrical3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void QuadrilateralCylindrical3D_Segment::create_cell(QuadrilateralCylindrical3D_Vertex vertex1, QuadrilateralCylindrical3D_Vertex vertex2, QuadrilateralCylindrical3D_Vertex vertex3, QuadrilateralCylindrical3D_Vertex vertex4)
{
	viennagrid::storage::static_array<QuadrilateralCylindrical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	vertices[3] = viennagrid::handle(segmentation->get_domain(), vertex4.get_vertex());
	viennagrid::make_element<viennagrid::quadrilateral_tag>(segment, vertices.begin(), vertices.end());
}

list QuadrilateralCylindrical3D_Segment::get_cells()
{
	list cells;
	// TODO: implement
	return cells;
}

//////////////////////////////////
// QuadrilateralPolar2D_Segment //
//////////////////////////////////

QuadrilateralPolar2D_Segment::QuadrilateralPolar2D_Segment(QuadrilateralPolar2D_Segment_t &initial_segment, QuadrilateralPolar2D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void QuadrilateralPolar2D_Segment::create_cell(QuadrilateralPolar2D_Vertex vertex1, QuadrilateralPolar2D_Vertex vertex2, QuadrilateralPolar2D_Vertex vertex3, QuadrilateralPolar2D_Vertex vertex4)
{
	viennagrid::storage::static_array<QuadrilateralPolar2D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	vertices[3] = viennagrid::handle(segmentation->get_domain(), vertex4.get_vertex());
	viennagrid::make_element<viennagrid::quadrilateral_tag>(segment, vertices.begin(), vertices.end());
}

list QuadrilateralPolar2D_Segment::get_cells()
{
	list cells;
	// TODO: implement
	return cells;
}

//////////////////////////////////////
// QuadrilateralSpherical3D_Segment //
//////////////////////////////////////

QuadrilateralSpherical3D_Segment::QuadrilateralSpherical3D_Segment(QuadrilateralSpherical3D_Segment_t &initial_segment, QuadrilateralSpherical3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void QuadrilateralSpherical3D_Segment::create_cell(QuadrilateralSpherical3D_Vertex vertex1, QuadrilateralSpherical3D_Vertex vertex2, QuadrilateralSpherical3D_Vertex vertex3, QuadrilateralSpherical3D_Vertex vertex4)
{
	viennagrid::storage::static_array<QuadrilateralSpherical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	vertices[3] = viennagrid::handle(segmentation->get_domain(), vertex4.get_vertex());
	viennagrid::make_element<viennagrid::quadrilateral_tag>(segment, vertices.begin(), vertices.end());
}

list QuadrilateralSpherical3D_Segment::get_cells()
{
	list cells;
	// TODO: implement
	return cells;
}
