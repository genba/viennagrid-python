/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Function definitions for implementing the Netgen reader.
 */

#ifndef IO_READ_NETGEN_HPP
#define IO_READ_NETGEN_HPP

#include "../domains/linear.hpp"
#include "../domains/triangular.hpp"
#include "../domains/quadrilateral.hpp"
#include "../domains/tetrahedral.hpp"

#include "../segmentations/linear.hpp"
#include "../segmentations/triangular.hpp"
#include "../segmentations/quadrilateral.hpp"
#include "../segmentations/tetrahedral.hpp"

#include <boost/python.hpp>
using namespace boost::python;

////////////
// LINEAR //
////////////

void LinearCartesian1D_Domain_read_netgen(str filename, LinearCartesian1D_Domain domain, object segmentation = object());
void LinearCartesian2D_Domain_read_netgen(str filename, LinearCartesian2D_Domain domain, object segmentation = object());
void LinearCartesian3D_Domain_read_netgen(str filename, LinearCartesian3D_Domain domain, object segmentation = object());
void LinearCylindrical3D_Domain_read_netgen(str filename, LinearCylindrical3D_Domain domain, object segmentation = object());
void LinearPolar2D_Domain_read_netgen(str filename, LinearPolar2D_Domain domain, object segmentation = object());
void LinearSpherical3D_Domain_read_netgen(str filename, LinearSpherical3D_Domain domain, object segmentation = object());

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearCartesian1D_Domain_read_netgen_overloads,
                                LinearCartesian1D_Domain_read_netgen, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearCartesian2D_Domain_read_netgen_overloads,
                                LinearCartesian2D_Domain_read_netgen, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearCartesian3D_Domain_read_netgen_overloads,
                                LinearCartesian3D_Domain_read_netgen, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearCylindrical3D_Domain_read_netgen_overloads,
                                LinearCylindrical3D_Domain_read_netgen, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearPolar2D_Domain_read_netgen_overloads,
                                LinearPolar2D_Domain_read_netgen, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearSpherical3D_Domain_read_netgen_overloads,
                                LinearSpherical3D_Domain_read_netgen, 2, 3);

////////////////
// TRIANGULAR //
////////////////

void TriangularCartesian2D_Domain_read_netgen(str filename, TriangularCartesian2D_Domain domain, object segmentation = object());
void TriangularCartesian3D_Domain_read_netgen(str filename, TriangularCartesian3D_Domain domain, object segmentation = object());
void TriangularCylindrical3D_Domain_read_netgen(str filename, TriangularCylindrical3D_Domain domain, object segmentation = object());
void TriangularPolar2D_Domain_read_netgen(str filename, TriangularPolar2D_Domain domain, object segmentation = object());
void TriangularSpherical3D_Domain_read_netgen(str filename, TriangularSpherical3D_Domain domain, object segmentation = object());

BOOST_PYTHON_FUNCTION_OVERLOADS(TriangularCartesian2D_Domain_read_netgen_overloads,
                                TriangularCartesian2D_Domain_read_netgen, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(TriangularCartesian3D_Domain_read_netgen_overloads,
                                TriangularCartesian3D_Domain_read_netgen, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(TriangularCylindrical3D_Domain_read_netgen_overloads,
                                TriangularCylindrical3D_Domain_read_netgen, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(TriangularPolar2D_Domain_read_netgen_overloads,
                                TriangularPolar2D_Domain_read_netgen, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(TriangularSpherical3D_Domain_read_netgen_overloads,
                                TriangularSpherical3D_Domain_read_netgen, 2, 3);

///////////////////
// QUADRILATERAL //
///////////////////

void QuadrilateralCartesian2D_Domain_read_netgen(str filename, QuadrilateralCartesian2D_Domain domain, object segmentation = object());
void QuadrilateralCartesian3D_Domain_read_netgen(str filename, QuadrilateralCartesian3D_Domain domain, object segmentation = object());
void QuadrilateralCylindrical3D_Domain_read_netgen(str filename, QuadrilateralCylindrical3D_Domain domain, object segmentation = object());
void QuadrilateralPolar2D_Domain_read_netgen(str filename, QuadrilateralPolar2D_Domain domain, object segmentation = object());
void QuadrilateralSpherical3D_Domain_read_netgen(str filename, QuadrilateralSpherical3D_Domain domain, object segmentation = object());

BOOST_PYTHON_FUNCTION_OVERLOADS(QuadrilateralCartesian2D_Domain_read_netgen_overloads,
                                QuadrilateralCartesian2D_Domain_read_netgen, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(QuadrilateralCartesian3D_Domain_read_netgen_overloads,
                                QuadrilateralCartesian3D_Domain_read_netgen, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(QuadrilateralCylindrical3D_Domain_read_netgen_overloads,
                                QuadrilateralCylindrical3D_Domain_read_netgen, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(QuadrilateralPolar2D_Domain_read_netgen_overloads,
                                QuadrilateralPolar2D_Domain_read_netgen, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(QuadrilateralSpherical3D_Domain_read_netgen_overloads,
                                QuadrilateralSpherical3D_Domain_read_netgen, 2, 3);

/////////////////
// TETRAHEDRAL //
/////////////////

void TetrahedralCartesian3D_Domain_read_netgen(str filename, TetrahedralCartesian3D_Domain domain, object segmentation = object());
void TetrahedralCylindrical3D_Domain_read_netgen(str filename, TetrahedralCylindrical3D_Domain domain, object segmentation = object());
void TetrahedralSpherical3D_Domain_read_netgen(str filename, TetrahedralSpherical3D_Domain domain, object segmentation = object());

BOOST_PYTHON_FUNCTION_OVERLOADS(TetrahedralCartesian3D_Domain_read_netgen_overloads,
                                TetrahedralCartesian3D_Domain_read_netgen, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(TetrahedralCylindrical3D_Domain_read_netgen_overloads,
                                TetrahedralCylindrical3D_Domain_read_netgen, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(TetrahedralSpherical3D_Domain_read_netgen_overloads,
                                TetrahedralSpherical3D_Domain_read_netgen, 2, 3);

#endif
