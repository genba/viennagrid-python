/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "cell_refine.hpp"

#include <viennagrid/algorithm/refine.hpp>

////////////////
// Triangular //
////////////////

tuple TriangularCartesian2D_Domain_cell_refine(TriangularCartesian2D_Domain domain_in, TriangularCartesian2D_Segmentation segmentation_in, object predicate)
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

tuple TriangularCartesian3D_Domain_cell_refine(TriangularCartesian3D_Domain domain_in, TriangularCartesian3D_Segmentation segmentation_in, object predicate)
{
	TriangularCartesian3D_Domain          domain_out;
	TriangularCartesian3D_Segmentation    segmentation_out(domain_out);
	
	// Vector of marks/flags that indicate which cells should be refined
	
	CellRefinementFlagContainerType     cell_refinement_flag_container;
	
	viennagrid::result_of::field<CellRefinementFlagContainerType,
	                             TriangularCartesian3D_Cell_t>::type    cell_refinement_flag_field(cell_refinement_flag_container);
	
	// Marks which edges should be refined
	TriangularCartesian3D_CellRange_t cells = viennagrid::elements(domain_in.get_domain());
	for (TriangularCartesian3D_CellRange_t::iterator it = cells.begin();
	                                                 it != cells.end();
	                                               ++it)
	{
		if (predicate(TriangularCartesian3D_Cell(*it)))
			cell_refinement_flag_field(*it) = true;
	}
	
	// Refine marked edges
	viennagrid::cell_refine(domain_in.get_domain(),
	                        segmentation_in.get_segmentation(),
	                        domain_out.get_domain(),
	                        segmentation_out.get_segmentation(),
	                        cell_refinement_flag_field);
	
	// Return refined domain and segmentation as a tuple: (refined_domain, refined_segmentation)
	return make_tuple<TriangularCartesian3D_Domain, TriangularCartesian3D_Segmentation>(domain_out, segmentation_out);
}

tuple TriangularCylindrical3D_Domain_cell_refine(TriangularCylindrical3D_Domain domain_in, TriangularCylindrical3D_Segmentation segmentation_in, object predicate)
{
	TriangularCylindrical3D_Domain          domain_out;
	TriangularCylindrical3D_Segmentation    segmentation_out(domain_out);
	
	// Vector of marks/flags that indicate which cells should be refined
	
	CellRefinementFlagContainerType     cell_refinement_flag_container;
	
	viennagrid::result_of::field<CellRefinementFlagContainerType,
	                             TriangularCylindrical3D_Cell_t>::type    cell_refinement_flag_field(cell_refinement_flag_container);
	
	// Marks which edges should be refined
	TriangularCylindrical3D_CellRange_t cells = viennagrid::elements(domain_in.get_domain());
	for (TriangularCylindrical3D_CellRange_t::iterator it = cells.begin();
	                                                   it != cells.end();
	                                                 ++it)
	{
		if (predicate(TriangularCylindrical3D_Cell(*it)))
			cell_refinement_flag_field(*it) = true;
	}
	
	// Refine marked edges
	viennagrid::cell_refine(domain_in.get_domain(),
	                        segmentation_in.get_segmentation(),
	                        domain_out.get_domain(),
	                        segmentation_out.get_segmentation(),
	                        cell_refinement_flag_field);
	
	// Return refined domain and segmentation as a tuple: (refined_domain, refined_segmentation)
	return make_tuple<TriangularCylindrical3D_Domain, TriangularCylindrical3D_Segmentation>(domain_out, segmentation_out);
}

tuple TriangularPolar2D_Domain_cell_refine(TriangularPolar2D_Domain domain_in, TriangularPolar2D_Segmentation segmentation_in, object predicate)
{
	TriangularPolar2D_Domain          domain_out;
	TriangularPolar2D_Segmentation    segmentation_out(domain_out);
	
	// Vector of marks/flags that indicate which cells should be refined
	
	CellRefinementFlagContainerType     cell_refinement_flag_container;
	
	viennagrid::result_of::field<CellRefinementFlagContainerType,
	                             TriangularPolar2D_Cell_t>::type    cell_refinement_flag_field(cell_refinement_flag_container);
	
	// Marks which edges should be refined
	TriangularPolar2D_CellRange_t cells = viennagrid::elements(domain_in.get_domain());
	for (TriangularPolar2D_CellRange_t::iterator it = cells.begin();
	                                             it != cells.end();
	                                           ++it)
	{
		if (predicate(TriangularPolar2D_Cell(*it)))
			cell_refinement_flag_field(*it) = true;
	}
	
	// Refine marked edges
	viennagrid::cell_refine(domain_in.get_domain(),
	                        segmentation_in.get_segmentation(),
	                        domain_out.get_domain(),
	                        segmentation_out.get_segmentation(),
	                        cell_refinement_flag_field);
	
	// Return refined domain and segmentation as a tuple: (refined_domain, refined_segmentation)
	return make_tuple<TriangularPolar2D_Domain, TriangularPolar2D_Segmentation>(domain_out, segmentation_out);
}

