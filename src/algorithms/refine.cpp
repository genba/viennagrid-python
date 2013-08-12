#include "refine.hpp"

#include <viennagrid/algorithm/refine.hpp>

/**********
 * REFINE *
 **********/

tuple TriangularCartesian2D_Domain_refine(TriangularCartesian2D_Domain domain_in, TriangularCartesian2D_Segmentation segmentation_in, bool (*predicate)(const TriangularCartesian2D_Edge &))
{
	TriangularCartesian2D_Domain          domain_out;
	TriangularCartesian2D_Segmentation    segmentation_out(domain_out);
	
	// Vector of marks/flags that indicate which edges should be refined
	
	EdgeRefinementFlagContainerType     edge_refinement_flag_container;
	
	viennagrid::result_of::field<EdgeRefinementFlagContainerType,
	                             TriangularCartesian2D_Edge_t>::type    edge_refinement_flag_field(edge_refinement_flag_container);
	
	// Marks which edges should be refined
	TriangularCartesian2D_EdgeRange_t edges = viennagrid::elements(domain_in.get_domain());
	for (TriangularCartesian2D_EdgeRange_t::iterator it = edges.begin();
		                                         it != edges.end();
		                                       ++it)
	{
		if (predicate(TriangularCartesian2D_Edge(*it)))
			edge_refinement_flag_field(*it) = true;
	}
	
	// Refine marked edges
	viennagrid::refine<TriangularCartesian2D_Cell_t>(domain_in.get_domain(),
	                                             segmentation_in.get_segmentation(),
	                                             domain_out.get_domain(),
	                                             segmentation_out.get_segmentation(),
	                                             edge_refinement_flag_field);
	
	// Return refined domain and segmentation as a tuple: (refined_domain, refined_segmentation)
	return make_tuple<TriangularCartesian2D_Domain, TriangularCartesian2D_Segmentation>(domain_out, segmentation_out);
}
