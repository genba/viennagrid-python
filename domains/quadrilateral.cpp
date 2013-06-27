#include "quadrilateral.hpp"
#include "../segments/types.hpp"
#include "../vertices/types.hpp"
#include "../cells/types.hpp"
#include "../cells/quadrilateral.hpp"

/////////////////////////////////
// Quadrilateral, cartesian 2D //
/////////////////////////////////

QuadrilateralCartesian2D_Domain::QuadrilateralCartesian2D_Domain()
{
	num_vertices = 0;
}

void QuadrilateralCartesian2D_Domain::create_segments(unsigned int amount)
{
	for (unsigned int i = 0; i < amount; ++i)
	{
		QuadrilateralCartesian2D_Segment_t seg = viennagrid::create_view<QuadrilateralCartesian2D_Segment_t>(domain);
		segments.append<QuadrilateralCartesian2D_Segment>(QuadrilateralCartesian2D_Segment(*this, seg));
	}
}

void QuadrilateralCartesian2D_Domain::add_vertex(PointCartesian2D vertex)
{
	viennagrid::create_element<QuadrilateralCartesian2D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = num_vertices++;
	QuadrilateralCartesian2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointCartesian2D_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.append<PointCartesian2D>(PointCartesian2D(point, point_id));
}

QuadrilateralCartesian2D_Domain_t & QuadrilateralCartesian2D_Domain::get_domain()
{
	return domain;
}

list QuadrilateralCartesian2D_Domain::get_segments()
{
	return segments;
}

list QuadrilateralCartesian2D_Domain::get_vertices()
{
	return vertices;
}

void QuadrilateralCartesian2D_Domain::create_cell(PointCartesian2D vertex1, PointCartesian2D vertex2, PointCartesian2D vertex3, PointCartesian2D vertex4)
{
	viennagrid::storage::static_array<QuadrilateralCartesian2D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex3.get_id());
	vertices[3] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex4.get_id());
	viennagrid::create_element<QuadrilateralCartesian2D_Cell_t>(domain, vertices);
	
	cells.append<QuadrilateralCartesian2D_Cell>(QuadrilateralCartesian2D_Cell(vertex1, vertex2, vertex3, vertex4));
}

/////////////////////////////////
// Quadrilateral, cartesian 3D //
/////////////////////////////////

QuadrilateralCartesian3D_Domain::QuadrilateralCartesian3D_Domain()
{
	num_vertices = 0;
}

void QuadrilateralCartesian3D_Domain::create_segments(unsigned int amount)
{
	for (unsigned int i = 0; i < amount; ++i)
	{
		QuadrilateralCartesian3D_Segment_t seg = viennagrid::create_view<QuadrilateralCartesian3D_Segment_t>(domain);
		segments.append<QuadrilateralCartesian3D_Segment>(QuadrilateralCartesian3D_Segment(*this, seg));
	}
}

void QuadrilateralCartesian3D_Domain::add_vertex(PointCartesian3D vertex)
{
	viennagrid::create_element<QuadrilateralCartesian3D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = num_vertices++;
	QuadrilateralCartesian3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointCartesian3D_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.append<PointCartesian3D>(PointCartesian3D(point, point_id));
}

QuadrilateralCartesian3D_Domain_t & QuadrilateralCartesian3D_Domain::get_domain()
{
	return domain;
}

list QuadrilateralCartesian3D_Domain::get_segments()
{
	return segments;
}

list QuadrilateralCartesian3D_Domain::get_vertices()
{
	return vertices;
}

void QuadrilateralCartesian3D_Domain::create_cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3, PointCartesian3D vertex4)
{
	viennagrid::storage::static_array<QuadrilateralCartesian3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex3.get_id());
	vertices[3] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex4.get_id());
	viennagrid::create_element<QuadrilateralCartesian3D_Cell_t>(domain, vertices);
	
	cells.append<QuadrilateralCartesian3D_Cell>(QuadrilateralCartesian3D_Cell(vertex1, vertex2, vertex3, vertex4));
}

/////////////////////////////////////
// Quadrilateral, cylindrical (3D) //
/////////////////////////////////////

QuadrilateralCylindrical3D_Domain::QuadrilateralCylindrical3D_Domain()
{
	num_vertices = 0;
}

void QuadrilateralCylindrical3D_Domain::create_segments(unsigned int amount)
{
	for (unsigned int i = 0; i < amount; ++i)
	{
		QuadrilateralCylindrical3D_Segment_t seg = viennagrid::create_view<QuadrilateralCylindrical3D_Segment_t>(domain);
		segments.append<QuadrilateralCylindrical3D_Segment>(QuadrilateralCylindrical3D_Segment(*this, seg));
	}
}

