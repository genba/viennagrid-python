#include "scale.hpp"

#include <viennagrid/algorithm/scale.hpp>

// Linear

void LinearCartesian1D_Domain_scale(LinearCartesian1D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

void LinearCartesian2D_Domain_scale(LinearCartesian2D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

void LinearCartesian3D_Domain_scale(LinearCartesian3D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

void LinearCylindrical3D_Domain_scale(LinearCylindrical3D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

void LinearPolar2D_Domain_scale(LinearPolar2D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

void LinearSpherical3D_Domain_scale(LinearSpherical3D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

// Triangular

void TriangularCartesian2D_Domain_scale(TriangularCartesian2D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

void TriangularCartesian3D_Domain_scale(TriangularCartesian3D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

void TriangularCylindrical3D_Domain_scale(TriangularCylindrical3D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

void TriangularPolar2D_Domain_scale(TriangularPolar2D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

void TriangularSpherical3D_Domain_scale(TriangularSpherical3D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

// Quadrilateral

void QuadrilateralCartesian2D_Domain_scale(QuadrilateralCartesian2D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

void QuadrilateralCartesian3D_Domain_scale(QuadrilateralCartesian3D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

void QuadrilateralCylindrical3D_Domain_scale(QuadrilateralCylindrical3D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

void QuadrilateralPolar2D_Domain_scale(QuadrilateralPolar2D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

void QuadrilateralSpherical3D_Domain_scale(QuadrilateralSpherical3D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

// Tetrahedral

void TetrahedralCartesian3D_Domain_scale(TetrahedralCartesian3D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

void TetrahedralCylindrical3D_Domain_scale(TetrahedralCylindrical3D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}

void TetrahedralSpherical3D_Domain_scale(TetrahedralSpherical3D_Domain domain, double factor)
{
	viennagrid::scale(domain.get_domain(), factor);
}
