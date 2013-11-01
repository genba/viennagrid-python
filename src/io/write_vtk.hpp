/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Function definitions for implementing the VTK writer.
 */

#ifndef IO_WRITE_VTK_HPP
#define IO_WRITE_VTK_HPP

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

#include <string>

////////////
// LINEAR //
////////////

void LinearCartesian1D_Domain_write_vtk(str filename, LinearCartesian1D_Domain domain, object arg1 = object(), dict arg2 = dict());
void LinearCartesian2D_Domain_write_vtk(str filename, LinearCartesian2D_Domain domain, object arg1 = object(), dict arg2 = dict());
void LinearCartesian3D_Domain_write_vtk(str filename, LinearCartesian3D_Domain domain, object arg1 = object(), dict arg2 = dict());
void LinearCylindrical3D_Domain_write_vtk(str filename, LinearCylindrical3D_Domain domain, object arg1 = object(), dict arg2 = dict());
void LinearPolar2D_Domain_write_vtk(str filename, LinearPolar2D_Domain domain, object arg1 = object(), dict arg2 = dict());
void LinearSpherical3D_Domain_write_vtk(str filename, LinearSpherical3D_Domain domain, object arg1 = object(), dict arg2 = dict());

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearCartesian1D_Domain_write_vtk_overloads,
                                LinearCartesian1D_Domain_write_vtk, 2, 4);

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearCartesian2D_Domain_write_vtk_overloads,
                                LinearCartesian2D_Domain_write_vtk, 2, 4);

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearCartesian3D_Domain_write_vtk_overloads,
                                LinearCartesian3D_Domain_write_vtk, 2, 4);

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearCylindrical3D_Domain_write_vtk_overloads,
                                LinearCylindrical3D_Domain_write_vtk, 2, 4);

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearPolar2D_Domain_write_vtk_overloads,
                                LinearPolar2D_Domain_write_vtk, 2, 4);

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearSpherical3D_Domain_write_vtk_overloads,
                                LinearSpherical3D_Domain_write_vtk, 2, 4);

////////////////
// TRIANGULAR //
////////////////

void TriangularCartesian2D_Domain_write_vtk(str filename, TriangularCartesian2D_Domain domain, object arg1 = object(), dict arg2 = dict());
void TriangularCartesian3D_Domain_write_vtk(str filename, TriangularCartesian3D_Domain domain, object arg1 = object(), dict arg2 = dict());
void TriangularCylindrical3D_Domain_write_vtk(str filename, TriangularCylindrical3D_Domain domain, object arg1 = object(), dict arg2 = dict());
void TriangularPolar2D_Domain_write_vtk(str filename, TriangularPolar2D_Domain domain, object arg1 = object(), dict arg2 = dict());
void TriangularSpherical3D_Domain_write_vtk(str filename, TriangularSpherical3D_Domain domain, object arg1 = object(), dict arg2 = dict());

BOOST_PYTHON_FUNCTION_OVERLOADS(TriangularCartesian2D_Domain_write_vtk_overloads,
                                TriangularCartesian2D_Domain_write_vtk, 2, 4);

BOOST_PYTHON_FUNCTION_OVERLOADS(TriangularCartesian3D_Domain_write_vtk_overloads,
                                TriangularCartesian3D_Domain_write_vtk, 2, 4);

BOOST_PYTHON_FUNCTION_OVERLOADS(TriangularCylindrical3D_Domain_write_vtk_overloads,
                                TriangularCylindrical3D_Domain_write_vtk, 2, 4);

BOOST_PYTHON_FUNCTION_OVERLOADS(TriangularPolar2D_Domain_write_vtk_overloads,
                                TriangularPolar2D_Domain_write_vtk, 2, 4);

BOOST_PYTHON_FUNCTION_OVERLOADS(TriangularSpherical3D_Domain_write_vtk_overloads,
                                TriangularSpherical3D_Domain_write_vtk, 2, 4);

///////////////////
// QUADRILATERAL //
///////////////////

void QuadrilateralCartesian2D_Domain_write_vtk(str filename, QuadrilateralCartesian2D_Domain domain, object arg1 = object(), dict arg2 = dict());
void QuadrilateralCartesian3D_Domain_write_vtk(str filename, QuadrilateralCartesian3D_Domain domain, object arg1 = object(), dict arg2 = dict());
void QuadrilateralCylindrical3D_Domain_write_vtk(str filename, QuadrilateralCylindrical3D_Domain domain, object arg1 = object(), dict arg2 = dict());
void QuadrilateralPolar2D_Domain_write_vtk(str filename, QuadrilateralPolar2D_Domain domain, object arg1 = object(), dict arg2 = dict());
void QuadrilateralSpherical3D_Domain_write_vtk(str filename, QuadrilateralSpherical3D_Domain domain, object arg1 = object(), dict arg2 = dict());

BOOST_PYTHON_FUNCTION_OVERLOADS(QuadrilateralCartesian2D_Domain_write_vtk_overloads,
                                QuadrilateralCartesian2D_Domain_write_vtk, 2, 4);

BOOST_PYTHON_FUNCTION_OVERLOADS(QuadrilateralCartesian3D_Domain_write_vtk_overloads,
                                QuadrilateralCartesian3D_Domain_write_vtk, 2, 4);

BOOST_PYTHON_FUNCTION_OVERLOADS(QuadrilateralCylindrical3D_Domain_write_vtk_overloads,
                                QuadrilateralCylindrical3D_Domain_write_vtk, 2, 4);

BOOST_PYTHON_FUNCTION_OVERLOADS(QuadrilateralPolar2D_Domain_write_vtk_overloads,
                                QuadrilateralPolar2D_Domain_write_vtk, 2, 4);

BOOST_PYTHON_FUNCTION_OVERLOADS(QuadrilateralSpherical3D_Domain_write_vtk_overloads,
                                QuadrilateralSpherical3D_Domain_write_vtk, 2, 4);

/////////////////
// TETRAHEDRAL //
/////////////////

void TetrahedralCartesian3D_Domain_write_vtk(str filename, TetrahedralCartesian3D_Domain domain, object arg1 = object(), dict arg2 = dict());
void TetrahedralCylindrical3D_Domain_write_vtk(str filename, TetrahedralCylindrical3D_Domain domain, object arg1 = object(), dict arg2 = dict());
void TetrahedralSpherical3D_Domain_write_vtk(str filename, TetrahedralSpherical3D_Domain domain, object arg1 = object(), dict arg2 = dict());

BOOST_PYTHON_FUNCTION_OVERLOADS(TetrahedralCartesian3D_Domain_write_vtk_overloads,
                                TetrahedralCartesian3D_Domain_write_vtk, 2, 4);

BOOST_PYTHON_FUNCTION_OVERLOADS(TetrahedralCylindrical3D_Domain_write_vtk_overloads,
                                TetrahedralCylindrical3D_Domain_write_vtk, 2, 4);

BOOST_PYTHON_FUNCTION_OVERLOADS(TetrahedralSpherical3D_Domain_write_vtk_overloads,
                                TetrahedralSpherical3D_Domain_write_vtk, 2, 4);

#endif
