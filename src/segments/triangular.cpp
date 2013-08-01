#include "triangular.hpp"

#include "../domains/triangular.hpp"
#include "../cells/types.hpp"
#include "../vertices/types.hpp"
#include "../segmentations/triangular.hpp"

///////////////////////////////////
// TriangularCartesian2D_Segment //
///////////////////////////////////

TriangularCartesian2D_Segment::TriangularCartesian2D_Segment(TriangularCartesian2D_Segment_t &initial_segment, TriangularCartesian2D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

unsigned int TriangularCartesian2D_Segment::num_cells()
{
	typedef viennagrid::result_of::element_range<TriangularCartesian2D_Segment_t, viennagrid::triangle_tag>::type    range_type;
	
	range_type range = viennagrid::elements(segment);
	return range.size();
}

TriangularCartesian2D_Cell TriangularCartesian2D_Segment::create_cell(TriangularCartesian2D_Vertex vertex1, TriangularCartesian2D_Vertex vertex2, TriangularCartesian2D_Vertex vertex3)
{
	typedef viennagrid::result_of::handle<TriangularCartesian2D_Segment_t, TriangularCartesian2D_Cell_t>::type    CellHandle;
	typedef TriangularCartesian2D_Cell_t                                                                          CellType;
	
	viennagrid::storage::static_array<TriangularCartesian2D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::triangle_tag>(segment, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
}

list TriangularCartesian2D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<TriangularCartesian2D_Segment_t, viennagrid::triangle_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<TriangularCartesian2D_Cell>(TriangularCartesian2D_Cell(*it));
	return cells;
}

///////////////////////////////////
// TriangularCartesian3D_Segment //
///////////////////////////////////

TriangularCartesian3D_Segment::TriangularCartesian3D_Segment(TriangularCartesian3D_Segment_t &initial_segment, TriangularCartesian3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

unsigned int TriangularCartesian3D_Segment::num_cells()
{
	typedef viennagrid::result_of::element_range<TriangularCartesian3D_Segment_t, viennagrid::triangle_tag>::type    range_type;
	
	range_type range = viennagrid::elements(segment);
	return range.size();
}

TriangularCartesian3D_Cell TriangularCartesian3D_Segment::create_cell(TriangularCartesian3D_Vertex vertex1, TriangularCartesian3D_Vertex vertex2, TriangularCartesian3D_Vertex vertex3)
{
	typedef viennagrid::result_of::handle<TriangularCartesian3D_Segment_t, TriangularCartesian3D_Cell_t>::type    CellHandle;
	typedef TriangularCartesian3D_Cell_t                                                                          CellType;
	
	viennagrid::storage::static_array<TriangularCartesian3D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::triangle_tag>(segment, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
}

list TriangularCartesian3D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<TriangularCartesian3D_Segment_t, viennagrid::triangle_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<TriangularCartesian3D_Cell>(TriangularCartesian3D_Cell(*it));
	return cells;
}

/////////////////////////////////////
// TriangularCylindrical3D_Segment //
/////////////////////////////////////

TriangularCylindrical3D_Segment::TriangularCylindrical3D_Segment(TriangularCylindrical3D_Segment_t &initial_segment, TriangularCylindrical3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

unsigned int TriangularCylindrical3D_Segment::num_cells()
{
	typedef viennagrid::result_of::element_range<TriangularCylindrical3D_Segment_t, viennagrid::triangle_tag>::type    range_type;
	
	range_type range = viennagrid::elements(segment);
	return range.size();
}

TriangularCylindrical3D_Cell TriangularCylindrical3D_Segment::create_cell(TriangularCylindrical3D_Vertex vertex1, TriangularCylindrical3D_Vertex vertex2, TriangularCylindrical3D_Vertex vertex3)
{
	typedef viennagrid::result_of::handle<TriangularCylindrical3D_Segment_t, TriangularCylindrical3D_Cell_t>::type    CellHandle;
	typedef TriangularCylindrical3D_Cell_t                                                                            CellType;
	
	viennagrid::storage::static_array<TriangularCylindrical3D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::triangle_tag>(segment, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
}

list TriangularCylindrical3D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<TriangularCylindrical3D_Segment_t, viennagrid::triangle_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<TriangularCylindrical3D_Cell>(TriangularCylindrical3D_Cell(*it));
	return cells;
}

///////////////////////////////
// TriangularPolar2D_Segment //
///////////////////////////////

TriangularPolar2D_Segment::TriangularPolar2D_Segment(TriangularPolar2D_Segment_t &initial_segment, TriangularPolar2D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

unsigned int TriangularPolar2D_Segment::num_cells()
{
	typedef viennagrid::result_of::element_range<TriangularPolar2D_Segment_t, viennagrid::triangle_tag>::type    range_type;
	
	range_type range = viennagrid::elements(segment);
	return range.size();
}

TriangularPolar2D_Cell TriangularPolar2D_Segment::create_cell(TriangularPolar2D_Vertex vertex1, TriangularPolar2D_Vertex vertex2, TriangularPolar2D_Vertex vertex3)
{
	typedef viennagrid::result_of::handle<TriangularPolar2D_Segment_t, TriangularPolar2D_Cell_t>::type    CellHandle;
	typedef TriangularPolar2D_Cell_t                                                                      CellType;
	
	viennagrid::storage::static_array<TriangularPolar2D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::triangle_tag>(segment, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
}

list TriangularPolar2D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<TriangularPolar2D_Segment_t, viennagrid::triangle_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<TriangularPolar2D_Cell>(TriangularPolar2D_Cell(*it));
	return cells;
}

///////////////////////////////////
// TriangularSpherical3D_Segment //
///////////////////////////////////

TriangularSpherical3D_Segment::TriangularSpherical3D_Segment(TriangularSpherical3D_Segment_t &initial_segment, TriangularSpherical3D_Segmentation &initial_segmentation) : segment(initial_segment)
{
	//segment = initial_segment;
	segmentation = &initial_segmentation;
}

unsigned int TriangularSpherical3D_Segment::num_cells()
{
	typedef viennagrid::result_of::element_range<TriangularSpherical3D_Segment_t, viennagrid::triangle_tag>::type    range_type;
	
	range_type range = viennagrid::elements(segment);
	return range.size();
}

TriangularSpherical3D_Cell TriangularSpherical3D_Segment::create_cell(TriangularSpherical3D_Vertex vertex1, TriangularSpherical3D_Vertex vertex2, TriangularSpherical3D_Vertex vertex3)
{
	typedef viennagrid::result_of::handle<TriangularSpherical3D_Segment_t, TriangularSpherical3D_Cell_t>::type    CellHandle;
	typedef TriangularSpherical3D_Cell_t                                                                          CellType;
	
	viennagrid::storage::static_array<TriangularSpherical3D_VertexHandle_t, 3> vertices;
	vertices[0] = viennagrid::handle(segmentation->get_domain(), vertex1.get_vertex());
	vertices[1] = viennagrid::handle(segmentation->get_domain(), vertex2.get_vertex());
	vertices[2] = viennagrid::handle(segmentation->get_domain(), vertex3.get_vertex());
	CellHandle ch = viennagrid::make_element<viennagrid::triangle_tag>(segment, vertices.begin(), vertices.end());
	
	CellType &cell = viennagrid::dereference_handle(segment, ch);
	
	return cell;
}

list TriangularSpherical3D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<TriangularSpherical3D_Segment_t, viennagrid::triangle_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<TriangularSpherical3D_Cell>(TriangularSpherical3D_Cell(*it));
	return cells;
}
