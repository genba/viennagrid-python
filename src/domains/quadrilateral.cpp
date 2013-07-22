#include "quadrilateral.hpp"
#include "../segments/types.hpp"
#include "../vertices/types.hpp"
#include "../cells/types.hpp"
#include "../cells/quadrilateral.hpp"

#include <viennagrid/io/netgen_reader.hpp>
#include <viennagrid/io/vtk_reader.hpp>
#include <viennagrid/io/opendx_writer.hpp>
#include <viennagrid/io/vtk_writer.hpp>

/////////////////////////////////
// Quadrilateral, cartesian 2D //
/////////////////////////////////

unsigned int QuadrilateralCartesian2D_Domain::num_vertices()
{
	QuadrilateralCartesian2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void QuadrilateralCartesian2D_Domain::add_vertex(PointCartesian2D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

QuadrilateralCartesian2D_Domain_t & QuadrilateralCartesian2D_Domain::get_domain()
{
	return domain;
}

QuadrilateralCartesian2D_Vertex QuadrilateralCartesian2D_Domain::get_vertex(unsigned int index)
{
	typedef QuadrilateralCartesian2D_VertexRange_t                VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef QuadrilateralCartesian2D_Vertex_t::id_type            VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	return QuadrilateralCartesian2D_Vertex(*vertex);
}

list QuadrilateralCartesian2D_Domain::get_vertices()
{
	list vertices;
	
	typedef QuadrilateralCartesian2D_Domain_t                                                 DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<QuadrilateralCartesian2D_Vertex>(QuadrilateralCartesian2D_Vertex(*it));
	
	return vertices;
}

QuadrilateralCartesian2D_Segmentation QuadrilateralCartesian2D_Domain::read_netgen(std::string const &filename)
{
	viennagrid::io::netgen_reader            my_netgen_reader;
	QuadrilateralCartesian2D_Segmentation    segmentation(*this);
	
	my_netgen_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

QuadrilateralCartesian2D_Segmentation QuadrilateralCartesian2D_Domain::read_vtk(std::string const &filename)
{
	viennagrid::io::vtk_reader<QuadrilateralCartesian2D_Domain_t, QuadrilateralCartesian2D_Segmentation_t>    my_vtk_reader;
	QuadrilateralCartesian2D_Segmentation                                                                     segmentation(*this);
	
	my_vtk_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

void QuadrilateralCartesian2D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<QuadrilateralCartesian2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void QuadrilateralCartesian2D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<QuadrilateralCartesian2D_Domain_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
}

/////////////////////////////////
// Quadrilateral, cartesian 3D //
/////////////////////////////////

unsigned int QuadrilateralCartesian3D_Domain::num_vertices()
{
	QuadrilateralCartesian3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void QuadrilateralCartesian3D_Domain::add_vertex(PointCartesian3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

QuadrilateralCartesian3D_Domain_t & QuadrilateralCartesian3D_Domain::get_domain()
{
	return domain;
}

QuadrilateralCartesian3D_Vertex QuadrilateralCartesian3D_Domain::get_vertex(unsigned int index)
{
	typedef QuadrilateralCartesian3D_VertexRange_t                VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef QuadrilateralCartesian3D_Vertex_t::id_type            VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	return QuadrilateralCartesian3D_Vertex(*vertex);
}

list QuadrilateralCartesian3D_Domain::get_vertices()
{
	list vertices;
	
	typedef QuadrilateralCartesian3D_Domain_t                                                 DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<QuadrilateralCartesian3D_Vertex>(QuadrilateralCartesian3D_Vertex(*it));
	
	return vertices;
}

QuadrilateralCartesian3D_Segmentation QuadrilateralCartesian3D_Domain::read_netgen(std::string const &filename)
{
	viennagrid::io::netgen_reader            my_netgen_reader;
	QuadrilateralCartesian3D_Segmentation    segmentation(*this);
	
	my_netgen_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

QuadrilateralCartesian3D_Segmentation QuadrilateralCartesian3D_Domain::read_vtk(std::string const &filename)
{
	viennagrid::io::vtk_reader<QuadrilateralCartesian3D_Domain_t, QuadrilateralCartesian3D_Segmentation_t>    my_vtk_reader;
	QuadrilateralCartesian3D_Segmentation                                                                     segmentation(*this);
	
	my_vtk_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

void QuadrilateralCartesian3D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<QuadrilateralCartesian3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void QuadrilateralCartesian3D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<QuadrilateralCartesian3D_Domain_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
}

/////////////////////////////////////
// Quadrilateral, cylindrical (3D) //
/////////////////////////////////////

unsigned int QuadrilateralCylindrical3D_Domain::num_vertices()
{
	QuadrilateralCylindrical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void QuadrilateralCylindrical3D_Domain::add_vertex(PointCylindrical3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

QuadrilateralCylindrical3D_Domain_t & QuadrilateralCylindrical3D_Domain::get_domain()
{
	return domain;
}

QuadrilateralCylindrical3D_Vertex QuadrilateralCylindrical3D_Domain::get_vertex(unsigned int index)
{
	typedef QuadrilateralCylindrical3D_VertexRange_t              VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef QuadrilateralCylindrical3D_Vertex_t::id_type          VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	return QuadrilateralCylindrical3D_Vertex(*vertex);
}

list QuadrilateralCylindrical3D_Domain::get_vertices()
{
	list vertices;
	
	typedef QuadrilateralCylindrical3D_Domain_t                                               DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<QuadrilateralCylindrical3D_Vertex>(QuadrilateralCylindrical3D_Vertex(*it));
	
	return vertices;
}

QuadrilateralCylindrical3D_Segmentation QuadrilateralCylindrical3D_Domain::read_netgen(std::string const &filename)
{
	viennagrid::io::netgen_reader              my_netgen_reader;
	QuadrilateralCylindrical3D_Segmentation    segmentation(*this);
	
	my_netgen_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

QuadrilateralCylindrical3D_Segmentation QuadrilateralCylindrical3D_Domain::read_vtk(std::string const &filename)
{
	viennagrid::io::vtk_reader<QuadrilateralCylindrical3D_Domain_t, QuadrilateralCylindrical3D_Segmentation_t>    my_vtk_reader;
	QuadrilateralCylindrical3D_Segmentation                                                                       segmentation(*this);
	
	my_vtk_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

void QuadrilateralCylindrical3D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<QuadrilateralCylindrical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void QuadrilateralCylindrical3D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<QuadrilateralCylindrical3D_Domain_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
}

///////////////////////////////
// Quadrilateral, polar (2D) //
///////////////////////////////

unsigned int QuadrilateralPolar2D_Domain::num_vertices()
{
	QuadrilateralPolar2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void QuadrilateralPolar2D_Domain::add_vertex(PointPolar2D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

QuadrilateralPolar2D_Domain_t & QuadrilateralPolar2D_Domain::get_domain()
{
	return domain;
}

QuadrilateralPolar2D_Vertex QuadrilateralPolar2D_Domain::get_vertex(unsigned int index)
{
	typedef QuadrilateralPolar2D_VertexRange_t                    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef QuadrilateralPolar2D_Vertex_t::id_type                VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	return QuadrilateralPolar2D_Vertex(*vertex);
}

list QuadrilateralPolar2D_Domain::get_vertices()
{
	list vertices;
	
	typedef QuadrilateralPolar2D_Domain_t                                                     DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<QuadrilateralPolar2D_Vertex>(QuadrilateralPolar2D_Vertex(*it));
	
	return vertices;
}

QuadrilateralPolar2D_Segmentation QuadrilateralPolar2D_Domain::read_netgen(std::string const &filename)
{
	viennagrid::io::netgen_reader        my_netgen_reader;
	QuadrilateralPolar2D_Segmentation    segmentation(*this);
	
	my_netgen_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

QuadrilateralPolar2D_Segmentation QuadrilateralPolar2D_Domain::read_vtk(std::string const &filename)
{
	viennagrid::io::vtk_reader<QuadrilateralPolar2D_Domain_t, QuadrilateralPolar2D_Segmentation_t>    my_vtk_reader;
	QuadrilateralPolar2D_Segmentation                                                                 segmentation(*this);
	
	my_vtk_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

void QuadrilateralPolar2D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<QuadrilateralPolar2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void QuadrilateralPolar2D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<QuadrilateralPolar2D_Domain_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
}

///////////////////////////////////
// Quadrilateral, spherical (3D) //
///////////////////////////////////

unsigned int QuadrilateralSpherical3D_Domain::num_vertices()
{
	QuadrilateralSpherical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void QuadrilateralSpherical3D_Domain::add_vertex(PointSpherical3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

QuadrilateralSpherical3D_Domain_t & QuadrilateralSpherical3D_Domain::get_domain()
{
	return domain;
}

QuadrilateralSpherical3D_Vertex QuadrilateralSpherical3D_Domain::get_vertex(unsigned int index)
{
	typedef QuadrilateralSpherical3D_VertexRange_t                VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef QuadrilateralSpherical3D_Vertex_t::id_type            VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	return QuadrilateralSpherical3D_Vertex(*vertex);
}

list QuadrilateralSpherical3D_Domain::get_vertices()
{
	list vertices;
	
	typedef QuadrilateralSpherical3D_Domain_t                                                 DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<QuadrilateralSpherical3D_Vertex>(QuadrilateralSpherical3D_Vertex(*it));
	
	return vertices;
}

QuadrilateralSpherical3D_Segmentation QuadrilateralSpherical3D_Domain::read_netgen(std::string const &filename)
{
	viennagrid::io::netgen_reader            my_netgen_reader;
	QuadrilateralSpherical3D_Segmentation    segmentation(*this);
	
	my_netgen_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

QuadrilateralSpherical3D_Segmentation QuadrilateralSpherical3D_Domain::read_vtk(std::string const &filename)
{
	viennagrid::io::vtk_reader<QuadrilateralSpherical3D_Domain_t, QuadrilateralSpherical3D_Segmentation_t>    my_vtk_reader;
	QuadrilateralSpherical3D_Segmentation                                                                     segmentation(*this);
	
	my_vtk_reader(domain, segmentation.get_segmentation(), filename);
	
	return segmentation;
}

void QuadrilateralSpherical3D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<QuadrilateralSpherical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void QuadrilateralSpherical3D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<QuadrilateralSpherical3D_Domain_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
}
