#include "tetrahedral.hpp"
#include "../segments/types.hpp"
#include "../vertices/types.hpp"

///////////////////////////////
// Tetrahedral, cartesian 3D //
///////////////////////////////

TetrahedralCartesian3D_Domain::TetrahedralCartesian3D_Domain()
{
	num_vertices = 0;
}

void TetrahedralCartesian3D_Domain::create_segments(unsigned int amount)
{
	for (unsigned int i = 0; i < amount; ++i)
	{
		TetrahedralCartesian3D_Segment_t seg = viennagrid::create_view<TetrahedralCartesian3D_Segment_t>(domain);
		segments.append<TetrahedralCartesian3D_Segment>(TetrahedralCartesian3D_Segment(*this, seg));
	}
}

void TetrahedralCartesian3D_Domain::add_vertex(PointCartesian3D vertex)
{
	viennagrid::create_element<TetrahedralCartesian3D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = num_vertices++;
	TetrahedralCartesian3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointCartesian3D_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.append<PointCartesian3D>(PointCartesian3D(point, point_id));
}

TetrahedralCartesian3D_Domain_t & TetrahedralCartesian3D_Domain::get_domain()
{
	return domain;
}

list TetrahedralCartesian3D_Domain::get_segments()
{
	return segments;
}

list TetrahedralCartesian3D_Domain::get_vertices()
{
	return vertices;
}

///////////////////////////////////
// Tetrahedral, cylindrical (3D) //
///////////////////////////////////

TetrahedralCylindrical3D_Domain::TetrahedralCylindrical3D_Domain()
{
	num_vertices = 0;
}

void TetrahedralCylindrical3D_Domain::create_segments(unsigned int amount)
{
	for (unsigned int i = 0; i < amount; ++i)
	{
		TetrahedralCylindrical3D_Segment_t seg = viennagrid::create_view<TetrahedralCylindrical3D_Segment_t>(domain);
		segments.append<TetrahedralCylindrical3D_Segment>(TetrahedralCylindrical3D_Segment(*this, seg));
	}
}

void TetrahedralCylindrical3D_Domain::add_vertex(PointCylindrical3D vertex)
{
	viennagrid::create_element<TetrahedralCylindrical3D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = num_vertices++;
	TetrahedralCylindrical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointCylindrical_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.append<PointCylindrical3D>(PointCylindrical3D(point, point_id));
}

TetrahedralCylindrical3D_Domain_t & TetrahedralCylindrical3D_Domain::get_domain()
{
	return domain;
}

list TetrahedralCylindrical3D_Domain::get_segments()
{
	return segments;
}

list TetrahedralCylindrical3D_Domain::get_vertices()
{
	return vertices;
}

/////////////////////////////////
// Tetrahedral, spherical (3D) //
/////////////////////////////////

TetrahedralSpherical3D_Domain::TetrahedralSpherical3D_Domain()
{
	num_vertices = 0;
}

void TetrahedralSpherical3D_Domain::create_segments(unsigned int amount)
{
	for (unsigned int i = 0; i < amount; ++i)
	{
		TetrahedralSpherical3D_Segment_t seg = viennagrid::create_view<TetrahedralSpherical3D_Segment_t>(domain);
		segments.append<TetrahedralSpherical3D_Segment>(TetrahedralSpherical3D_Segment(*this, seg));
	}
}

void TetrahedralSpherical3D_Domain::add_vertex(PointSpherical3D vertex)
{
	viennagrid::create_element<TetrahedralSpherical3D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = num_vertices++;
	TetrahedralSpherical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointSpherical_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.append<PointSpherical3D>(PointSpherical3D(point, point_id));
}

TetrahedralSpherical3D_Domain_t & TetrahedralSpherical3D_Domain::get_domain()
{
	return domain;
}

list TetrahedralSpherical3D_Domain::get_segments()
{
	return segments;
}

list TetrahedralSpherical3D_Domain::get_vertices()
{
	return vertices;
}
