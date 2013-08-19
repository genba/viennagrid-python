#include "apply_voronoi.hpp"

#include <viennagrid/algorithm/voronoi.hpp>

#include "../edges/types.hpp"
#include "../cells/types.hpp"

#include <deque>

/*****************
 * APPLY_VORONOI *
 *****************/

// Triangular

void TriangularCartesian2D_Domain_apply_voronoi(TriangularCartesian2D_Domain domain)
{
	typedef TriangularCartesian2D_Domain_t      DomainType;
	typedef TriangularCartesian2D_Edge_t        EdgeType;
	typedef TriangularCartesian2D_Vertex_t      VertexType;
	typedef TriangularCartesian2D_Cell_t        CellType;
	
	typedef viennagrid::result_of::const_cell_handle<DomainType>::type    ConstCellHandleType;
	
	std::deque<double>    interface_areas;
	std::deque<viennagrid::result_of::voronoi_cell_contribution<ConstCellHandleType>::type>    interface_contributions;
	
	std::deque<double>    vertex_box_volumes;
	std::deque<viennagrid::result_of::voronoi_cell_contribution<ConstCellHandleType>::type>    vertex_box_volume_contributions;
	
	std::deque<double>    edge_box_volumes;
	std::deque<viennagrid::result_of::voronoi_cell_contribution<ConstCellHandleType>::type>    edge_box_volume_contributions;
	
	viennagrid::apply_voronoi<CellType>(
		domain.get_domain(),
		viennagrid::make_accessor<EdgeType>(interface_areas),
		viennagrid::make_accessor<EdgeType>(interface_contributions),
		viennagrid::make_accessor<VertexType>(vertex_box_volumes),
		viennagrid::make_accessor<VertexType>(vertex_box_volume_contributions),
		viennagrid::make_accessor<EdgeType>(edge_box_volumes),
		viennagrid::make_accessor<EdgeType>(edge_box_volume_contributions)
	);
}
