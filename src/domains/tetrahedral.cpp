/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "tetrahedral.hpp"

#include <string>
#include <stdexcept>

///////////////////////////////
// Tetrahedral, cartesian 3D //
///////////////////////////////

unsigned int TetrahedralCartesian3D_Domain::num_vertices()
{
	TetrahedralCartesian3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TetrahedralCartesian3D_Domain::make_vertex(PointCartesian3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

TetrahedralCartesian3D_Domain_t & TetrahedralCartesian3D_Domain::get_domain()
{
	return domain;
}

TetrahedralCartesian3D_Vertex TetrahedralCartesian3D_Domain::get_vertex(unsigned int index)
{
	typedef TetrahedralCartesian3D_VertexRange_t                  VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef TetrahedralCartesian3D_Vertex_t::id_type              VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return TetrahedralCartesian3D_Vertex(*vertex);
}

list TetrahedralCartesian3D_Domain::get_vertices()
{
	list vertices;
	
	typedef TetrahedralCartesian3D_Domain_t                                                   DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<TetrahedralCartesian3D_Vertex>(TetrahedralCartesian3D_Vertex(*it));
	
	return vertices;
}

unsigned int TetrahedralCartesian3D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<TetrahedralCartesian3D_Domain_t, viennagrid::tetrahedron_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

TetrahedralCartesian3D_Cell TetrahedralCartesian3D_Domain::make_cell(TetrahedralCartesian3D_Vertex vertex1, TetrahedralCartesian3D_Vertex vertex2, TetrahedralCartesian3D_Vertex vertex3, TetrahedralCartesian3D_Vertex vertex4)
{
	typedef viennagrid::result_of::handle<TetrahedralCartesian3D_Domain_t, TetrahedralCartesian3D_Cell_t>::type    CellHandle;
	typedef TetrahedralCartesian3D_Cell_t                                                                          CellType;
	
	viennagrid::storage::static_array<TetrahedralCartesian3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	vertices[2] = viennagrid::handle(domain, vertex3.get_vertex());
	vertices[3] = viennagrid::handle(domain, vertex4.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::tetrahedron_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list TetrahedralCartesian3D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<TetrahedralCartesian3D_Domain_t, viennagrid::tetrahedron_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<TetrahedralCartesian3D_Cell>(TetrahedralCartesian3D_Cell(*it));
	return cells;
}

///////////////////////////////////
// Tetrahedral, cylindrical (3D) //
///////////////////////////////////

unsigned int TetrahedralCylindrical3D_Domain::num_vertices()
{
	TetrahedralCylindrical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TetrahedralCylindrical3D_Domain::make_vertex(PointCylindrical3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

TetrahedralCylindrical3D_Domain_t & TetrahedralCylindrical3D_Domain::get_domain()
{
	return domain;
}

TetrahedralCylindrical3D_Vertex TetrahedralCylindrical3D_Domain::get_vertex(unsigned int index)
{
	typedef TetrahedralCylindrical3D_VertexRange_t                VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef TetrahedralCylindrical3D_Vertex_t::id_type            VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return TetrahedralCylindrical3D_Vertex(*vertex);
}

list TetrahedralCylindrical3D_Domain::get_vertices()
{
	list vertices;
	
	typedef TetrahedralCylindrical3D_Domain_t                                                 DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<TetrahedralCylindrical3D_Vertex>(TetrahedralCylindrical3D_Vertex(*it));
	
	return vertices;
}

unsigned int TetrahedralCylindrical3D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<TetrahedralCylindrical3D_Domain_t, viennagrid::tetrahedron_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

TetrahedralCylindrical3D_Cell TetrahedralCylindrical3D_Domain::make_cell(TetrahedralCylindrical3D_Vertex vertex1, TetrahedralCylindrical3D_Vertex vertex2, TetrahedralCylindrical3D_Vertex vertex3, TetrahedralCylindrical3D_Vertex vertex4)
{
	typedef viennagrid::result_of::handle<TetrahedralCylindrical3D_Domain_t, TetrahedralCylindrical3D_Cell_t>::type    CellHandle;
	typedef TetrahedralCylindrical3D_Cell_t                                                                            CellType;
	
	viennagrid::storage::static_array<TetrahedralCylindrical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	vertices[2] = viennagrid::handle(domain, vertex3.get_vertex());
	vertices[3] = viennagrid::handle(domain, vertex4.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::tetrahedron_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list TetrahedralCylindrical3D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<TetrahedralCylindrical3D_Domain_t, viennagrid::tetrahedron_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<TetrahedralCylindrical3D_Cell>(TetrahedralCylindrical3D_Cell(*it));
	return cells;
}

/////////////////////////////////
// Tetrahedral, spherical (3D) //
/////////////////////////////////

unsigned int TetrahedralSpherical3D_Domain::num_vertices()
{
	TetrahedralSpherical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TetrahedralSpherical3D_Domain::make_vertex(PointSpherical3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

TetrahedralSpherical3D_Domain_t & TetrahedralSpherical3D_Domain::get_domain()
{
	return domain;
}

TetrahedralSpherical3D_Vertex TetrahedralSpherical3D_Domain::get_vertex(unsigned int index)
{
	typedef TetrahedralSpherical3D_VertexRange_t                  VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef TetrahedralSpherical3D_Vertex_t::id_type              VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return TetrahedralSpherical3D_Vertex(*vertex);
}

list TetrahedralSpherical3D_Domain::get_vertices()
{
	list vertices;
	
	typedef TetrahedralSpherical3D_Domain_t                                                   DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<TetrahedralSpherical3D_Vertex>(TetrahedralSpherical3D_Vertex(*it));
	
	return vertices;
}

unsigned int TetrahedralSpherical3D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<TetrahedralSpherical3D_Domain_t, viennagrid::tetrahedron_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

TetrahedralSpherical3D_Cell TetrahedralSpherical3D_Domain::make_cell(TetrahedralSpherical3D_Vertex vertex1, TetrahedralSpherical3D_Vertex vertex2, TetrahedralSpherical3D_Vertex vertex3, TetrahedralSpherical3D_Vertex vertex4)
{
	typedef viennagrid::result_of::handle<TetrahedralSpherical3D_Domain_t, TetrahedralSpherical3D_Cell_t>::type    CellHandle;
	typedef TetrahedralSpherical3D_Cell_t                                                                          CellType;
	
	viennagrid::storage::static_array<TetrahedralSpherical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	vertices[2] = viennagrid::handle(domain, vertex3.get_vertex());
	vertices[3] = viennagrid::handle(domain, vertex4.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::tetrahedron_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list TetrahedralSpherical3D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<TetrahedralSpherical3D_Domain_t, viennagrid::tetrahedron_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<TetrahedralSpherical3D_Cell>(TetrahedralSpherical3D_Cell(*it));
	return cells;
}
