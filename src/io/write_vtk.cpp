#include "write_vtk.hpp"

#include <viennagrid/io/vtk_writer.hpp>

////////////
// LINEAR //
////////////

void LinearCartesian1D_Domain_write_vtk(string const &filename,
                                        LinearCartesian1D_Domain *domain,
                                        LinearCartesian1D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<LinearCartesian1D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void LinearCartesian2D_Domain_write_vtk(string const &filename,
                                        LinearCartesian2D_Domain *domain,
                                        LinearCartesian2D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<LinearCartesian2D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void LinearCartesian3D_Domain_write_vtk(string const &filename,
                                        LinearCartesian3D_Domain *domain,
                                        LinearCartesian3D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<LinearCartesian3D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void LinearCylindrical3D_Domain_write_vtk(string const &filename,
                                          LinearCylindrical3D_Domain *domain,
                                          LinearCylindrical3D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<LinearCylindrical3D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void LinearPolar2D_Domain_write_vtk(string const &filename,
                                    LinearPolar2D_Domain *domain,
                                    LinearPolar2D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<LinearPolar2D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void LinearSpherical3D_Domain_write_vtk(string const &filename,
                                        LinearSpherical3D_Domain *domain,
                                        LinearSpherical3D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<LinearSpherical3D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

////////////////
// TRIANGULAR //
////////////////

void TriangularCartesian2D_Domain_write_vtk(string const &filename,
                                            TriangularCartesian2D_Domain *domain,
                                            TriangularCartesian2D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<TriangularCartesian2D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void TriangularCartesian3D_Domain_write_vtk(string const &filename,
                                            TriangularCartesian3D_Domain *domain,
                                            TriangularCartesian3D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<TriangularCartesian3D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void TriangularCylindrical3D_Domain_write_vtk(string const &filename,
                                              TriangularCylindrical3D_Domain *domain,
                                              TriangularCylindrical3D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<TriangularCylindrical3D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void TriangularPolar2D_Domain_write_vtk(string const &filename,
                                        TriangularPolar2D_Domain *domain,
                                        TriangularPolar2D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<TriangularPolar2D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void TriangularSpherical3D_Domain_write_vtk(string const &filename,
                                            TriangularSpherical3D_Domain *domain,
                                            TriangularSpherical3D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<TriangularSpherical3D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

///////////////////
// QUADRILATERAL //
///////////////////

void QuadrilateralCartesian2D_Domain_write_vtk(string const &filename,
                                               QuadrilateralCartesian2D_Domain *domain,
                                               QuadrilateralCartesian2D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<QuadrilateralCartesian2D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void QuadrilateralCartesian3D_Domain_write_vtk(string const &filename,
                                               QuadrilateralCartesian3D_Domain *domain,
                                               QuadrilateralCartesian3D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<QuadrilateralCartesian3D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void QuadrilateralCylindrical3D_Domain_write_vtk(string const &filename,
                                                 QuadrilateralCylindrical3D_Domain *domain,
                                                 QuadrilateralCylindrical3D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<QuadrilateralCylindrical3D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void QuadrilateralPolar2D_Domain_write_vtk(string const &filename,
                                           QuadrilateralPolar2D_Domain *domain,
                                           QuadrilateralPolar2D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<QuadrilateralPolar2D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void QuadrilateralSpherical3D_Domain_write_vtk(string const &filename,
                                               QuadrilateralSpherical3D_Domain *domain,
                                               QuadrilateralSpherical3D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<QuadrilateralSpherical3D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

/////////////////
// TETRAHEDRAL //
/////////////////

void TetrahedralCartesian3D_Domain_write_vtk(string const &filename,
                                             TetrahedralCartesian3D_Domain *domain,
                                             TetrahedralCartesian3D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<TetrahedralCartesian3D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void TetrahedralCylindrical3D_Domain_write_vtk(string const &filename,
                                               TetrahedralCylindrical3D_Domain *domain,
                                               TetrahedralCylindrical3D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<TetrahedralCylindrical3D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void TetrahedralSpherical3D_Domain_write_vtk(string const &filename,
                                             TetrahedralSpherical3D_Domain *domain,
                                             TetrahedralSpherical3D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<TetrahedralSpherical3D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain->get_domain(), filename);
	else
		my_vtk_writer(domain->get_domain(), segmentation->get_segmentation(), filename);
}
