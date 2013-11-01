/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Implement calculation of the circumcenter of a cell.
 */

#ifndef ALGORHITHMS_CELL_CIRCUMCENTER_HPP
#define ALGORHITHMS_CELL_CIRCUMCENTER_HPP

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
 * Compute the circumcenter of a linear cartesian 1D cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointCartesian1D LinearCartesian1D_Cell_circumcenter(LinearCartesian1D_Cell cell);

/**
 * Compute the circumcenter of a linear cartesian 2D cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointCartesian2D LinearCartesian2D_Cell_circumcenter(LinearCartesian2D_Cell cell);

/**
 * Compute the circumcenter of a linear cartesian 3D cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointCartesian3D LinearCartesian3D_Cell_circumcenter(LinearCartesian3D_Cell cell);

/**
 * Compute the circumcenter of a linear cylindrical cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointCylindrical3D LinearCylindrical3D_Cell_circumcenter(LinearCylindrical3D_Cell cell);

/**
 * Compute the circumcenter of a linear polar cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointPolar2D LinearPolar2D_Cell_circumcenter(LinearPolar2D_Cell cell);

/**
 * Compute the circumcenter of a linear spherical cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointSpherical3D LinearSpherical3D_Cell_circumcenter(LinearSpherical3D_Cell cell);

////////////////
// Triangular //
////////////////

/**
 * Compute the circumcenter of a triangular cartesian 2D cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointCartesian2D TriangularCartesian2D_Cell_circumcenter(TriangularCartesian2D_Cell cell);

/**
 * Compute the circumcenter of a triangular cartesian 3D cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointCartesian3D TriangularCartesian3D_Cell_circumcenter(TriangularCartesian3D_Cell cell);

/**
 * Compute the circumcenter of a triangular cylindrical cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointCylindrical3D TriangularCylindrical3D_Cell_circumcenter(TriangularCylindrical3D_Cell cell);

/**
 * Compute the circumcenter of a triangular polar cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointPolar2D TriangularPolar2D_Cell_circumcenter(TriangularPolar2D_Cell cell);

/**
 * Compute the circumcenter of a triangular spherical cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointSpherical3D TriangularSpherical3D_Cell_circumcenter(TriangularSpherical3D_Cell cell);

///////////////////
// Quadrilateral //
///////////////////

/**
 * Compute the circumcenter of a quadrilateral cartesian 2D cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointCartesian2D QuadrilateralCartesian2D_Cell_circumcenter(QuadrilateralCartesian2D_Cell cell);

/**
 * Compute the circumcenter of a quadrilateral cartesian 3D cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointCartesian3D QuadrilateralCartesian3D_Cell_circumcenter(QuadrilateralCartesian3D_Cell cell);

/**
 * Compute the circumcenter of a quadrilateral cylindrical cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointCylindrical3D QuadrilateralCylindrical3D_Cell_circumcenter(QuadrilateralCylindrical3D_Cell cell);

/**
 * Compute the circumcenter of a quadrilateral polar cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointPolar2D QuadrilateralPolar2D_Cell_circumcenter(QuadrilateralPolar2D_Cell cell);

/**
 * Compute the circumcenter of a quadrilateral spherical cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointSpherical3D QuadrilateralSpherical3D_Cell_circumcenter(QuadrilateralSpherical3D_Cell cell);

/////////////////
// Tetrahedral //
/////////////////

/**
 * Compute the circumcenter of a tetrahedral cartesian 3D cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointCartesian3D TetrahedralCartesian3D_Cell_circumcenter(TetrahedralCartesian3D_Cell cell);

/**
 * Compute the circumcenter of a tetrahedral cylindrical cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointCylindrical3D TetrahedralCylindrical3D_Cell_circumcenter(TetrahedralCylindrical3D_Cell cell);

/**
 * Compute the circumcenter of a tetrahedral spherical cell.
 * 
 * @param cell The cell whose circumcenter will be computed.
 * @return Point that represents the circumcenter of the cell.
 * 
 * @since 0.1.0
 */
PointSpherical3D TetrahedralSpherical3D_Cell_circumcenter(TetrahedralSpherical3D_Cell cell);

#endif /* end of include guard: ALGORHITHMS_CELL_CIRCUMCENTER_HPP */
