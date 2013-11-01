/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "quadrilateral.hpp"

#include <string>
#include <stdexcept>

/////////////////////////////////
// Quadrilateral, cartesian 2D //
/////////////////////////////////

unsigned int QuadrilateralCartesian2D_Domain::num_vertices()
{
	QuadrilateralCartesian2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void QuadrilateralCartesian2D_Domain::make_vertex(PointCartesian2D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

QuadrilateralCartesian2D_Domain_t & QuadrilateralCartesian2D_Domain::get_domain()
{
	return domain;
}

QuadrilateralCartesian2D_Vertex QuadrilateralCartesian2D_Domain::get_vertex(unsigned int index)
{
	typedef QuadrilateralCartesian2D_VertexRange_t                VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef QuadrilateralCartesian2D_Vertex_t::id_type            VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return QuadrilateralCartesian2D_Vertex(*vertex);
}

list QuadrilateralCartesian2D_Domain::get_vertices()
{
	list vertices;
	
	typedef QuadrilateralCartesian2D_Domain_t                                                 DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<QuadrilateralCartesian2D_Vertex>(QuadrilateralCartesian2D_Vertex(*it));
	
	return vertices;
}

unsigned int QuadrilateralCartesian2D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<QuadrilateralCartesian2D_Domain_t, viennagrid::quadrilateral_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

QuadrilateralCartesian2D_Cell QuadrilateralCartesian2D_Domain::make_cell(QuadrilateralCartesian2D_Vertex vertex1, QuadrilateralCartesian2D_Vertex vertex2, QuadrilateralCartesian2D_Vertex vertex3, QuadrilateralCartesian2D_Vertex vertex4)
{
	typedef viennagrid::result_of::handle<QuadrilateralCartesian2D_Domain_t, QuadrilateralCartesian2D_Cell_t>::type    CellHandle;
	typedef QuadrilateralCartesian2D_Cell_t                                                                            CellType;
	
	viennagrid::storage::static_array<QuadrilateralCartesian2D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	vertices[2] = viennagrid::handle(domain, vertex3.get_vertex());
	vertices[3] = viennagrid::handle(domain, vertex4.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::quadrilateral_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list QuadrilateralCartesian2D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<QuadrilateralCartesian2D_Domain_t, viennagrid::quadrilateral_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<QuadrilateralCartesian2D_Cell>(QuadrilateralCartesian2D_Cell(*it));
	return cells;
}

/////////////////////////////////
// Quadrilateral, cartesian 3D //
/////////////////////////////////

unsigned int QuadrilateralCartesian3D_Domain::num_vertices()
{
	QuadrilateralCartesian3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void QuadrilateralCartesian3D_Domain::make_vertex(PointCartesian3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

QuadrilateralCartesian3D_Domain_t & QuadrilateralCartesian3D_Domain::get_domain()
{
	return domain;
}

QuadrilateralCartesian3D_Vertex QuadrilateralCartesian3D_Domain::get_vertex(unsigned int index)
{
	typedef QuadrilateralCartesian3D_VertexRange_t                VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef QuadrilateralCartesian3D_Vertex_t::id_type            VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return QuadrilateralCartesian3D_Vertex(*vertex);
}

list QuadrilateralCartesian3D_Domain::get_vertices()
{
	list vertices;
	
	typedef QuadrilateralCartesian3D_Domain_t                                                 DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<QuadrilateralCartesian3D_Vertex>(QuadrilateralCartesian3D_Vertex(*it));
	
	return vertices;
}

unsigned int QuadrilateralCartesian3D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<QuadrilateralCartesian3D_Domain_t, viennagrid::quadrilateral_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

QuadrilateralCartesian3D_Cell QuadrilateralCartesian3D_Domain::make_cell(QuadrilateralCartesian3D_Vertex vertex1, QuadrilateralCartesian3D_Vertex vertex2, QuadrilateralCartesian3D_Vertex vertex3, QuadrilateralCartesian3D_Vertex vertex4)
{
	typedef viennagrid::result_of::handle<QuadrilateralCartesian3D_Domain_t, QuadrilateralCartesian3D_Cell_t>::type    CellHandle;
	typedef QuadrilateralCartesian3D_Cell_t                                                                            CellType;
	
	viennagrid::storage::static_array<QuadrilateralCartesian3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	vertices[2] = viennagrid::handle(domain, vertex3.get_vertex());
	vertices[3] = viennagrid::handle(domain, vertex4.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::quadrilateral_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list QuadrilateralCartesian3D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<QuadrilateralCartesian3D_Domain_t, viennagrid::quadrilateral_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<QuadrilateralCartesian3D_Cell>(QuadrilateralCartesian3D_Cell(*it));
	return cells;
}

/////////////////////////////////////
// Quadrilateral, cylindrical (3D) //
/////////////////////////////////////

unsigned int QuadrilateralCylindrical3D_Domain::num_vertices()
{
	QuadrilateralCylindrical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void QuadrilateralCylindrical3D_Domain::make_vertex(PointCylindrical3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

QuadrilateralCylindrical3D_Domain_t & QuadrilateralCylindrical3D_Domain::get_domain()
{
	return domain;
}

QuadrilateralCylindrical3D_Vertex QuadrilateralCylindrical3D_Domain::get_vertex(unsigned int index)
{
	typedef QuadrilateralCylindrical3D_VertexRange_t              VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef QuadrilateralCylindrical3D_Vertex_t::id_type          VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return QuadrilateralCylindrical3D_Vertex(*vertex);
}

list QuadrilateralCylindrical3D_Domain::get_vertices()
{
	list vertices;
	
	typedef QuadrilateralCylindrical3D_Domain_t                                               DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<QuadrilateralCylindrical3D_Vertex>(QuadrilateralCylindrical3D_Vertex(*it));
	
	return vertices;
}

unsigned int QuadrilateralCylindrical3D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<QuadrilateralCylindrical3D_Domain_t, viennagrid::quadrilateral_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

QuadrilateralCylindrical3D_Cell QuadrilateralCylindrical3D_Domain::make_cell(QuadrilateralCylindrical3D_Vertex vertex1, QuadrilateralCylindrical3D_Vertex vertex2, QuadrilateralCylindrical3D_Vertex vertex3, QuadrilateralCylindrical3D_Vertex vertex4)
{
	typedef viennagrid::result_of::handle<QuadrilateralCylindrical3D_Domain_t, QuadrilateralCylindrical3D_Cell_t>::type    CellHandle;
	typedef QuadrilateralCylindrical3D_Cell_t                                                                              CellType;
	
	viennagrid::storage::static_array<QuadrilateralCylindrical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	vertices[2] = viennagrid::handle(domain, vertex3.get_vertex());
	vertices[3] = viennagrid::handle(domain, vertex4.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::quadrilateral_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list QuadrilateralCylindrical3D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<QuadrilateralCylindrical3D_Domain_t, viennagrid::quadrilateral_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<QuadrilateralCylindrical3D_Cell>(QuadrilateralCylindrical3D_Cell(*it));
	return cells;
}

///////////////////////////////
// Quadrilateral, polar (2D) //
///////////////////////////////

unsigned int QuadrilateralPolar2D_Domain::num_vertices()
{
	QuadrilateralPolar2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void QuadrilateralPolar2D_Domain::make_vertex(PointPolar2D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

QuadrilateralPolar2D_Domain_t & QuadrilateralPolar2D_Domain::get_domain()
{
	return domain;
}

QuadrilateralPolar2D_Vertex QuadrilateralPolar2D_Domain::get_vertex(unsigned int index)
{
	typedef QuadrilateralPolar2D_VertexRange_t                    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef QuadrilateralPolar2D_Vertex_t::id_type                VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return QuadrilateralPolar2D_Vertex(*vertex);
}

list QuadrilateralPolar2D_Domain::get_vertices()
{
	list vertices;
	
	typedef QuadrilateralPolar2D_Domain_t                                                     DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<QuadrilateralPolar2D_Vertex>(QuadrilateralPolar2D_Vertex(*it));
	
	return vertices;
}

unsigned int QuadrilateralPolar2D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<QuadrilateralPolar2D_Domain_t, viennagrid::quadrilateral_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

QuadrilateralPolar2D_Cell QuadrilateralPolar2D_Domain::make_cell(QuadrilateralPolar2D_Vertex vertex1, QuadrilateralPolar2D_Vertex vertex2, QuadrilateralPolar2D_Vertex vertex3, QuadrilateralPolar2D_Vertex vertex4)
{
	typedef viennagrid::result_of::handle<QuadrilateralPolar2D_Domain_t, QuadrilateralPolar2D_Cell_t>::type    CellHandle;
	typedef QuadrilateralPolar2D_Cell_t                                                                        CellType;
	
	viennagrid::storage::static_array<QuadrilateralPolar2D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	vertices[2] = viennagrid::handle(domain, vertex3.get_vertex());
	vertices[3] = viennagrid::handle(domain, vertex4.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::quadrilateral_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list QuadrilateralPolar2D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<QuadrilateralPolar2D_Domain_t, viennagrid::quadrilateral_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<QuadrilateralPolar2D_Cell>(QuadrilateralPolar2D_Cell(*it));
	return cells;
}

///////////////////////////////////
// Quadrilateral, spherical (3D) //
///////////////////////////////////

unsigned int QuadrilateralSpherical3D_Domain::num_vertices()
{
	QuadrilateralSpherical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void QuadrilateralSpherical3D_Domain::make_vertex(PointSpherical3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

QuadrilateralSpherical3D_Domain_t & QuadrilateralSpherical3D_Domain::get_domain()
{
	return domain;
}

QuadrilateralSpherical3D_Vertex QuadrilateralSpherical3D_Domain::get_vertex(unsigned int index)
{
	typedef QuadrilateralSpherical3D_VertexRange_t                VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef QuadrilateralSpherical3D_Vertex_t::id_type            VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return QuadrilateralSpherical3D_Vertex(*vertex);
}

list QuadrilateralSpherical3D_Domain::get_vertices()
{
	list vertices;
	
	typedef QuadrilateralSpherical3D_Domain_t                                                 DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<QuadrilateralSpherical3D_Vertex>(QuadrilateralSpherical3D_Vertex(*it));
	
	return vertices;
}

unsigned int QuadrilateralSpherical3D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<QuadrilateralSpherical3D_Domain_t, viennagrid::quadrilateral_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

QuadrilateralSpherical3D_Cell QuadrilateralSpherical3D_Domain::make_cell(QuadrilateralSpherical3D_Vertex vertex1, QuadrilateralSpherical3D_Vertex vertex2, QuadrilateralSpherical3D_Vertex vertex3, QuadrilateralSpherical3D_Vertex vertex4)
{
	typedef viennagrid::result_of::handle<QuadrilateralSpherical3D_Domain_t, QuadrilateralSpherical3D_Cell_t>::type    CellHandle;
	typedef QuadrilateralSpherical3D_Cell_t                                                                            CellType;
	
	viennagrid::storage::static_array<QuadrilateralSpherical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	vertices[2] = viennagrid::handle(domain, vertex3.get_vertex());
	vertices[3] = viennagrid::handle(domain, vertex4.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::quadrilateral_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list QuadrilateralSpherical3D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<QuadrilateralSpherical3D_Domain_t, viennagrid::quadrilateral_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<QuadrilateralSpherical3D_Cell>(QuadrilateralSpherical3D_Cell(*it));
	return cells;
}
