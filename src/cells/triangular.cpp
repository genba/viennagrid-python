#include "triangular.hpp"

#include "../vertices/triangular.hpp"

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

TriangularCartesian2D_Cell::TriangularCartesian2D_Cell(TriangularCartesian2D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list TriangularCartesian2D_Cell::get_vertices()
{
	list vertices;
	
	typedef TriangularCartesian2D_Cell_t                                                    CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                             ++voeit)
	{
		vertices.append<TriangularCartesian2D_Vertex>(TriangularCartesian2D_Vertex(*voeit));
	}
	
	return vertices;
}

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

TriangularCartesian3D_Cell::TriangularCartesian3D_Cell(TriangularCartesian3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list TriangularCartesian3D_Cell::get_vertices()
{
	list vertices;
	
	typedef TriangularCartesian3D_Cell_t                                                    CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                             ++voeit)
	{
		vertices.append<TriangularCartesian3D_Vertex>(TriangularCartesian3D_Vertex(*voeit));
	}
	
	return vertices;
}

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

TriangularCylindrical3D_Cell::TriangularCylindrical3D_Cell(TriangularCylindrical3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list TriangularCylindrical3D_Cell::get_vertices()
{
	list vertices;
	
	typedef TriangularCylindrical3D_Cell_t                                                  CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                             ++voeit)
	{
		vertices.append<TriangularCylindrical3D_Vertex>(TriangularCylindrical3D_Vertex(*voeit));
	}
	
	return vertices;
}

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

TriangularPolar2D_Cell::TriangularPolar2D_Cell(TriangularPolar2D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list TriangularPolar2D_Cell::get_vertices()
{
	list vertices;
	
	typedef TriangularPolar2D_Cell_t                                                        CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                             ++voeit)
	{
		vertices.append<TriangularPolar2D_Vertex>(TriangularPolar2D_Vertex(*voeit));
	}
	
	return vertices;
}

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

TriangularSpherical3D_Cell::TriangularSpherical3D_Cell(TriangularSpherical3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list TriangularSpherical3D_Cell::get_vertices()
{
	list vertices;
	
	typedef TriangularSpherical3D_Cell_t                                                    CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                             ++voeit)
	{
		vertices.append<TriangularSpherical3D_Vertex>(TriangularSpherical3D_Vertex(*voeit));
	}
	
	return vertices;
}
