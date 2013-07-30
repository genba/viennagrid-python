#include "domain_based.hpp"

#include <viennagrid/algorithm/refine.hpp>
#include <viennagrid/algorithm/surface.hpp>
#include <viennagrid/algorithm/volume.hpp>

/********************
 * REFINE_UNIFORMLY *
 ********************/

// Linear

tuple LinearCartesian1D_Domain_refine_uniformly(LinearCartesian1D_Domain domain_in, LinearCartesian1D_Segmentation segmentation_in)
{
	LinearCartesian1D_Domain          domain_out;
	LinearCartesian1D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<LinearCartesian1D_Cell_t>(domain_in.get_domain(),
	                                                       segmentation_in.get_segmentation(),
	                                                       domain_out.get_domain(),
	                                                       segmentation_out.get_segmentation());
	
	return make_tuple<LinearCartesian1D_Domain, LinearCartesian1D_Segmentation>(domain_out, segmentation_out);
}

tuple LinearCartesian2D_Domain_refine_uniformly(LinearCartesian2D_Domain domain_in, LinearCartesian2D_Segmentation segmentation_in)
{
	LinearCartesian2D_Domain          domain_out;
	LinearCartesian2D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<LinearCartesian2D_Cell_t>(domain_in.get_domain(),
	                                                       segmentation_in.get_segmentation(),
	                                                       domain_out.get_domain(),
	                                                       segmentation_out.get_segmentation());
	
	return make_tuple<LinearCartesian2D_Domain, LinearCartesian2D_Segmentation>(domain_out, segmentation_out);
}

tuple LinearCartesian3D_Domain_refine_uniformly(LinearCartesian3D_Domain domain_in, LinearCartesian3D_Segmentation segmentation_in)
{
	LinearCartesian3D_Domain          domain_out;
	LinearCartesian3D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<LinearCartesian3D_Cell_t>(domain_in.get_domain(),
	                                                       segmentation_in.get_segmentation(),
	                                                       domain_out.get_domain(),
	                                                       segmentation_out.get_segmentation());
	
	return make_tuple<LinearCartesian3D_Domain, LinearCartesian3D_Segmentation>(domain_out, segmentation_out);
}

tuple LinearCylindrical3D_Domain_refine_uniformly(LinearCylindrical3D_Domain domain_in, LinearCylindrical3D_Segmentation segmentation_in)
{
	LinearCylindrical3D_Domain          domain_out;
	LinearCylindrical3D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<LinearCylindrical3D_Cell_t>(domain_in.get_domain(),
	                                                         segmentation_in.get_segmentation(),
	                                                         domain_out.get_domain(),
	                                                         segmentation_out.get_segmentation());
	
	return make_tuple<LinearCylindrical3D_Domain, LinearCylindrical3D_Segmentation>(domain_out, segmentation_out);
}

tuple LinearPolar2D_Domain_refine_uniformly(LinearPolar2D_Domain domain_in, LinearPolar2D_Segmentation segmentation_in)
{
	LinearPolar2D_Domain          domain_out;
	LinearPolar2D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<LinearPolar2D_Cell_t>(domain_in.get_domain(),
	                                                   segmentation_in.get_segmentation(),
	                                                   domain_out.get_domain(),
	                                                   segmentation_out.get_segmentation());
	
	return make_tuple<LinearPolar2D_Domain, LinearPolar2D_Segmentation>(domain_out, segmentation_out);
}

tuple LinearSpherical3D_Domain_refine_uniformly(LinearSpherical3D_Domain domain_in, LinearSpherical3D_Segmentation segmentation_in)
{
	LinearSpherical3D_Domain          domain_out;
	LinearSpherical3D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<LinearSpherical3D_Cell_t>(domain_in.get_domain(),
	                                                       segmentation_in.get_segmentation(),
	                                                       domain_out.get_domain(),
	                                                       segmentation_out.get_segmentation());
	
	return make_tuple<LinearSpherical3D_Domain, LinearSpherical3D_Segmentation>(domain_out, segmentation_out);
}

// Triangular

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

// Quadrilateral

tuple QuadrilateralCartesian2D_Domain_refine_uniformly(QuadrilateralCartesian2D_Domain domain_in, QuadrilateralCartesian2D_Segmentation segmentation_in)
{
	QuadrilateralCartesian2D_Domain          domain_out;
	QuadrilateralCartesian2D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<QuadrilateralCartesian2D_Cell_t>(domain_in.get_domain(),
	                                                              segmentation_in.get_segmentation(),
	                                                              domain_out.get_domain(),
	                                                              segmentation_out.get_segmentation());
	
	return make_tuple<QuadrilateralCartesian2D_Domain, QuadrilateralCartesian2D_Segmentation>(domain_out, segmentation_out);
}

tuple QuadrilateralCartesian3D_Domain_refine_uniformly(QuadrilateralCartesian3D_Domain domain_in, QuadrilateralCartesian3D_Segmentation segmentation_in)
{
	QuadrilateralCartesian3D_Domain          domain_out;
	QuadrilateralCartesian3D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<QuadrilateralCartesian3D_Cell_t>(domain_in.get_domain(),
	                                                              segmentation_in.get_segmentation(),
	                                                              domain_out.get_domain(),
	                                                              segmentation_out.get_segmentation());
	
	return make_tuple<QuadrilateralCartesian3D_Domain, QuadrilateralCartesian3D_Segmentation>(domain_out, segmentation_out);
}

