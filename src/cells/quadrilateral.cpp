#include "quadrilateral.hpp"

/////////////////////////////////
// Quadrilateral, cartesian 2D //
/////////////////////////////////

QuadrilateralCartesian2D_Cell::QuadrilateralCartesian2D_Cell(PointCartesian2D vertex1, PointCartesian2D vertex2, PointCartesian2D vertex3, PointCartesian2D vertex4)
{
	vertices.append<PointCartesian2D>(vertex1);
	vertices.append<PointCartesian2D>(vertex2);
	vertices.append<PointCartesian2D>(vertex3);
	vertices.append<PointCartesian2D>(vertex4);
}

list QuadrilateralCartesian2D_Cell::get_vertices()
{
	return vertices;
}

/////////////////////////////////
// Quadrilateral, cartesian 3D //
/////////////////////////////////

QuadrilateralCartesian3D_Cell::QuadrilateralCartesian3D_Cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3, PointCartesian3D vertex4)
{
	vertices.append<PointCartesian3D>(vertex1);
	vertices.append<PointCartesian3D>(vertex2);
	vertices.append<PointCartesian3D>(vertex3);
	vertices.append<PointCartesian3D>(vertex4);
}

list QuadrilateralCartesian3D_Cell::get_vertices()
{
	return vertices;
}

/////////////////////////////////////
// Quadrilateral, cylindrical (3D) //
/////////////////////////////////////

QuadrilateralCylindrical3D_Cell::QuadrilateralCylindrical3D_Cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3, PointCylindrical3D vertex4)
{
	vertices.append<PointCylindrical3D>(vertex1);
	vertices.append<PointCylindrical3D>(vertex2);
	vertices.append<PointCylindrical3D>(vertex3);
	vertices.append<PointCylindrical3D>(vertex4);
}

list QuadrilateralCylindrical3D_Cell::get_vertices()
{
	return vertices;
}

///////////////////////////////
// Quadrilateral, polar (2D) //
///////////////////////////////

QuadrilateralPolar2D_Cell::QuadrilateralPolar2D_Cell(PointPolar2D vertex1, PointPolar2D vertex2, PointPolar2D vertex3, PointPolar2D vertex4)
{
	vertices.append<PointPolar2D>(vertex1);
	vertices.append<PointPolar2D>(vertex2);
	vertices.append<PointPolar2D>(vertex3);
	vertices.append<PointPolar2D>(vertex4);
}

list QuadrilateralPolar2D_Cell::get_vertices()
{
	return vertices;
}

///////////////////////////////////
// Quadrilateral, spherical (3D) //
///////////////////////////////////

QuadrilateralSpherical3D_Cell::QuadrilateralSpherical3D_Cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3, PointSpherical3D vertex4)
{
	vertices.append<PointSpherical3D>(vertex1);
	vertices.append<PointSpherical3D>(vertex2);
	vertices.append<PointSpherical3D>(vertex3);
	vertices.append<PointSpherical3D>(vertex4);
}

list QuadrilateralSpherical3D_Cell::get_vertices()
{
	return vertices;
}
