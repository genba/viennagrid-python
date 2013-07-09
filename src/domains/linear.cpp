#include "linear.hpp"
#include "../segments/types.hpp"
#include "../vertices/types.hpp"
#include "../cells/types.hpp"

/*
#include <viennagrid/io/netgen_reader.hpp>
#include <viennagrid/io/vtk_reader.hpp>
#include <viennagrid/io/opendx_writer.hpp>
#include <viennagrid/io/vtk_writer.hpp>
*/

#include <vector>

////////////////////////////
// Triangle, cartesian 1D //
////////////////////////////

unsigned int LinearCartesian1D_Domain::num_vertices()
{
	LinearCartesian1D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void LinearCartesian1D_Domain::add_vertex(PointCartesian1D vertex)
{
	viennagrid::create_vertex(domain, vertex.get_point());
}

LinearCartesian1D_Domain_t & LinearCartesian1D_Domain::get_domain()
{
	return domain;
}

PointCartesian1D LinearCartesian1D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	LinearCartesian1D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCartesian1D(viennagrid::point(domain, vertices[index]), index);
}

void LinearCartesian1D_Domain::read_netgen(std::string const &filename)
{
	/*
	std::vector<LinearCartesian1D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<LinearCartesian1D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void LinearCartesian1D_Domain::read_vtk(std::string const &filename)
{
	/*
	std::vector<LinearCartesian1D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<LinearCartesian1D_Cell_t, LinearCartesian1D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void LinearCartesian1D_Domain::write_opendx(std::string const &filename)
{
	/*
	viennagrid::io::opendx_writer<LinearCartesian1D_Cell_t, LinearCartesian1D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
	*/
}

void LinearCartesian1D_Domain::write_vtk(std::string const &filename)
{
	/*
	viennagrid::io::vtk_writer<LinearCartesian1D_Domain_t, LinearCartesian1D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
	*/
}

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

unsigned int LinearCartesian2D_Domain::num_vertices()
{
	LinearCartesian2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void LinearCartesian2D_Domain::add_vertex(PointCartesian2D vertex)
{
	viennagrid::create_vertex(domain, vertex.get_point());
}

LinearCartesian2D_Domain_t & LinearCartesian2D_Domain::get_domain()
{
	return domain;
}

PointCartesian2D LinearCartesian2D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	LinearCartesian2D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCartesian2D(viennagrid::point(domain, vertices[index]), index);
}

void LinearCartesian2D_Domain::read_netgen(std::string const &filename)
{
	/*
	std::vector<LinearCartesian2D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<LinearCartesian2D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void LinearCartesian2D_Domain::read_vtk(std::string const &filename)
{
	/*
	std::vector<LinearCartesian2D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<LinearCartesian2D_Cell_t, LinearCartesian2D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void LinearCartesian2D_Domain::write_opendx(std::string const &filename)
{
	/*
	viennagrid::io::opendx_writer<LinearCartesian2D_Cell_t, LinearCartesian2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
	*/
}

void LinearCartesian2D_Domain::write_vtk(std::string const &filename)
{
	/*
	viennagrid::io::vtk_writer<LinearCartesian2D_Domain_t, LinearCartesian2D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
	*/
}

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

unsigned int LinearCartesian3D_Domain::num_vertices()
{
	LinearCartesian3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void LinearCartesian3D_Domain::add_vertex(PointCartesian3D vertex)
{
	viennagrid::create_vertex(domain, vertex.get_point());
}

LinearCartesian3D_Domain_t & LinearCartesian3D_Domain::get_domain()
{
	return domain;
}

PointCartesian3D LinearCartesian3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	LinearCartesian3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCartesian3D(viennagrid::point(domain, vertices[index]), index);
}

void LinearCartesian3D_Domain::read_netgen(std::string const &filename)
{
	/*
	std::vector<LinearCartesian3D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<LinearCartesian3D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void LinearCartesian3D_Domain::read_vtk(std::string const &filename)
{
	/*
	std::vector<LinearCartesian3D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<LinearCartesian3D_Cell_t, LinearCartesian3D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void LinearCartesian3D_Domain::write_opendx(std::string const &filename)
{
	/*
	viennagrid::io::opendx_writer<LinearCartesian3D_Cell_t, LinearCartesian3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
	*/
}

void LinearCartesian3D_Domain::write_vtk(std::string const &filename)
{
	/*
	viennagrid::io::vtk_writer<LinearCartesian3D_Domain_t, LinearCartesian3D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
	*/
}

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

