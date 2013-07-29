#include "linear.hpp"

////////////////////////
// Line, cartesian 1D //
////////////////////////

LinearCartesian1D_Cell::LinearCartesian1D_Cell(LinearCartesian1D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list LinearCartesian1D_Cell::get_vertices()
{
	list vertices;
	
	typedef LinearCartesian1D_Cell_t                                                        CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                             ++voeit)
	{
		vertices.append<LinearCartesian1D_Vertex>(LinearCartesian1D_Vertex(*voeit));
	}
	
	return vertices;
}

LinearCartesian1D_Cell_t & LinearCartesian1D_Cell::get_cell()
{
	return *cell;
}

////////////////////////
// Line, cartesian 2D //
////////////////////////

LinearCartesian2D_Cell::LinearCartesian2D_Cell(LinearCartesian2D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list LinearCartesian2D_Cell::get_vertices()
{
	list vertices;
	
	typedef LinearCartesian2D_Cell_t                                                        CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                             ++voeit)
	{
		vertices.append<LinearCartesian2D_Vertex>(LinearCartesian2D_Vertex(*voeit));
	}
	
	return vertices;
}

LinearCartesian2D_Cell_t & LinearCartesian2D_Cell::get_cell()
{
	return *cell;
}

////////////////////////
// Line, cartesian 3D //
////////////////////////

LinearCartesian3D_Cell::LinearCartesian3D_Cell(LinearCartesian3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list LinearCartesian3D_Cell::get_vertices()
{
	list vertices;
	
	typedef LinearCartesian3D_Cell_t                                                        CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                             ++voeit)
	{
		vertices.append<LinearCartesian3D_Vertex>(LinearCartesian3D_Vertex(*voeit));
	}
	
	return vertices;
}

LinearCartesian3D_Cell_t & LinearCartesian3D_Cell::get_cell()
{
	return *cell;
}

////////////////////////////
// Line, cylindrical (3D) //
////////////////////////////

LinearCylindrical3D_Cell::LinearCylindrical3D_Cell(LinearCylindrical3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list LinearCylindrical3D_Cell::get_vertices()
{
	list vertices;
	
	typedef LinearCylindrical3D_Cell_t                                                      CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                             ++voeit)
	{
		vertices.append<LinearCylindrical3D_Vertex>(LinearCylindrical3D_Vertex(*voeit));
	}
	
	return vertices;
}

LinearCylindrical3D_Cell_t & LinearCylindrical3D_Cell::get_cell()
{
	return *cell;
}

//////////////////////
// Line, polar (2D) //
//////////////////////

LinearPolar2D_Cell::LinearPolar2D_Cell(LinearPolar2D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list LinearPolar2D_Cell::get_vertices()
{
	list vertices;
	
	typedef LinearPolar2D_Cell_t                                                            CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                             ++voeit)
	{
		vertices.append<LinearPolar2D_Vertex>(LinearPolar2D_Vertex(*voeit));
	}
	
	return vertices;
}

LinearPolar2D_Cell_t & LinearPolar2D_Cell::get_cell()
{
	return *cell;
}

//////////////////////////
// Line, spherical (3D) //
//////////////////////////

LinearSpherical3D_Cell::LinearSpherical3D_Cell(LinearSpherical3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list LinearSpherical3D_Cell::get_vertices()
{
	list vertices;
	
	typedef LinearSpherical3D_Cell_t                                                        CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                             ++voeit)
	{
		vertices.append<LinearSpherical3D_Vertex>(LinearSpherical3D_Vertex(*voeit));
	}
	
	return vertices;
}

LinearSpherical3D_Cell_t & LinearSpherical3D_Cell::get_cell()
{
	return *cell;
}
