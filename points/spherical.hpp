#ifndef SPHERICAL_HPP_LPABEBWU
#define SPHERICAL_HPP_LPABEBWU

#include "types.hpp"

class PointSpherical3D {
	PointSpherical_t point;
public:
	PointSpherical3D();
	PointSpherical3D(double x, double y, double z);
	size_t get_dimension();
	const char * get_coord_system();
};

#endif /* end of include guard: SPHERICAL_HPP_LPABEBWU */
