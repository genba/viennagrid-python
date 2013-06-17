#include "triangular.hpp"
#include "../segments/types.hpp"
#include "../vertices/types.hpp"

#include <vector>

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

unsigned int TriangularCartesian2D_Domain::get_num_segments()
{
	return segments.size();
}

void TriangularCartesian2D_Domain::create_segments(unsigned int amount)
{
	if (get_num_segments()) { /* raise exception */ }
	else
	{
		segments.reserve(amount);
		for (unsigned int i = 0; i < amount; ++i)
		{
			TriangularCartesian2D_Segment_t seg = viennagrid::create_view<TriangularCartesian2D_Segment_t>(domain);
			segments.push_back(TriangularCartesian2D_Segment(*this, seg));
		}
	}
}

void TriangularCartesian2D_Domain::add_vertex(PointCartesian2D vertex)
{
	viennagrid::create_element<TriangularCartesian2D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = get_num_vertices();
	TriangularCartesian2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointCartesian2D_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.push_back(PointCartesian2D(point, point_id));
}

TriangularCartesian2D_Segment TriangularCartesian2D_Domain::get_segment(unsigned int index)
{
	return segments.at(index); // TODO: this will raise an exception if vector size is smaller than index
}

PointCartesian2D TriangularCartesian2D_Domain::get_vertex(unsigned int index)
{
	TriangularCartesian2D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCartesian2D(viennagrid::point(domain, vertices[index]));
}

TriangularCartesian2D_Domain_t & TriangularCartesian2D_Domain::get_domain()
{
	return domain;
}

std::vector<TriangularCartesian2D_Segment>::iterator TriangularCartesian2D_Domain::segments_begin()
{
	return segments.begin();
}

std::vector<TriangularCartesian2D_Segment>::iterator TriangularCartesian2D_Domain::segments_end()
{
	return segments.end();
}

unsigned int TriangularCartesian2D_Domain::get_num_vertices()
{
	return vertices.size();
}

std::vector<PointCartesian2D>::iterator TriangularCartesian2D_Domain::vertices_begin()
{
	return vertices.begin();
}

std::vector<PointCartesian2D>::iterator TriangularCartesian2D_Domain::vertices_end()
{
	return vertices.end();
}

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

unsigned int TriangularCartesian3D_Domain::get_num_segments()
{
	return segments.size();
}

void TriangularCartesian3D_Domain::create_segments(unsigned int amount)
{
	if (get_num_segments()) { /* raise exception */ }
	else
	{
		segments.reserve(amount);
		for (unsigned int i = 0; i < amount; ++i)
		{
			TriangularCartesian3D_Segment_t seg = viennagrid::create_view<TriangularCartesian3D_Segment_t>(domain);
			segments.push_back(TriangularCartesian3D_Segment(*this, seg));
		}
	}
}

void TriangularCartesian3D_Domain::add_vertex(PointCartesian3D vertex)
{
	viennagrid::create_element<TriangularCartesian3D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = get_num_vertices();
	TriangularCartesian3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointCartesian3D_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.push_back(PointCartesian3D(point, point_id));
}

TriangularCartesian3D_Segment TriangularCartesian3D_Domain::get_segment(unsigned int index)
{
	return segments.at(index); // TODO: this will raise an exception if vector size is smaller than index
}

PointCartesian3D TriangularCartesian3D_Domain::get_vertex(unsigned int index)
{
	TriangularCartesian3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCartesian3D(viennagrid::point(domain, vertices[index]));
}

TriangularCartesian3D_Domain_t & TriangularCartesian3D_Domain::get_domain()
{
	return domain;
}

std::vector<TriangularCartesian3D_Segment>::iterator TriangularCartesian3D_Domain::segments_begin()
{
	return segments.begin();
}

std::vector<TriangularCartesian3D_Segment>::iterator TriangularCartesian3D_Domain::segments_end()
{
	return segments.end();
}

unsigned int TriangularCartesian3D_Domain::get_num_vertices()
{
	return vertices.size();
}

std::vector<PointCartesian3D>::iterator TriangularCartesian3D_Domain::vertices_begin()
{
	return vertices.begin();
}

std::vector<PointCartesian3D>::iterator TriangularCartesian3D_Domain::vertices_end()
{
	return vertices.end();
}

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

unsigned int TriangularCylindrical3D_Domain::get_num_segments()
{
	return segments.size();
}

void TriangularCylindrical3D_Domain::create_segments(unsigned int amount)
{
	if (get_num_segments()) { /* raise exception */ }
	else
	{
		segments.reserve(amount);
		for (unsigned int i = 0; i < amount; ++i)
		{
			TriangularCylindrical3D_Segment_t seg = viennagrid::create_view<TriangularCylindrical3D_Segment_t>(domain);
			segments.push_back(TriangularCylindrical3D_Segment(*this, seg));
		}
	}
}

void TriangularCylindrical3D_Domain::add_vertex(PointCylindrical3D vertex)
{
	viennagrid::create_element<TriangularCylindrical3D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = get_num_vertices();
	TriangularCylindrical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointCylindrical_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.push_back(PointCylindrical3D(point, point_id));
}

TriangularCylindrical3D_Segment TriangularCylindrical3D_Domain::get_segment(unsigned int index)
{
	return segments.at(index); // TODO: this will raise an exception if vector size is smaller than index
}

