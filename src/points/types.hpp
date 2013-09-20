/**
 * @file
 * @brief Type definitions for ViennaGrid points.
 */

#ifndef POINTS_TYPES_HPP
#define POINTS_TYPES_HPP

#include <viennagrid/forwards.hpp>
#include <viennagrid/domain/element_creation.hpp>
#include <viennagrid/traits/point.hpp>

typedef viennagrid::point_t<double, viennagrid::cartesian_cs<1> >    PointCartesian1D_t;
typedef viennagrid::point_t<double, viennagrid::cartesian_cs<2> >    PointCartesian2D_t;
typedef viennagrid::point_t<double, viennagrid::cartesian_cs<3> >    PointCartesian3D_t;
typedef viennagrid::point_t<double, viennagrid::cylindrical_cs>      PointCylindrical_t;
typedef viennagrid::point_t<double, viennagrid::polar_cs>            PointPolar_t;
typedef viennagrid::point_t<double, viennagrid::spherical_cs>        PointSpherical_t;

#endif /* end of include guard: POINTS_TYPES_HPP */
