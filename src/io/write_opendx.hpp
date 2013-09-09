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

#include <string>
using namespace std;

////////////
// LINEAR //
////////////

void LinearCartesian1D_Domain_write_opendx(string const &filename, LinearCartesian1D_Domain *domain);
void LinearCartesian2D_Domain_write_opendx(string const &filename, LinearCartesian2D_Domain *domain);
void LinearCartesian3D_Domain_write_opendx(string const &filename, LinearCartesian3D_Domain *domain);
void LinearCylindrical3D_Domain_write_opendx(string const &filename, LinearCylindrical3D_Domain *domain);
void LinearPolar2D_Domain_write_opendx(string const &filename, LinearPolar2D_Domain *domain);
void LinearSpherical3D_Domain_write_opendx(string const &filename, LinearSpherical3D_Domain *domain);

////////////////
// TRIANGULAR //
////////////////

void TriangularCartesian2D_Domain_write_opendx(string const &filename, TriangularCartesian2D_Domain *domain);
void TriangularCartesian3D_Domain_write_opendx(string const &filename, TriangularCartesian3D_Domain *domain);
void TriangularCylindrical3D_Domain_write_opendx(string const &filename, TriangularCylindrical3D_Domain *domain);
void TriangularPolar2D_Domain_write_opendx(string const &filename, TriangularPolar2D_Domain *domain);
void TriangularSpherical3D_Domain_write_opendx(string const &filename, TriangularSpherical3D_Domain *domain);

///////////////////
// QUADRILATERAL //
///////////////////

void QuadrilateralCartesian2D_Domain_write_opendx(string const &filename, QuadrilateralCartesian2D_Domain *domain);
void QuadrilateralCartesian3D_Domain_write_opendx(string const &filename, QuadrilateralCartesian3D_Domain *domain);
void QuadrilateralCylindrical3D_Domain_write_opendx(string const &filename, QuadrilateralCylindrical3D_Domain *domain);
void QuadrilateralPolar2D_Domain_write_opendx(string const &filename, QuadrilateralPolar2D_Domain *domain);
void QuadrilateralSpherical3D_Domain_write_opendx(string const &filename, QuadrilateralSpherical3D_Domain *domain);

/////////////////
// TETRAHEDRAL //
/////////////////

void TetrahedralCartesian3D_Domain_write_opendx(string const &filename, TetrahedralCartesian3D_Domain *domain);
void TetrahedralCylindrical3D_Domain_write_opendx(string const &filename, TetrahedralCylindrical3D_Domain *domain);
void TetrahedralSpherical3D_Domain_write_opendx(string const &filename, TetrahedralSpherical3D_Domain *domain);

#endif