unsigned int LinearCylindrical3D_Domain::num_vertices()
{
	LinearCylindrical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void LinearCylindrical3D_Domain::add_vertex(PointCylindrical3D vertex)
{
	viennagrid::create_vertex(domain, vertex.get_point());
}

LinearCylindrical3D_Domain_t & LinearCylindrical3D_Domain::get_domain()
{
	return domain;
}

PointCylindrical3D LinearCylindrical3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	LinearCylindrical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointCylindrical3D(viennagrid::point(domain, vertices[index]), index);
}

void LinearCylindrical3D_Domain::read_netgen(std::string const &filename)
{
	/*
	std::vector<LinearCylindrical3D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<LinearCylindrical3D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void LinearCylindrical3D_Domain::read_vtk(std::string const &filename)
{
	/*
	std::vector<LinearCylindrical3D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<LinearCylindrical3D_Cell_t, LinearCylindrical3D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void LinearCylindrical3D_Domain::write_opendx(std::string const &filename)
{
	/*
	viennagrid::io::opendx_writer<LinearCylindrical3D_Cell_t, LinearCylindrical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
	*/
}

void LinearCylindrical3D_Domain::write_vtk(std::string const &filename)
{
	/*
	viennagrid::io::vtk_writer<LinearCylindrical3D_Domain_t, LinearCylindrical3D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
	*/
}

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

unsigned int LinearPolar2D_Domain::num_vertices()
{
	LinearPolar2D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void LinearPolar2D_Domain::add_vertex(PointPolar2D vertex)
{
	viennagrid::create_vertex(domain, vertex.get_point());
}

LinearPolar2D_Domain_t & LinearPolar2D_Domain::get_domain()
{
	return domain;
}

PointPolar2D LinearPolar2D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	LinearPolar2D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointPolar2D(viennagrid::point(domain, vertices[index]), index);
}

void LinearPolar2D_Domain::read_netgen(std::string const &filename)
{
	/*
	std::vector<LinearPolar2D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<LinearPolar2D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void LinearPolar2D_Domain::read_vtk(std::string const &filename)
{
	/*
	std::vector<LinearPolar2D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<LinearPolar2D_Cell_t, LinearPolar2D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void LinearPolar2D_Domain::write_opendx(std::string const &filename)
{
	/*
	viennagrid::io::opendx_writer<LinearPolar2D_Cell_t, LinearPolar2D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
	*/
}

void LinearPolar2D_Domain::write_vtk(std::string const &filename)
{
	/*
	viennagrid::io::vtk_writer<LinearPolar2D_Domain_t, LinearPolar2D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
	*/
}

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

unsigned int LinearSpherical3D_Domain::num_vertices()
{
	LinearSpherical3D_VertexRange_t vertex_range = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return vertex_range.size();
}

void LinearSpherical3D_Domain::add_vertex(PointSpherical3D vertex)
{
	viennagrid::create_vertex(domain, vertex.get_point());
}

LinearSpherical3D_Domain_t & LinearSpherical3D_Domain::get_domain()
{
	return domain;
}

PointSpherical3D LinearSpherical3D_Domain::get_vertex(unsigned int index)
{
	// TODO: domain.find_by_id(index);
	LinearSpherical3D_VertexRange_t vertices = viennagrid::elements<viennagrid::vertex_tag>(domain);
	return PointSpherical3D(viennagrid::point(domain, vertices[index]), index);
}

void LinearSpherical3D_Domain::read_netgen(std::string const &filename)
{
	/*
	std::vector<LinearSpherical3D_Segment_t>                   segment_list;
	viennagrid::io::netgen_reader<LinearSpherical3D_Cell_t>    my_netgen_reader;
	//viennagrid::io::netgen_reader<viennagrid::triangle_tag>    my_netgen_reader;
	
	my_netgen_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void LinearSpherical3D_Domain::read_vtk(std::string const &filename)
{
	/*
	std::vector<LinearSpherical3D_Segment_t>                                                segment_list;
	viennagrid::io::vtk_reader<LinearSpherical3D_Cell_t, LinearSpherical3D_Domain_t>    my_vtk_reader;
	
	my_vtk_reader(domain, segment_list, filename);
	// TODO: return segmentation object from segment_list
	*/
}

void LinearSpherical3D_Domain::write_opendx(std::string const &filename)
{
	/*
	viennagrid::io::opendx_writer<LinearSpherical3D_Cell_t, LinearSpherical3D_Domain_t>    my_dx_writer;
	
	my_dx_writer(domain, filename);
	*/
}

void LinearSpherical3D_Domain::write_vtk(std::string const &filename)
{
	/*
	viennagrid::io::vtk_writer<LinearSpherical3D_Domain_t, LinearSpherical3D_Cell_t>    my_vtk_writer;
	
	my_vtk_writer(domain, filename);
	*/
}
