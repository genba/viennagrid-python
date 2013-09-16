#include "read_netgen.hpp"

#include <viennagrid/io/netgen_reader.hpp>

#include <string>

////////////
// LINEAR //
////////////

void LinearCartesian1D_Domain_read_netgen(str filename,
                                          LinearCartesian1D_Domain domain,
                                          object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		LinearCartesian1D_Segmentation *seg = (LinearCartesian1D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

void LinearCartesian2D_Domain_read_netgen(str filename,
                                          LinearCartesian2D_Domain domain,
                                          object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		LinearCartesian2D_Segmentation *seg = (LinearCartesian2D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

void LinearCartesian3D_Domain_read_netgen(str filename,
                                          LinearCartesian3D_Domain domain,
                                          object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		LinearCartesian3D_Segmentation *seg = (LinearCartesian3D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

void LinearCylindrical3D_Domain_read_netgen(str filename,
                                            LinearCylindrical3D_Domain domain,
                                            object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		LinearCylindrical3D_Segmentation *seg = (LinearCylindrical3D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

void LinearPolar2D_Domain_read_netgen(str filename,
                                      LinearPolar2D_Domain domain,
                                      object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		LinearPolar2D_Segmentation *seg = (LinearPolar2D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

void LinearSpherical3D_Domain_read_netgen(str filename,
                                          LinearSpherical3D_Domain domain,
                                          object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		LinearSpherical3D_Segmentation *seg = (LinearSpherical3D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

////////////////
// TRIANGULAR //
////////////////

void TriangularCartesian2D_Domain_read_netgen(str filename,
                                              TriangularCartesian2D_Domain domain,
                                              object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		TriangularCartesian2D_Segmentation *seg = (TriangularCartesian2D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

void TriangularCartesian3D_Domain_read_netgen(str filename,
                                              TriangularCartesian3D_Domain domain,
                                              object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		TriangularCartesian3D_Segmentation *seg = (TriangularCartesian3D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

void TriangularCylindrical3D_Domain_read_netgen(str filename,
                                                TriangularCylindrical3D_Domain domain,
                                                object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		TriangularCylindrical3D_Segmentation *seg = (TriangularCylindrical3D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

void TriangularPolar2D_Domain_read_netgen(str filename,
                                          TriangularPolar2D_Domain domain,
                                          object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		TriangularPolar2D_Segmentation *seg = (TriangularPolar2D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

void TriangularSpherical3D_Domain_read_netgen(str filename,
                                              TriangularSpherical3D_Domain domain,
                                              object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		TriangularSpherical3D_Segmentation *seg = (TriangularSpherical3D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

///////////////////
// QUADRILATERAL //
///////////////////

void QuadrilateralCartesian2D_Domain_read_netgen(str filename,
                                                 QuadrilateralCartesian2D_Domain domain,
                                                 object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		QuadrilateralCartesian2D_Segmentation *seg = (QuadrilateralCartesian2D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

void QuadrilateralCartesian3D_Domain_read_netgen(str filename,
                                                 QuadrilateralCartesian3D_Domain domain,
                                                 object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		QuadrilateralCartesian3D_Segmentation *seg = (QuadrilateralCartesian3D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

void QuadrilateralCylindrical3D_Domain_read_netgen(str filename,
                                                   QuadrilateralCylindrical3D_Domain domain,
                                                   object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		QuadrilateralCylindrical3D_Segmentation *seg = (QuadrilateralCylindrical3D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

void QuadrilateralPolar2D_Domain_read_netgen(str filename,
                                             QuadrilateralPolar2D_Domain domain,
                                             object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		QuadrilateralPolar2D_Segmentation *seg = (QuadrilateralPolar2D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

void QuadrilateralSpherical3D_Domain_read_netgen(str filename,
                                                 QuadrilateralSpherical3D_Domain domain,
                                                 object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		QuadrilateralSpherical3D_Segmentation *seg = (QuadrilateralSpherical3D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

/////////////////
// TETRAHEDRAL //
/////////////////

void TetrahedralCartesian3D_Domain_read_netgen(str filename,
                                               TetrahedralCartesian3D_Domain domain,
                                               object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		TetrahedralCartesian3D_Segmentation *seg = (TetrahedralCartesian3D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

void TetrahedralCylindrical3D_Domain_read_netgen(str filename,
                                                 TetrahedralCylindrical3D_Domain domain,
                                                 object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		TetrahedralCylindrical3D_Segmentation *seg = (TetrahedralCylindrical3D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}

void TetrahedralSpherical3D_Domain_read_netgen(str filename,
                                               TetrahedralSpherical3D_Domain domain,
                                               object segmentation)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	
	if (segmentation == object())
		my_netgen_reader(domain.get_domain(), extract<std::string>(filename));
	else
	{
		TetrahedralSpherical3D_Segmentation *seg = (TetrahedralSpherical3D_Segmentation *) &segmentation;
		my_netgen_reader(domain.get_domain(), seg->get_segmentation(), extract<std::string>(filename));
	}
}
