#ifndef IO_WRITE_OPENDX_HPP
#define IO_WRITE_OPENDX_HPP

#include "../domains/linear.hpp"
#include "../domains/triangular.hpp"
#include "../domains/quadrilateral.hpp"
#include "../domains/tetrahedral.hpp"

#include "../segmentations/linear.hpp"
#include "../segmentations/triangular.hpp"
#include "../segmentations/quadrilateral.hpp"
#include "../segmentations/tetrahedral.hpp"

////////////
// LINEAR //
////////////

void LinearCartesian1D_Domain_write_opendx(str filename, LinearCartesian1D_Domain domain, dict accessors = dict());
void LinearCartesian2D_Domain_write_opendx(str filename, LinearCartesian2D_Domain domain, dict accessors = dict());
void LinearCartesian3D_Domain_write_opendx(str filename, LinearCartesian3D_Domain domain, dict accessors = dict());
void LinearCylindrical3D_Domain_write_opendx(str filename, LinearCylindrical3D_Domain domain, dict accessors = dict());
void LinearPolar2D_Domain_write_opendx(str filename, LinearPolar2D_Domain domain, dict accessors = dict());
void LinearSpherical3D_Domain_write_opendx(str filename, LinearSpherical3D_Domain domain, dict accessors = dict());

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearCartesian1D_Domain_write_opendx_overloads,
                                LinearCartesian1D_Domain_write_opendx, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearCartesian2D_Domain_write_opendx_overloads,
                                LinearCartesian2D_Domain_write_opendx, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearCartesian3D_Domain_write_opendx_overloads,
                                LinearCartesian3D_Domain_write_opendx, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearCylindrical3D_Domain_write_opendx_overloads,
                                LinearCylindrical3D_Domain_write_opendx, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearPolar2D_Domain_write_opendx_overloads,
                                LinearPolar2D_Domain_write_opendx, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(LinearSpherical3D_Domain_write_opendx_overloads,
                                LinearSpherical3D_Domain_write_opendx, 2, 3);

////////////////
// TRIANGULAR //
////////////////

void TriangularCartesian2D_Domain_write_opendx(str filename, TriangularCartesian2D_Domain domain, dict accessors = dict());
void TriangularCartesian3D_Domain_write_opendx(str filename, TriangularCartesian3D_Domain domain, dict accessors = dict());
void TriangularCylindrical3D_Domain_write_opendx(str filename, TriangularCylindrical3D_Domain domain, dict accessors = dict());
void TriangularPolar2D_Domain_write_opendx(str filename, TriangularPolar2D_Domain domain, dict accessors = dict());
void TriangularSpherical3D_Domain_write_opendx(str filename, TriangularSpherical3D_Domain domain, dict accessors = dict());

BOOST_PYTHON_FUNCTION_OVERLOADS(TriangularCartesian2D_Domain_write_opendx_overloads,
                                TriangularCartesian2D_Domain_write_opendx, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(TriangularCartesian3D_Domain_write_opendx_overloads,
                                TriangularCartesian3D_Domain_write_opendx, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(TriangularCylindrical3D_Domain_write_opendx_overloads,
                                TriangularCylindrical3D_Domain_write_opendx, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(TriangularPolar2D_Domain_write_opendx_overloads,
                                TriangularPolar2D_Domain_write_opendx, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(TriangularSpherical3D_Domain_write_opendx_overloads,
                                TriangularSpherical3D_Domain_write_opendx, 2, 3);

///////////////////
// QUADRILATERAL //
///////////////////

void QuadrilateralCartesian2D_Domain_write_opendx(str filename, QuadrilateralCartesian2D_Domain domain, dict accessors = dict());
void QuadrilateralCartesian3D_Domain_write_opendx(str filename, QuadrilateralCartesian3D_Domain domain, dict accessors = dict());
void QuadrilateralCylindrical3D_Domain_write_opendx(str filename, QuadrilateralCylindrical3D_Domain domain, dict accessors = dict());
void QuadrilateralPolar2D_Domain_write_opendx(str filename, QuadrilateralPolar2D_Domain domain, dict accessors = dict());
void QuadrilateralSpherical3D_Domain_write_opendx(str filename, QuadrilateralSpherical3D_Domain domain, dict accessors = dict());

BOOST_PYTHON_FUNCTION_OVERLOADS(QuadrilateralCartesian2D_Domain_write_opendx_overloads,
                                QuadrilateralCartesian2D_Domain_write_opendx, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(QuadrilateralCartesian3D_Domain_write_opendx_overloads,
                                QuadrilateralCartesian3D_Domain_write_opendx, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(QuadrilateralCylindrical3D_Domain_write_opendx_overloads,
                                QuadrilateralCylindrical3D_Domain_write_opendx, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(QuadrilateralPolar2D_Domain_write_opendx_overloads,
                                QuadrilateralPolar2D_Domain_write_opendx, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(QuadrilateralSpherical3D_Domain_write_opendx_overloads,
                                QuadrilateralSpherical3D_Domain_write_opendx, 2, 3);

/////////////////
// TETRAHEDRAL //
/////////////////

void TetrahedralCartesian3D_Domain_write_opendx(str filename, TetrahedralCartesian3D_Domain domain, dict accessors = dict());
void TetrahedralCylindrical3D_Domain_write_opendx(str filename, TetrahedralCylindrical3D_Domain domain, dict accessors = dict());
void TetrahedralSpherical3D_Domain_write_opendx(str filename, TetrahedralSpherical3D_Domain domain, dict accessors = dict());

BOOST_PYTHON_FUNCTION_OVERLOADS(TetrahedralCartesian3D_Domain_write_opendx_overloads,
                                TetrahedralCartesian3D_Domain_write_opendx, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(TetrahedralCylindrical3D_Domain_write_opendx_overloads,
                                TetrahedralCylindrical3D_Domain_write_opendx, 2, 3);

BOOST_PYTHON_FUNCTION_OVERLOADS(TetrahedralSpherical3D_Domain_write_opendx_overloads,
                                TetrahedralSpherical3D_Domain_write_opendx, 2, 3);

#endif
