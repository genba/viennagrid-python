#include "write_opendx.hpp"

#include <viennagrid/io/opendx_writer.hpp>

////////////
// LINEAR //
////////////

void LinearCartesian1D_Domain_write_opendx(string const &filename,
                                           LinearCartesian1D_Domain *domain)
{
	viennagrid::io::opendx_writer<LinearCartesian1D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

void LinearCartesian2D_Domain_write_opendx(string const &filename,
                                           LinearCartesian2D_Domain *domain)
{
	viennagrid::io::opendx_writer<LinearCartesian2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

void LinearCartesian3D_Domain_write_opendx(string const &filename,
                                           LinearCartesian3D_Domain *domain)
{
	viennagrid::io::opendx_writer<LinearCartesian3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

void LinearCylindrical3D_Domain_write_opendx(string const &filename,
                                             LinearCylindrical3D_Domain *domain)
{
	viennagrid::io::opendx_writer<LinearCylindrical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

void LinearPolar2D_Domain_write_opendx(string const &filename,
                                       LinearPolar2D_Domain *domain)
{
	viennagrid::io::opendx_writer<LinearPolar2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

void LinearSpherical3D_Domain_write_opendx(string const &filename,
                                           LinearSpherical3D_Domain *domain)
{
	viennagrid::io::opendx_writer<LinearSpherical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

////////////////
// TRIANGULAR //
////////////////

void TriangularCartesian2D_Domain_write_opendx(string const &filename,
                                               TriangularCartesian2D_Domain *domain)
{
	viennagrid::io::opendx_writer<TriangularCartesian2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

void TriangularCartesian3D_Domain_write_opendx(string const &filename,
                                               TriangularCartesian3D_Domain *domain)
{
	viennagrid::io::opendx_writer<TriangularCartesian3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

void TriangularCylindrical3D_Domain_write_opendx(string const &filename,
                                                 TriangularCylindrical3D_Domain *domain)
{
	viennagrid::io::opendx_writer<TriangularCylindrical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

void TriangularPolar2D_Domain_write_opendx(string const &filename,
                                           TriangularPolar2D_Domain *domain)
{
	viennagrid::io::opendx_writer<TriangularPolar2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

void TriangularSpherical3D_Domain_write_opendx(string const &filename,
                                               TriangularSpherical3D_Domain *domain)
{
	viennagrid::io::opendx_writer<TriangularSpherical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

///////////////////
// QUADRILATERAL //
///////////////////

void QuadrilateralCartesian2D_Domain_write_opendx(string const &filename,
                                                  QuadrilateralCartesian2D_Domain *domain)
{
	viennagrid::io::opendx_writer<QuadrilateralCartesian2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

void QuadrilateralCartesian3D_Domain_write_opendx(string const &filename,
                                                  QuadrilateralCartesian3D_Domain *domain)
{
	viennagrid::io::opendx_writer<QuadrilateralCartesian3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

void QuadrilateralCylindrical3D_Domain_write_opendx(string const &filename,
                                                    QuadrilateralCylindrical3D_Domain *domain)
{
	viennagrid::io::opendx_writer<QuadrilateralCylindrical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

void QuadrilateralPolar2D_Domain_write_opendx(string const &filename,
                                              QuadrilateralPolar2D_Domain *domain)
{
	viennagrid::io::opendx_writer<QuadrilateralPolar2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

void QuadrilateralSpherical3D_Domain_write_opendx(string const &filename,
                                                  QuadrilateralSpherical3D_Domain *domain)
{
	viennagrid::io::opendx_writer<QuadrilateralSpherical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

/////////////////
// TETRAHEDRAL //
/////////////////

void TetrahedralCartesian3D_Domain_write_opendx(string const &filename,
                                                TetrahedralCartesian3D_Domain *domain)
{
	viennagrid::io::opendx_writer<TetrahedralCartesian3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

void TetrahedralCylindrical3D_Domain_write_opendx(string const &filename,
                                                  TetrahedralCylindrical3D_Domain *domain)
{
	viennagrid::io::opendx_writer<TetrahedralCylindrical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}

void TetrahedralSpherical3D_Domain_write_opendx(string const &filename,
                                                TetrahedralSpherical3D_Domain *domain)
{
	viennagrid::io::opendx_writer<TetrahedralSpherical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain->get_domain(), filename);
}
