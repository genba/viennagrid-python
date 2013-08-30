#include "triangular.hpp"
#include "../segments/types.hpp"
#include "../vertices/types.hpp"
#include "../cells/types.hpp"
#include "../cells/triangular.hpp"

#include <viennagrid/io/netgen_reader.hpp>
#include <viennagrid/io/vtk_reader.hpp>
#include <viennagrid/io/opendx_writer.hpp>
#include <viennagrid/io/vtk_writer.hpp>

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

unsigned int TriangularCartesian2D_Domain::num_vertices()
{
	TriangularCartesian2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularCartesian2D_Domain::add_vertex(PointCartesian2D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

TriangularCartesian2D_Domain_t & TriangularCartesian2D_Domain::get_domain()
{
	return domain;
}

TriangularCartesian2D_Vertex TriangularCartesian2D_Domain::get_vertex(unsigned int index)
{
	typedef TriangularCartesian2D_VertexRange_t                   VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef TriangularCartesian2D_Vertex_t::id_type               VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	return TriangularCartesian2D_Vertex(*vertex);
}

list TriangularCartesian2D_Domain::get_vertices()
{
	list vertices;
	
	typedef TriangularCartesian2D_Domain_t                                                    DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<TriangularCartesian2D_Vertex>(TriangularCartesian2D_Vertex(*it));
	
	return vertices;
}

TriangularCartesian2D_Segmentation TriangularCartesian2D_Domain::read_netgen(std::string const &filename)
{
	viennagrid::io::netgen_reader         my_netgen_reader;
	TriangularCartesian2D_Segmentation    segmentation(*this);
	
	my_netgen_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

TriangularCartesian2D_Segmentation TriangularCartesian2D_Domain::read_vtk(std::string const &filename)
{
	viennagrid::io::vtk_reader<TriangularCartesian2D_Domain_t, TriangularCartesian2D_Segmentation_t>    my_vtk_reader;
	TriangularCartesian2D_Segmentation                                                                  segmentation(*this);
	
	my_vtk_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

void TriangularCartesian2D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<TriangularCartesian2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void TriangularCartesian2D_Domain::write_vtk(std::string const &filename, TriangularCartesian2D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<TriangularCartesian2D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain, filename);
	else
		my_vtk_writer(domain, segmentation->get_segmentation(), filename);
}

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

unsigned int TriangularCartesian3D_Domain::num_vertices()
{
	TriangularCartesian3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularCartesian3D_Domain::add_vertex(PointCartesian3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

TriangularCartesian3D_Domain_t & TriangularCartesian3D_Domain::get_domain()
{
	return domain;
}

TriangularCartesian3D_Vertex TriangularCartesian3D_Domain::get_vertex(unsigned int index)
{
	typedef TriangularCartesian3D_VertexRange_t                   VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef TriangularCartesian3D_Vertex_t::id_type               VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	return TriangularCartesian3D_Vertex(*vertex);
}

list TriangularCartesian3D_Domain::get_vertices()
{
	list vertices;
	
	typedef TriangularCartesian3D_Domain_t                                                    DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<TriangularCartesian3D_Vertex>(TriangularCartesian3D_Vertex(*it));
	
	return vertices;
}

TriangularCartesian3D_Segmentation TriangularCartesian3D_Domain::read_netgen(std::string const &filename)
{
	viennagrid::io::netgen_reader         my_netgen_reader;
	TriangularCartesian3D_Segmentation    segmentation(*this);
	
	my_netgen_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

TriangularCartesian3D_Segmentation TriangularCartesian3D_Domain::read_vtk(std::string const &filename)
{
	viennagrid::io::vtk_reader<TriangularCartesian3D_Domain_t, TriangularCartesian3D_Segmentation_t>    my_vtk_reader;
	TriangularCartesian3D_Segmentation                                                                  segmentation(*this);
	
	my_vtk_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

void TriangularCartesian3D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<TriangularCartesian3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void TriangularCartesian3D_Domain::write_vtk(std::string const &filename, TriangularCartesian3D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<TriangularCartesian3D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain, filename);
	else
		my_vtk_writer(domain, segmentation->get_segmentation(), filename);
}

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

unsigned int TriangularCylindrical3D_Domain::num_vertices()
{
	TriangularCylindrical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularCylindrical3D_Domain::add_vertex(PointCylindrical3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

TriangularCylindrical3D_Domain_t & TriangularCylindrical3D_Domain::get_domain()
{
	return domain;
}

TriangularCylindrical3D_Vertex TriangularCylindrical3D_Domain::get_vertex(unsigned int index)
{
	typedef TriangularCylindrical3D_VertexRange_t                 VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef TriangularCylindrical3D_Vertex_t::id_type             VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	return TriangularCylindrical3D_Vertex(*vertex);
}

list TriangularCylindrical3D_Domain::get_vertices()
{
	list vertices;
	
	typedef TriangularCylindrical3D_Domain_t                                                  DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<TriangularCylindrical3D_Vertex>(TriangularCylindrical3D_Vertex(*it));
	
	return vertices;
}

TriangularCylindrical3D_Segmentation TriangularCylindrical3D_Domain::read_netgen(std::string const &filename)
{
	viennagrid::io::netgen_reader           my_netgen_reader;
	TriangularCylindrical3D_Segmentation    segmentation(*this);
	
	my_netgen_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

TriangularCylindrical3D_Segmentation TriangularCylindrical3D_Domain::read_vtk(std::string const &filename)
{
	viennagrid::io::vtk_reader<TriangularCylindrical3D_Domain_t, TriangularCylindrical3D_Segmentation_t>    my_vtk_reader;
	TriangularCylindrical3D_Segmentation                                                                    segmentation(*this);
	
	my_vtk_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

void TriangularCylindrical3D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<TriangularCylindrical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void TriangularCylindrical3D_Domain::write_vtk(std::string const &filename, TriangularCylindrical3D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<TriangularCylindrical3D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain, filename);
	else
		my_vtk_writer(domain, segmentation->get_segmentation(), filename);
}

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

unsigned int TriangularPolar2D_Domain::num_vertices()
{
	TriangularPolar2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularPolar2D_Domain::add_vertex(PointPolar2D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

TriangularPolar2D_Domain_t & TriangularPolar2D_Domain::get_domain()
{
	return domain;
}

TriangularPolar2D_Vertex TriangularPolar2D_Domain::get_vertex(unsigned int index)
{
	typedef TriangularPolar2D_VertexRange_t                       VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef TriangularPolar2D_Vertex_t::id_type                   VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	return TriangularPolar2D_Vertex(*vertex);
}

list TriangularPolar2D_Domain::get_vertices()
{
	list vertices;
	
	typedef TriangularPolar2D_Domain_t                                                        DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<TriangularPolar2D_Vertex>(TriangularPolar2D_Vertex(*it));
	
	return vertices;
}

TriangularPolar2D_Segmentation TriangularPolar2D_Domain::read_netgen(std::string const &filename)
{
	viennagrid::io::netgen_reader     my_netgen_reader;
	TriangularPolar2D_Segmentation    segmentation(*this);
	
	my_netgen_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

TriangularPolar2D_Segmentation TriangularPolar2D_Domain::read_vtk(std::string const &filename)
{
	viennagrid::io::vtk_reader<TriangularPolar2D_Domain_t, TriangularPolar2D_Segmentation_t>    my_vtk_reader;
	TriangularPolar2D_Segmentation                                                              segmentation(*this);
	
	my_vtk_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

void TriangularPolar2D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<TriangularPolar2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void TriangularPolar2D_Domain::write_vtk(std::string const &filename, TriangularPolar2D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<TriangularPolar2D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain, filename);
	else
		my_vtk_writer(domain, segmentation->get_segmentation(), filename);
}

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

unsigned int TriangularSpherical3D_Domain::num_vertices()
{
	TriangularSpherical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularSpherical3D_Domain::add_vertex(PointSpherical3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

TriangularSpherical3D_Domain_t & TriangularSpherical3D_Domain::get_domain()
{
	return domain;
}

TriangularSpherical3D_Vertex TriangularSpherical3D_Domain::get_vertex(unsigned int index)
{
	typedef TriangularSpherical3D_VertexRange_t                   VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef TriangularSpherical3D_Vertex_t::id_type               VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	return TriangularSpherical3D_Vertex(*vertex);
}

list TriangularSpherical3D_Domain::get_vertices()
{
	list vertices;
	
	typedef TriangularSpherical3D_Domain_t                                                    DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<TriangularSpherical3D_Vertex>(TriangularSpherical3D_Vertex(*it));
	
	return vertices;
}

TriangularSpherical3D_Segmentation TriangularSpherical3D_Domain::read_netgen(std::string const &filename)
{
	viennagrid::io::netgen_reader         my_netgen_reader;
	TriangularSpherical3D_Segmentation    segmentation(*this);
	
	my_netgen_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

TriangularSpherical3D_Segmentation TriangularSpherical3D_Domain::read_vtk(std::string const &filename)
{
	viennagrid::io::vtk_reader<TriangularSpherical3D_Domain_t, TriangularSpherical3D_Segmentation_t>    my_vtk_reader;
	TriangularSpherical3D_Segmentation                                                                  segmentation(*this);
	
	my_vtk_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

void TriangularSpherical3D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<TriangularSpherical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void TriangularSpherical3D_Domain::write_vtk(std::string const &filename, TriangularSpherical3D_Segmentation *segmentation)
{
	viennagrid::io::vtk_writer<TriangularSpherical3D_Domain_t>    my_vtk_writer;
	
	if (segmentation == NULL)
		my_vtk_writer(domain, filename);
	else
		my_vtk_writer(domain, segmentation->get_segmentation(), filename);
}
