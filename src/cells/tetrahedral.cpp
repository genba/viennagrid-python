#include "tetrahedral.hpp"

///////////////////////////////
// Tetrahedral, cartesian 3D //
///////////////////////////////

TetrahedralCartesian3D_Cell::TetrahedralCartesian3D_Cell(PointCartesian3D vertex1, PointCartesian3D vertex2, PointCartesian3D vertex3, PointCartesian3D vertex4)
{
	vertices.append<PointCartesian3D>(vertex1);
	vertices.append<PointCartesian3D>(vertex2);
	vertices.append<PointCartesian3D>(vertex3);
	vertices.append<PointCartesian3D>(vertex4);
}

list TetrahedralCartesian3D_Cell::get_vertices()
{
	return vertices;
}

///////////////////////////////////
// Tetrahedral, cylindrical (3D) //
///////////////////////////////////

TetrahedralCylindrical3D_Cell::TetrahedralCylindrical3D_Cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2, PointCylindrical3D vertex3, PointCylindrical3D vertex4)
{
	vertices.append<PointCylindrical3D>(vertex1);
	vertices.append<PointCylindrical3D>(vertex2);
	vertices.append<PointCylindrical3D>(vertex3);
	vertices.append<PointCylindrical3D>(vertex4);
}

list TetrahedralCylindrical3D_Cell::get_vertices()
{
	return vertices;
}

/////////////////////////////////
// Tetrahedral, spherical (3D) //
/////////////////////////////////

TetrahedralSpherical3D_Cell::TetrahedralSpherical3D_Cell(PointSpherical3D vertex1, PointSpherical3D vertex2, PointSpherical3D vertex3, PointSpherical3D vertex4)
{
	vertices.append<PointSpherical3D>(vertex1);
	vertices.append<PointSpherical3D>(vertex2);
	vertices.append<PointSpherical3D>(vertex3);
	vertices.append<PointSpherical3D>(vertex4);
}

list TetrahedralSpherical3D_Cell::get_vertices()
{
	return vertices;
}
