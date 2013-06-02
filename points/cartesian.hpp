#ifndef CARTESIAN_HPP_40UV2UQE
#define CARTESIAN_HPP_40UV2UQE

#include "viennagrid/forwards.hpp"
#include "viennagrid/domain/element_creation.hpp"
#include "viennagrid/traits/point.hpp"

class PointCartesian2D {
	viennagrid::point_t<double, viennagrid::cartesian_cs<2> > point;
public:
	PointCartesian2D();
	PointCartesian2D(double x, double y);
	size_t get_dimension();
	const char * get_coord_system();
};

class PointCartesian3D {
	viennagrid::point_t<double, viennagrid::cartesian_cs<3> > point;
public:
	PointCartesian3D();
	PointCartesian3D(double x, double y, double z);
	size_t get_dimension();
	const char * get_coord_system();
};

#endif /* end of include guard: CARTESIAN_HPP_40UV2UQE */
