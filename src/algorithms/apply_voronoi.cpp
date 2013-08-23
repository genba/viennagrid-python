#include "apply_voronoi.hpp"

#include <viennagrid/algorithm/voronoi.hpp>

#include "../edges/types.hpp"
#include "../cells/types.hpp"

#include <deque>

////////////
// Linear //
////////////

void LinearCartesian1D_Domain_apply_voronoi(LinearCartesian1D_Domain domain)
{
	typedef LinearCartesian1D_Domain_t      DomainType;
	typedef LinearCartesian1D_Edge_t        EdgeType;
	typedef LinearCartesian1D_Vertex_t      VertexType;
	typedef LinearCartesian1D_Cell_t        CellType;
	
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

void LinearCartesian2D_Domain_apply_voronoi(LinearCartesian2D_Domain domain)
{
	typedef LinearCartesian2D_Domain_t      DomainType;
	typedef LinearCartesian2D_Edge_t        EdgeType;
	typedef LinearCartesian2D_Vertex_t      VertexType;
	typedef LinearCartesian2D_Cell_t        CellType;
	
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

void LinearCartesian3D_Domain_apply_voronoi(LinearCartesian3D_Domain domain)
{
	typedef LinearCartesian3D_Domain_t      DomainType;
	typedef LinearCartesian3D_Edge_t        EdgeType;
	typedef LinearCartesian3D_Vertex_t      VertexType;
	typedef LinearCartesian3D_Cell_t        CellType;
	
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

void LinearCylindrical3D_Domain_apply_voronoi(LinearCylindrical3D_Domain domain)
{
	typedef LinearCylindrical3D_Domain_t      DomainType;
	typedef LinearCylindrical3D_Edge_t        EdgeType;
	typedef LinearCylindrical3D_Vertex_t      VertexType;
	typedef LinearCylindrical3D_Cell_t        CellType;
	
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

void LinearPolar2D_Domain_apply_voronoi(LinearPolar2D_Domain domain)
{
	typedef LinearPolar2D_Domain_t      DomainType;
	typedef LinearPolar2D_Edge_t        EdgeType;
	typedef LinearPolar2D_Vertex_t      VertexType;
	typedef LinearPolar2D_Cell_t        CellType;
	
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

void LinearSpherical3D_Domain_apply_voronoi(LinearSpherical3D_Domain domain)
{
	typedef LinearSpherical3D_Domain_t      DomainType;
	typedef LinearSpherical3D_Edge_t        EdgeType;
	typedef LinearSpherical3D_Vertex_t      VertexType;
	typedef LinearSpherical3D_Cell_t        CellType;
	
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

////////////////
// Triangular //
////////////////

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

///////////////////
// Quadrilateral //
///////////////////

void QuadrilateralCartesian2D_Domain_apply_voronoi(QuadrilateralCartesian2D_Domain domain)
{
	typedef QuadrilateralCartesian2D_Domain_t      DomainType;
	typedef QuadrilateralCartesian2D_Edge_t        EdgeType;
	typedef QuadrilateralCartesian2D_Vertex_t      VertexType;
	typedef QuadrilateralCartesian2D_Cell_t        CellType;
	
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

void QuadrilateralCartesian3D_Domain_apply_voronoi(QuadrilateralCartesian3D_Domain domain)
{
	typedef QuadrilateralCartesian3D_Domain_t      DomainType;
	typedef QuadrilateralCartesian3D_Edge_t        EdgeType;
	typedef QuadrilateralCartesian3D_Vertex_t      VertexType;
	typedef QuadrilateralCartesian3D_Cell_t        CellType;
	
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

void QuadrilateralCylindrical3D_Domain_apply_voronoi(QuadrilateralCylindrical3D_Domain domain)
{
	typedef QuadrilateralCylindrical3D_Domain_t      DomainType;
	typedef QuadrilateralCylindrical3D_Edge_t        EdgeType;
	typedef QuadrilateralCylindrical3D_Vertex_t      VertexType;
	typedef QuadrilateralCylindrical3D_Cell_t        CellType;
	
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

void QuadrilateralPolar2D_Domain_apply_voronoi(QuadrilateralPolar2D_Domain domain)
{
	typedef QuadrilateralPolar2D_Domain_t      DomainType;
	typedef QuadrilateralPolar2D_Edge_t        EdgeType;
	typedef QuadrilateralPolar2D_Vertex_t      VertexType;
	typedef QuadrilateralPolar2D_Cell_t        CellType;
	
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

void QuadrilateralSpherical3D_Domain_apply_voronoi(QuadrilateralSpherical3D_Domain domain)
{
	typedef QuadrilateralSpherical3D_Domain_t      DomainType;
	typedef QuadrilateralSpherical3D_Edge_t        EdgeType;
	typedef QuadrilateralSpherical3D_Vertex_t      VertexType;
	typedef QuadrilateralSpherical3D_Cell_t        CellType;
	
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

/////////////////
// Tetrahedral //
/////////////////

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
