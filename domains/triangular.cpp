#include "triangular.hpp"
#include "../segments/types.hpp"
#include "../vertices/types.hpp"
#include "../cells/types.hpp"
#include "../cells/triangular.hpp"

#include <viennagrid/io/netgen_reader.hpp>
#include <viennagrid/io/vtk_reader.hpp>
#include <viennagrid/io/opendx_writer.hpp>
#include <viennagrid/io/vtk_writer.hpp>

#include <vector>

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

unsigned int TriangularCartesian2D_Domain::num_vertices()
{
	TriangularCartesian2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularCartesian2D_Domain::add_vertex(PointCartesian2D vertex)
{
	viennagrid::create_element<TriangularCartesian2D_Vertex_t>(domain, vertex.get_point());
}

TriangularCartesian2D_Domain_t & TriangularCartesian2D_Domain::get_domain()
{
	return domain;
}

PointCartesian2D TriangularCartesian2D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	TriangularCartesian2D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCartesian2D(viennagrid::point(domain, vertices[index]), index);
}

void TriangularCartesian2D_Domain::read_netgen(std::string const &filename)
{
	std::vector<TriangularCartesian2D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<TriangularCartesian2D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void TriangularCartesian2D_Domain::read_vtk(std::string const &filename)
{
	std::vector<TriangularCartesian2D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<TriangularCartesian2D_Cell_t, TriangularCartesian2D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void TriangularCartesian2D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<TriangularCartesian2D_Cell_t, TriangularCartesian2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void TriangularCartesian2D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<TriangularCartesian2D_Domain_t, TriangularCartesian2D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
}

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

unsigned int TriangularCartesian3D_Domain::num_vertices()
{
	TriangularCartesian3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularCartesian3D_Domain::add_vertex(PointCartesian3D vertex)
{
	viennagrid::create_element<TriangularCartesian3D_Vertex_t>(domain, vertex.get_point());
}

TriangularCartesian3D_Domain_t & TriangularCartesian3D_Domain::get_domain()
{
	return domain;
}

PointCartesian3D TriangularCartesian3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	TriangularCartesian3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCartesian3D(viennagrid::point(domain, vertices[index]), index);
}

void TriangularCartesian3D_Domain::read_netgen(std::string const &filename)
{
	std::vector<TriangularCartesian3D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<TriangularCartesian3D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void TriangularCartesian3D_Domain::read_vtk(std::string const &filename)
{
	std::vector<TriangularCartesian3D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<TriangularCartesian3D_Cell_t, TriangularCartesian3D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void TriangularCartesian3D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<TriangularCartesian3D_Cell_t, TriangularCartesian3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void TriangularCartesian3D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<TriangularCartesian3D_Domain_t, TriangularCartesian3D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
}

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

unsigned int TriangularCylindrical3D_Domain::num_vertices()
{
	TriangularCylindrical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularCylindrical3D_Domain::add_vertex(PointCylindrical3D vertex)
{
	viennagrid::create_element<TriangularCylindrical3D_Vertex_t>(domain, vertex.get_point());
}

TriangularCylindrical3D_Domain_t & TriangularCylindrical3D_Domain::get_domain()
{
	return domain;
}

PointCylindrical3D TriangularCylindrical3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	TriangularCylindrical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCylindrical3D(viennagrid::point(domain, vertices[index]), index);
}

void TriangularCylindrical3D_Domain::read_netgen(std::string const &filename)
{
	std::vector<TriangularCylindrical3D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<TriangularCylindrical3D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void TriangularCylindrical3D_Domain::read_vtk(std::string const &filename)
{
	std::vector<TriangularCylindrical3D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<TriangularCylindrical3D_Cell_t, TriangularCylindrical3D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void TriangularCylindrical3D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<TriangularCylindrical3D_Cell_t, TriangularCylindrical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void TriangularCylindrical3D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<TriangularCylindrical3D_Domain_t, TriangularCylindrical3D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
}

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

unsigned int TriangularPolar2D_Domain::num_vertices()
{
	TriangularPolar2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularPolar2D_Domain::add_vertex(PointPolar2D vertex)
{
	viennagrid::create_element<TriangularPolar2D_Vertex_t>(domain, vertex.get_point());
}

TriangularPolar2D_Domain_t & TriangularPolar2D_Domain::get_domain()
{
	return domain;
}

PointPolar2D TriangularPolar2D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	TriangularPolar2D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointPolar2D(viennagrid::point(domain, vertices[index]), index);
}

void TriangularPolar2D_Domain::read_netgen(std::string const &filename)
{
	std::vector<TriangularPolar2D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<TriangularPolar2D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void TriangularPolar2D_Domain::read_vtk(std::string const &filename)
{
	std::vector<TriangularPolar2D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<TriangularPolar2D_Cell_t, TriangularPolar2D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void TriangularPolar2D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<TriangularPolar2D_Cell_t, TriangularPolar2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void TriangularPolar2D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<TriangularPolar2D_Domain_t, TriangularPolar2D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
}

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

unsigned int TriangularSpherical3D_Domain::num_vertices()
{
	TriangularSpherical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void TriangularSpherical3D_Domain::add_vertex(PointSpherical3D vertex)
{
	viennagrid::create_element<TriangularSpherical3D_Vertex_t>(domain, vertex.get_point());
}

TriangularSpherical3D_Domain_t & TriangularSpherical3D_Domain::get_domain()
{
	return domain;
}

PointSpherical3D TriangularSpherical3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	TriangularSpherical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointSpherical3D(viennagrid::point(domain, vertices[index]), index);
}

void TriangularSpherical3D_Domain::read_netgen(std::string const &filename)
{
	std::vector<TriangularSpherical3D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<TriangularSpherical3D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void TriangularSpherical3D_Domain::read_vtk(std::string const &filename)
{
	std::vector<TriangularSpherical3D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<TriangularSpherical3D_Cell_t, TriangularSpherical3D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
}

void TriangularSpherical3D_Domain::write_opendx(std::string const &filename)
{
	viennagrid::io::opendx_writer<TriangularSpherical3D_Cell_t, TriangularSpherical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
}

void TriangularSpherical3D_Domain::write_vtk(std::string const &filename)
{
	viennagrid::io::vtk_writer<TriangularSpherical3D_Domain_t, TriangularSpherical3D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
}

void TriangularSpherical3D_Domain::create_cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3)
{
	viennagrid::storage::static_array<TriangularSpherical3D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex2.get_id());
	vertices[2] = viennagrid::elements<viennagrid::vertex_tag>(domain).handle_at(vertex3.get_id());
	viennagrid::create_element<TriangularSpherical3D_Cell_t>(domain, vertices);
	
	cells.append<TriangularSpherical3D_Cell>(TriangularSpherical3D_Cell(vertex1, vertex2, vertex3));
}

list TriangularSpherical3D_Domain::get_cells()
{
	return cells;
}
