#ifndef CYLINDRICAL_HPP_P07EFHVO
#define CYLINDRICAL_HPP_P07EFHVO

#include "viennagrid/forwards.hpp"
#include "viennagrid/domain/element_creation.hpp"
#include "viennagrid/traits/point.hpp"

class PointCylindrical3D {
	viennagrid::point_t<double, viennagrid::cylindrical_cs> point;
public:
	PointCylindrical3D();
	PointCylindrical3D(double x, double y, double z);
	size_t get_dimension();
	const char * get_coord_system();
};

#endif /* end of include guard: CYLINDRICAL_HPP_P07EFHVO */
