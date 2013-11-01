/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Implement calculation of the surface of a cell.
 */

#ifndef ALGORHITHMS_CELL_SURFACE_HPP
#define ALGORHITHMS_CELL_SURFACE_HPP

#include <boost/python.hpp>
using namespace boost::python;

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../cells/linear.hpp"
#include "../cells/triangular.hpp"
#include "../cells/quadrilateral.hpp"
#include "../cells/tetrahedral.hpp"

////////////
// Linear //
////////////

/**
 * Calculate the surface of a linear cartesian 1D cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double LinearCartesian1D_Cell_surface(LinearCartesian1D_Cell cell);

/**
 * Calculate the surface of a linear cartesian 2D cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double LinearCartesian2D_Cell_surface(LinearCartesian2D_Cell cell);

/**
 * Calculate the surface of a linear cartesian 3D cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double LinearCartesian3D_Cell_surface(LinearCartesian3D_Cell cell);

/**
 * Calculate the surface of a linear cylindrical cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double LinearCylindrical3D_Cell_surface(LinearCylindrical3D_Cell cell);

/**
 * Calculate the surface of a linear polar cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double LinearPolar2D_Cell_surface(LinearPolar2D_Cell cell);

/**
 * Calculate the surface of a linear spherical cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double LinearSpherical3D_Cell_surface(LinearSpherical3D_Cell cell);

////////////////
// Triangular //
////////////////

/**
 * Calculate the surface of a triangular cartesian 2D cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double TriangularCartesian2D_Cell_surface(TriangularCartesian2D_Cell cell);

/**
 * Calculate the surface of a triangular cartesian 3D cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double TriangularCartesian3D_Cell_surface(TriangularCartesian3D_Cell cell);

/**
 * Calculate the surface of a triangular cylindrical cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double TriangularCylindrical3D_Cell_surface(TriangularCylindrical3D_Cell cell);

/**
 * Calculate the surface of a triangular polar cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double TriangularPolar2D_Cell_surface(TriangularPolar2D_Cell cell);

/**
 * Calculate the surface of a triangular spherical cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double TriangularSpherical3D_Cell_surface(TriangularSpherical3D_Cell cell);

///////////////////
// Quadrilateral //
///////////////////

/**
 * Calculate the surface of a quadrilateral cartesian 2D cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double QuadrilateralCartesian2D_Cell_surface(QuadrilateralCartesian2D_Cell cell);

/**
 * Calculate the surface of a quadrilateral cartesian 3D cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double QuadrilateralCartesian3D_Cell_surface(QuadrilateralCartesian3D_Cell cell);

/**
 * Calculate the surface of a quadrilateral cylindrical cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double QuadrilateralCylindrical3D_Cell_surface(QuadrilateralCylindrical3D_Cell cell);

/**
 * Calculate the surface of a quadrilateral polar cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double QuadrilateralPolar2D_Cell_surface(QuadrilateralPolar2D_Cell cell);

/**
 * Calculate the surface of a quadrilateral spherical cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double QuadrilateralSpherical3D_Cell_surface(QuadrilateralSpherical3D_Cell cell);

/////////////////
// Tetrahedral //
/////////////////

/**
 * Calculate the surface of a tetrahedral cartesian 3D cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double TetrahedralCartesian3D_Cell_surface(TetrahedralCartesian3D_Cell cell);

/**
 * Calculate the surface of a tetrahedral cylindrical cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double TetrahedralCylindrical3D_Cell_surface(TetrahedralCylindrical3D_Cell cell);

/**
 * Calculate the surface of a tetrahedral spherical cell.
 * 
 * @param cell Cell whose surface will be computed.
 * @return Real number in double precision which represents the surface of the cell.
 * 
 * @since 0.1.0
 */
double TetrahedralSpherical3D_Cell_surface(TetrahedralSpherical3D_Cell cell);

#endif /* end of include guard: ALGORHITHMS_CELL_SURFACE_HPP */