PointCylindrical3D TriangularCylindrical3D_Domain::get_vertex(unsigned int index)
{
	TriangularCylindrical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCylindrical3D(viennagrid::point(domain, vertices[index]));
}

TriangularCylindrical3D_Domain_t & TriangularCylindrical3D_Domain::get_domain()
{
	return domain;
}

std::vector<TriangularCylindrical3D_Segment>::iterator TriangularCylindrical3D_Domain::segments_begin()
{
	return segments.begin();
}

std::vector<TriangularCylindrical3D_Segment>::iterator TriangularCylindrical3D_Domain::segments_end()
{
	return segments.end();
}

unsigned int TriangularCylindrical3D_Domain::get_num_vertices()
{
	return vertices.size();
}

std::vector<PointCylindrical3D>::iterator TriangularCylindrical3D_Domain::vertices_begin()
{
	return vertices.begin();
}

std::vector<PointCylindrical3D>::iterator TriangularCylindrical3D_Domain::vertices_end()
{
	return vertices.end();
}

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

unsigned int TriangularPolar2D_Domain::get_num_segments()
{
	return segments.size();
}

void TriangularPolar2D_Domain::create_segments(unsigned int amount)
{
	if (get_num_segments()) { /* raise exception */ }
	else
	{
		segments.reserve(amount);
		for (unsigned int i = 0; i < amount; ++i)
		{
			TriangularPolar2D_Segment_t seg = viennagrid::create_view<TriangularPolar2D_Segment_t>(domain);
			segments.push_back(TriangularPolar2D_Segment(*this, seg));
		}
	}
}

void TriangularPolar2D_Domain::add_vertex(PointPolar2D vertex)
{
	viennagrid::create_element<TriangularPolar2D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = get_num_vertices();
	TriangularPolar2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointPolar_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.push_back(PointPolar2D(point, point_id));
}

TriangularPolar2D_Segment TriangularPolar2D_Domain::get_segment(unsigned int index)
{
	return segments.at(index); // TODO: this will raise an exception if vector size is smaller than index
}

PointPolar2D TriangularPolar2D_Domain::get_vertex(unsigned int index)
{
	TriangularPolar2D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointPolar2D(viennagrid::point(domain, vertices[index]), index);
}

TriangularPolar2D_Domain_t & TriangularPolar2D_Domain::get_domain()
{
	return domain;
}

std::vector<TriangularPolar2D_Segment>::iterator TriangularPolar2D_Domain::segments_begin()
{
	return segments.begin();
}

std::vector<TriangularPolar2D_Segment>::iterator TriangularPolar2D_Domain::segments_end()
{
	return segments.end();
}

unsigned int TriangularPolar2D_Domain::get_num_vertices()
{
	return vertices.size();
}

std::vector<PointPolar2D>::iterator TriangularPolar2D_Domain::vertices_begin()
{
	return vertices.begin();
}

std::vector<PointPolar2D>::iterator TriangularPolar2D_Domain::vertices_end()
{
	return vertices.end();
}

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

unsigned int TriangularSpherical3D_Domain::get_num_segments()
{
	return segments.size();
}

void TriangularSpherical3D_Domain::create_segments(unsigned int amount)
{
	if (get_num_segments()) { /* raise exception */ }
	else
	{
		segments.reserve(amount);
		for (unsigned int i = 0; i < amount; ++i)
		{
			TriangularSpherical3D_Segment_t seg = viennagrid::create_view<TriangularSpherical3D_Segment_t>(domain);
			segments.push_back(TriangularSpherical3D_Segment(*this, seg));
		}
	}
}

void TriangularSpherical3D_Domain::add_vertex(PointSpherical3D vertex)
{
	viennagrid::create_element<TriangularSpherical3D_Vertex_t>(domain, vertex.get_point());

	unsigned int point_id = get_num_vertices();
	TriangularSpherical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	PointSpherical_t &point = viennagrid::point(domain, vertex_range[point_id]);
	vertices.push_back(PointSpherical3D(point, point_id));
}

TriangularSpherical3D_Segment TriangularSpherical3D_Domain::get_segment(unsigned int index)
{
	return segments.at(index); // TODO: this will raise an exception if vector size is smaller than index
}

PointSpherical3D TriangularSpherical3D_Domain::get_vertex(unsigned int index)
{
	TriangularSpherical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointSpherical3D(viennagrid::point(domain, vertices[index]), index);
}

TriangularSpherical3D_Domain_t & TriangularSpherical3D_Domain::get_domain()
{
	return domain;
}

std::vector<TriangularSpherical3D_Segment>::iterator TriangularSpherical3D_Domain::segments_begin()
{
	return segments.begin();
}

std::vector<TriangularSpherical3D_Segment>::iterator TriangularSpherical3D_Domain::segments_end()
{
	return segments.end();
}

unsigned int TriangularSpherical3D_Domain::get_num_vertices()
{
	return vertices.size();
}

std::vector<PointSpherical3D>::iterator TriangularSpherical3D_Domain::vertices_begin()
{
	return vertices.begin();
}

std::vector<PointSpherical3D>::iterator TriangularSpherical3D_Domain::vertices_end()
{
	return vertices.end();
}
