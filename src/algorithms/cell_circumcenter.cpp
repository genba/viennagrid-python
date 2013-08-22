#include "cell_circumcenter.hpp"

#include <viennagrid/algorithm/circumcenter.hpp>

/****************
 * CIRCUMCENTER *
 ****************/

// Linear
 
PointCartesian1D LinearCartesian1D_Cell_circumcenter(LinearCartesian1D_Cell cell)
{
	PointCartesian1D_t point = viennagrid::circumcenter(cell.get_cell());
	return PointCartesian1D(point);
}

PointCartesian2D LinearCartesian2D_Cell_circumcenter(LinearCartesian2D_Cell cell)
{
	PointCartesian2D_t point = viennagrid::circumcenter(cell.get_cell());
	return PointCartesian2D(point);
}

PointCartesian3D LinearCartesian3D_Cell_circumcenter(LinearCartesian3D_Cell cell)
{
	PointCartesian3D_t point = viennagrid::circumcenter(cell.get_cell());
	return PointCartesian3D(point);
}

PointCylindrical3D LinearCylindrical3D_Cell_circumcenter(LinearCylindrical3D_Cell cell)
{
	PointCylindrical_t point = viennagrid::circumcenter(cell.get_cell());
	return PointCylindrical3D(point);
}

PointPolar2D LinearPolar2D_Cell_circumcenter(LinearPolar2D_Cell cell)
{
	PointPolar_t point = viennagrid::circumcenter(cell.get_cell());
	return PointPolar2D(point);
}

PointSpherical3D LinearSpherical3D_Cell_circumcenter(LinearSpherical3D_Cell cell)
{
	PointSpherical_t point = viennagrid::circumcenter(cell.get_cell());
	return PointSpherical3D(point);
}

// Triangular

PointCartesian2D TriangularCartesian2D_Cell_circumcenter(TriangularCartesian2D_Cell cell)
{
	PointCartesian2D_t point = viennagrid::circumcenter(cell.get_cell());
	return PointCartesian2D(point);
}

PointCartesian3D TriangularCartesian3D_Cell_circumcenter(TriangularCartesian3D_Cell cell)
{
	PointCartesian3D_t point = viennagrid::circumcenter(cell.get_cell());
	return PointCartesian3D(point);
}

PointCylindrical3D TriangularCylindrical3D_Cell_circumcenter(TriangularCylindrical3D_Cell cell)
{
	PointCylindrical_t point = viennagrid::circumcenter(cell.get_cell());
	return PointCylindrical3D(point);
}

PointPolar2D TriangularPolar2D_Cell_circumcenter(TriangularPolar2D_Cell cell)
{
	PointPolar_t point = viennagrid::circumcenter(cell.get_cell());
	return PointPolar2D(point);
}

PointSpherical3D TriangularSpherical3D_Cell_circumcenter(TriangularSpherical3D_Cell cell)
{
	PointSpherical_t point = viennagrid::circumcenter(cell.get_cell());
	return PointSpherical3D(point);
}

// Quadrilateral

PointCartesian2D QuadrilateralCartesian2D_Cell_circumcenter(QuadrilateralCartesian2D_Cell cell)
{
	PointCartesian2D_t point = viennagrid::circumcenter(cell.get_cell());
	return PointCartesian2D(point);
}

PointCartesian3D QuadrilateralCartesian3D_Cell_circumcenter(QuadrilateralCartesian3D_Cell cell)
{
	PointCartesian3D_t point = viennagrid::circumcenter(cell.get_cell());
	return PointCartesian3D(point);
}

PointCylindrical3D QuadrilateralCylindrical3D_Cell_circumcenter(QuadrilateralCylindrical3D_Cell cell)
{
	PointCylindrical_t point = viennagrid::circumcenter(cell.get_cell());
	return PointCylindrical3D(point);
}

PointPolar2D QuadrilateralPolar2D_Cell_circumcenter(QuadrilateralPolar2D_Cell cell)
{
	PointPolar_t point = viennagrid::circumcenter(cell.get_cell());
	return PointPolar2D(point);
}

PointSpherical3D QuadrilateralSpherical3D_Cell_circumcenter(QuadrilateralSpherical3D_Cell cell)
{
	PointSpherical_t point = viennagrid::circumcenter(cell.get_cell());
	return PointSpherical3D(point);
}

// Tetrahedral

PointCartesian3D TetrahedralCartesian3D_Cell_circumcenter(TetrahedralCartesian3D_Cell cell)
{
	PointCartesian3D_t point = viennagrid::circumcenter(cell.get_cell());
	return PointCartesian3D(point);
}

PointCylindrical3D TetrahedralCylindrical3D_Cell_circumcenter(TetrahedralCylindrical3D_Cell cell)
{
	PointCylindrical_t point = viennagrid::circumcenter(cell.get_cell());
	return PointCylindrical3D(point);
}

PointSpherical3D TetrahedralSpherical3D_Cell_circumcenter(TetrahedralSpherical3D_Cell cell)
{
	PointSpherical_t point = viennagrid::circumcenter(cell.get_cell());
	return PointSpherical3D(point);
}
