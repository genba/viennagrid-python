#include "cell_volume.hpp"

#include <viennagrid/algorithm/volume.hpp>

/**********
 * VOLUME *
 **********/

// Linear
 
double LinearCartesian1D_Cell_volume(LinearCartesian1D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

double LinearCartesian2D_Cell_volume(LinearCartesian2D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

double LinearCartesian3D_Cell_volume(LinearCartesian3D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

double LinearCylindrical3D_Cell_volume(LinearCylindrical3D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

double LinearPolar2D_Cell_volume(LinearPolar2D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

double LinearSpherical3D_Cell_volume(LinearSpherical3D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

// Triangular

double TriangularCartesian2D_Cell_volume(TriangularCartesian2D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

double TriangularCartesian3D_Cell_volume(TriangularCartesian3D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

double TriangularCylindrical3D_Cell_volume(TriangularCylindrical3D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

double TriangularPolar2D_Cell_volume(TriangularPolar2D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

double TriangularSpherical3D_Cell_volume(TriangularSpherical3D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

// Quadrilateral

double QuadrilateralCartesian2D_Cell_volume(QuadrilateralCartesian2D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

double QuadrilateralCartesian3D_Cell_volume(QuadrilateralCartesian3D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

double QuadrilateralCylindrical3D_Cell_volume(QuadrilateralCylindrical3D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

double QuadrilateralPolar2D_Cell_volume(QuadrilateralPolar2D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

double QuadrilateralSpherical3D_Cell_volume(QuadrilateralSpherical3D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

// Tetrahedral

double TetrahedralCartesian3D_Cell_volume(TetrahedralCartesian3D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

double TetrahedralCylindrical3D_Cell_volume(TetrahedralCylindrical3D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}

double TetrahedralSpherical3D_Cell_volume(TetrahedralSpherical3D_Cell cell)
{
	return viennagrid::volume(cell.get_cell());
}
