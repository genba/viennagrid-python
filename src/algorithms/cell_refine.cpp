#include "cell_refine.hpp"

#include <viennagrid/algorithm/refine.hpp>

/***************
 * CELL_REFINE *
 ***************/

// Triangular

tuple TriangularCartesian2D_Domain_cell_refine(TriangularCartesian2D_Domain domain_in, TriangularCartesian2D_Segmentation segmentation_in, bool (*predicate)(const TriangularCartesian2D_Cell &))
{
	TriangularCartesian2D_Domain          domain_out;
	TriangularCartesian2D_Segmentation    segmentation_out(domain_out);
	
	// Vector of marks/flags that indicate which cells should be refined
	
	CellRefinementFlagContainerType     cell_refinement_flag_container;
	
	viennagrid::result_of::field<CellRefinementFlagContainerType,
	                             TriangularCartesian2D_Cell_t>::type    cell_refinement_flag_field(cell_refinement_flag_container);
	
	// Marks which edges should be refined
	TriangularCartesian2D_CellRange_t cells = viennagrid::elements(domain_in.get_domain());
	for (TriangularCartesian2D_CellRange_t::iterator it = cells.begin();
		                                         it != cells.end();
		                                       ++it)
	{
		if (predicate(TriangularCartesian2D_Cell(*it)))
			cell_refinement_flag_field(*it) = true;
	}
	
	// Refine marked edges
	viennagrid::cell_refine(domain_in.get_domain(),
	                        segmentation_in.get_segmentation(),
	                        domain_out.get_domain(),
	                        segmentation_out.get_segmentation(),
	                        cell_refinement_flag_field);
	
	// Return refined domain and segmentation as a tuple: (refined_domain, refined_segmentation)
	return make_tuple<TriangularCartesian2D_Domain, TriangularCartesian2D_Segmentation>(domain_out, segmentation_out);
}
