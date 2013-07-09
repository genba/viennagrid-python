#include "quadrilateral.hpp"
#include "../segments/types.hpp"
#include "../vertices/types.hpp"
#include "../cells/types.hpp"
#include "../cells/quadrilateral.hpp"

#include <viennagrid/io/netgen_reader.hpp>
#include <viennagrid/io/vtk_reader.hpp>
#include <viennagrid/io/opendx_writer.hpp>
#include <viennagrid/io/vtk_writer.hpp>

#include <vector>

/////////////////////////////////
// Quadrilateral, cartesian 2D //
/////////////////////////////////

unsigned int QuadrilateralCartesian2D_Domain::num_vertices()
{
	QuadrilateralCartesian2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void QuadrilateralCartesian2D_Domain::add_vertex(PointCartesian2D vertex)
{
	viennagrid::create_element<QuadrilateralCartesian2D_Vertex_t>(domain, vertex.get_point());
}

QuadrilateralCartesian2D_Domain_t & QuadrilateralCartesian2D_Domain::get_domain()
{
	return domain;
}

PointCartesian2D QuadrilateralCartesian2D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	QuadrilateralCartesian2D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCartesian2D(viennagrid::point(domain, vertices[index]), index);
}

void QuadrilateralCartesian2D_Domain::read_netgen(std::string const &filename)
{
	std::vector<QuadrilateralCartesian2D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<QuadrilateralCartesian2D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void QuadrilateralCartesian2D_Domain::read_vtk(std::string const &filename)
{
	std::vector<QuadrilateralCartesian2D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<QuadrilateralCartesian2D_Cell_t, QuadrilateralCartesian2D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void QuadrilateralCartesian2D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<QuadrilateralCartesian2D_Cell_t, QuadrilateralCartesian2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void QuadrilateralCartesian2D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<QuadrilateralCartesian2D_Domain_t, QuadrilateralCartesian2D_Cell_t>    my_vtk_writer;
	
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

void QuadrilateralCartesian3D_Domain::add_vertex(PointCartesian3D vertex)
{
	viennagrid::create_element<QuadrilateralCartesian3D_Vertex_t>(domain, vertex.get_point());
}

QuadrilateralCartesian3D_Domain_t & QuadrilateralCartesian3D_Domain::get_domain()
{
	return domain;
}

PointCartesian3D QuadrilateralCartesian3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	QuadrilateralCartesian3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCartesian3D(viennagrid::point(domain, vertices[index]), index);
}

void QuadrilateralCartesian3D_Domain::read_netgen(std::string const &filename)
{
	std::vector<QuadrilateralCartesian3D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<QuadrilateralCartesian3D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void QuadrilateralCartesian3D_Domain::read_vtk(std::string const &filename)
{
	std::vector<QuadrilateralCartesian3D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<QuadrilateralCartesian3D_Cell_t, QuadrilateralCartesian3D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void QuadrilateralCartesian3D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<QuadrilateralCartesian3D_Cell_t, QuadrilateralCartesian3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void QuadrilateralCartesian3D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<QuadrilateralCartesian3D_Domain_t, QuadrilateralCartesian3D_Cell_t>    my_vtk_writer;
	
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

void QuadrilateralCylindrical3D_Domain::add_vertex(PointCylindrical3D vertex)
{
	viennagrid::create_element<QuadrilateralCylindrical3D_Vertex_t>(domain, vertex.get_point());
}

QuadrilateralCylindrical3D_Domain_t & QuadrilateralCylindrical3D_Domain::get_domain()
{
	return domain;
}

PointCylindrical3D QuadrilateralCylindrical3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	QuadrilateralCylindrical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCylindrical3D(viennagrid::point(domain, vertices[index]), index);
}

void QuadrilateralCylindrical3D_Domain::read_netgen(std::string const &filename)
{
	std::vector<QuadrilateralCylindrical3D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<QuadrilateralCylindrical3D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void QuadrilateralCylindrical3D_Domain::read_vtk(std::string const &filename)
{
	std::vector<QuadrilateralCylindrical3D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<QuadrilateralCylindrical3D_Cell_t, QuadrilateralCylindrical3D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void QuadrilateralCylindrical3D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<QuadrilateralCylindrical3D_Cell_t, QuadrilateralCylindrical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void QuadrilateralCylindrical3D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<QuadrilateralCylindrical3D_Domain_t, QuadrilateralCylindrical3D_Cell_t>    my_vtk_writer;
	
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

void QuadrilateralPolar2D_Domain::add_vertex(PointPolar2D vertex)
{
	viennagrid::create_element<QuadrilateralPolar2D_Vertex_t>(domain, vertex.get_point());
}

QuadrilateralPolar2D_Domain_t & QuadrilateralPolar2D_Domain::get_domain()
{
	return domain;
}

PointPolar2D QuadrilateralPolar2D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	QuadrilateralPolar2D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointPolar2D(viennagrid::point(domain, vertices[index]), index);
}

void QuadrilateralPolar2D_Domain::read_netgen(std::string const &filename)
{
	std::vector<QuadrilateralPolar2D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<QuadrilateralPolar2D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void QuadrilateralPolar2D_Domain::read_vtk(std::string const &filename)
{
	std::vector<QuadrilateralPolar2D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<QuadrilateralPolar2D_Cell_t, QuadrilateralPolar2D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void QuadrilateralPolar2D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<QuadrilateralPolar2D_Cell_t, QuadrilateralPolar2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void QuadrilateralPolar2D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<QuadrilateralPolar2D_Domain_t, QuadrilateralPolar2D_Cell_t>    my_vtk_writer;
	
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

void QuadrilateralSpherical3D_Domain::add_vertex(PointSpherical3D vertex)
{
	viennagrid::create_element<QuadrilateralSpherical3D_Vertex_t>(domain, vertex.get_point());
}

QuadrilateralSpherical3D_Domain_t & QuadrilateralSpherical3D_Domain::get_domain()
{
	return domain;
}

PointSpherical3D QuadrilateralSpherical3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	QuadrilateralSpherical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointSpherical3D(viennagrid::point(domain, vertices[index]), index);
}

void QuadrilateralSpherical3D_Domain::read_netgen(std::string const &filename)
{
	std::vector<QuadrilateralSpherical3D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<QuadrilateralSpherical3D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void QuadrilateralSpherical3D_Domain::read_vtk(std::string const &filename)
{
	std::vector<QuadrilateralSpherical3D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<QuadrilateralSpherical3D_Cell_t, QuadrilateralSpherical3D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void QuadrilateralSpherical3D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<QuadrilateralSpherical3D_Cell_t, QuadrilateralSpherical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void QuadrilateralSpherical3D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<QuadrilateralSpherical3D_Domain_t, QuadrilateralSpherical3D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
}

void QuadrilateralSpherical3D_Domain::create_cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3, PointSpherical3D vertex4)
{
	viennagrid::storage::static_array<QuadrilateralSpherical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex3.get_id());
	vertices[3] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex4.get_id());
	viennagrid::create_element<QuadrilateralSpherical3D_Cell_t>(domain, vertices);
	
	cells.append<QuadrilateralSpherical3D_Cell>(QuadrilateralSpherical3D_Cell(vertex1, vertex2, vertex3, vertex4));
}

list QuadrilateralSpherical3D_Domain::get_cells()
{
	return cells;
}
