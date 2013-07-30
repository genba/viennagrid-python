#include "quadrilateral.hpp"

#include "../domains/quadrilateral.hpp"
#include "../cells/types.hpp"
#include "../vertices/types.hpp"
#include "../segmentations/quadrilateral.hpp"

//////////////////////////////////////
// QuadrilateralCartesian2D_Segment //
//////////////////////////////////////

QuadrilateralCartesian2D_Segment::QuadrilateralCartesian2D_Segment(QuadrilateralCartesian2D_Segment_t &initial_segment, QuadrilateralCartesian2D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

QuadrilateralCartesian2D_Cell QuadrilateralCartesian2D_Segment::create_cell(QuadrilateralCartesian2D_Vertex vertex1, QuadrilateralCartesian2D_Vertex vertex2, QuadrilateralCartesian2D_Vertex vertex3, QuadrilateralCartesian2D_Vertex vertex4)
{
	typedef viennagrid::result_of::handle<QuadrilateralCartesian2D_Segment_t, QuadrilateralCartesian2D_Cell_t>::type    CellHandle;
	typedef QuadrilateralCartesian2D_Cell_t                                                                             CellType;
	
	viennagrid::storage::static_array<QuadrilateralCartesian2D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	vertices[3] = viennagrid::handle(segmentation->get_domain(), vertex4.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::quadrilateral_tag>(segment, vertices.begin(), vertices.end());
	
	CellType cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
}

list QuadrilateralCartesian2D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<QuadrilateralCartesian2D_Segment_t, viennagrid::quadrilateral_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<QuadrilateralCartesian2D_Cell>(QuadrilateralCartesian2D_Cell(*it));
	return cells;
}

QuadrilateralCartesian2D_Segment_t & QuadrilateralCartesian2D_Segment::get_segment()
{
	return segment;
}

//////////////////////////////////////
// QuadrilateralCartesian3D_Segment //
//////////////////////////////////////

QuadrilateralCartesian3D_Segment::QuadrilateralCartesian3D_Segment(QuadrilateralCartesian3D_Segment_t &initial_segment, QuadrilateralCartesian3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

QuadrilateralCartesian3D_Cell QuadrilateralCartesian3D_Segment::create_cell(QuadrilateralCartesian3D_Vertex vertex1, QuadrilateralCartesian3D_Vertex vertex2, QuadrilateralCartesian3D_Vertex vertex3, QuadrilateralCartesian3D_Vertex vertex4)
{
	typedef viennagrid::result_of::handle<QuadrilateralCartesian3D_Segment_t, QuadrilateralCartesian3D_Cell_t>::type    CellHandle;
	typedef QuadrilateralCartesian3D_Cell_t                                                                             CellType;
	
	viennagrid::storage::static_array<QuadrilateralCartesian3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	vertices[3] = viennagrid::handle(segmentation->get_domain(), vertex4.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::quadrilateral_tag>(segment, vertices.begin(), vertices.end());
	
	CellType cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
}

list QuadrilateralCartesian3D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<QuadrilateralCartesian3D_Segment_t, viennagrid::quadrilateral_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<QuadrilateralCartesian3D_Cell>(QuadrilateralCartesian3D_Cell(*it));
	return cells;
}

QuadrilateralCartesian3D_Segment_t & QuadrilateralCartesian3D_Segment::get_segment()
{
	return segment;
}

////////////////////////////////////////
// QuadrilateralCylindrical3D_Segment //
////////////////////////////////////////

QuadrilateralCylindrical3D_Segment::QuadrilateralCylindrical3D_Segment(QuadrilateralCylindrical3D_Segment_t &initial_segment, QuadrilateralCylindrical3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

QuadrilateralCylindrical3D_Cell QuadrilateralCylindrical3D_Segment::create_cell(QuadrilateralCylindrical3D_Vertex vertex1, QuadrilateralCylindrical3D_Vertex vertex2, QuadrilateralCylindrical3D_Vertex vertex3, QuadrilateralCylindrical3D_Vertex vertex4)
{
	typedef viennagrid::result_of::handle<QuadrilateralCylindrical3D_Segment_t, QuadrilateralCylindrical3D_Cell_t>::type    CellHandle;
	typedef QuadrilateralCylindrical3D_Cell_t                                                                               CellType;
	
	viennagrid::storage::static_array<QuadrilateralCylindrical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	vertices[3] = viennagrid::handle(segmentation->get_domain(), vertex4.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::quadrilateral_tag>(segment, vertices.begin(), vertices.end());
	
	CellType cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
}

list QuadrilateralCylindrical3D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<QuadrilateralCylindrical3D_Segment_t, viennagrid::quadrilateral_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<QuadrilateralCylindrical3D_Cell>(QuadrilateralCylindrical3D_Cell(*it));
	return cells;
}

QuadrilateralCylindrical3D_Segment_t & QuadrilateralCylindrical3D_Segment::get_segment()
{
	return segment;
}

//////////////////////////////////
// QuadrilateralPolar2D_Segment //
//////////////////////////////////

QuadrilateralPolar2D_Segment::QuadrilateralPolar2D_Segment(QuadrilateralPolar2D_Segment_t &initial_segment, QuadrilateralPolar2D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

QuadrilateralPolar2D_Cell QuadrilateralPolar2D_Segment::create_cell(QuadrilateralPolar2D_Vertex vertex1, QuadrilateralPolar2D_Vertex vertex2, QuadrilateralPolar2D_Vertex vertex3, QuadrilateralPolar2D_Vertex vertex4)
{
	typedef viennagrid::result_of::handle<QuadrilateralPolar2D_Segment_t, QuadrilateralPolar2D_Cell_t>::type    CellHandle;
	typedef QuadrilateralPolar2D_Cell_t                                                                         CellType;
	
	viennagrid::storage::static_array<QuadrilateralPolar2D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	vertices[3] = viennagrid::handle(segmentation->get_domain(), vertex4.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::quadrilateral_tag>(segment, vertices.begin(), vertices.end());
	
	CellType cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
}

list QuadrilateralPolar2D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<QuadrilateralPolar2D_Segment_t, viennagrid::quadrilateral_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<QuadrilateralPolar2D_Cell>(QuadrilateralPolar2D_Cell(*it));
	return cells;
}

QuadrilateralPolar2D_Segment_t & QuadrilateralPolar2D_Segment::get_segment()
{
	return segment;
}

//////////////////////////////////////
// QuadrilateralSpherical3D_Segment //
//////////////////////////////////////

QuadrilateralSpherical3D_Segment::QuadrilateralSpherical3D_Segment(QuadrilateralSpherical3D_Segment_t &initial_segment, QuadrilateralSpherical3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

QuadrilateralSpherical3D_Cell QuadrilateralSpherical3D_Segment::create_cell(QuadrilateralSpherical3D_Vertex vertex1, QuadrilateralSpherical3D_Vertex vertex2, QuadrilateralSpherical3D_Vertex vertex3, QuadrilateralSpherical3D_Vertex vertex4)
{
	typedef viennagrid::result_of::handle<QuadrilateralSpherical3D_Segment_t, QuadrilateralSpherical3D_Cell_t>::type    CellHandle;
	typedef QuadrilateralSpherical3D_Cell_t                                                                             CellType;
	
	viennagrid::storage::static_array<QuadrilateralSpherical3D_VertexHandle_t, 4> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	vertices[3] = viennagrid::handle(segmentation->get_domain(), vertex4.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::quadrilateral_tag>(segment, vertices.begin(), vertices.end());
	
	CellType cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
}

list QuadrilateralSpherical3D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<QuadrilateralSpherical3D_Segment_t, viennagrid::quadrilateral_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<QuadrilateralSpherical3D_Cell>(QuadrilateralSpherical3D_Cell(*it));
	return cells;
}

QuadrilateralSpherical3D_Segment_t & QuadrilateralSpherical3D_Segment::get_segment()
{
	return segment;
}
