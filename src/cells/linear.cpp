#include "linear.hpp"

////////////////////////
// Line, cartesian 1D //
////////////////////////

LinearCartesian1D_Cell::LinearCartesian1D_Cell(PointCartesian1D vertex1, PointCartesian1D vertex2)
{
	vertices.append<PointCartesian1D>(vertex1);
	vertices.append<PointCartesian1D>(vertex2);
}

list LinearCartesian1D_Cell::get_vertices()
{
	return vertices;
}

////////////////////////
// Line, cartesian 2D //
////////////////////////

LinearCartesian2D_Cell::LinearCartesian2D_Cell(PointCartesian2D vertex1, PointCartesian2D vertex2)
{
	vertices.append<PointCartesian2D>(vertex1);
	vertices.append<PointCartesian2D>(vertex2);
}

list LinearCartesian2D_Cell::get_vertices()
{
	return vertices;
}

////////////////////////
// Line, cartesian 3D //
////////////////////////

LinearCartesian3D_Cell::LinearCartesian3D_Cell(PointCartesian3D vertex1, PointCartesian3D vertex2)
{
	vertices.append<PointCartesian3D>(vertex1);
	vertices.append<PointCartesian3D>(vertex2);
}

list LinearCartesian3D_Cell::get_vertices()
{
	return vertices;
}

////////////////////////////
// Line, cylindrical (3D) //
////////////////////////////

LinearCylindrical3D_Cell::LinearCylindrical3D_Cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2)
{
	vertices.append<PointCylindrical3D>(vertex1);
	vertices.append<PointCylindrical3D>(vertex2);
}

list LinearCylindrical3D_Cell::get_vertices()
{
	return vertices;
}

//////////////////////
// Line, polar (2D) //
//////////////////////

LinearPolar2D_Cell::LinearPolar2D_Cell(PointPolar2D vertex1, PointPolar2D vertex2)
{
	vertices.append<PointPolar2D>(vertex1);
	vertices.append<PointPolar2D>(vertex2);
}

list LinearPolar2D_Cell::get_vertices()
{
	return vertices;
}

//////////////////////////
// Line, spherical (3D) //
//////////////////////////

LinearSpherical3D_Cell::LinearSpherical3D_Cell(PointSpherical3D vertex1, PointSpherical3D vertex2)
{
	vertices.append<PointSpherical3D>(vertex1);
	vertices.append<PointSpherical3D>(vertex2);
}

list LinearSpherical3D_Cell::get_vertices()
{
	return vertices;
}
