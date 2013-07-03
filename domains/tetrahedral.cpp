#include "tetrahedral.hpp"
#include "../segments/types.hpp"
#include "../vertices/types.hpp"

///////////////////////////////
// Tetrahedral, cartesian 3D //
///////////////////////////////

unsigned int TetrahedralCartesian3D_Domain::num_vertices()
{
	TetrahedralCartesian3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TetrahedralCartesian3D_Domain::add_vertex(PointCartesian3D vertex)
{
	viennagrid::create_element<TetrahedralCartesian3D_Vertex_t>(domain, vertex.get_point());
}

TetrahedralCartesian3D_Domain_t & TetrahedralCartesian3D_Domain::get_domain()
{
	return domain;
}

PointCartesian3D TetrahedralCartesian3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	TetrahedralCartesian3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCartesian3D(viennagrid::point(domain, vertices[index]), index);
}

///////////////////////////////////
// Tetrahedral, cylindrical (3D) //
///////////////////////////////////

unsigned int TetrahedralCylindrical3D_Domain::num_vertices()
{
	TetrahedralCylindrical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TetrahedralCylindrical3D_Domain::add_vertex(PointCylindrical3D vertex)
{
	viennagrid::create_element<TetrahedralCylindrical3D_Vertex_t>(domain, vertex.get_point());
}

TetrahedralCylindrical3D_Domain_t & TetrahedralCylindrical3D_Domain::get_domain()
{
	return domain;
}

PointCylindrical3D TetrahedralCylindrical3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	TetrahedralCylindrical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCylindrical3D(viennagrid::point(domain, vertices[index]), index);
}

/////////////////////////////////
// Tetrahedral, spherical (3D) //
/////////////////////////////////

unsigned int TetrahedralSpherical3D_Domain::num_vertices()
{
	TetrahedralSpherical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TetrahedralSpherical3D_Domain::add_vertex(PointSpherical3D vertex)
{
	viennagrid::create_element<TetrahedralSpherical3D_Vertex_t>(domain, vertex.get_point());
}

TetrahedralSpherical3D_Domain_t & TetrahedralSpherical3D_Domain::get_domain()
{
	return domain;
}

PointSpherical3D TetrahedralSpherical3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	TetrahedralSpherical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointSpherical3D(viennagrid::point(domain, vertices[index]), index);
}
