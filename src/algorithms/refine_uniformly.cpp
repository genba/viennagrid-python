#include "refine_uniformly.hpp"

#include <viennagrid/algorithm/refine.hpp>

////////////////
// Triangular //
////////////////

tuple TriangularCartesian2D_Domain_refine_uniformly(TriangularCartesian2D_Domain domain_in, TriangularCartesian2D_Segmentation segmentation_in)
{
	TriangularCartesian2D_Domain          domain_out;
	TriangularCartesian2D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<TriangularCartesian2D_Cell_t>(domain_in.get_domain(),
	                                                           segmentation_in.get_segmentation(),
	                                                           domain_out.get_domain(),
	                                                           segmentation_out.get_segmentation());
	
	return make_tuple<TriangularCartesian2D_Domain, TriangularCartesian2D_Segmentation>(domain_out, segmentation_out);
}

tuple TriangularCartesian3D_Domain_refine_uniformly(TriangularCartesian3D_Domain domain_in, TriangularCartesian3D_Segmentation segmentation_in)
{
	TriangularCartesian3D_Domain          domain_out;
	TriangularCartesian3D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<TriangularCartesian3D_Cell_t>(domain_in.get_domain(),
	                                                           segmentation_in.get_segmentation(),
	                                                           domain_out.get_domain(),
	                                                           segmentation_out.get_segmentation());
	
	return make_tuple<TriangularCartesian3D_Domain, TriangularCartesian3D_Segmentation>(domain_out, segmentation_out);
}

tuple TriangularCylindrical3D_Domain_refine_uniformly(TriangularCylindrical3D_Domain domain_in, TriangularCylindrical3D_Segmentation segmentation_in)
{
	TriangularCylindrical3D_Domain          domain_out;
	TriangularCylindrical3D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<TriangularCylindrical3D_Cell_t>(domain_in.get_domain(),
	                                                             segmentation_in.get_segmentation(),
	                                                             domain_out.get_domain(),
	                                                             segmentation_out.get_segmentation());
	
	return make_tuple<TriangularCylindrical3D_Domain, TriangularCylindrical3D_Segmentation>(domain_out, segmentation_out);
}

tuple TriangularPolar2D_Domain_refine_uniformly(TriangularPolar2D_Domain domain_in, TriangularPolar2D_Segmentation segmentation_in)
{
	TriangularPolar2D_Domain          domain_out;
	TriangularPolar2D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<TriangularPolar2D_Cell_t>(domain_in.get_domain(),
	                                                       segmentation_in.get_segmentation(),
	                                                       domain_out.get_domain(),
	                                                       segmentation_out.get_segmentation());
	
	return make_tuple<TriangularPolar2D_Domain, TriangularPolar2D_Segmentation>(domain_out, segmentation_out);
}

tuple TriangularSpherical3D_Domain_refine_uniformly(TriangularSpherical3D_Domain domain_in, TriangularSpherical3D_Segmentation segmentation_in)
{
	TriangularSpherical3D_Domain          domain_out;
	TriangularSpherical3D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<TriangularSpherical3D_Cell_t>(domain_in.get_domain(),
	                                                           segmentation_in.get_segmentation(),
	                                                           domain_out.get_domain(),
	                                                           segmentation_out.get_segmentation());
	
	return make_tuple<TriangularSpherical3D_Domain, TriangularSpherical3D_Segmentation>(domain_out, segmentation_out);
}

/////////////////
// Tetrahedral //
/////////////////

tuple TetrahedralCartesian3D_Domain_refine_uniformly(TetrahedralCartesian3D_Domain domain_in, TetrahedralCartesian3D_Segmentation segmentation_in)
{
	TetrahedralCartesian3D_Domain          domain_out;
	TetrahedralCartesian3D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<TetrahedralCartesian3D_Cell_t>(domain_in.get_domain(),
	                                                            segmentation_in.get_segmentation(),
	                                                            domain_out.get_domain(),
	                                                            segmentation_out.get_segmentation());
	
	return make_tuple<TetrahedralCartesian3D_Domain, TetrahedralCartesian3D_Segmentation>(domain_out, segmentation_out);
}

tuple TetrahedralCylindrical3D_Domain_refine_uniformly(TetrahedralCylindrical3D_Domain domain_in, TetrahedralCylindrical3D_Segmentation segmentation_in)
{
	TetrahedralCylindrical3D_Domain          domain_out;
	TetrahedralCylindrical3D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<TetrahedralCylindrical3D_Cell_t>(domain_in.get_domain(),
	                                                              segmentation_in.get_segmentation(),
	                                                              domain_out.get_domain(),
	                                                              segmentation_out.get_segmentation());
	
	return make_tuple<TetrahedralCylindrical3D_Domain, TetrahedralCylindrical3D_Segmentation>(domain_out, segmentation_out);
}

tuple TetrahedralSpherical3D_Domain_refine_uniformly(TetrahedralSpherical3D_Domain domain_in, TetrahedralSpherical3D_Segmentation segmentation_in)
{
	TetrahedralSpherical3D_Domain          domain_out;
	TetrahedralSpherical3D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<TetrahedralSpherical3D_Cell_t>(domain_in.get_domain(),
	                                                            segmentation_in.get_segmentation(),
	                                                            domain_out.get_domain(),
	                                                            segmentation_out.get_segmentation());
	
	return make_tuple<TetrahedralSpherical3D_Domain, TetrahedralSpherical3D_Segmentation>(domain_out, segmentation_out);
}
