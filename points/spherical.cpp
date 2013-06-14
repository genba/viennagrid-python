#include "spherical.hpp"

PointSpherical3D::PointSpherical3D()
{
	point = new PointSpherical_t(0, 0, 0);
}

PointSpherical3D::PointSpherical3D(double x, double y, double z)
{
	point = new PointSpherical_t(x, y, z);
}

PointSpherical3D::PointSpherical3D(PointSpherical_t &initial_point)
{
	point = &initial_point;
}

size_t PointSpherical3D::get_dimension()
{
	return 3;
}

const char * PointSpherical3D::get_coord_system()
{
	return "spherical";
}

PointSpherical_t & PointSpherical3D::get_point()
{
	return *point;
}

bool PointSpherical3D::operator==(const PointSpherical3D &other)
{
	bool equal = true;
	for (unsigned int i = 0; equal && i < point->size(); ++i)
		equal = equal && (point->at(i) == other.point->at(i));
	return equal;
}
