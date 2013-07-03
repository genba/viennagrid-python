#include "quadrilateral.hpp"
#include "../segments/types.hpp"
#include "../vertices/types.hpp"

/////////////////////////////////
// Quadrilateral, cartesian 2D //
/////////////////////////////////

unsigned int QuadrilateralCartesian2D_Domain::num_vertices()
{
	QuadrilateralCartesian2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void QuadrilateralCartesian2D_Domain::add_vertex(PointCartesian2D vertex)
{
	viennagrid::create_element<QuadrilateralCartesian2D_Vertex_t>(domain, vertex.get_point());
}

QuadrilateralCartesian2D_Domain_t & QuadrilateralCartesian2D_Domain::get_domain()
{
	return domain;
}

PointCartesian2D QuadrilateralCartesian2D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	QuadrilateralCartesian2D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCartesian2D(viennagrid::point(domain, vertices[index]), index);
}

/////////////////////////////////
// Quadrilateral, cartesian 3D //
/////////////////////////////////

unsigned int QuadrilateralCartesian3D_Domain::num_vertices()
{
	QuadrilateralCartesian3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void QuadrilateralCartesian3D_Domain::add_vertex(PointCartesian3D vertex)
{
	viennagrid::create_element<QuadrilateralCartesian3D_Vertex_t>(domain, vertex.get_point());
}

QuadrilateralCartesian3D_Domain_t & QuadrilateralCartesian3D_Domain::get_domain()
{
	return domain;
}

PointCartesian3D QuadrilateralCartesian3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	QuadrilateralCartesian3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCartesian3D(viennagrid::point(domain, vertices[index]), index);
}

/////////////////////////////////////
// Quadrilateral, cylindrical (3D) //
/////////////////////////////////////

unsigned int QuadrilateralCylindrical3D_Domain::num_vertices()
{
	QuadrilateralCylindrical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void QuadrilateralCylindrical3D_Domain::add_vertex(PointCylindrical3D vertex)
{
	viennagrid::create_element<QuadrilateralCylindrical3D_Vertex_t>(domain, vertex.get_point());
}

QuadrilateralCylindrical3D_Domain_t & QuadrilateralCylindrical3D_Domain::get_domain()
{
	return domain;
}

PointCylindrical3D QuadrilateralCylindrical3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	QuadrilateralCylindrical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCylindrical3D(viennagrid::point(domain, vertices[index]), index);
}

///////////////////////////////
// Quadrilateral, polar (2D) //
///////////////////////////////

unsigned int QuadrilateralPolar2D_Domain::num_vertices()
{
	QuadrilateralPolar2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void QuadrilateralPolar2D_Domain::add_vertex(PointPolar2D vertex)
{
	viennagrid::create_element<QuadrilateralPolar2D_Vertex_t>(domain, vertex.get_point());
}

QuadrilateralPolar2D_Domain_t & QuadrilateralPolar2D_Domain::get_domain()
{
	return domain;
}

PointPolar2D QuadrilateralPolar2D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	QuadrilateralPolar2D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointPolar2D(viennagrid::point(domain, vertices[index]), index);
}

///////////////////////////////////
// Quadrilateral, spherical (3D) //
///////////////////////////////////

unsigned int QuadrilateralSpherical3D_Domain::num_vertices()
{
	QuadrilateralSpherical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void QuadrilateralSpherical3D_Domain::add_vertex(PointSpherical3D vertex)
{
	viennagrid::create_element<QuadrilateralSpherical3D_Vertex_t>(domain, vertex.get_point());
}

QuadrilateralSpherical3D_Domain_t & QuadrilateralSpherical3D_Domain::get_domain()
{
	return domain;
}

PointSpherical3D QuadrilateralSpherical3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	QuadrilateralSpherical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointSpherical3D(viennagrid::point(domain, vertices[index]), index);
}
