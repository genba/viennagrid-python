#include "domain_volume.hpp"

#include <viennagrid/algorithm/volume.hpp>

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