tuple TriangularSpherical3D_Domain_cell_refine(TriangularSpherical3D_Domain domain_in, TriangularSpherical3D_Segmentation segmentation_in, object predicate)
{
	TriangularSpherical3D_Domain          domain_out;
	TriangularSpherical3D_Segmentation    segmentation_out(domain_out);
	
	// Vector of marks/flags that indicate which cells should be refined
	
	CellRefinementFlagContainerType     cell_refinement_flag_container;
	
	viennagrid::result_of::field<CellRefinementFlagContainerType,
	                             TriangularSpherical3D_Cell_t>::type    cell_refinement_flag_field(cell_refinement_flag_container);
	
	// Marks which edges should be refined
	TriangularSpherical3D_CellRange_t cells = viennagrid::elements(domain_in.get_domain());
	for (TriangularSpherical3D_CellRange_t::iterator it = cells.begin();
	                                                 it != cells.end();
	                                               ++it)
	{
		if (predicate(TriangularSpherical3D_Cell(*it)))
			cell_refinement_flag_field(*it) = true;
	}
	
	// Refine marked edges
	viennagrid::cell_refine(domain_in.get_domain(),
	                        segmentation_in.get_segmentation(),
	                        domain_out.get_domain(),
	                        segmentation_out.get_segmentation(),
	                        cell_refinement_flag_field);
	
	// Return refined domain and segmentation as a tuple: (refined_domain, refined_segmentation)
	return make_tuple<TriangularSpherical3D_Domain, TriangularSpherical3D_Segmentation>(domain_out, segmentation_out);
}

/////////////////
// Tetrahedral //
/////////////////

tuple TetrahedralCartesian3D_Domain_cell_refine(TetrahedralCartesian3D_Domain domain_in, TetrahedralCartesian3D_Segmentation segmentation_in, object predicate)
{
	TetrahedralCartesian3D_Domain          domain_out;
	TetrahedralCartesian3D_Segmentation    segmentation_out(domain_out);
	
	// Vector of marks/flags that indicate which cells should be refined
	
	CellRefinementFlagContainerType     cell_refinement_flag_container;
	
	viennagrid::result_of::field<CellRefinementFlagContainerType,
	                             TetrahedralCartesian3D_Cell_t>::type    cell_refinement_flag_field(cell_refinement_flag_container);
	
	// Marks which edges should be refined
	TetrahedralCartesian3D_CellRange_t cells = viennagrid::elements(domain_in.get_domain());
	for (TetrahedralCartesian3D_CellRange_t::iterator it = cells.begin();
	                                                  it != cells.end();
	                                                ++it)
	{
		if (predicate(TetrahedralCartesian3D_Cell(*it)))
			cell_refinement_flag_field(*it) = true;
	}
	
	// Refine marked edges
	viennagrid::cell_refine(domain_in.get_domain(),
	                        segmentation_in.get_segmentation(),
	                        domain_out.get_domain(),
	                        segmentation_out.get_segmentation(),
	                        cell_refinement_flag_field);
	
	// Return refined domain and segmentation as a tuple: (refined_domain, refined_segmentation)
	return make_tuple<TetrahedralCartesian3D_Domain, TetrahedralCartesian3D_Segmentation>(domain_out, segmentation_out);
}

tuple TetrahedralCylindrical3D_Domain_cell_refine(TetrahedralCylindrical3D_Domain domain_in, TetrahedralCylindrical3D_Segmentation segmentation_in, object predicate)
{
	TetrahedralCylindrical3D_Domain          domain_out;
	TetrahedralCylindrical3D_Segmentation    segmentation_out(domain_out);
	
	// Vector of marks/flags that indicate which cells should be refined
	
	CellRefinementFlagContainerType     cell_refinement_flag_container;
	
	viennagrid::result_of::field<CellRefinementFlagContainerType,
	                             TetrahedralCylindrical3D_Cell_t>::type    cell_refinement_flag_field(cell_refinement_flag_container);
	
	// Marks which edges should be refined
	TetrahedralCylindrical3D_CellRange_t cells = viennagrid::elements(domain_in.get_domain());
	for (TetrahedralCylindrical3D_CellRange_t::iterator it = cells.begin();
	                                                    it != cells.end();
	                                                  ++it)
	{
		if (predicate(TetrahedralCylindrical3D_Cell(*it)))
			cell_refinement_flag_field(*it) = true;
	}
	
	// Refine marked edges
	viennagrid::cell_refine(domain_in.get_domain(),
	                        segmentation_in.get_segmentation(),
	                        domain_out.get_domain(),
	                        segmentation_out.get_segmentation(),
	                        cell_refinement_flag_field);
	
	// Return refined domain and segmentation as a tuple: (refined_domain, refined_segmentation)
	return make_tuple<TetrahedralCylindrical3D_Domain, TetrahedralCylindrical3D_Segmentation>(domain_out, segmentation_out);
}

tuple TetrahedralSpherical3D_Domain_cell_refine(TetrahedralSpherical3D_Domain domain_in, TetrahedralSpherical3D_Segmentation segmentation_in, object predicate)
{
	TetrahedralSpherical3D_Domain          domain_out;
	TetrahedralSpherical3D_Segmentation    segmentation_out(domain_out);
	
	// Vector of marks/flags that indicate which cells should be refined
	
	CellRefinementFlagContainerType     cell_refinement_flag_container;
	
	viennagrid::result_of::field<CellRefinementFlagContainerType,
	                             TetrahedralSpherical3D_Cell_t>::type    cell_refinement_flag_field(cell_refinement_flag_container);
	
	// Marks which edges should be refined
	TetrahedralSpherical3D_CellRange_t cells = viennagrid::elements(domain_in.get_domain());
	for (TetrahedralSpherical3D_CellRange_t::iterator it = cells.begin();
	                                                  it != cells.end();
	                                                ++it)
	{
		if (predicate(TetrahedralSpherical3D_Cell(*it)))
			cell_refinement_flag_field(*it) = true;
	}
	
	// Refine marked edges
	viennagrid::cell_refine(domain_in.get_domain(),
	                        segmentation_in.get_segmentation(),
	                        domain_out.get_domain(),
	                        segmentation_out.get_segmentation(),
	                        cell_refinement_flag_field);
	
	// Return refined domain and segmentation as a tuple: (refined_domain, refined_segmentation)
	return make_tuple<TetrahedralSpherical3D_Domain, TetrahedralSpherical3D_Segmentation>(domain_out, segmentation_out);
}
