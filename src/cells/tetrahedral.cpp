#include "tetrahedral.hpp"

#include "../vertices/tetrahedral.hpp"
#include "../facets/tetrahedral.hpp"

///////////////////////////////
// Tetrahedral, cartesian 3D //
///////////////////////////////

TetrahedralCartesian3D_Cell::TetrahedralCartesian3D_Cell(TetrahedralCartesian3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

unsigned int TetrahedralCartesian3D_Cell::num_vertices()
{
	return viennagrid::elements<viennagrid::vertex_tag>(*cell).size();
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

list TetrahedralCartesian3D_Cell::get_facets()
{
	list facets;
	
	typedef TetrahedralCartesian3D_Cell_t                               CellType;
	typedef viennagrid::result_of::facet_range<CellType>::type          FacetOnCellRange;
	typedef viennagrid::result_of::iterator<FacetOnCellRange>::type     FacetOnCellIterator;
	
	FacetOnCellRange facets_on_cell = viennagrid::elements(*cell);
	for (FacetOnCellIterator focit = facets_on_cell.begin();
	                         focit != facets_on_cell.end();
	                       ++focit)
	{
		facets.append<TetrahedralCartesian3D_Facet>(TetrahedralCartesian3D_Facet(*focit));
	}
	
	return facets;
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

unsigned int TetrahedralCylindrical3D_Cell::num_vertices()
{
	return viennagrid::elements<viennagrid::vertex_tag>(*cell).size();
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

list TetrahedralCylindrical3D_Cell::get_facets()
{
	list facets;
	
	typedef TetrahedralCylindrical3D_Cell_t                             CellType;
	typedef viennagrid::result_of::facet_range<CellType>::type          FacetOnCellRange;
	typedef viennagrid::result_of::iterator<FacetOnCellRange>::type     FacetOnCellIterator;
	
	FacetOnCellRange facets_on_cell = viennagrid::elements(*cell);
	for (FacetOnCellIterator focit = facets_on_cell.begin();
	                         focit != facets_on_cell.end();
	                       ++focit)
	{
		facets.append<TetrahedralCylindrical3D_Facet>(TetrahedralCylindrical3D_Facet(*focit));
	}
	
	return facets;
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

unsigned int TetrahedralSpherical3D_Cell::num_vertices()
{
	return viennagrid::elements<viennagrid::vertex_tag>(*cell).size();
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

list TetrahedralSpherical3D_Cell::get_facets()
{
	list facets;
	
	typedef TetrahedralSpherical3D_Cell_t                               CellType;
	typedef viennagrid::result_of::facet_range<CellType>::type          FacetOnCellRange;
	typedef viennagrid::result_of::iterator<FacetOnCellRange>::type     FacetOnCellIterator;
	
	FacetOnCellRange facets_on_cell = viennagrid::elements(*cell);
	for (FacetOnCellIterator focit = facets_on_cell.begin();
	                         focit != facets_on_cell.end();
	                       ++focit)
	{
		facets.append<TetrahedralSpherical3D_Facet>(TetrahedralSpherical3D_Facet(*focit));
	}
	
	return facets;
}

TetrahedralSpherical3D_Cell_t & TetrahedralSpherical3D_Cell::get_cell()
{
	return *cell;
}