tuple QuadrilateralCylindrical3D_Domain_refine_uniformly(QuadrilateralCylindrical3D_Domain domain_in, QuadrilateralCylindrical3D_Segmentation segmentation_in)
{
	QuadrilateralCylindrical3D_Domain          domain_out;
	QuadrilateralCylindrical3D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<QuadrilateralCylindrical3D_Cell_t>(domain_in.get_domain(),
	                                                                segmentation_in.get_segmentation(),
	                                                                domain_out.get_domain(),
	                                                                segmentation_out.get_segmentation());
	
	return make_tuple<QuadrilateralCylindrical3D_Domain, QuadrilateralCylindrical3D_Segmentation>(domain_out, segmentation_out);
}

tuple QuadrilateralPolar2D_Domain_refine_uniformly(QuadrilateralPolar2D_Domain domain_in, QuadrilateralPolar2D_Segmentation segmentation_in)
{
	QuadrilateralPolar2D_Domain          domain_out;
	QuadrilateralPolar2D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<QuadrilateralPolar2D_Cell_t>(domain_in.get_domain(),
	                                                          segmentation_in.get_segmentation(),
	                                                          domain_out.get_domain(),
	                                                          segmentation_out.get_segmentation());
	
	return make_tuple<QuadrilateralPolar2D_Domain, QuadrilateralPolar2D_Segmentation>(domain_out, segmentation_out);
}

tuple QuadrilateralSpherical3D_Domain_refine_uniformly(QuadrilateralSpherical3D_Domain domain_in, QuadrilateralSpherical3D_Segmentation segmentation_in)
{
	QuadrilateralSpherical3D_Domain          domain_out;
	QuadrilateralSpherical3D_Segmentation    segmentation_out(domain_out);
	
	viennagrid::refine_uniformly<QuadrilateralSpherical3D_Cell_t>(domain_in.get_domain(),
	                                                              segmentation_in.get_segmentation(),
	                                                              domain_out.get_domain(),
	                                                              segmentation_out.get_segmentation());
	
	return make_tuple<QuadrilateralSpherical3D_Domain, QuadrilateralSpherical3D_Segmentation>(domain_out, segmentation_out);
}

// Tetrahedral

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

/***********
 * SURFACE *
 ***********/

// Linear

double LinearCartesian1D_Domain_surface(LinearCartesian1D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

double LinearCartesian2D_Domain_surface(LinearCartesian2D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

double LinearCartesian3D_Domain_surface(LinearCartesian3D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

double LinearCylindrical3D_Domain_surface(LinearCylindrical3D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

double LinearPolar2D_Domain_surface(LinearPolar2D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

double LinearSpherical3D_Domain_surface(LinearSpherical3D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

// Triangular

double TriangularCartesian2D_Domain_surface(TriangularCartesian2D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

double TriangularCartesian3D_Domain_surface(TriangularCartesian3D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

double TriangularCylindrical3D_Domain_surface(TriangularCylindrical3D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

double TriangularPolar2D_Domain_surface(TriangularPolar2D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

double TriangularSpherical3D_Domain_surface(TriangularSpherical3D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

// Quadrilateral

double QuadrilateralCartesian2D_Domain_surface(QuadrilateralCartesian2D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

double QuadrilateralCartesian3D_Domain_surface(QuadrilateralCartesian3D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

double QuadrilateralCylindrical3D_Domain_surface(QuadrilateralCylindrical3D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

double QuadrilateralPolar2D_Domain_surface(QuadrilateralPolar2D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

double QuadrilateralSpherical3D_Domain_surface(QuadrilateralSpherical3D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

// Tetrahedral

double TetrahedralCartesian3D_Domain_surface(TetrahedralCartesian3D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

double TetrahedralCylindrical3D_Domain_surface(TetrahedralCylindrical3D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

double TetrahedralSpherical3D_Domain_surface(TetrahedralSpherical3D_Domain domain)
{
	return viennagrid::surface(domain.get_domain());
}

/**********
 * VOLUME *
 **********/

// Linear

double LinearCartesian1D_Domain_volume(LinearCartesian1D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

double LinearCartesian2D_Domain_volume(LinearCartesian2D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

double LinearCartesian3D_Domain_volume(LinearCartesian3D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

double LinearCylindrical3D_Domain_volume(LinearCylindrical3D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

double LinearPolar2D_Domain_volume(LinearPolar2D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

double LinearSpherical3D_Domain_volume(LinearSpherical3D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

// Triangular

double TriangularCartesian2D_Domain_volume(TriangularCartesian2D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

double TriangularCartesian3D_Domain_volume(TriangularCartesian3D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

double TriangularCylindrical3D_Domain_volume(TriangularCylindrical3D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

double TriangularPolar2D_Domain_volume(TriangularPolar2D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

double TriangularSpherical3D_Domain_volume(TriangularSpherical3D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

// Quadrilateral

double QuadrilateralCartesian2D_Domain_volume(QuadrilateralCartesian2D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

double QuadrilateralCartesian3D_Domain_volume(QuadrilateralCartesian3D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

double QuadrilateralCylindrical3D_Domain_volume(QuadrilateralCylindrical3D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

double QuadrilateralPolar2D_Domain_volume(QuadrilateralPolar2D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

double QuadrilateralSpherical3D_Domain_volume(QuadrilateralSpherical3D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

// Tetrahedral

double TetrahedralCartesian3D_Domain_volume(TetrahedralCartesian3D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

double TetrahedralCylindrical3D_Domain_volume(TetrahedralCylindrical3D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}

double TetrahedralSpherical3D_Domain_volume(TetrahedralSpherical3D_Domain domain)
{
	return viennagrid::volume(domain.get_domain());
}
