#ifndef TYPES_HPP_JQNC6IJC
#define TYPES_HPP_JQNC6IJC

#include <viennagrid/forwards.hpp>
#include <viennagrid/domain/element_creation.hpp>
#include <viennagrid/traits/point.hpp>

typedef viennagrid::point_t<double, viennagrid::cartesian_cs<2> >    PointCartesian2D_t;
typedef viennagrid::point_t<double, viennagrid::cartesian_cs<3> >    PointCartesian3D_t;
typedef viennagrid::point_t<double, viennagrid::cylindrical_cs>      PointCylindrical_t;
typedef viennagrid::point_t<double, viennagrid::polar_cs>            PointPolar_t;
typedef viennagrid::point_t<double, viennagrid::spherical_cs>        PointSpherical_t;

#endif /* end of include guard: TYPES_HPP_JQNC6IJC */
