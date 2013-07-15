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

void LinearCartesian1D_Domain::add_vertex(PointCartesian1D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

LinearCartesian1D_Domain_t & LinearCartesian1D_Domain::get_domain()
{
	return domain;
}

LinearCartesian1D_Vertex LinearCartesian1D_Domain::get_vertex(unsigned int index)
{
	typedef LinearCartesian1D_VertexRange_t                       VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef LinearCartesian1D_Vertex_t::id_type                   VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	return LinearCartesian1D_Vertex(*vertex);
}

list LinearCartesian1D_Domain::get_vertices()
{
	list vertices;
	
	typedef LinearCartesian1D_Domain_t                                                        DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<LinearCartesian1D_Vertex>(LinearCartesian1D_Vertex(*it));
	
	return vertices;
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

void LinearCartesian2D_Domain::add_vertex(PointCartesian2D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

LinearCartesian2D_Domain_t & LinearCartesian2D_Domain::get_domain()
{
	return domain;
}

LinearCartesian2D_Vertex LinearCartesian2D_Domain::get_vertex(unsigned int index)
{
	typedef LinearCartesian2D_VertexRange_t                       VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef LinearCartesian2D_Vertex_t::id_type                   VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	return LinearCartesian2D_Vertex(*vertex);
}

list LinearCartesian2D_Domain::get_vertices()
{
	list vertices;
	
	typedef LinearCartesian2D_Domain_t                                                        DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<LinearCartesian2D_Vertex>(LinearCartesian2D_Vertex(*it));
	
	return vertices;
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

void LinearCartesian3D_Domain::add_vertex(PointCartesian3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

LinearCartesian3D_Domain_t & LinearCartesian3D_Domain::get_domain()
{
	return domain;
}

LinearCartesian3D_Vertex LinearCartesian3D_Domain::get_vertex(unsigned int index)
{
	typedef LinearCartesian3D_VertexRange_t                       VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef LinearCartesian3D_Vertex_t::id_type                   VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	return LinearCartesian3D_Vertex(*vertex);
}

list LinearCartesian3D_Domain::get_vertices()
{
	list vertices;
	
	typedef LinearCartesian3D_Domain_t                                                        DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<LinearCartesian3D_Vertex>(LinearCartesian3D_Vertex(*it));
	
	return vertices;
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

void LinearCylindrical3D_Domain::add_vertex(PointCylindrical3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

LinearCylindrical3D_Domain_t & LinearCylindrical3D_Domain::get_domain()
{
	return domain;
}

LinearCylindrical3D_Vertex LinearCylindrical3D_Domain::get_vertex(unsigned int index)
{
	typedef LinearCylindrical3D_VertexRange_t                     VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef LinearCylindrical3D_Vertex_t::id_type                 VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	return LinearCylindrical3D_Vertex(*vertex);
}

list LinearCylindrical3D_Domain::get_vertices()
{
	list vertices;
	
	typedef LinearCylindrical3D_Domain_t                                                      DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<LinearCylindrical3D_Vertex>(LinearCylindrical3D_Vertex(*it));
	
	return vertices;
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

void LinearPolar2D_Domain::add_vertex(PointPolar2D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

LinearPolar2D_Domain_t & LinearPolar2D_Domain::get_domain()
{
	return domain;
}

LinearPolar2D_Vertex LinearPolar2D_Domain::get_vertex(unsigned int index)
{
	typedef LinearPolar2D_VertexRange_t                           VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef LinearPolar2D_Vertex_t::id_type                       VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	return LinearPolar2D_Vertex(*vertex);
}

list LinearPolar2D_Domain::get_vertices()
{
	list vertices;
	
	typedef LinearPolar2D_Domain_t                                                            DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<LinearPolar2D_Vertex>(LinearPolar2D_Vertex(*it));
	
	return vertices;
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

void LinearSpherical3D_Domain::add_vertex(PointSpherical3D point)
{
	viennagrid::make_vertex(domain, point.get_point());
}

LinearSpherical3D_Domain_t & LinearSpherical3D_Domain::get_domain()
{
	return domain;
}

LinearSpherical3D_Vertex LinearSpherical3D_Domain::get_vertex(unsigned int index)
{
	typedef LinearSpherical3D_VertexRange_t                       VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type    VertexIterator;
	typedef LinearSpherical3D_Vertex_t::id_type                   VertexIDType;
	
	VertexIterator vertex = viennagrid::find_by_id(domain, VertexIDType(index));
	return LinearSpherical3D_Vertex(*vertex);
}

list LinearSpherical3D_Domain::get_vertices()
{
	list vertices;
	
	typedef LinearSpherical3D_Domain_t                                                        DomainType;
	typedef viennagrid::result_of::element_range<DomainType, viennagrid::vertex_tag>::type    VertexRange;
	typedef viennagrid::result_of::iterator<VertexRange>::type                                VertexIterator;
	
	VertexRange range = viennagrid::elements(domain);
	for (VertexIterator it = range.begin(); it != range.end(); ++it)
		vertices.append<LinearSpherical3D_Vertex>(LinearSpherical3D_Vertex(*it));
	
	return vertices;
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
