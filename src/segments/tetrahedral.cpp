#include "tetrahedral.hpp"

#include "../domains/tetrahedral.hpp"
#include "../cells/types.hpp"
#include "../vertices/types.hpp"

////////////////////////////////////
// TetrahedralCartesian3D_Segment //
////////////////////////////////////

TetrahedralCartesian3D_Segment::TetrahedralCartesian3D_Segment(TetrahedralCartesian3D_Segment_t &initial_segment) : segment(initial_segment)
{
	//segment = initial_segment;
}

void TetrahedralCartesian3D_Segment::create_cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3, PointCartesian3D vertex4)
{
	/*
	viennagrid::storage::static_array<TetrahedralCartesian3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex3.get_id());
	vertices[3] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex4.get_id());
	viennagrid::create_element<TetrahedralCartesian3D_Cell_t>(segment, vertices.begin(), vertices.end());
	*/
	
	//cells.append<TetrahedralCartesian3D_Cell>(TetrahedralCartesian3D_Cell(vertex1, vertex2, vertex3, vertex4));
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

TetrahedralCylindrical3D_Segment::TetrahedralCylindrical3D_Segment(TetrahedralCylindrical3D_Segment_t &initial_segment) : segment(initial_segment)
{
	//segment = initial_segment;
}

void TetrahedralCylindrical3D_Segment::create_cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3, PointCylindrical3D vertex4)
{
	/*
	viennagrid::storage::static_array<TetrahedralCylindrical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex3.get_id());
	vertices[3] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex4.get_id());
	viennagrid::create_element<TetrahedralCylindrical3D_Cell_t>(segment, vertices.begin(), vertices.end());
	*/
	
	//cells.append<TetrahedralCylindrical3D_Cell>(TetrahedralCylindrical3D_Cell(vertex1, vertex2, vertex3, vertex4));
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

TetrahedralSpherical3D_Segment::TetrahedralSpherical3D_Segment(TetrahedralSpherical3D_Segment_t &initial_segment) : segment(initial_segment)
{
	//segment = initial_segment;
}

void TetrahedralSpherical3D_Segment::create_cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3, PointSpherical3D vertex4)
{
	/*
	viennagrid::storage::static_array<TetrahedralSpherical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex3.get_id());
	vertices[3] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex4.get_id());
	viennagrid::create_element<TetrahedralSpherical3D_Cell_t>(segment, vertices.begin(), vertices.end());
	*/
	
	//cells.append<TetrahedralSpherical3D_Cell>(TetrahedralSpherical3D_Cell(vertex1, vertex2, vertex3, vertex4));
}

list TetrahedralSpherical3D_Segment::get_cells()
{
	list cells;
	// TODO: implement
	return cells;
}
