#include "quadrilateral.hpp"

#include "../vertices/quadrilateral.hpp"
#include "../facets/quadrilateral.hpp"

/////////////////////////////////
// Quadrilateral, cartesian 2D //
/////////////////////////////////

QuadrilateralCartesian2D_Cell::QuadrilateralCartesian2D_Cell(QuadrilateralCartesian2D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

unsigned int QuadrilateralCartesian2D_Cell::num_vertices()
{
	return viennagrid::elements<viennagrid::vertex_tag>(*cell).size();
}

list QuadrilateralCartesian2D_Cell::get_vertices()
{
	list vertices;
	
	typedef QuadrilateralCartesian2D_Cell_t                                                 CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                           ++voeit)
	{
		vertices.append<QuadrilateralCartesian2D_Vertex>(QuadrilateralCartesian2D_Vertex(*voeit));
	}
	
	return vertices;
}

list QuadrilateralCartesian2D_Cell::get_facets()
{
	list facets;
	
	typedef QuadrilateralCartesian2D_Cell_t                             CellType;
	typedef viennagrid::result_of::facet_range<CellType>::type          FacetOnCellRange;
	typedef viennagrid::result_of::iterator<FacetOnCellRange>::type     FacetOnCellIterator;
	
	FacetOnCellRange facets_on_cell = viennagrid::elements(*cell);
	for (FacetOnCellIterator focit = facets_on_cell.begin();
	                         focit != facets_on_cell.end();
	                       ++focit)
	{
		facets.append<QuadrilateralCartesian2D_Facet>(QuadrilateralCartesian2D_Facet(*focit));
	}
	
	return facets;
}

QuadrilateralCartesian2D_Cell_t & QuadrilateralCartesian2D_Cell::get_cell()
{
	return *cell;
}

/////////////////////////////////
// Quadrilateral, cartesian 3D //
/////////////////////////////////

QuadrilateralCartesian3D_Cell::QuadrilateralCartesian3D_Cell(QuadrilateralCartesian3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

unsigned int QuadrilateralCartesian3D_Cell::num_vertices()
{
	return viennagrid::elements<viennagrid::vertex_tag>(*cell).size();
}

list QuadrilateralCartesian3D_Cell::get_vertices()
{
	list vertices;
	
	typedef QuadrilateralCartesian3D_Cell_t                                                 CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                           ++voeit)
	{
		vertices.append<QuadrilateralCartesian3D_Vertex>(QuadrilateralCartesian3D_Vertex(*voeit));
	}
	
	return vertices;
}

list QuadrilateralCartesian3D_Cell::get_facets()
{
	list facets;
	
	typedef QuadrilateralCartesian3D_Cell_t                             CellType;
	typedef viennagrid::result_of::facet_range<CellType>::type          FacetOnCellRange;
	typedef viennagrid::result_of::iterator<FacetOnCellRange>::type     FacetOnCellIterator;
	
	FacetOnCellRange facets_on_cell = viennagrid::elements(*cell);
	for (FacetOnCellIterator focit = facets_on_cell.begin();
	                         focit != facets_on_cell.end();
	                       ++focit)
	{
		facets.append<QuadrilateralCartesian3D_Facet>(QuadrilateralCartesian3D_Facet(*focit));
	}
	
	return facets;
}

QuadrilateralCartesian3D_Cell_t & QuadrilateralCartesian3D_Cell::get_cell()
{
	return *cell;
}

/////////////////////////////////////
// Quadrilateral, cylindrical (3D) //
/////////////////////////////////////

QuadrilateralCylindrical3D_Cell::QuadrilateralCylindrical3D_Cell(QuadrilateralCylindrical3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

unsigned int QuadrilateralCylindrical3D_Cell::num_vertices()
{
	return viennagrid::elements<viennagrid::vertex_tag>(*cell).size();
}

list QuadrilateralCylindrical3D_Cell::get_vertices()
{
	list vertices;
	
	typedef QuadrilateralCylindrical3D_Cell_t                                               CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                           ++voeit)
	{
		vertices.append<QuadrilateralCylindrical3D_Vertex>(QuadrilateralCylindrical3D_Vertex(*voeit));
	}
	
	return vertices;
}

