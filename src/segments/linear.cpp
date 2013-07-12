#include "linear.hpp"

#include "../domains/linear.hpp"
#include "../cells/types.hpp"
#include "../vertices/types.hpp"
#include "../segmentations/linear.hpp"

#include <viennagrid/domain/element_creation.hpp>

///////////////////////////////
// LinearCartesian1D_Segment //
///////////////////////////////

LinearCartesian1D_Segment::LinearCartesian1D_Segment(LinearCartesian1D_Segment_t &initial_segment, LinearCartesian1D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void LinearCartesian1D_Segment::create_cell(LinearCartesian1D_Vertex vertex1, LinearCartesian1D_Vertex vertex2)
{
	viennagrid::storage::static_array<LinearCartesian1D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());;
	viennagrid::make_element<viennagrid::line_tag>(segment, vertices.begin(), vertices.end());
}

list LinearCartesian1D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearCartesian1D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearCartesian1D_Cell>(LinearCartesian1D_Cell(*it));
	return cells;
}

///////////////////////////////
// LinearCartesian2D_Segment //
///////////////////////////////

LinearCartesian2D_Segment::LinearCartesian2D_Segment(LinearCartesian2D_Segment_t &initial_segment, LinearCartesian2D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void LinearCartesian2D_Segment::create_cell(LinearCartesian2D_Vertex vertex1, LinearCartesian2D_Vertex vertex2)
{
	viennagrid::storage::static_array<LinearCartesian2D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());;
	viennagrid::make_element<viennagrid::line_tag>(segment, vertices.begin(), vertices.end());
}

list LinearCartesian2D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearCartesian2D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearCartesian2D_Cell>(LinearCartesian2D_Cell(*it));
	return cells;
}

///////////////////////////////
// LinearCartesian3D_Segment //
///////////////////////////////

LinearCartesian3D_Segment::LinearCartesian3D_Segment(LinearCartesian3D_Segment_t &initial_segment, LinearCartesian3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void LinearCartesian3D_Segment::create_cell(LinearCartesian3D_Vertex vertex1, LinearCartesian3D_Vertex vertex2)
{
	viennagrid::storage::static_array<LinearCartesian3D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());;
	viennagrid::make_element<viennagrid::line_tag>(segment, vertices.begin(), vertices.end());
}

list LinearCartesian3D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearCartesian3D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearCartesian3D_Cell>(LinearCartesian3D_Cell(*it));
	return cells;
}

/////////////////////////////////
// LinearCylindrical3D_Segment //
/////////////////////////////////

LinearCylindrical3D_Segment::LinearCylindrical3D_Segment(LinearCylindrical3D_Segment_t &initial_segment, LinearCylindrical3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void LinearCylindrical3D_Segment::create_cell(LinearCylindrical3D_Vertex vertex1, LinearCylindrical3D_Vertex vertex2)
{
	viennagrid::storage::static_array<LinearCylindrical3D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());;
	viennagrid::make_element<viennagrid::line_tag>(segment, vertices.begin(), vertices.end());
}

list LinearCylindrical3D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearCylindrical3D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearCylindrical3D_Cell>(LinearCylindrical3D_Cell(*it));
	return cells;
}

///////////////////////////
// LinearPolar2D_Segment //
///////////////////////////

LinearPolar2D_Segment::LinearPolar2D_Segment(LinearPolar2D_Segment_t &initial_segment, LinearPolar2D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void LinearPolar2D_Segment::create_cell(LinearPolar2D_Vertex vertex1, LinearPolar2D_Vertex vertex2)
{
	viennagrid::storage::static_array<LinearPolar2D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());;
	viennagrid::make_element<viennagrid::line_tag>(segment, vertices.begin(), vertices.end());
}

list LinearPolar2D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearPolar2D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearPolar2D_Cell>(LinearPolar2D_Cell(*it));
	return cells;
}

///////////////////////////////
// LinearSpherical3D_Segment //
///////////////////////////////

LinearSpherical3D_Segment::LinearSpherical3D_Segment(LinearSpherical3D_Segment_t &initial_segment, LinearSpherical3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

void LinearSpherical3D_Segment::create_cell(LinearSpherical3D_Vertex vertex1, LinearSpherical3D_Vertex vertex2)
{
	viennagrid::storage::static_array<LinearSpherical3D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());;
	viennagrid::make_element<viennagrid::line_tag>(segment, vertices.begin(), vertices.end());
}

list LinearSpherical3D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearSpherical3D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearSpherical3D_Cell>(LinearSpherical3D_Cell(*it));
	return cells;
}
