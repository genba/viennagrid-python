#include "triangular.hpp"
#include "../segments/types.hpp"
#include "../vertices/types.hpp"
#include "../cells/types.hpp"
#include "../cells/triangular.hpp"

/*
#include <viennagrid/io/netgen_reader.hpp>
#include <viennagrid/io/vtk_reader.hpp>
#include <viennagrid/io/opendx_writer.hpp>
#include <viennagrid/io/vtk_writer.hpp>
*/

#include <vector>

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
	// TODO: domain.find_by_id(index);
	TriangularCartesian2D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return TriangularCartesian2D_Vertex(vertices[index]);
}

void TriangularCartesian2D_Domain::read_netgen(std::string const &filename)
{
	/*
	std::vector<TriangularCartesian2D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<TriangularCartesian2D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void TriangularCartesian2D_Domain::read_vtk(std::string const &filename)
{
	/*
	std::vector<TriangularCartesian2D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<TriangularCartesian2D_Cell_t, TriangularCartesian2D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void TriangularCartesian2D_Domain::write_opendx(std::string const &filename)
{
	/*
	viennagrid::io::opendx_writer<TriangularCartesian2D_Cell_t, TriangularCartesian2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
	*/
}

void TriangularCartesian2D_Domain::write_vtk(std::string const &filename)
{
	/*
	viennagrid::io::vtk_writer<TriangularCartesian2D_Domain_t, TriangularCartesian2D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
	*/
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
	// TODO: domain.find_by_id(index);
	TriangularCartesian3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return TriangularCartesian3D_Vertex(vertices[index]);
}

void TriangularCartesian3D_Domain::read_netgen(std::string const &filename)
{
	/*
	std::vector<TriangularCartesian3D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<TriangularCartesian3D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void TriangularCartesian3D_Domain::read_vtk(std::string const &filename)
{
	/*
	std::vector<TriangularCartesian3D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<TriangularCartesian3D_Cell_t, TriangularCartesian3D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void TriangularCartesian3D_Domain::write_opendx(std::string const &filename)
{
	/*
	viennagrid::io::opendx_writer<TriangularCartesian3D_Cell_t, TriangularCartesian3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
	*/
}

void TriangularCartesian3D_Domain::write_vtk(std::string const &filename)
{
	/*
	viennagrid::io::vtk_writer<TriangularCartesian3D_Domain_t, TriangularCartesian3D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
	*/
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
	// TODO: domain.find_by_id(index);
	TriangularCylindrical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return TriangularCylindrical3D_Vertex(vertices[index]);
}

void TriangularCylindrical3D_Domain::read_netgen(std::string const &filename)
{
	/*
	std::vector<TriangularCylindrical3D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<TriangularCylindrical3D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void TriangularCylindrical3D_Domain::read_vtk(std::string const &filename)
{
	/*
	std::vector<TriangularCylindrical3D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<TriangularCylindrical3D_Cell_t, TriangularCylindrical3D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void TriangularCylindrical3D_Domain::write_opendx(std::string const &filename)
{
	/*
	viennagrid::io::opendx_writer<TriangularCylindrical3D_Cell_t, TriangularCylindrical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
	*/
}

void TriangularCylindrical3D_Domain::write_vtk(std::string const &filename)
{
	/*
	viennagrid::io::vtk_writer<TriangularCylindrical3D_Domain_t, TriangularCylindrical3D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
	*/
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
	// TODO: domain.find_by_id(index);
	TriangularPolar2D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return TriangularPolar2D_Vertex(vertices[index]);
}

void TriangularPolar2D_Domain::read_netgen(std::string const &filename)
{
	/*
	std::vector<TriangularPolar2D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<TriangularPolar2D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void TriangularPolar2D_Domain::read_vtk(std::string const &filename)
{
	/*
	std::vector<TriangularPolar2D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<TriangularPolar2D_Cell_t, TriangularPolar2D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void TriangularPolar2D_Domain::write_opendx(std::string const &filename)
{
	/*
	viennagrid::io::opendx_writer<TriangularPolar2D_Cell_t, TriangularPolar2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
	*/
}

void TriangularPolar2D_Domain::write_vtk(std::string const &filename)
{
	/*
	viennagrid::io::vtk_writer<TriangularPolar2D_Domain_t, TriangularPolar2D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
	*/
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
	// TODO: domain.find_by_id(index);
	TriangularSpherical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return TriangularSpherical3D_Vertex(vertices[index]);
}

void TriangularSpherical3D_Domain::read_netgen(std::string const &filename)
{
	/*
	std::vector<TriangularSpherical3D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<TriangularSpherical3D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void TriangularSpherical3D_Domain::read_vtk(std::string const &filename)
{
	/*
	std::vector<TriangularSpherical3D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<TriangularSpherical3D_Cell_t, TriangularSpherical3D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void TriangularSpherical3D_Domain::write_opendx(std::string const &filename)
{
	/*
	viennagrid::io::opendx_writer<TriangularSpherical3D_Cell_t, TriangularSpherical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
	*/
}

void TriangularSpherical3D_Domain::write_vtk(std::string const &filename)
{
	/*
	viennagrid::io::vtk_writer<TriangularSpherical3D_Domain_t, TriangularSpherical3D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
	*/
}