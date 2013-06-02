#ifndef CARTESIAN_HPP_40UV2UQE
#define CARTESIAN_HPP_40UV2UQE

#include "viennagrid/forwards.hpp"
#include "viennagrid/domain/element_creation.hpp"
#include "viennagrid/traits/point.hpp"

typedef viennagrid::point_t<double, viennagrid::cartesian_cs<2> > PointCartesian2D_t;
typedef viennagrid::point_t<double, viennagrid::cartesian_cs<3> > PointCartesian3D_t;

class PointCartesian2D {
	PointCartesian2D_t point;
public:
	PointCartesian2D();
	PointCartesian2D(double x, double y);
	size_t get_dimension();
	const char * get_coord_system();
};

class PointCartesian3D {
	PointCartesian3D_t point;
public:
	PointCartesian3D();
	PointCartesian3D(double x, double y, double z);
	size_t get_dimension();
	const char * get_coord_system();
};

#endif /* end of include guard: CARTESIAN_HPP_40UV2UQE */
