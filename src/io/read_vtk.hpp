#ifndef IO_READ_VTK_HPP
#define IO_READ_VTK_HPP

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
using namespace std;

////////////
// LINEAR //
////////////

void LinearCartesian1D_Domain_read_vtk(string const &filename, LinearCartesian1D_Domain *domain, LinearCartesian1D_Segmentation *segmentation = NULL);
void LinearCartesian2D_Domain_read_vtk(string const &filename, LinearCartesian2D_Domain *domain, LinearCartesian2D_Segmentation *segmentation = NULL);
void LinearCartesian3D_Domain_read_vtk(string const &filename, LinearCartesian3D_Domain *domain, LinearCartesian3D_Segmentation *segmentation = NULL);
void LinearCylindrical3D_Domain_read_vtk(string const &filename, LinearCylindrical3D_Domain *domain, LinearCylindrical3D_Segmentation *segmentation = NULL);
void LinearPolar2D_Domain_read_vtk(string const &filename, LinearPolar2D_Domain *domain, LinearPolar2D_Segmentation *segmentation = NULL);
void LinearSpherical3D_Domain_read_vtk(string const &filename, LinearSpherical3D_Domain *domain, LinearSpherical3D_Segmentation *segmentation = NULL);

////////////////
// TRIANGULAR //
////////////////

void TriangularCartesian2D_Domain_read_vtk(string const &filename, TriangularCartesian2D_Domain *domain, TriangularCartesian2D_Segmentation *segmentation = NULL);
void TriangularCartesian3D_Domain_read_vtk(string const &filename, TriangularCartesian3D_Domain *domain, TriangularCartesian3D_Segmentation *segmentation = NULL);
void TriangularCylindrical3D_Domain_read_vtk(string const &filename, TriangularCylindrical3D_Domain *domain, TriangularCylindrical3D_Segmentation *segmentation = NULL);
void TriangularPolar2D_Domain_read_vtk(string const &filename, TriangularPolar2D_Domain *domain, TriangularPolar2D_Segmentation *segmentation = NULL);
void TriangularSpherical3D_Domain_read_vtk(string const &filename, TriangularSpherical3D_Domain *domain, TriangularSpherical3D_Segmentation *segmentation = NULL);

///////////////////
// QUADRILATERAL //
///////////////////

void QuadrilateralCartesian2D_Domain_read_vtk(string const &filename, QuadrilateralCartesian2D_Domain *domain, QuadrilateralCartesian2D_Segmentation *segmentation = NULL);
void QuadrilateralCartesian3D_Domain_read_vtk(string const &filename, QuadrilateralCartesian3D_Domain *domain, QuadrilateralCartesian3D_Segmentation *segmentation = NULL);
void QuadrilateralCylindrical3D_Domain_read_vtk(string const &filename, QuadrilateralCylindrical3D_Domain *domain, QuadrilateralCylindrical3D_Segmentation *segmentation = NULL);
void QuadrilateralPolar2D_Domain_read_vtk(string const &filename, QuadrilateralPolar2D_Domain *domain, QuadrilateralPolar2D_Segmentation *segmentation = NULL);
void QuadrilateralSpherical3D_Domain_read_vtk(string const &filename, QuadrilateralSpherical3D_Domain *domain, QuadrilateralSpherical3D_Segmentation *segmentation = NULL);

/////////////////
// TETRAHEDRAL //
/////////////////

void TetrahedralCartesian3D_Domain_read_vtk(string const &filename, TetrahedralCartesian3D_Domain *domain, TetrahedralCartesian3D_Segmentation *segmentation = NULL);
void TetrahedralCylindrical3D_Domain_read_vtk(string const &filename, TetrahedralCylindrical3D_Domain *domain, TetrahedralCylindrical3D_Segmentation *segmentation = NULL);
void TetrahedralSpherical3D_Domain_read_vtk(string const &filename, TetrahedralSpherical3D_Domain *domain, TetrahedralSpherical3D_Segmentation *segmentation = NULL);

#endif
