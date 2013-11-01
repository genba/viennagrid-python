/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "tetrahedral.hpp"

#include "../domains/tetrahedral.hpp"
#include "../cells/types.hpp"
#include "../vertices/types.hpp"
#include "../segmentations/tetrahedral.hpp"

////////////////////////////////////
// TetrahedralCartesian3D_Segment //
////////////////////////////////////

TetrahedralCartesian3D_Segment::TetrahedralCartesian3D_Segment(TetrahedralCartesian3D_Segment_t &initial_segment, TetrahedralCartesian3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

unsigned int TetrahedralCartesian3D_Segment::num_cells()
{
	typedef viennagrid::result_of::element_range<TetrahedralCartesian3D_Segment_t, viennagrid::tetrahedron_tag>::type    range_type;
	
	range_type range = viennagrid::elements(segment);
	return range.size();
}

TetrahedralCartesian3D_Cell TetrahedralCartesian3D_Segment::make_cell(TetrahedralCartesian3D_Vertex vertex1, TetrahedralCartesian3D_Vertex vertex2, TetrahedralCartesian3D_Vertex vertex3, TetrahedralCartesian3D_Vertex vertex4)
{
	typedef viennagrid::result_of::handle<TetrahedralCartesian3D_Segment_t, TetrahedralCartesian3D_Cell_t>::type    CellHandle;
	typedef TetrahedralCartesian3D_Cell_t                                                                           CellType;
	
	viennagrid::storage::static_array<TetrahedralCartesian3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	vertices[3] = viennagrid::handle(segmentation->get_domain(), vertex4.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::tetrahedron_tag>(segment, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
}

list TetrahedralCartesian3D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<TetrahedralCartesian3D_Segment_t, viennagrid::tetrahedron_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<TetrahedralCartesian3D_Cell>(TetrahedralCartesian3D_Cell(*it));
	return cells;
}

TetrahedralCartesian3D_Segment_t & TetrahedralCartesian3D_Segment::get_segment()
{
	return segment;
}

//////////////////////////////////////
// TetrahedralCylindrical3D_Segment //
//////////////////////////////////////

TetrahedralCylindrical3D_Segment::TetrahedralCylindrical3D_Segment(TetrahedralCylindrical3D_Segment_t &initial_segment, TetrahedralCylindrical3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

unsigned int TetrahedralCylindrical3D_Segment::num_cells()
{
	typedef viennagrid::result_of::element_range<TetrahedralCylindrical3D_Segment_t, viennagrid::tetrahedron_tag>::type    range_type;
	
	range_type range = viennagrid::elements(segment);
	return range.size();
}

TetrahedralCylindrical3D_Cell TetrahedralCylindrical3D_Segment::make_cell(TetrahedralCylindrical3D_Vertex vertex1, TetrahedralCylindrical3D_Vertex vertex2, TetrahedralCylindrical3D_Vertex vertex3, TetrahedralCylindrical3D_Vertex vertex4)
{
	typedef viennagrid::result_of::handle<TetrahedralCylindrical3D_Segment_t, TetrahedralCylindrical3D_Cell_t>::type    CellHandle;
	typedef TetrahedralCylindrical3D_Cell_t                                                                             CellType;
	
	viennagrid::storage::static_array<TetrahedralCylindrical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	vertices[3] = viennagrid::handle(segmentation->get_domain(), vertex4.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::tetrahedron_tag>(segment, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
}

list TetrahedralCylindrical3D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<TetrahedralCylindrical3D_Segment_t, viennagrid::tetrahedron_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<TetrahedralCylindrical3D_Cell>(TetrahedralCylindrical3D_Cell(*it));
	return cells;
}

TetrahedralCylindrical3D_Segment_t & TetrahedralCylindrical3D_Segment::get_segment()
{
	return segment;
}

////////////////////////////////////
// TetrahedralSpherical3D_Segment //
////////////////////////////////////

TetrahedralSpherical3D_Segment::TetrahedralSpherical3D_Segment(TetrahedralSpherical3D_Segment_t &initial_segment, TetrahedralSpherical3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

unsigned int TetrahedralSpherical3D_Segment::num_cells()
{
	typedef viennagrid::result_of::element_range<TetrahedralSpherical3D_Segment_t, viennagrid::tetrahedron_tag>::type    range_type;
	
	range_type range = viennagrid::elements(segment);
	return range.size();
}

TetrahedralSpherical3D_Cell TetrahedralSpherical3D_Segment::make_cell(TetrahedralSpherical3D_Vertex vertex1, TetrahedralSpherical3D_Vertex vertex2, TetrahedralSpherical3D_Vertex vertex3, TetrahedralSpherical3D_Vertex vertex4)
{
	typedef viennagrid::result_of::handle<TetrahedralSpherical3D_Segment_t, TetrahedralSpherical3D_Cell_t>::type    CellHandle;
	typedef TetrahedralSpherical3D_Cell_t                                                                           CellType;
	
	viennagrid::storage::static_array<TetrahedralSpherical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	vertices[3] = viennagrid::handle(segmentation->get_domain(), vertex4.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::tetrahedron_tag>(segment, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
}

list TetrahedralSpherical3D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<TetrahedralSpherical3D_Segment_t, viennagrid::tetrahedron_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<TetrahedralSpherical3D_Cell>(TetrahedralSpherical3D_Cell(*it));
	return cells;
}

TetrahedralSpherical3D_Segment_t & TetrahedralSpherical3D_Segment::get_segment()
{
	return segment;
}
