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

void TriangularCartesian3D_Domain_apply_voronoi(TriangularCartesian3D_Domain domain)
{
	typedef TriangularCartesian3D_Domain_t      DomainType;
	typedef TriangularCartesian3D_Edge_t        EdgeType;
	typedef TriangularCartesian3D_Vertex_t      VertexType;
	typedef TriangularCartesian3D_Cell_t        CellType;
	
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

void TriangularCylindrical3D_Domain_apply_voronoi(TriangularCylindrical3D_Domain domain)
{
	typedef TriangularCylindrical3D_Domain_t      DomainType;
	typedef TriangularCylindrical3D_Edge_t        EdgeType;
	typedef TriangularCylindrical3D_Vertex_t      VertexType;
	typedef TriangularCylindrical3D_Cell_t        CellType;
	
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

void TriangularPolar2D_Domain_apply_voronoi(TriangularPolar2D_Domain domain)
{
	typedef TriangularPolar2D_Domain_t      DomainType;
	typedef TriangularPolar2D_Edge_t        EdgeType;
	typedef TriangularPolar2D_Vertex_t      VertexType;
	typedef TriangularPolar2D_Cell_t        CellType;
	
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

void TriangularSpherical3D_Domain_apply_voronoi(TriangularSpherical3D_Domain domain)
{
	typedef TriangularSpherical3D_Domain_t      DomainType;
	typedef TriangularSpherical3D_Edge_t        EdgeType;
	typedef TriangularSpherical3D_Vertex_t      VertexType;
	typedef TriangularSpherical3D_Cell_t        CellType;
	
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

// Tetrahedral

void TetrahedralCartesian3D_Domain_apply_voronoi(TetrahedralCartesian3D_Domain domain)
{
	typedef TetrahedralCartesian3D_Domain_t      DomainType;
	typedef TetrahedralCartesian3D_Edge_t        EdgeType;
	typedef TetrahedralCartesian3D_Vertex_t      VertexType;
	typedef TetrahedralCartesian3D_Cell_t        CellType;
	
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

void TetrahedralCylindrical3D_Domain_apply_voronoi(TetrahedralCylindrical3D_Domain domain)
{
	typedef TetrahedralCylindrical3D_Domain_t      DomainType;
	typedef TetrahedralCylindrical3D_Edge_t        EdgeType;
	typedef TetrahedralCylindrical3D_Vertex_t      VertexType;
	typedef TetrahedralCylindrical3D_Cell_t        CellType;
	
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

void TetrahedralSpherical3D_Domain_apply_voronoi(TetrahedralSpherical3D_Domain domain)
{
	typedef TetrahedralSpherical3D_Domain_t      DomainType;
	typedef TetrahedralSpherical3D_Edge_t        EdgeType;
	typedef TetrahedralSpherical3D_Vertex_t      VertexType;
	typedef TetrahedralSpherical3D_Cell_t        CellType;
	
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
