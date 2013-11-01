/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "tetrahedral.hpp"

#include "../edges/tetrahedral.hpp"

//////////////////////////////////
// TetrahedralCartesian3D_Facet //
//////////////////////////////////

TetrahedralCartesian3D_Facet::TetrahedralCartesian3D_Facet(TetrahedralCartesian3D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

list TetrahedralCartesian3D_Facet::get_edges()
{
	list edges;
	
	typedef TetrahedralCartesian3D_Facet_t                              FacetType;
	typedef viennagrid::result_of::edge_range<FacetType>::type          EdgeOnFacetRange;
	typedef viennagrid::result_of::iterator<EdgeOnFacetRange>::type     EdgeOnFacetIterator;
	
	EdgeOnFacetRange edges_on_facet = viennagrid::elements(*facet);
	for (EdgeOnFacetIterator eofit = edges_on_facet.begin();
	                         eofit != edges_on_facet.end();
	                       ++eofit)
	{
		edges.append<TetrahedralCartesian3D_Edge>(TetrahedralCartesian3D_Edge(*eofit));
	}
	
	return edges;
}

TetrahedralCartesian3D_Facet_t & TetrahedralCartesian3D_Facet::get_facet()
{
	return *facet;
}

////////////////////////////////////
// TetrahedralCylindrical3D_Facet //
////////////////////////////////////

TetrahedralCylindrical3D_Facet::TetrahedralCylindrical3D_Facet(TetrahedralCylindrical3D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

list TetrahedralCylindrical3D_Facet::get_edges()
{
	list edges;
	
	typedef TetrahedralCylindrical3D_Facet_t                            FacetType;
	typedef viennagrid::result_of::edge_range<FacetType>::type          EdgeOnFacetRange;
	typedef viennagrid::result_of::iterator<EdgeOnFacetRange>::type     EdgeOnFacetIterator;
	
	EdgeOnFacetRange edges_on_facet = viennagrid::elements(*facet);
	for (EdgeOnFacetIterator eofit = edges_on_facet.begin();
	                         eofit != edges_on_facet.end();
	                       ++eofit)
	{
		edges.append<TetrahedralCylindrical3D_Edge>(TetrahedralCylindrical3D_Edge(*eofit));
	}
	
	return edges;
}

TetrahedralCylindrical3D_Facet_t & TetrahedralCylindrical3D_Facet::get_facet()
{
	return *facet;
}

//////////////////////////////////
// TetrahedralSpherical3D_Facet //
//////////////////////////////////

TetrahedralSpherical3D_Facet::TetrahedralSpherical3D_Facet(TetrahedralSpherical3D_Facet_t &initial_facet)
{
	facet = &initial_facet;
}

list TetrahedralSpherical3D_Facet::get_edges()
{
	list edges;
	
	typedef TetrahedralSpherical3D_Facet_t                              FacetType;
	typedef viennagrid::result_of::edge_range<FacetType>::type          EdgeOnFacetRange;
	typedef viennagrid::result_of::iterator<EdgeOnFacetRange>::type     EdgeOnFacetIterator;
	
	EdgeOnFacetRange edges_on_facet = viennagrid::elements(*facet);
	for (EdgeOnFacetIterator eofit = edges_on_facet.begin();
	                         eofit != edges_on_facet.end();
	                       ++eofit)
	{
		edges.append<TetrahedralSpherical3D_Edge>(TetrahedralSpherical3D_Edge(*eofit));
	}
	
	return edges;
}

TetrahedralSpherical3D_Facet_t & TetrahedralSpherical3D_Facet::get_facet()
{
	return *facet;
}
