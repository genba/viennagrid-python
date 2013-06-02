#ifndef SPHERICAL_HPP_LPABEBWU
#define SPHERICAL_HPP_LPABEBWU

#include "viennagrid/forwards.hpp"
#include "viennagrid/domain/element_creation.hpp"
#include "viennagrid/traits/point.hpp"

typedef viennagrid::point_t<double, viennagrid::spherical_cs> PointSpherical_t;

class PointSpherical3D {
	PointSpherical_t point;
public:
	PointSpherical3D();
	PointSpherical3D(double x, double y, double z);
	size_t get_dimension();
	const char * get_coord_system();
};

#endif /* end of include guard: SPHERICAL_HPP_LPABEBWU */
