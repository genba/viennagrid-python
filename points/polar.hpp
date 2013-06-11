#ifndef POLAR_HPP_HL2P4D4
#define POLAR_HPP_HL2P4D4

#include "types.hpp"

class PointPolar2D {
	PointPolar_t point;
public:
	PointPolar2D();
	PointPolar2D(double x, double y);
	size_t get_dimension();
	const char * get_coord_system();
	PointPolar_t & get_point();
};

#endif /* end of include guard: POLAR_HPP_HL2P4D4 */
