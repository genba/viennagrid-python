#ifndef POLAR_HPP_HL2P4D4
#define POLAR_HPP_HL2P4D4

#include "viennagrid/forwards.hpp"
#include "viennagrid/domain/element_creation.hpp"
#include "viennagrid/traits/point.hpp"

class PointPolar2D {
	viennagrid::point_t<double, viennagrid::polar_cs> point;
public:
	PointPolar2D();
	PointPolar2D(double x, double y);
	size_t get_dimension();
	const char * get_coord_system();
};

#endif /* end of include guard: POLAR_HPP_HL2P4D4 */
