#ifndef POLAR_HPP_HL2P4D4
#define POLAR_HPP_HL2P4D4

#include "types.hpp"

class PointPolar2D {
	PointPolar_t *point;
	// bool destroy;
public:
	PointPolar2D();
	PointPolar2D(double x, double y);
	PointPolar2D(PointPolar_t &initial_point);
	~PointPolar2D();
	size_t get_dimension();
	const char * get_coord_system();
	PointPolar_t & get_point();
	bool operator==(const PointPolar2D &other);
};

#endif /* end of include guard: POLAR_HPP_HL2P4D4 */
