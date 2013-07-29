#include "tetrahedral.hpp"

#include "../vertices/tetrahedral.hpp"

///////////////////////////////
// Tetrahedral, cartesian 3D //
///////////////////////////////

TetrahedralCartesian3D_Cell::TetrahedralCartesian3D_Cell(TetrahedralCartesian3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list TetrahedralCartesian3D_Cell::get_vertices()
{
	list vertices;
	
	typedef TetrahedralCartesian3D_Cell_t                                                   CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                             ++voeit)
	{
		vertices.append<TetrahedralCartesian3D_Vertex>(TetrahedralCartesian3D_Vertex(*voeit));
	}
	
	return vertices;
}

TetrahedralCartesian3D_Cell_t & TetrahedralCartesian3D_Cell::get_cell()
{
	return *cell;
}

///////////////////////////////////
// Tetrahedral, cylindrical (3D) //
///////////////////////////////////

TetrahedralCylindrical3D_Cell::TetrahedralCylindrical3D_Cell(TetrahedralCylindrical3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list TetrahedralCylindrical3D_Cell::get_vertices()
{
	list vertices;
	
	typedef TetrahedralCylindrical3D_Cell_t                                                 CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                             ++voeit)
	{
		vertices.append<TetrahedralCylindrical3D_Vertex>(TetrahedralCylindrical3D_Vertex(*voeit));
	}
	
	return vertices;
}

TetrahedralCylindrical3D_Cell_t & TetrahedralCylindrical3D_Cell::get_cell()
{
	return *cell;
}

/////////////////////////////////
// Tetrahedral, spherical (3D) //
/////////////////////////////////

TetrahedralSpherical3D_Cell::TetrahedralSpherical3D_Cell(TetrahedralSpherical3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

list TetrahedralSpherical3D_Cell::get_vertices()
{
	list vertices;
	
	typedef TetrahedralSpherical3D_Cell_t                                                   CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                             ++voeit)
	{
		vertices.append<TetrahedralSpherical3D_Vertex>(TetrahedralSpherical3D_Vertex(*voeit));
	}
	
	return vertices;
}

TetrahedralSpherical3D_Cell_t & TetrahedralSpherical3D_Cell::get_cell()
{
	return *cell;
}
