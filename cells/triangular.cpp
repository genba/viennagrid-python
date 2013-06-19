#include "triangular.hpp"

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

TriangularCartesian2D_Cell::TriangularCartesian2D_Cell(PointCartesian2D vertex1, PointCartesian2D vertex2, PointCartesian2D vertex3)
{
	vertices.append<PointCartesian2D>(vertex1);
	vertices.append<PointCartesian2D>(vertex2);
	vertices.append<PointCartesian2D>(vertex3);
}

list TriangularCartesian2D_Cell::get_vertices()
{
	return vertices;
}

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

TriangularCartesian3D_Cell::TriangularCartesian3D_Cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3)
{
	vertices.append<PointCartesian3D>(vertex1);
	vertices.append<PointCartesian3D>(vertex2);
	vertices.append<PointCartesian3D>(vertex3);
}

list TriangularCartesian3D_Cell::get_vertices()
{
	return vertices;
}

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

TriangularCylindrical3D_Cell::TriangularCylindrical3D_Cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3)
{
	vertices.append<PointCylindrical3D>(vertex1);
	vertices.append<PointCylindrical3D>(vertex2);
	vertices.append<PointCylindrical3D>(vertex3);
}

list TriangularCylindrical3D_Cell::get_vertices()
{
	return vertices;
}

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

TriangularPolar2D_Cell::TriangularPolar2D_Cell(PointPolar2D vertex1, PointPolar2D vertex2, PointPolar2D vertex3)
{
	vertices.append<PointPolar2D>(vertex1);
	vertices.append<PointPolar2D>(vertex2);
	vertices.append<PointPolar2D>(vertex3);
}

list TriangularPolar2D_Cell::get_vertices()
{
	return vertices;
}

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

TriangularSpherical3D_Cell::TriangularSpherical3D_Cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3)
{
	vertices.append<PointSpherical3D>(vertex1);
	vertices.append<PointSpherical3D>(vertex2);
	vertices.append<PointSpherical3D>(vertex3);
}

list TriangularSpherical3D_Cell::get_vertices()
{
	return vertices;
}
