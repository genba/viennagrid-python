/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Implement calculation of volume spanned by a set of points.
 * 
 * This module provides the `spanned_volume` function for cartesian points. If you want to pass points
 * that are not cartesian, you'll have to convert them to cartesian coordinates using the method
 * `to_cartesian`.
 */

#ifndef ALGORITHMS_SPANNED_VOLUME_HPP
#define ALGORITHMS_SPANNED_VOLUME_HPP

#include "../points/cartesian.hpp"

//////////////////////
// Length of a line //
//////////////////////

/**
 * Calculate the spanned volume (length) of a line in the 1D cartesian space.
 * 
 * @since 0.1.0
 */
double LinearCartesian1D_spanned_volume(PointCartesian1D p1, PointCartesian1D p2);

/**
 * Calculate the spanned volume (length) of a line in the 2D cartesian space.
 * 
 * @since 0.1.0
 */
double LinearCartesian2D_spanned_volume(PointCartesian2D p1, PointCartesian2D p2);

/**
 * Calculate the spanned volume (length) of a line in the 3D cartesian space.
 * 
 * @since 0.1.0
 */
double LinearCartesian3D_spanned_volume(PointCartesian3D p1, PointCartesian3D p2);

///////////////////////////
// Surface of a triangle //
///////////////////////////

/**
 * Calculate the spanned volume (surface) of a triangle in the 2D cartesian space.
 * 
 * @since 0.1.0
 */
double TriangularCartesian2D_spanned_volume(PointCartesian2D p1, PointCartesian2D p2, PointCartesian2D p3);

/**
 * Calculate the spanned volume (surface) of a triangle in the 3D cartesian space.
 * 
 * @since 0.1.0
 */
double TriangularCartesian3D_spanned_volume(PointCartesian3D p1, PointCartesian3D p2, PointCartesian3D p3);

/////////////////////////////
// Volume of a tetrahedron //
/////////////////////////////

/**
 * Calculate the spanned volume (volume) of a tetrahedron in the 3D cartesian space.
 * 
 * @since 0.1.0
 */
double TetrahedralCartesian3D_spanned_volume(PointCartesian3D p1, PointCartesian3D p2, PointCartesian3D p3, PointCartesian3D p4);

#endif /* end of include guard: ALGORITHMS_SPANNED_VOLUME_HPP */