void QuadrilateralCylindrical3D_Domain::add_vertex(PointCylindrical3D vertex)
{
	viennagrid::create_element<QuadrilateralCylindrical3D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = num_vertices++;
	QuadrilateralCylindrical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointCylindrical_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.append<PointCylindrical3D>(PointCylindrical3D(point, point_id));
}

QuadrilateralCylindrical3D_Domain_t & QuadrilateralCylindrical3D_Domain::get_domain()
{
	return domain;
}

list QuadrilateralCylindrical3D_Domain::get_segments()
{
	return segments;
}

list QuadrilateralCylindrical3D_Domain::get_vertices()
{
	return vertices;
}

void QuadrilateralCylindrical3D_Domain::create_cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3, PointCylindrical3D vertex4)
{
	viennagrid::storage::static_array<QuadrilateralCylindrical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex3.get_id());
	vertices[3] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex4.get_id());
	viennagrid::create_element<QuadrilateralCylindrical3D_Cell_t>(domain, vertices);
	
	cells.append<QuadrilateralCylindrical3D_Cell>(QuadrilateralCylindrical3D_Cell(vertex1, vertex2, vertex3, vertex4));
}

///////////////////////////////
// Quadrilateral, polar (2D) //
///////////////////////////////

QuadrilateralPolar2D_Domain::QuadrilateralPolar2D_Domain()
{
	num_vertices = 0;
}

void QuadrilateralPolar2D_Domain::create_segments(unsigned int amount)
{
	for (unsigned int i = 0; i < amount; ++i)
	{
		QuadrilateralPolar2D_Segment_t seg = viennagrid::create_view<QuadrilateralPolar2D_Segment_t>(domain);
		segments.append<QuadrilateralPolar2D_Segment>(QuadrilateralPolar2D_Segment(*this, seg));
	}
}

void QuadrilateralPolar2D_Domain::add_vertex(PointPolar2D vertex)
{
	viennagrid::create_element<QuadrilateralPolar2D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = num_vertices++;
	QuadrilateralPolar2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointPolar_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.append<PointPolar2D>(PointPolar2D(point, point_id));
}

QuadrilateralPolar2D_Domain_t & QuadrilateralPolar2D_Domain::get_domain()
{
	return domain;
}

list QuadrilateralPolar2D_Domain::get_segments()
{
	return segments;
}

list QuadrilateralPolar2D_Domain::get_vertices()
{
	return vertices;
}

void QuadrilateralPolar2D_Domain::create_cell(PointPolar2D vertex1, PointPolar2D vertex2, PointPolar2D vertex3, PointPolar2D vertex4)
{
	viennagrid::storage::static_array<QuadrilateralPolar2D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex3.get_id());
	vertices[3] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex4.get_id());
	viennagrid::create_element<QuadrilateralPolar2D_Cell_t>(domain, vertices);
	
	cells.append<QuadrilateralPolar2D_Cell>(QuadrilateralPolar2D_Cell(vertex1, vertex2, vertex3, vertex4));
}

///////////////////////////////////
// Quadrilateral, spherical (3D) //
///////////////////////////////////

QuadrilateralSpherical3D_Domain::QuadrilateralSpherical3D_Domain()
{
	num_vertices = 0;
}

void QuadrilateralSpherical3D_Domain::create_segments(unsigned int amount)
{
	for (unsigned int i = 0; i < amount; ++i)
	{
		QuadrilateralSpherical3D_Segment_t seg = viennagrid::create_view<QuadrilateralSpherical3D_Segment_t>(domain);
		segments.append<QuadrilateralSpherical3D_Segment>(QuadrilateralSpherical3D_Segment(*this, seg));
	}
}

void QuadrilateralSpherical3D_Domain::add_vertex(PointSpherical3D vertex)
{
	viennagrid::create_element<QuadrilateralSpherical3D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = num_vertices++;
	QuadrilateralSpherical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointSpherical_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.append<PointSpherical3D>(PointSpherical3D(point, point_id));
}

QuadrilateralSpherical3D_Domain_t & QuadrilateralSpherical3D_Domain::get_domain()
{
	return domain;
}

list QuadrilateralSpherical3D_Domain::get_segments()
{
	return segments;
}

list QuadrilateralSpherical3D_Domain::get_vertices()
{
	return vertices;
}

void QuadrilateralSpherical3D_Domain::create_cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3, PointSpherical3D vertex4)
{
	viennagrid::storage::static_array<QuadrilateralSpherical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex3.get_id());
	vertices[3] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex4.get_id());
	viennagrid::create_element<QuadrilateralSpherical3D_Cell_t>(domain, vertices);
	
	cells.append<QuadrilateralSpherical3D_Cell>(QuadrilateralSpherical3D_Cell(vertex1, vertex2, vertex3, vertex4));
}
