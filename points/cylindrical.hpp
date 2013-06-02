#ifndef CYLINDRICAL_HPP_P07EFHVO
#define CYLINDRICAL_HPP_P07EFHVO

#include "types.hpp"

class PointCylindrical3D {
	PointCylindrical_t point;
public:
	PointCylindrical3D();
	PointCylindrical3D(double x, double y, double z);
	size_t get_dimension();
	const char * get_coord_system();
};

#endif /* end of include guard: CYLINDRICAL_HPP_P07EFHVO */
