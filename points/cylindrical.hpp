#ifndef CYLINDRICAL_HPP_P07EFHVO
#define CYLINDRICAL_HPP_P07EFHVO

#include "viennagrid/forwards.hpp"
#include "viennagrid/domain/element_creation.hpp"
#include "viennagrid/traits/point.hpp"

typedef viennagrid::point_t<double, viennagrid::cylindrical_cs> PointCylindrical_t;

class PointCylindrical3D {
	PointCylindrical_t point;
public:
	PointCylindrical3D();
	PointCylindrical3D(double x, double y, double z);
	size_t get_dimension();
	const char * get_coord_system();
};

#endif /* end of include guard: CYLINDRICAL_HPP_P07EFHVO */
