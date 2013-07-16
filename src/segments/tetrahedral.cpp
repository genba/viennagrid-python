#include "tetrahedral.hpp"

#include "../domains/tetrahedral.hpp"
#include "../cells/types.hpp"
#include "../vertices/types.hpp"
#include "../segmentations/tetrahedral.hpp"

////////////////////////////////////
// TetrahedralCartesian3D_Segment //
////////////////////////////////////

TetrahedralCartesian3D_Segment::TetrahedralCartesian3D_Segment(TetrahedralCartesian3D_Segment_t &initial_segment, TetrahedralCartesian3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void TetrahedralCartesian3D_Segment::create_cell(TetrahedralCartesian3D_Vertex vertex1, TetrahedralCartesian3D_Vertex vertex2, TetrahedralCartesian3D_Vertex vertex3, TetrahedralCartesian3D_Vertex vertex4)
{
	viennagrid::storage::static_array<TetrahedralCartesian3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	vertices[3] = viennagrid::handle(segmentation->get_domain(), vertex4.get_vertex());
	viennagrid::make_element<viennagrid::tetrahedron_tag>(segment, vertices.begin(), vertices.end());
}

list TetrahedralCartesian3D_Segment::get_cells()
{
	list cells;
	// TODO: implement
	return cells;
}

//////////////////////////////////////
// TetrahedralCylindrical3D_Segment //
//////////////////////////////////////

TetrahedralCylindrical3D_Segment::TetrahedralCylindrical3D_Segment(TetrahedralCylindrical3D_Segment_t &initial_segment, TetrahedralCylindrical3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void TetrahedralCylindrical3D_Segment::create_cell(TetrahedralCylindrical3D_Vertex vertex1, TetrahedralCylindrical3D_Vertex vertex2, TetrahedralCylindrical3D_Vertex vertex3, TetrahedralCylindrical3D_Vertex vertex4)
{
	viennagrid::storage::static_array<TetrahedralCylindrical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	vertices[3] = viennagrid::handle(segmentation->get_domain(), vertex4.get_vertex());
	viennagrid::make_element<viennagrid::tetrahedron_tag>(segment, vertices.begin(), vertices.end());
}

list TetrahedralCylindrical3D_Segment::get_cells()
{
	list cells;
	// TODO: implement
	return cells;
}

////////////////////////////////////
// TetrahedralSpherical3D_Segment //
////////////////////////////////////

TetrahedralSpherical3D_Segment::TetrahedralSpherical3D_Segment(TetrahedralSpherical3D_Segment_t &initial_segment, TetrahedralSpherical3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void TetrahedralSpherical3D_Segment::create_cell(TetrahedralSpherical3D_Vertex vertex1, TetrahedralSpherical3D_Vertex vertex2, TetrahedralSpherical3D_Vertex vertex3, TetrahedralSpherical3D_Vertex vertex4)
{
	viennagrid::storage::static_array<TetrahedralSpherical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	vertices[3] = viennagrid::handle(segmentation->get_domain(), vertex4.get_vertex());
	viennagrid::make_element<viennagrid::tetrahedron_tag>(segment, vertices.begin(), vertices.end());
}

list TetrahedralSpherical3D_Segment::get_cells()
{
	list cells;
	// TODO: implement
	return cells;
}
