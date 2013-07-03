#include "triangular.hpp"
#include "../segments/types.hpp"
#include "../vertices/types.hpp"

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

unsigned int TriangularCartesian2D_Domain::num_vertices()
{
	TriangularCartesian2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularCartesian2D_Domain::add_vertex(PointCartesian2D vertex)
{
	viennagrid::create_element<TriangularCartesian2D_Vertex_t>(domain, vertex.get_point());
}

TriangularCartesian2D_Domain_t & TriangularCartesian2D_Domain::get_domain()
{
	return domain;
}

PointCartesian2D TriangularCartesian2D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	TriangularCartesian2D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCartesian2D(viennagrid::point(domain, vertices[index]), index);
}

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

unsigned int TriangularCartesian3D_Domain::num_vertices()
{
	TriangularCartesian3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularCartesian3D_Domain::add_vertex(PointCartesian3D vertex)
{
	viennagrid::create_element<TriangularCartesian3D_Vertex_t>(domain, vertex.get_point());
}

TriangularCartesian3D_Domain_t & TriangularCartesian3D_Domain::get_domain()
{
	return domain;
}

PointCartesian3D TriangularCartesian3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	TriangularCartesian3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCartesian3D(viennagrid::point(domain, vertices[index]), index);
}

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

unsigned int TriangularCylindrical3D_Domain::num_vertices()
{
	TriangularCylindrical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularCylindrical3D_Domain::add_vertex(PointCylindrical3D vertex)
{
	viennagrid::create_element<TriangularCylindrical3D_Vertex_t>(domain, vertex.get_point());
}

TriangularCylindrical3D_Domain_t & TriangularCylindrical3D_Domain::get_domain()
{
	return domain;
}

PointCylindrical3D TriangularCylindrical3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	TriangularCylindrical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCylindrical3D(viennagrid::point(domain, vertices[index]), index);
}

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

unsigned int TriangularPolar2D_Domain::num_vertices()
{
	TriangularPolar2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularPolar2D_Domain::add_vertex(PointPolar2D vertex)
{
	viennagrid::create_element<TriangularPolar2D_Vertex_t>(domain, vertex.get_point());
}

TriangularPolar2D_Domain_t & TriangularPolar2D_Domain::get_domain()
{
	return domain;
}

PointPolar2D TriangularPolar2D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	TriangularPolar2D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointPolar2D(viennagrid::point(domain, vertices[index]), index);
}

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

unsigned int TriangularSpherical3D_Domain::num_vertices()
{
	TriangularSpherical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularSpherical3D_Domain::add_vertex(PointSpherical3D vertex)
{
	viennagrid::create_element<TriangularSpherical3D_Vertex_t>(domain, vertex.get_point());
}

TriangularSpherical3D_Domain_t & TriangularSpherical3D_Domain::get_domain()
{
	return domain;
}

PointSpherical3D TriangularSpherical3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	TriangularSpherical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointSpherical3D(viennagrid::point(domain, vertices[index]), index);
}
