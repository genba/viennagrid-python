#include "linear.hpp"

#include <string>
#include <stdexcept>

////////////////////////////
// Triangle, cartesian 1D //
////////////////////////////

unsigned int LinearCartesian1D_Domain::num_vertices()
{
	LinearCartesian1D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void LinearCartesian1D_Domain::make_vertex(PointCartesian1D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

LinearCartesian1D_Domain_t & LinearCartesian1D_Domain::get_domain()
{
	return domain;
}

LinearCartesian1D_Vertex LinearCartesian1D_Domain::get_vertex(unsigned int index)
{
	typedef LinearCartesian1D_VertexRange_t                       VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef LinearCartesian1D_Vertex_t::id_type                   VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return LinearCartesian1D_Vertex(*vertex);
}

list LinearCartesian1D_Domain::get_vertices()
{
	list vertices;
	
	typedef LinearCartesian1D_Domain_t                                                        DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<LinearCartesian1D_Vertex>(LinearCartesian1D_Vertex(*it));
	
	return vertices;
}

unsigned int LinearCartesian1D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<LinearCartesian1D_Domain_t, viennagrid::line_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

LinearCartesian1D_Cell LinearCartesian1D_Domain::make_cell(LinearCartesian1D_Vertex vertex1, LinearCartesian1D_Vertex vertex2)
{
	typedef viennagrid::result_of::handle<LinearCartesian1D_Domain_t, LinearCartesian1D_Cell_t>::type    CellHandle;
	typedef LinearCartesian1D_Cell_t                                                                     CellType;
	
	viennagrid::storage::static_array<LinearCartesian1D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::line_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list LinearCartesian1D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearCartesian1D_Domain_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearCartesian1D_Cell>(LinearCartesian1D_Cell(*it));
	return cells;
}

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

unsigned int LinearCartesian2D_Domain::num_vertices()
{
	LinearCartesian2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void LinearCartesian2D_Domain::make_vertex(PointCartesian2D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

LinearCartesian2D_Domain_t & LinearCartesian2D_Domain::get_domain()
{
	return domain;
}

LinearCartesian2D_Vertex LinearCartesian2D_Domain::get_vertex(unsigned int index)
{
	typedef LinearCartesian2D_VertexRange_t                       VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef LinearCartesian2D_Vertex_t::id_type                   VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return LinearCartesian2D_Vertex(*vertex);
}

list LinearCartesian2D_Domain::get_vertices()
{
	list vertices;
	
	typedef LinearCartesian2D_Domain_t                                                        DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<LinearCartesian2D_Vertex>(LinearCartesian2D_Vertex(*it));
	
	return vertices;
}

unsigned int LinearCartesian2D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<LinearCartesian2D_Domain_t, viennagrid::line_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

LinearCartesian2D_Cell LinearCartesian2D_Domain::make_cell(LinearCartesian2D_Vertex vertex1, LinearCartesian2D_Vertex vertex2)
{
	typedef viennagrid::result_of::handle<LinearCartesian2D_Domain_t, LinearCartesian2D_Cell_t>::type    CellHandle;
	typedef LinearCartesian2D_Cell_t                                                                     CellType;
	
	viennagrid::storage::static_array<LinearCartesian2D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::line_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list LinearCartesian2D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearCartesian2D_Domain_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearCartesian2D_Cell>(LinearCartesian2D_Cell(*it));
	return cells;
}

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

unsigned int LinearCartesian3D_Domain::num_vertices()
{
	LinearCartesian3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void LinearCartesian3D_Domain::make_vertex(PointCartesian3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

LinearCartesian3D_Domain_t & LinearCartesian3D_Domain::get_domain()
{
	return domain;
}

LinearCartesian3D_Vertex LinearCartesian3D_Domain::get_vertex(unsigned int index)
{
	typedef LinearCartesian3D_VertexRange_t                       VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef LinearCartesian3D_Vertex_t::id_type                   VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return LinearCartesian3D_Vertex(*vertex);
}

list LinearCartesian3D_Domain::get_vertices()
{
	list vertices;
	
	typedef LinearCartesian3D_Domain_t                                                        DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<LinearCartesian3D_Vertex>(LinearCartesian3D_Vertex(*it));
	
	return vertices;
}

unsigned int LinearCartesian3D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<LinearCartesian3D_Domain_t, viennagrid::line_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

LinearCartesian3D_Cell LinearCartesian3D_Domain::make_cell(LinearCartesian3D_Vertex vertex1, LinearCartesian3D_Vertex vertex2)
{
	typedef viennagrid::result_of::handle<LinearCartesian3D_Domain_t, LinearCartesian3D_Cell_t>::type    CellHandle;
	typedef LinearCartesian3D_Cell_t                                                                     CellType;
	
	viennagrid::storage::static_array<LinearCartesian3D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::line_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list LinearCartesian3D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearCartesian3D_Domain_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearCartesian3D_Cell>(LinearCartesian3D_Cell(*it));
	return cells;
}

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

unsigned int LinearCylindrical3D_Domain::num_vertices()
{
	LinearCylindrical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void LinearCylindrical3D_Domain::make_vertex(PointCylindrical3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

LinearCylindrical3D_Domain_t & LinearCylindrical3D_Domain::get_domain()
{
	return domain;
}

LinearCylindrical3D_Vertex LinearCylindrical3D_Domain::get_vertex(unsigned int index)
{
	typedef LinearCylindrical3D_VertexRange_t                     VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef LinearCylindrical3D_Vertex_t::id_type                 VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return LinearCylindrical3D_Vertex(*vertex);
}

list LinearCylindrical3D_Domain::get_vertices()
{
	list vertices;
	
	typedef LinearCylindrical3D_Domain_t                                                      DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<LinearCylindrical3D_Vertex>(LinearCylindrical3D_Vertex(*it));
	
	return vertices;
}

unsigned int LinearCylindrical3D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<LinearCylindrical3D_Domain_t, viennagrid::line_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

LinearCylindrical3D_Cell LinearCylindrical3D_Domain::make_cell(LinearCylindrical3D_Vertex vertex1, LinearCylindrical3D_Vertex vertex2)
{
	typedef viennagrid::result_of::handle<LinearCylindrical3D_Domain_t, LinearCylindrical3D_Cell_t>::type    CellHandle;
	typedef LinearCylindrical3D_Cell_t                                                                       CellType;
	
	viennagrid::storage::static_array<LinearCylindrical3D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::line_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list LinearCylindrical3D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearCylindrical3D_Domain_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearCylindrical3D_Cell>(LinearCylindrical3D_Cell(*it));
	return cells;
}

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

unsigned int LinearPolar2D_Domain::num_vertices()
{
	LinearPolar2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void LinearPolar2D_Domain::make_vertex(PointPolar2D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

LinearPolar2D_Domain_t & LinearPolar2D_Domain::get_domain()
{
	return domain;
}

LinearPolar2D_Vertex LinearPolar2D_Domain::get_vertex(unsigned int index)
{
	typedef LinearPolar2D_VertexRange_t                           VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef LinearPolar2D_Vertex_t::id_type                       VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return LinearPolar2D_Vertex(*vertex);
}

list LinearPolar2D_Domain::get_vertices()
{
	list vertices;
	
	typedef LinearPolar2D_Domain_t                                                            DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<LinearPolar2D_Vertex>(LinearPolar2D_Vertex(*it));
	
	return vertices;
}

unsigned int LinearPolar2D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<LinearPolar2D_Domain_t, viennagrid::line_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

LinearPolar2D_Cell LinearPolar2D_Domain::make_cell(LinearPolar2D_Vertex vertex1, LinearPolar2D_Vertex vertex2)
{
	typedef viennagrid::result_of::handle<LinearPolar2D_Domain_t, LinearPolar2D_Cell_t>::type    CellHandle;
	typedef LinearPolar2D_Cell_t                                                                 CellType;
	
	viennagrid::storage::static_array<LinearPolar2D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::line_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list LinearPolar2D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearPolar2D_Domain_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearPolar2D_Cell>(LinearPolar2D_Cell(*it));
	return cells;
}

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

unsigned int LinearSpherical3D_Domain::num_vertices()
{
	LinearSpherical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void LinearSpherical3D_Domain::make_vertex(PointSpherical3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

LinearSpherical3D_Domain_t & LinearSpherical3D_Domain::get_domain()
{
	return domain;
}

LinearSpherical3D_Vertex LinearSpherical3D_Domain::get_vertex(unsigned int index)
{
	typedef LinearSpherical3D_VertexRange_t                       VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef LinearSpherical3D_Vertex_t::id_type                   VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	VertexRange range = viennagrid::elements(domain);
	if (vertex == range.end())
	{
		std::stringstream ss;
		ss << "no vertex at index " << index;
		throw std::out_of_range(ss.str());
	}
	return LinearSpherical3D_Vertex(*vertex);
}

list LinearSpherical3D_Domain::get_vertices()
{
	list vertices;
	
	typedef LinearSpherical3D_Domain_t                                                        DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<LinearSpherical3D_Vertex>(LinearSpherical3D_Vertex(*it));
	
	return vertices;
}

unsigned int LinearSpherical3D_Domain::num_cells()
{
	typedef viennagrid::result_of::element_range<LinearSpherical3D_Domain_t, viennagrid::line_tag>::type    range_type;
	
	range_type range = viennagrid::elements(domain);
	return range.size();
}

LinearSpherical3D_Cell LinearSpherical3D_Domain::make_cell(LinearSpherical3D_Vertex vertex1, LinearSpherical3D_Vertex vertex2)
{
	typedef viennagrid::result_of::handle<LinearSpherical3D_Domain_t, LinearSpherical3D_Cell_t>::type    CellHandle;
	typedef LinearSpherical3D_Cell_t                                                                     CellType;
	
	viennagrid::storage::static_array<LinearSpherical3D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(domain, vertex1.get_vertex());
	vertices[1] = viennagrid::handle(domain, vertex2.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::line_tag>(domain, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(domain, ch);
	
	return cell;
}

list LinearSpherical3D_Domain::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearSpherical3D_Domain_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(domain);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearSpherical3D_Cell>(LinearSpherical3D_Cell(*it));
	return cells;
}
