#include "triangular.hpp"

#include <string>
#include <stdexcept>

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

unsigned int TriangularCartesian2D_Domain::num_vertices()
{
	TriangularCartesian2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularCartesian2D_Domain::make_vertex(PointCartesian2D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

TriangularCartesian2D_Domain_t & TriangularCartesian2D_Domain::get_domain()
{
	return domain;
}

TriangularCartesian2D_Vertex TriangularCartesian2D_Domain::get_vertex(unsigned int index)
{
	typedef TriangularCartesian2D_VertexRange_t                   VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef TriangularCartesian2D_Vertex_t::id_type               VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return TriangularCartesian2D_Vertex(*vertex);
}

list TriangularCartesian2D_Domain::get_vertices()
{
	list vertices;
	
	typedef TriangularCartesian2D_Domain_t                                                    DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<TriangularCartesian2D_Vertex>(TriangularCartesian2D_Vertex(*it));
	
	return vertices;
}

unsigned int TriangularCartesian2D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<TriangularCartesian2D_Domain_t, viennagrid::triangle_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

TriangularCartesian2D_Cell TriangularCartesian2D_Domain::make_cell(TriangularCartesian2D_Vertex vertex1, TriangularCartesian2D_Vertex vertex2, TriangularCartesian2D_Vertex vertex3)
{
	typedef viennagrid::result_of::handle<TriangularCartesian2D_Domain_t, TriangularCartesian2D_Cell_t>::type    CellHandle;
	typedef TriangularCartesian2D_Cell_t                                                                         CellType;
	
	viennagrid::storage::static_array<TriangularCartesian2D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	vertices[2] = viennagrid::handle(domain, vertex3.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::triangle_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list TriangularCartesian2D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<TriangularCartesian2D_Domain_t, viennagrid::triangle_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<TriangularCartesian2D_Cell>(TriangularCartesian2D_Cell(*it));
	return cells;
}

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

unsigned int TriangularCartesian3D_Domain::num_vertices()
{
	TriangularCartesian3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularCartesian3D_Domain::make_vertex(PointCartesian3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

TriangularCartesian3D_Domain_t & TriangularCartesian3D_Domain::get_domain()
{
	return domain;
}

TriangularCartesian3D_Vertex TriangularCartesian3D_Domain::get_vertex(unsigned int index)
{
	typedef TriangularCartesian3D_VertexRange_t                   VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef TriangularCartesian3D_Vertex_t::id_type               VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return TriangularCartesian3D_Vertex(*vertex);
}

list TriangularCartesian3D_Domain::get_vertices()
{
	list vertices;
	
	typedef TriangularCartesian3D_Domain_t                                                    DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<TriangularCartesian3D_Vertex>(TriangularCartesian3D_Vertex(*it));
	
	return vertices;
}

unsigned int TriangularCartesian3D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<TriangularCartesian3D_Domain_t, viennagrid::triangle_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

TriangularCartesian3D_Cell TriangularCartesian3D_Domain::make_cell(TriangularCartesian3D_Vertex vertex1, TriangularCartesian3D_Vertex vertex2, TriangularCartesian3D_Vertex vertex3)
{
	typedef viennagrid::result_of::handle<TriangularCartesian3D_Domain_t, TriangularCartesian3D_Cell_t>::type    CellHandle;
	typedef TriangularCartesian3D_Cell_t                                                                         CellType;
	
	viennagrid::storage::static_array<TriangularCartesian3D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	vertices[2] = viennagrid::handle(domain, vertex3.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::triangle_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list TriangularCartesian3D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<TriangularCartesian3D_Domain_t, viennagrid::triangle_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<TriangularCartesian3D_Cell>(TriangularCartesian3D_Cell(*it));
	return cells;
}

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

unsigned int TriangularCylindrical3D_Domain::num_vertices()
{
	TriangularCylindrical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularCylindrical3D_Domain::make_vertex(PointCylindrical3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

TriangularCylindrical3D_Domain_t & TriangularCylindrical3D_Domain::get_domain()
{
	return domain;
}

TriangularCylindrical3D_Vertex TriangularCylindrical3D_Domain::get_vertex(unsigned int index)
{
	typedef TriangularCylindrical3D_VertexRange_t                 VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef TriangularCylindrical3D_Vertex_t::id_type             VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return TriangularCylindrical3D_Vertex(*vertex);
}

list TriangularCylindrical3D_Domain::get_vertices()
{
	list vertices;
	
	typedef TriangularCylindrical3D_Domain_t                                                  DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<TriangularCylindrical3D_Vertex>(TriangularCylindrical3D_Vertex(*it));
	
	return vertices;
}

unsigned int TriangularCylindrical3D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<TriangularCylindrical3D_Domain_t, viennagrid::triangle_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

TriangularCylindrical3D_Cell TriangularCylindrical3D_Domain::make_cell(TriangularCylindrical3D_Vertex vertex1, TriangularCylindrical3D_Vertex vertex2, TriangularCylindrical3D_Vertex vertex3)
{
	typedef viennagrid::result_of::handle<TriangularCylindrical3D_Domain_t, TriangularCylindrical3D_Cell_t>::type    CellHandle;
	typedef TriangularCylindrical3D_Cell_t                                                                           CellType;
	
	viennagrid::storage::static_array<TriangularCylindrical3D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	vertices[2] = viennagrid::handle(domain, vertex3.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::triangle_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list TriangularCylindrical3D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<TriangularCylindrical3D_Domain_t, viennagrid::triangle_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<TriangularCylindrical3D_Cell>(TriangularCylindrical3D_Cell(*it));
	return cells;
}

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

unsigned int TriangularPolar2D_Domain::num_vertices()
{
	TriangularPolar2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularPolar2D_Domain::make_vertex(PointPolar2D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

TriangularPolar2D_Domain_t & TriangularPolar2D_Domain::get_domain()
{
	return domain;
}

TriangularPolar2D_Vertex TriangularPolar2D_Domain::get_vertex(unsigned int index)
{
	typedef TriangularPolar2D_VertexRange_t                       VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef TriangularPolar2D_Vertex_t::id_type                   VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return TriangularPolar2D_Vertex(*vertex);
}

list TriangularPolar2D_Domain::get_vertices()
{
	list vertices;
	
	typedef TriangularPolar2D_Domain_t                                                        DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<TriangularPolar2D_Vertex>(TriangularPolar2D_Vertex(*it));
	
	return vertices;
}

unsigned int TriangularPolar2D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<TriangularPolar2D_Domain_t, viennagrid::triangle_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

TriangularPolar2D_Cell TriangularPolar2D_Domain::make_cell(TriangularPolar2D_Vertex vertex1, TriangularPolar2D_Vertex vertex2, TriangularPolar2D_Vertex vertex3)
{
	typedef viennagrid::result_of::handle<TriangularPolar2D_Domain_t, TriangularPolar2D_Cell_t>::type    CellHandle;
	typedef TriangularPolar2D_Cell_t                                                                         CellType;
	
	viennagrid::storage::static_array<TriangularPolar2D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	vertices[2] = viennagrid::handle(domain, vertex3.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::triangle_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list TriangularPolar2D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<TriangularPolar2D_Domain_t, viennagrid::triangle_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<TriangularPolar2D_Cell>(TriangularPolar2D_Cell(*it));
	return cells;
}

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

unsigned int TriangularSpherical3D_Domain::num_vertices()
{
	TriangularSpherical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularSpherical3D_Domain::make_vertex(PointSpherical3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

TriangularSpherical3D_Domain_t & TriangularSpherical3D_Domain::get_domain()
{
	return domain;
}

TriangularSpherical3D_Vertex TriangularSpherical3D_Domain::get_vertex(unsigned int index)
{
	typedef TriangularSpherical3D_VertexRange_t                   VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef TriangularSpherical3D_Vertex_t::id_type               VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return TriangularSpherical3D_Vertex(*vertex);
}

list TriangularSpherical3D_Domain::get_vertices()
{
	list vertices;
	
	typedef TriangularSpherical3D_Domain_t                                                    DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<TriangularSpherical3D_Vertex>(TriangularSpherical3D_Vertex(*it));
	
	return vertices;
}

unsigned int TriangularSpherical3D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<TriangularSpherical3D_Domain_t, viennagrid::triangle_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

TriangularSpherical3D_Cell TriangularSpherical3D_Domain::make_cell(TriangularSpherical3D_Vertex vertex1, TriangularSpherical3D_Vertex vertex2, TriangularSpherical3D_Vertex vertex3)
{
	typedef viennagrid::result_of::handle<TriangularSpherical3D_Domain_t, TriangularSpherical3D_Cell_t>::type    CellHandle;
	typedef TriangularSpherical3D_Cell_t                                                                         CellType;
	
	viennagrid::storage::static_array<TriangularSpherical3D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	vertices[2] = viennagrid::handle(domain, vertex3.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::triangle_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list TriangularSpherical3D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<TriangularSpherical3D_Domain_t, viennagrid::triangle_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<TriangularSpherical3D_Cell>(TriangularSpherical3D_Cell(*it));
	return cells;
}
