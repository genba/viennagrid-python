/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "cell_centroid.hpp"

#include <viennagrid/algorithm/centroid.hpp>

////////////
// Linear //
////////////

PointCartesian1D LinearCartesian1D_Cell_centroid(LinearCartesian1D_Cell cell)
{
	PointCartesian1D_t point = viennagrid::centroid(cell.get_cell());
	return PointCartesian1D(point);
}

PointCartesian2D LinearCartesian2D_Cell_centroid(LinearCartesian2D_Cell cell)
{
	PointCartesian2D_t point = viennagrid::centroid(cell.get_cell());
	return PointCartesian2D(point);
}

PointCartesian3D LinearCartesian3D_Cell_centroid(LinearCartesian3D_Cell cell)
{
	PointCartesian3D_t point = viennagrid::centroid(cell.get_cell());
	return PointCartesian3D(point);
}

PointCylindrical3D LinearCylindrical3D_Cell_centroid(LinearCylindrical3D_Cell cell)
{
	PointCylindrical_t point = viennagrid::centroid(cell.get_cell());
	return PointCylindrical3D(point);
}

PointPolar2D LinearPolar2D_Cell_centroid(LinearPolar2D_Cell cell)
{
	PointPolar_t point = viennagrid::centroid(cell.get_cell());
	return PointPolar2D(point);
}

PointSpherical3D LinearSpherical3D_Cell_centroid(LinearSpherical3D_Cell cell)
{
	PointSpherical_t point = viennagrid::centroid(cell.get_cell());
	return PointSpherical3D(point);
}

////////////////
// Triangular //
////////////////

PointCartesian2D TriangularCartesian2D_Cell_centroid(TriangularCartesian2D_Cell cell)
{
	PointCartesian2D_t point = viennagrid::centroid(cell.get_cell());
	return PointCartesian2D(point);
}

PointCartesian3D TriangularCartesian3D_Cell_centroid(TriangularCartesian3D_Cell cell)
{
	PointCartesian3D_t point = viennagrid::centroid(cell.get_cell());
	return PointCartesian3D(point);
}

PointCylindrical3D TriangularCylindrical3D_Cell_centroid(TriangularCylindrical3D_Cell cell)
{
	PointCylindrical_t point = viennagrid::centroid(cell.get_cell());
	return PointCylindrical3D(point);
}

PointPolar2D TriangularPolar2D_Cell_centroid(TriangularPolar2D_Cell cell)
{
	PointPolar_t point = viennagrid::centroid(cell.get_cell());
	return PointPolar2D(point);
}

PointSpherical3D TriangularSpherical3D_Cell_centroid(TriangularSpherical3D_Cell cell)
{
	PointSpherical_t point = viennagrid::centroid(cell.get_cell());
	return PointSpherical3D(point);
}

///////////////////
// Quadrilateral //
///////////////////

PointCartesian2D QuadrilateralCartesian2D_Cell_centroid(QuadrilateralCartesian2D_Cell cell)
{
	PointCartesian2D_t point = viennagrid::centroid(cell.get_cell());
	return PointCartesian2D(point);
}

PointCartesian3D QuadrilateralCartesian3D_Cell_centroid(QuadrilateralCartesian3D_Cell cell)
{
	PointCartesian3D_t point = viennagrid::centroid(cell.get_cell());
	return PointCartesian3D(point);
}

PointCylindrical3D QuadrilateralCylindrical3D_Cell_centroid(QuadrilateralCylindrical3D_Cell cell)
{
	PointCylindrical_t point = viennagrid::centroid(cell.get_cell());
	return PointCylindrical3D(point);
}

PointPolar2D QuadrilateralPolar2D_Cell_centroid(QuadrilateralPolar2D_Cell cell)
{
	PointPolar_t point = viennagrid::centroid(cell.get_cell());
	return PointPolar2D(point);
}

PointSpherical3D QuadrilateralSpherical3D_Cell_centroid(QuadrilateralSpherical3D_Cell cell)
{
	PointSpherical_t point = viennagrid::centroid(cell.get_cell());
	return PointSpherical3D(point);
}

/////////////////
// Tetrahedral //
/////////////////

PointCartesian3D TetrahedralCartesian3D_Cell_centroid(TetrahedralCartesian3D_Cell cell)
{
	PointCartesian3D_t point = viennagrid::centroid(cell.get_cell());
	return PointCartesian3D(point);
}

PointCylindrical3D TetrahedralCylindrical3D_Cell_centroid(TetrahedralCylindrical3D_Cell cell)
{
	PointCylindrical_t point = viennagrid::centroid(cell.get_cell());
	return PointCylindrical3D(point);
}

PointSpherical3D TetrahedralSpherical3D_Cell_centroid(TetrahedralSpherical3D_Cell cell)
{
	PointSpherical_t point = viennagrid::centroid(cell.get_cell());
	return PointSpherical3D(point);
}
