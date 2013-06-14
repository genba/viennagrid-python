#ifndef CYLINDRICAL_HPP_P07EFHVO
#define CYLINDRICAL_HPP_P07EFHVO

#include "types.hpp"

class PointCylindrical3D {
	PointCylindrical_t *point;
	// bool destroy;
public:
	PointCylindrical3D();
	PointCylindrical3D(double x, double y, double z);
	PointCylindrical3D(PointCylindrical_t &initial_point);
	~PointCylindrical3D();
	size_t get_dimension();
	const char * get_coord_system();
	PointCylindrical_t & get_point();
	bool operator==(const PointCylindrical3D &other);
};

#endif /* end of include guard: CYLINDRICAL_HPP_P07EFHVO */
