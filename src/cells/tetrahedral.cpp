/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "tetrahedral.hpp"

#include "../vertices/tetrahedral.hpp"
#include "../facets/tetrahedral.hpp"
#include "../edges/tetrahedral.hpp"

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

list TetrahedralCartesian3D_Cell::get_edges()
{
	list edges;
	
	typedef TetrahedralCartesian3D_Cell_t                             CellType;
	typedef viennagrid::result_of::edge_range<CellType>::type         EdgeOnCellRange;
	typedef viennagrid::result_of::iterator<EdgeOnCellRange>::type    EdgeOnCellIterator;
	
	EdgeOnCellRange edges_on_cell = viennagrid::elements(*cell);
	for (EdgeOnCellIterator eocit = edges_on_cell.begin();
	                        eocit != edges_on_cell.end();
	                      ++eocit)
	{
		edges.append<TetrahedralCartesian3D_Edge>(TetrahedralCartesian3D_Edge(*eocit));
	}
	
	return edges;
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

list TetrahedralCylindrical3D_Cell::get_edges()
{
	list edges;
	
	typedef TetrahedralCylindrical3D_Cell_t                           CellType;
	typedef viennagrid::result_of::edge_range<CellType>::type         EdgeOnCellRange;
	typedef viennagrid::result_of::iterator<EdgeOnCellRange>::type    EdgeOnCellIterator;
	
	EdgeOnCellRange edges_on_cell = viennagrid::elements(*cell);
	for (EdgeOnCellIterator eocit = edges_on_cell.begin();
	                        eocit != edges_on_cell.end();
	                      ++eocit)
	{
		edges.append<TetrahedralCylindrical3D_Edge>(TetrahedralCylindrical3D_Edge(*eocit));
	}
	
	return edges;
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

list TetrahedralSpherical3D_Cell::get_edges()
{
	list edges;
	
	typedef TetrahedralSpherical3D_Cell_t                             CellType;
	typedef viennagrid::result_of::edge_range<CellType>::type         EdgeOnCellRange;
	typedef viennagrid::result_of::iterator<EdgeOnCellRange>::type    EdgeOnCellIterator;
	
	EdgeOnCellRange edges_on_cell = viennagrid::elements(*cell);
	for (EdgeOnCellIterator eocit = edges_on_cell.begin();
	                        eocit != edges_on_cell.end();
	                      ++eocit)
	{
		edges.append<TetrahedralSpherical3D_Edge>(TetrahedralSpherical3D_Edge(*eocit));
	}
	
	return edges;
}

TetrahedralSpherical3D_Cell_t & TetrahedralSpherical3D_Cell::get_cell()
{
	return *cell;
}
