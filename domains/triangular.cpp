#include "triangular.hpp"
#include "../segments/types.hpp"
#include "../vertices/types.hpp"

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

TriangularCartesian2D_Domain::TriangularCartesian2D_Domain()
{
	num_vertices = 0;
}

void TriangularCartesian2D_Domain::create_segments(unsigned int amount)
{
	for (unsigned int i = 0; i < amount; ++i)
	{
		TriangularCartesian2D_Segment_t seg = viennagrid::create_view<TriangularCartesian2D_Segment_t>(domain);
		segments.append<TriangularCartesian2D_Segment>(TriangularCartesian2D_Segment(*this, seg));
	}
}

void TriangularCartesian2D_Domain::add_vertex(PointCartesian2D vertex)
{
	viennagrid::create_element<TriangularCartesian2D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = num_vertices++;
	TriangularCartesian2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointCartesian2D_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.append<PointCartesian2D>(PointCartesian2D(&point, point_id));
}

TriangularCartesian2D_Domain_t & TriangularCartesian2D_Domain::get_domain()
{
	return domain;
}

list TriangularCartesian2D_Domain::get_segments()
{
	return segments;
}

list TriangularCartesian2D_Domain::get_vertices()
{
	return vertices;
}

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

TriangularCartesian3D_Domain::TriangularCartesian3D_Domain()
{
	num_vertices = 0;
}

void TriangularCartesian3D_Domain::create_segments(unsigned int amount)
{
	for (unsigned int i = 0; i < amount; ++i)
	{
		TriangularCartesian3D_Segment_t seg = viennagrid::create_view<TriangularCartesian3D_Segment_t>(domain);
		segments.append<TriangularCartesian3D_Segment>(TriangularCartesian3D_Segment(*this, seg));
	}
}

void TriangularCartesian3D_Domain::add_vertex(PointCartesian3D vertex)
{
	viennagrid::create_element<TriangularCartesian3D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = num_vertices++;
	TriangularCartesian3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointCartesian3D_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.append<PointCartesian3D>(PointCartesian3D(&point, point_id));
}

TriangularCartesian3D_Domain_t & TriangularCartesian3D_Domain::get_domain()
{
	return domain;
}

list TriangularCartesian3D_Domain::get_segments()
{
	return segments;
}

list TriangularCartesian3D_Domain::get_vertices()
{
	return vertices;
}

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

TriangularCylindrical3D_Domain::TriangularCylindrical3D_Domain()
{
	num_vertices = 0;
}

void TriangularCylindrical3D_Domain::create_segments(unsigned int amount)
{
	for (unsigned int i = 0; i < amount; ++i)
	{
		TriangularCylindrical3D_Segment_t seg = viennagrid::create_view<TriangularCylindrical3D_Segment_t>(domain);
		segments.append<TriangularCylindrical3D_Segment>(TriangularCylindrical3D_Segment(*this, seg));
	}
}

void TriangularCylindrical3D_Domain::add_vertex(PointCylindrical3D vertex)
{
	viennagrid::create_element<TriangularCylindrical3D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = num_vertices++;
	TriangularCylindrical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointCylindrical_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.append<PointCylindrical3D>(PointCylindrical3D(point, point_id));
}

TriangularCylindrical3D_Domain_t & TriangularCylindrical3D_Domain::get_domain()
{
	return domain;
}

list TriangularCylindrical3D_Domain::get_segments()
{
	return segments;
}

list TriangularCylindrical3D_Domain::get_vertices()
{
	return vertices;
}

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

TriangularPolar2D_Domain::TriangularPolar2D_Domain()
{
	num_vertices = 0;
}

void TriangularPolar2D_Domain::create_segments(unsigned int amount)
{
	for (unsigned int i = 0; i < amount; ++i)
	{
		TriangularPolar2D_Segment_t seg = viennagrid::create_view<TriangularPolar2D_Segment_t>(domain);
		segments.append<TriangularPolar2D_Segment>(TriangularPolar2D_Segment(*this, seg));
	}
}

void TriangularPolar2D_Domain::add_vertex(PointPolar2D vertex)
{
	viennagrid::create_element<TriangularPolar2D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = num_vertices++;
	TriangularPolar2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointPolar_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.append<PointPolar2D>(PointPolar2D(point, point_id));
}

TriangularPolar2D_Domain_t & TriangularPolar2D_Domain::get_domain()
{
	return domain;
}

list TriangularPolar2D_Domain::get_segments()
{
	return segments;
}

list TriangularPolar2D_Domain::get_vertices()
{
	return vertices;
}

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

TriangularSpherical3D_Domain::TriangularSpherical3D_Domain()
{
	num_vertices = 0;
}

void TriangularSpherical3D_Domain::create_segments(unsigned int amount)
{
	for (unsigned int i = 0; i < amount; ++i)
	{
		TriangularSpherical3D_Segment_t seg = viennagrid::create_view<TriangularSpherical3D_Segment_t>(domain);
		segments.append<TriangularSpherical3D_Segment>(TriangularSpherical3D_Segment(*this, seg));
	}
}

void TriangularSpherical3D_Domain::add_vertex(PointSpherical3D vertex)
{
	viennagrid::create_element<TriangularSpherical3D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = num_vertices++;
	TriangularSpherical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointSpherical_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.append<PointSpherical3D>(PointSpherical3D(point, point_id));
}

TriangularSpherical3D_Domain_t & TriangularSpherical3D_Domain::get_domain()
{
	return domain;
}

list TriangularSpherical3D_Domain::get_segments()
{
	return segments;
}

list TriangularSpherical3D_Domain::get_vertices()
{
	return vertices;
}
