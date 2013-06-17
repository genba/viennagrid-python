#include "triangular.hpp"

#include "../domains/triangular.hpp"
#include "../cells/types.hpp"
#include "../vertices/types.hpp"

///////////////////////////////////
// TriangularCartesian2D_Segment //
///////////////////////////////////

TriangularCartesian2D_Segment::TriangularCartesian2D_Segment(TriangularCartesian2D_Domain &initial_domain, TriangularCartesian2D_Segment_t &initial_segment)
{
	domain = &initial_domain;
	segment = initial_segment;
}

void TriangularCartesian2D_Segment::create_cell(PointCartesian2D vertex1, PointCartesian2D vertex2, PointCartesian2D vertex3)
{
	viennagrid::storage::static_array<TriangularCartesian2D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex3.get_id());
	viennagrid::create_element<TriangularCartesian2D_Cell_t>(segment, vertices);
}

///////////////////////////////////
// TriangularCartesian3D_Segment //
///////////////////////////////////

TriangularCartesian3D_Segment::TriangularCartesian3D_Segment(TriangularCartesian3D_Domain &initial_domain, TriangularCartesian3D_Segment_t &initial_segment)
{
	domain = &initial_domain;
	segment = initial_segment;
}

void TriangularCartesian3D_Segment::create_cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3)
{
	viennagrid::storage::static_array<TriangularCartesian3D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex3.get_id());
	viennagrid::create_element<TriangularCartesian3D_Cell_t>(segment, vertices);
}

/////////////////////////////////////
// TriangularCylindrical3D_Segment //
/////////////////////////////////////

TriangularCylindrical3D_Segment::TriangularCylindrical3D_Segment(TriangularCylindrical3D_Domain &initial_domain, TriangularCylindrical3D_Segment_t &initial_segment)
{
	domain = &initial_domain;
	segment = initial_segment;
}

void TriangularCylindrical3D_Segment::create_cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3)
{
	viennagrid::storage::static_array<TriangularCylindrical3D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex3.get_id());
	viennagrid::create_element<TriangularCylindrical3D_Cell_t>(segment, vertices);
}

///////////////////////////////
// TriangularPolar2D_Segment //
///////////////////////////////

TriangularPolar2D_Segment::TriangularPolar2D_Segment(TriangularPolar2D_Domain &initial_domain, TriangularPolar2D_Segment_t &initial_segment)
{
	domain = &initial_domain;
	segment = initial_segment;
}

void TriangularPolar2D_Segment::create_cell(PointPolar2D vertex1, PointPolar2D vertex2, PointPolar2D vertex3)
{
	viennagrid::storage::static_array<TriangularPolar2D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex3.get_id());
	viennagrid::create_element<TriangularPolar2D_Cell_t>(segment, vertices);
}

///////////////////////////////////
// TriangularSpherical3D_Segment //
///////////////////////////////////

TriangularSpherical3D_Segment::TriangularSpherical3D_Segment(TriangularSpherical3D_Domain &initial_domain, TriangularSpherical3D_Segment_t &initial_segment)
{
	domain = &initial_domain;
	segment = initial_segment;
}

void TriangularSpherical3D_Segment::create_cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3)
{
	viennagrid::storage::static_array<TriangularSpherical3D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex3.get_id());
	viennagrid::create_element<TriangularSpherical3D_Cell_t>(segment, vertices);
}
