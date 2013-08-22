#include "cell_surface.hpp"

#include <viennagrid/algorithm/surface.hpp>

////////////
// Linear //
////////////

double LinearCartesian1D_Cell_surface(LinearCartesian1D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

double LinearCartesian2D_Cell_surface(LinearCartesian2D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

double LinearCartesian3D_Cell_surface(LinearCartesian3D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

double LinearCylindrical3D_Cell_surface(LinearCylindrical3D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

double LinearPolar2D_Cell_surface(LinearPolar2D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

double LinearSpherical3D_Cell_surface(LinearSpherical3D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

////////////////
// Triangular //
////////////////

double TriangularCartesian2D_Cell_surface(TriangularCartesian2D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

double TriangularCartesian3D_Cell_surface(TriangularCartesian3D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

double TriangularCylindrical3D_Cell_surface(TriangularCylindrical3D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

double TriangularPolar2D_Cell_surface(TriangularPolar2D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

double TriangularSpherical3D_Cell_surface(TriangularSpherical3D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

///////////////////
// Quadrilateral //
///////////////////

double QuadrilateralCartesian2D_Cell_surface(QuadrilateralCartesian2D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

double QuadrilateralCartesian3D_Cell_surface(QuadrilateralCartesian3D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

double QuadrilateralCylindrical3D_Cell_surface(QuadrilateralCylindrical3D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

double QuadrilateralPolar2D_Cell_surface(QuadrilateralPolar2D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

double QuadrilateralSpherical3D_Cell_surface(QuadrilateralSpherical3D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

/////////////////
// Tetrahedral //
/////////////////

double TetrahedralCartesian3D_Cell_surface(TetrahedralCartesian3D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

double TetrahedralCylindrical3D_Cell_surface(TetrahedralCylindrical3D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}

double TetrahedralSpherical3D_Cell_surface(TetrahedralSpherical3D_Cell cell)
{
	return viennagrid::surface(cell.get_cell());
}
