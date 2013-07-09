#include "tetrahedral.hpp"
#include "../segments/types.hpp"
#include "../vertices/types.hpp"
#include "../cells/types.hpp"
#include "../cells/tetrahedral.hpp"

#include <viennagrid/io/netgen_reader.hpp>
#include <viennagrid/io/vtk_reader.hpp>
#include <viennagrid/io/opendx_writer.hpp>
#include <viennagrid/io/vtk_writer.hpp>

#include <vector>

///////////////////////////////
// Tetrahedral, cartesian 3D //
///////////////////////////////

unsigned int TetrahedralCartesian3D_Domain::num_vertices()
{
	TetrahedralCartesian3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TetrahedralCartesian3D_Domain::add_vertex(PointCartesian3D vertex)
{
	viennagrid::create_element<TetrahedralCartesian3D_Vertex_t>(domain, vertex.get_point());
}

TetrahedralCartesian3D_Domain_t & TetrahedralCartesian3D_Domain::get_domain()
{
	return domain;
}

PointCartesian3D TetrahedralCartesian3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	TetrahedralCartesian3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCartesian3D(viennagrid::point(domain, vertices[index]), index);
}

void TetrahedralCartesian3D_Domain::read_netgen(std::string const &filename)
{
	std::vector<TetrahedralCartesian3D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<TetrahedralCartesian3D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void TetrahedralCartesian3D_Domain::read_vtk(std::string const &filename)
{
	std::vector<TetrahedralCartesian3D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<TetrahedralCartesian3D_Cell_t, TetrahedralCartesian3D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void TetrahedralCartesian3D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<TetrahedralCartesian3D_Cell_t, TetrahedralCartesian3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void TetrahedralCartesian3D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<TetrahedralCartesian3D_Domain_t, TetrahedralCartesian3D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
}

///////////////////////////////////
// Tetrahedral, cylindrical (3D) //
///////////////////////////////////

unsigned int TetrahedralCylindrical3D_Domain::num_vertices()
{
	TetrahedralCylindrical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TetrahedralCylindrical3D_Domain::add_vertex(PointCylindrical3D vertex)
{
	viennagrid::create_element<TetrahedralCylindrical3D_Vertex_t>(domain, vertex.get_point());
}

TetrahedralCylindrical3D_Domain_t & TetrahedralCylindrical3D_Domain::get_domain()
{
	return domain;
}

PointCylindrical3D TetrahedralCylindrical3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	TetrahedralCylindrical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCylindrical3D(viennagrid::point(domain, vertices[index]), index);
}

void TetrahedralCylindrical3D_Domain::read_netgen(std::string const &filename)
{
	std::vector<TetrahedralCylindrical3D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<TetrahedralCylindrical3D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void TetrahedralCylindrical3D_Domain::read_vtk(std::string const &filename)
{
	std::vector<TetrahedralCylindrical3D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<TetrahedralCylindrical3D_Cell_t, TetrahedralCylindrical3D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void TetrahedralCylindrical3D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<TetrahedralCylindrical3D_Cell_t, TetrahedralCylindrical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void TetrahedralCylindrical3D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<TetrahedralCylindrical3D_Domain_t, TetrahedralCylindrical3D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
}

/////////////////////////////////
// Tetrahedral, spherical (3D) //
/////////////////////////////////

unsigned int TetrahedralSpherical3D_Domain::num_vertices()
{
	TetrahedralSpherical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TetrahedralSpherical3D_Domain::add_vertex(PointSpherical3D vertex)
{
	viennagrid::create_element<TetrahedralSpherical3D_Vertex_t>(domain, vertex.get_point());
}

TetrahedralSpherical3D_Domain_t & TetrahedralSpherical3D_Domain::get_domain()
{
	return domain;
}

PointSpherical3D TetrahedralSpherical3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	TetrahedralSpherical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointSpherical3D(viennagrid::point(domain, vertices[index]), index);
}

void TetrahedralSpherical3D_Domain::read_netgen(std::string const &filename)
{
	std::vector<TetrahedralSpherical3D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<TetrahedralSpherical3D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void TetrahedralSpherical3D_Domain::read_vtk(std::string const &filename)
{
	std::vector<TetrahedralSpherical3D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<TetrahedralSpherical3D_Cell_t, TetrahedralSpherical3D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void TetrahedralSpherical3D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<TetrahedralSpherical3D_Cell_t, TetrahedralSpherical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void TetrahedralSpherical3D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<TetrahedralSpherical3D_Domain_t, TetrahedralSpherical3D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
}

void TetrahedralSpherical3D_Domain::create_cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3, PointSpherical3D vertex4)
{
	viennagrid::storage::static_array<TetrahedralSpherical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex3.get_id());
	vertices[3] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex4.get_id());
	viennagrid::create_element<TetrahedralSpherical3D_Cell_t>(domain, vertices);
	
	cells.append<TetrahedralSpherical3D_Cell>(TetrahedralSpherical3D_Cell(vertex1, vertex2, vertex3, vertex4));
}

list TetrahedralSpherical3D_Domain::get_cells()
{
	return cells;
}
