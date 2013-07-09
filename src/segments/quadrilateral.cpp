#include "quadrilateral.hpp"

#include "../domains/quadrilateral.hpp"
#include "../cells/types.hpp"
#include "../vertices/types.hpp"

//////////////////////////////////////
// QuadrilateralCartesian2D_Segment //
//////////////////////////////////////

QuadrilateralCartesian2D_Segment::QuadrilateralCartesian2D_Segment(QuadrilateralCartesian2D_Domain &initial_domain, QuadrilateralCartesian2D_Segment_t &initial_segment)
{
	domain = &initial_domain;
	segment = initial_segment;
}

void QuadrilateralCartesian2D_Segment::create_cell(PointCartesian2D vertex1, PointCartesian2D vertex2, PointCartesian2D vertex3, PointCartesian2D vertex4)
{
	viennagrid::storage::static_array<QuadrilateralCartesian2D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex3.get_id());
	vertices[3] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex4.get_id());
	viennagrid::create_element<QuadrilateralCartesian2D_Cell_t>(segment, vertices.begin(), vertices.end());
	
	cells.append<QuadrilateralCartesian2D_Cell>(QuadrilateralCartesian2D_Cell(vertex1, vertex2, vertex3, vertex4));
}

list QuadrilateralCartesian2D_Segment::get_cells()
{
	return cells;
}

//////////////////////////////////////
// QuadrilateralCartesian3D_Segment //
//////////////////////////////////////

QuadrilateralCartesian3D_Segment::QuadrilateralCartesian3D_Segment(QuadrilateralCartesian3D_Domain &initial_domain, QuadrilateralCartesian3D_Segment_t &initial_segment)
{
	domain = &initial_domain;
	segment = initial_segment;
}

void QuadrilateralCartesian3D_Segment::create_cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3, PointCartesian3D vertex4)
{
	viennagrid::storage::static_array<QuadrilateralCartesian3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex3.get_id());
	vertices[3] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex4.get_id());
	viennagrid::create_element<QuadrilateralCartesian3D_Cell_t>(segment, vertices.begin(), vertices.end());
	
	cells.append<QuadrilateralCartesian3D_Cell>(QuadrilateralCartesian3D_Cell(vertex1, vertex2, vertex3, vertex4));
}

list QuadrilateralCartesian3D_Segment::get_cells()
{
	return cells;
}

////////////////////////////////////////
// QuadrilateralCylindrical3D_Segment //
////////////////////////////////////////

QuadrilateralCylindrical3D_Segment::QuadrilateralCylindrical3D_Segment(QuadrilateralCylindrical3D_Domain &initial_domain, QuadrilateralCylindrical3D_Segment_t &initial_segment)
{
	domain = &initial_domain;
	segment = initial_segment;
}

void QuadrilateralCylindrical3D_Segment::create_cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3, PointCylindrical3D vertex4)
{
	viennagrid::storage::static_array<QuadrilateralCylindrical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex3.get_id());
	vertices[3] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex4.get_id());
	viennagrid::create_element<QuadrilateralCylindrical3D_Cell_t>(segment, vertices.begin(), vertices.end());
	
	cells.append<QuadrilateralCylindrical3D_Cell>(QuadrilateralCylindrical3D_Cell(vertex1, vertex2, vertex3, vertex4));
}

list QuadrilateralCylindrical3D_Segment::get_cells()
{
	return cells;
}

//////////////////////////////////
// QuadrilateralPolar2D_Segment //
//////////////////////////////////

QuadrilateralPolar2D_Segment::QuadrilateralPolar2D_Segment(QuadrilateralPolar2D_Domain &initial_domain, QuadrilateralPolar2D_Segment_t &initial_segment)
{
	domain = &initial_domain;
	segment = initial_segment;
}

void QuadrilateralPolar2D_Segment::create_cell(PointPolar2D vertex1, PointPolar2D vertex2, PointPolar2D vertex3, PointPolar2D vertex4)
{
	viennagrid::storage::static_array<QuadrilateralPolar2D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex3.get_id());
	vertices[3] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex4.get_id());
	viennagrid::create_element<QuadrilateralPolar2D_Cell_t>(segment, vertices.begin(), vertices.end());
	
	cells.append<QuadrilateralPolar2D_Cell>(QuadrilateralPolar2D_Cell(vertex1, vertex2, vertex3, vertex4));
}

list QuadrilateralPolar2D_Segment::get_cells()
{
	return cells;
}

//////////////////////////////////////
// QuadrilateralSpherical3D_Segment //
//////////////////////////////////////

QuadrilateralSpherical3D_Segment::QuadrilateralSpherical3D_Segment(QuadrilateralSpherical3D_Domain &initial_domain, QuadrilateralSpherical3D_Segment_t &initial_segment)
{
	domain = &initial_domain;
	segment = initial_segment;
}

void QuadrilateralSpherical3D_Segment::create_cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3, PointSpherical3D vertex4)
{
	viennagrid::storage::static_array<QuadrilateralSpherical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex3.get_id());
	vertices[3] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex4.get_id());
	viennagrid::create_element<QuadrilateralSpherical3D_Cell_t>(segment, vertices.begin(), vertices.end());
	
	cells.append<QuadrilateralSpherical3D_Cell>(QuadrilateralSpherical3D_Cell(vertex1, vertex2, vertex3, vertex4));
}

list QuadrilateralSpherical3D_Segment::get_cells()
{
	return cells;
}
