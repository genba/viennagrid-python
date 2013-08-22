/**
 * @file
 * @brief Implement calculation of the volume of a cell.
 */

#ifndef ALGORHITHMS_CELL_VOLUME_HPP
#define ALGORHITHMS_CELL_VOLUME_HPP

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
 * Calculate the volume of a linear cartesian 1D cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double LinearCartesian1D_Cell_volume(LinearCartesian1D_Cell cell);

/**
 * Calculate the volume of a linear cartesian 2D cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double LinearCartesian2D_Cell_volume(LinearCartesian2D_Cell cell);

/**
 * Calculate the volume of a linear cartesian 3D cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double LinearCartesian3D_Cell_volume(LinearCartesian3D_Cell cell);

/**
 * Calculate the volume of a linear cylindrical cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double LinearCylindrical3D_Cell_volume(LinearCylindrical3D_Cell cell);

/**
 * Calculate the volume of a linear polar cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double LinearPolar2D_Cell_volume(LinearPolar2D_Cell cell);

/**
 * Calculate the volume of a linear spherical cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double LinearSpherical3D_Cell_volume(LinearSpherical3D_Cell cell);

////////////////
// Triangular //
////////////////

/**
 * Calculate the volume of a triangular cartesian 2D cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double TriangularCartesian2D_Cell_volume(TriangularCartesian2D_Cell cell);

/**
 * Calculate the volume of a triangular cartesian 3D cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double TriangularCartesian3D_Cell_volume(TriangularCartesian3D_Cell cell);

/**
 * Calculate the volume of a triangular cylindrical cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double TriangularCylindrical3D_Cell_volume(TriangularCylindrical3D_Cell cell);

/**
 * Calculate the volume of a triangular polar cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double TriangularPolar2D_Cell_volume(TriangularPolar2D_Cell cell);

/**
 * Calculate the volume of a triangular spherical cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double TriangularSpherical3D_Cell_volume(TriangularSpherical3D_Cell cell);

///////////////////
// Quadrilateral //
///////////////////

/**
 * Calculate the volume of a quadrilateral cartesian 2D cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double QuadrilateralCartesian2D_Cell_volume(QuadrilateralCartesian2D_Cell cell);

/**
 * Calculate the volume of a quadrilateral cartesian 3D cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double QuadrilateralCartesian3D_Cell_volume(QuadrilateralCartesian3D_Cell cell);

/**
 * Calculate the volume of a quadrilateral cylindrical cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double QuadrilateralCylindrical3D_Cell_volume(QuadrilateralCylindrical3D_Cell cell);

/**
 * Calculate the volume of a quadrilateral polar cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double QuadrilateralPolar2D_Cell_volume(QuadrilateralPolar2D_Cell cell);

/**
 * Calculate the volume of a quadrilateral sphericalº cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double QuadrilateralSpherical3D_Cell_volume(QuadrilateralSpherical3D_Cell cell);

/////////////////
// Tetrahedral //
/////////////////

/**
 * Calculate the volume of a tetrahedral cartesian 3D cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double TetrahedralCartesian3D_Cell_volume(TetrahedralCartesian3D_Cell cell);

/**
 * Calculate the volume of a tetrahedral cylindrical cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double TetrahedralCylindrical3D_Cell_volume(TetrahedralCylindrical3D_Cell cell);

/**
 * Calculate the volume of a tetrahedral sphericalº cell.
 * 
 * @param cell Cell whose volume will be computed.
 * @return Real number in double precision which represents the volume of the cell.
 */
double TetrahedralSpherical3D_Cell_volume(TetrahedralSpherical3D_Cell cell);

#endif /* end of include guard: ALGORHITHMS_CELL_VOLUME_HPP */
