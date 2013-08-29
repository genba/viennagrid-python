#include "linear.hpp"

#include "../vertices/linear.hpp"
#include "../facets/linear.hpp"

////////////////////////
// Line, cartesian 1D //
////////////////////////

LinearCartesian1D_Cell::LinearCartesian1D_Cell(LinearCartesian1D_Cell_t &initial_cell)
{
	cell = &initial_cell;
}

unsigned int LinearCartesian1D_Cell::num_vertices()
{
	return viennagrid::elements<viennagrid::vertex_tag>(*cell).size();
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

list LinearCartesian1D_Cell::get_facets()
{
	list facets;
	
	typedef LinearCartesian1D_Cell_t                                    CellType;
	typedef viennagrid::result_of::facet_range<CellType>::type          FacetOnCellRange;
	typedef viennagrid::result_of::iterator<FacetOnCellRange>::type     FacetOnCellIterator;
	
	FacetOnCellRange facets_on_cell = viennagrid::elements(*cell);
	for (FacetOnCellIterator focit = facets_on_cell.begin();
	                         focit != facets_on_cell.end();
	                       ++focit)
	{
		facets.append<LinearCartesian1D_Facet>(LinearCartesian1D_Facet(*focit));
	}
	
	return facets;
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

unsigned int LinearCartesian2D_Cell::num_vertices()
{
	return viennagrid::elements<viennagrid::vertex_tag>(*cell).size();
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

list LinearCartesian2D_Cell::get_facets()
{
	list facets;
	
	typedef LinearCartesian2D_Cell_t                                    CellType;
	typedef viennagrid::result_of::facet_range<CellType>::type          FacetOnCellRange;
	typedef viennagrid::result_of::iterator<FacetOnCellRange>::type     FacetOnCellIterator;
	
	FacetOnCellRange facets_on_cell = viennagrid::elements(*cell);
	for (FacetOnCellIterator focit = facets_on_cell.begin();
	                         focit != facets_on_cell.end();
	                       ++focit)
	{
		facets.append<LinearCartesian2D_Facet>(LinearCartesian2D_Facet(*focit));
	}
	
	return facets;
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

unsigned int LinearCartesian3D_Cell::num_vertices()
{
	return viennagrid::elements<viennagrid::vertex_tag>(*cell).size();
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

list LinearCartesian3D_Cell::get_facets()
{
	list facets;
	
	typedef LinearCartesian3D_Cell_t                                    CellType;
	typedef viennagrid::result_of::facet_range<CellType>::type          FacetOnCellRange;
	typedef viennagrid::result_of::iterator<FacetOnCellRange>::type     FacetOnCellIterator;
	
	FacetOnCellRange facets_on_cell = viennagrid::elements(*cell);
	for (FacetOnCellIterator focit = facets_on_cell.begin();
	                         focit != facets_on_cell.end();
	                       ++focit)
	{
		facets.append<LinearCartesian3D_Facet>(LinearCartesian3D_Facet(*focit));
	}
	
	return facets;
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

unsigned int LinearCylindrical3D_Cell::num_vertices()
{
	return viennagrid::elements<viennagrid::vertex_tag>(*cell).size();
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

list LinearCylindrical3D_Cell::get_facets()
{
	list facets;
	
	typedef LinearCylindrical3D_Cell_t                                    CellType;
	typedef viennagrid::result_of::facet_range<CellType>::type          FacetOnCellRange;
	typedef viennagrid::result_of::iterator<FacetOnCellRange>::type     FacetOnCellIterator;
	
	FacetOnCellRange facets_on_cell = viennagrid::elements(*cell);
	for (FacetOnCellIterator focit = facets_on_cell.begin();
	                         focit != facets_on_cell.end();
	                       ++focit)
	{
		facets.append<LinearCylindrical3D_Facet>(LinearCylindrical3D_Facet(*focit));
	}
	
	return facets;
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

unsigned int LinearPolar2D_Cell::num_vertices()
{
	return viennagrid::elements<viennagrid::vertex_tag>(*cell).size();
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

list LinearPolar2D_Cell::get_facets()
{
	list facets;
	
	typedef LinearPolar2D_Cell_t                                    CellType;
	typedef viennagrid::result_of::facet_range<CellType>::type          FacetOnCellRange;
	typedef viennagrid::result_of::iterator<FacetOnCellRange>::type     FacetOnCellIterator;
	
	FacetOnCellRange facets_on_cell = viennagrid::elements(*cell);
	for (FacetOnCellIterator focit = facets_on_cell.begin();
	                         focit != facets_on_cell.end();
	                       ++focit)
	{
		facets.append<LinearPolar2D_Facet>(LinearPolar2D_Facet(*focit));
	}
	
	return facets;
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

unsigned int LinearSpherical3D_Cell::num_vertices()
{
	return viennagrid::elements<viennagrid::vertex_tag>(*cell).size();
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

list LinearSpherical3D_Cell::get_facets()
{
	list facets;
	
	typedef LinearSpherical3D_Cell_t                                    CellType;
	typedef viennagrid::result_of::facet_range<CellType>::type          FacetOnCellRange;
	typedef viennagrid::result_of::iterator<FacetOnCellRange>::type     FacetOnCellIterator;
	
	FacetOnCellRange facets_on_cell = viennagrid::elements(*cell);
	for (FacetOnCellIterator focit = facets_on_cell.begin();
	                         focit != facets_on_cell.end();
	                       ++focit)
	{
		facets.append<LinearSpherical3D_Facet>(LinearSpherical3D_Facet(*focit));
	}
	
	return facets;
}

LinearSpherical3D_Cell_t & LinearSpherical3D_Cell::get_cell()
{
	return *cell;
}
