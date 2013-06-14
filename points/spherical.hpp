#ifndef SPHERICAL_HPP_LPABEBWU
#define SPHERICAL_HPP_LPABEBWU

#include "types.hpp"

class PointSpherical3D {
	PointSpherical_t *point;
	// bool destroy;
public:
	PointSpherical3D();
	PointSpherical3D(double x, double y, double z);
	PointSpherical3D(PointSpherical_t &initial_point);
	~PointSpherical3D();
	size_t get_dimension();
	const char * get_coord_system();
	PointSpherical_t & get_point();
	bool operator==(const PointSpherical3D &other);
};

#endif /* end of include guard: SPHERICAL_HPP_LPABEBWU */
