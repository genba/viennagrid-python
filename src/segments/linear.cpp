/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

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

unsigned int LinearCartesian1D_Segment::num_cells()
{
	typedef viennagrid::result_of::element_range<LinearCartesian1D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	range_type range = viennagrid::elements(segment);
	return range.size();
}

LinearCartesian1D_Cell LinearCartesian1D_Segment::make_cell(LinearCartesian1D_Vertex vertex1, LinearCartesian1D_Vertex vertex2)
{
	typedef viennagrid::result_of::handle<LinearCartesian1D_Segment_t, LinearCartesian1D_Cell_t>::type    CellHandle;
	typedef LinearCartesian1D_Cell_t                                                                      CellType;
	
	viennagrid::storage::static_array<LinearCartesian1D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::line_tag>(segment, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
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

LinearCartesian1D_Segment_t & LinearCartesian1D_Segment::get_segment()
{
	return segment;
}

///////////////////////////////
// LinearCartesian2D_Segment //
///////////////////////////////

LinearCartesian2D_Segment::LinearCartesian2D_Segment(LinearCartesian2D_Segment_t &initial_segment, LinearCartesian2D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

unsigned int LinearCartesian2D_Segment::num_cells()
{
	typedef viennagrid::result_of::element_range<LinearCartesian2D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	range_type range = viennagrid::elements(segment);
	return range.size();
}

LinearCartesian2D_Cell LinearCartesian2D_Segment::make_cell(LinearCartesian2D_Vertex vertex1, LinearCartesian2D_Vertex vertex2)
{
	typedef viennagrid::result_of::handle<LinearCartesian2D_Segment_t, LinearCartesian2D_Cell_t>::type    CellHandle;
	typedef LinearCartesian2D_Cell_t                                                                      CellType;
	
	viennagrid::storage::static_array<LinearCartesian2D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::line_tag>(segment, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
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

LinearCartesian2D_Segment_t & LinearCartesian2D_Segment::get_segment()
{
	return segment;
}

///////////////////////////////
// LinearCartesian3D_Segment //
///////////////////////////////

LinearCartesian3D_Segment::LinearCartesian3D_Segment(LinearCartesian3D_Segment_t &initial_segment, LinearCartesian3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

unsigned int LinearCartesian3D_Segment::num_cells()
{
	typedef viennagrid::result_of::element_range<LinearCartesian3D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	range_type range = viennagrid::elements(segment);
	return range.size();
}

LinearCartesian3D_Cell LinearCartesian3D_Segment::make_cell(LinearCartesian3D_Vertex vertex1, LinearCartesian3D_Vertex vertex2)
{
	typedef viennagrid::result_of::handle<LinearCartesian3D_Segment_t, LinearCartesian3D_Cell_t>::type    CellHandle;
	typedef LinearCartesian3D_Cell_t                                                                      CellType;
	
	viennagrid::storage::static_array<LinearCartesian3D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::line_tag>(segment, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
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

LinearCartesian3D_Segment_t & LinearCartesian3D_Segment::get_segment()
{
	return segment;
}

/////////////////////////////////
// LinearCylindrical3D_Segment //
/////////////////////////////////

LinearCylindrical3D_Segment::LinearCylindrical3D_Segment(LinearCylindrical3D_Segment_t &initial_segment, LinearCylindrical3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

unsigned int LinearCylindrical3D_Segment::num_cells()
{
	typedef viennagrid::result_of::element_range<LinearCylindrical3D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	range_type range = viennagrid::elements(segment);
	return range.size();
}

LinearCylindrical3D_Cell LinearCylindrical3D_Segment::make_cell(LinearCylindrical3D_Vertex vertex1, LinearCylindrical3D_Vertex vertex2)
{
	typedef viennagrid::result_of::handle<LinearCylindrical3D_Segment_t, LinearCylindrical3D_Cell_t>::type    CellHandle;
	typedef LinearCylindrical3D_Cell_t                                                                        CellType;
	
	viennagrid::storage::static_array<LinearCylindrical3D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::line_tag>(segment, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
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

LinearCylindrical3D_Segment_t & LinearCylindrical3D_Segment::get_segment()
{
	return segment;
}

///////////////////////////
// LinearPolar2D_Segment //
///////////////////////////

LinearPolar2D_Segment::LinearPolar2D_Segment(LinearPolar2D_Segment_t &initial_segment, LinearPolar2D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

unsigned int LinearPolar2D_Segment::num_cells()
{
	typedef viennagrid::result_of::element_range<LinearPolar2D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	range_type range = viennagrid::elements(segment);
	return range.size();
}

LinearPolar2D_Cell LinearPolar2D_Segment::make_cell(LinearPolar2D_Vertex vertex1, LinearPolar2D_Vertex vertex2)
{
	typedef viennagrid::result_of::handle<LinearPolar2D_Segment_t, LinearPolar2D_Cell_t>::type    CellHandle;
	typedef        LinearPolar2D_Cell_t                                                           CellType;
	
	viennagrid::storage::static_array<LinearPolar2D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::line_tag>(segment, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
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

LinearPolar2D_Segment_t & LinearPolar2D_Segment::get_segment()
{
	return segment;
}

///////////////////////////////
// LinearSpherical3D_Segment //
///////////////////////////////

LinearSpherical3D_Segment::LinearSpherical3D_Segment(LinearSpherical3D_Segment_t &initial_segment, LinearSpherical3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

unsigned int LinearSpherical3D_Segment::num_cells()
{
	typedef viennagrid::result_of::element_range<LinearSpherical3D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	range_type range = viennagrid::elements(segment);
	return range.size();
}

LinearSpherical3D_Cell LinearSpherical3D_Segment::make_cell(LinearSpherical3D_Vertex vertex1, LinearSpherical3D_Vertex vertex2)
{
	typedef viennagrid::result_of::handle<LinearSpherical3D_Segment_t, LinearSpherical3D_Cell_t>::type    CellHandle;
	typedef LinearSpherical3D_Cell_t                                                                      CellType;
	
	viennagrid::storage::static_array<LinearSpherical3D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::line_tag>(segment, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
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

LinearSpherical3D_Segment_t & LinearSpherical3D_Segment::get_segment()
{
	return segment;
}
