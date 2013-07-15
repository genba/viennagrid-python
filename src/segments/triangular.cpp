#include "triangular.hpp"

#include "../domains/triangular.hpp"
#include "../cells/types.hpp"
#include "../vertices/types.hpp"
#include "../segmentations/triangular.hpp"

///////////////////////////////////
// TriangularCartesian2D_Segment //
///////////////////////////////////

TriangularCartesian2D_Segment::TriangularCartesian2D_Segment(TriangularCartesian2D_Segment_t &initial_segment, TriangularCartesian2D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void TriangularCartesian2D_Segment::create_cell(TriangularCartesian2D_Vertex vertex1, TriangularCartesian2D_Vertex vertex2, TriangularCartesian2D_Vertex vertex3)
{
	viennagrid::storage::static_array<TriangularCartesian2D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	viennagrid::make_element<viennagrid::triangle_tag>(segment, vertices.begin(), vertices.end());
}

list TriangularCartesian2D_Segment::get_cells()
{
	list cells;
	// TODO: implement
	return cells;
}

///////////////////////////////////
// TriangularCartesian3D_Segment //
///////////////////////////////////

TriangularCartesian3D_Segment::TriangularCartesian3D_Segment(TriangularCartesian3D_Segment_t &initial_segment, TriangularCartesian3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void TriangularCartesian3D_Segment::create_cell(TriangularCartesian3D_Vertex vertex1, TriangularCartesian3D_Vertex vertex2, TriangularCartesian3D_Vertex vertex3)
{
	viennagrid::storage::static_array<TriangularCartesian3D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	viennagrid::make_element<viennagrid::triangle_tag>(segment, vertices.begin(), vertices.end());
}

list TriangularCartesian3D_Segment::get_cells()
{
	list cells;
	// TODO: implement
	return cells;
}

/////////////////////////////////////
// TriangularCylindrical3D_Segment //
/////////////////////////////////////

TriangularCylindrical3D_Segment::TriangularCylindrical3D_Segment(TriangularCylindrical3D_Segment_t &initial_segment, TriangularCylindrical3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void TriangularCylindrical3D_Segment::create_cell(TriangularCylindrical3D_Vertex vertex1, TriangularCylindrical3D_Vertex vertex2, TriangularCylindrical3D_Vertex vertex3)
{
	viennagrid::storage::static_array<TriangularCylindrical3D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	viennagrid::make_element<viennagrid::triangle_tag>(segment, vertices.begin(), vertices.end());
}

list TriangularCylindrical3D_Segment::get_cells()
{
	list cells;
	// TODO: implement
	return cells;
}

///////////////////////////////
// TriangularPolar2D_Segment //
///////////////////////////////

TriangularPolar2D_Segment::TriangularPolar2D_Segment(TriangularPolar2D_Segment_t &initial_segment, TriangularPolar2D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void TriangularPolar2D_Segment::create_cell(TriangularPolar2D_Vertex vertex1, TriangularPolar2D_Vertex vertex2, TriangularPolar2D_Vertex vertex3)
{
	viennagrid::storage::static_array<TriangularPolar2D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	viennagrid::make_element<viennagrid::triangle_tag>(segment, vertices.begin(), vertices.end());
}

list TriangularPolar2D_Segment::get_cells()
{
	list cells;
	// TODO: implement
	return cells;
}

///////////////////////////////////
// TriangularSpherical3D_Segment //
///////////////////////////////////

TriangularSpherical3D_Segment::TriangularSpherical3D_Segment(TriangularSpherical3D_Segment_t &initial_segment, TriangularSpherical3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void TriangularSpherical3D_Segment::create_cell(TriangularSpherical3D_Vertex vertex1, TriangularSpherical3D_Vertex vertex2, TriangularSpherical3D_Vertex vertex3)
{
	viennagrid::storage::static_array<TriangularSpherical3D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	viennagrid::make_element<viennagrid::triangle_tag>(segment, vertices.begin(), vertices.end());
}

list TriangularSpherical3D_Segment::get_cells()
{
	list cells;
	// TODO: implement
	return cells;
}