list QuadrilateralCylindrical3D_Cell::get_facets()
{
	list facets;
	
	typedef QuadrilateralCylindrical3D_Cell_t                           CellType;
	typedef viennagrid::result_of::facet_range<CellType>::type          FacetOnCellRange;
	typedef viennagrid::result_of::iterator<FacetOnCellRange>::type     FacetOnCellIterator;
	
	FacetOnCellRange facets_on_cell = viennagrid::elements(*cell);
	for (FacetOnCellIterator focit = facets_on_cell.begin();
	                         focit != facets_on_cell.end();
	                       ++focit)
	{
		facets.append<QuadrilateralCylindrical3D_Facet>(QuadrilateralCylindrical3D_Facet(*focit));
	}
	
	return facets;
}

QuadrilateralCylindrical3D_Cell_t & QuadrilateralCylindrical3D_Cell::get_cell()
{
	return *cell;
}

///////////////////////////////
// Quadrilateral, polar (2D) //
///////////////////////////////

QuadrilateralPolar2D_Cell::QuadrilateralPolar2D_Cell(QuadrilateralPolar2D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

unsigned int QuadrilateralPolar2D_Cell::num_vertices()
{
	return viennagrid::elements<viennagrid::vertex_tag>(*cell).size();
}

list QuadrilateralPolar2D_Cell::get_vertices()
{
	list vertices;
	
	typedef QuadrilateralPolar2D_Cell_t                                                     CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                           ++voeit)
	{
		vertices.append<QuadrilateralPolar2D_Vertex>(QuadrilateralPolar2D_Vertex(*voeit));
	}
	
	return vertices;
}

list QuadrilateralPolar2D_Cell::get_facets()
{
	list facets;
	
	typedef QuadrilateralPolar2D_Cell_t                                 CellType;
	typedef viennagrid::result_of::facet_range<CellType>::type          FacetOnCellRange;
	typedef viennagrid::result_of::iterator<FacetOnCellRange>::type     FacetOnCellIterator;
	
	FacetOnCellRange facets_on_cell = viennagrid::elements(*cell);
	for (FacetOnCellIterator focit = facets_on_cell.begin();
	                         focit != facets_on_cell.end();
	                       ++focit)
	{
		facets.append<QuadrilateralPolar2D_Facet>(QuadrilateralPolar2D_Facet(*focit));
	}
	
	return facets;
}

QuadrilateralPolar2D_Cell_t & QuadrilateralPolar2D_Cell::get_cell()
{
	return *cell;
}

///////////////////////////////////
// Quadrilateral, spherical (3D) //
///////////////////////////////////

QuadrilateralSpherical3D_Cell::QuadrilateralSpherical3D_Cell(QuadrilateralSpherical3D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

unsigned int QuadrilateralSpherical3D_Cell::num_vertices()
{
	return viennagrid::elements<viennagrid::vertex_tag>(*cell).size();
}

list QuadrilateralSpherical3D_Cell::get_vertices()
{
	list vertices;
	
	typedef QuadrilateralSpherical3D_Cell_t                                                 CellType;
	typedef viennagrid::result_of::element_range<CellType, viennagrid::vertex_tag>::type    VertexOnElementRange;
	typedef viennagrid::result_of::iterator<VertexOnElementRange>::type                     VertexOnElementIterator;
	
	VertexOnElementRange vertices_on_element = viennagrid::elements<viennagrid::vertex_tag>(*cell);
	for (VertexOnElementIterator voeit = vertices_on_element.begin();
	                             voeit != vertices_on_element.end();
	                           ++voeit)
	{
		vertices.append<QuadrilateralSpherical3D_Vertex>(QuadrilateralSpherical3D_Vertex(*voeit));
	}
	
	return vertices;
}

list QuadrilateralSpherical3D_Cell::get_facets()
{
	list facets;
	
	typedef QuadrilateralSpherical3D_Cell_t                             CellType;
	typedef viennagrid::result_of::facet_range<CellType>::type          FacetOnCellRange;
	typedef viennagrid::result_of::iterator<FacetOnCellRange>::type     FacetOnCellIterator;
	
	FacetOnCellRange facets_on_cell = viennagrid::elements(*cell);
	for (FacetOnCellIterator focit = facets_on_cell.begin();
	                         focit != facets_on_cell.end();
	                       ++focit)
	{
		facets.append<QuadrilateralSpherical3D_Facet>(QuadrilateralSpherical3D_Facet(*focit));
	}
	
	return facets;
}

QuadrilateralSpherical3D_Cell_t & QuadrilateralSpherical3D_Cell::get_cell()
{
	return *cell;
}
