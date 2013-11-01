/**
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 * 
 * @file
 * @brief Type definitions for ViennaGrid fields.
 */

#ifndef FIELDS_TYPES_HPP
#define FIELDS_TYPES_HPP

#include "../vertices/types.hpp"
#include "../cells/types.hpp"

#include <viennagrid/domain/accessor.hpp>

#include <map>

/***************
 * LINEAR MESH *
 ***************/

// Line, cartesian 1D

typedef std::map<viennagrid::result_of::id<LinearCartesian1D_Vertex_t>::type, double>    LinearCartesian1D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<LinearCartesian1D_Cell_t>::type, double>      LinearCartesian1D_CellField_Container_t;

typedef viennagrid::result_of::field<LinearCartesian1D_VertexField_Container_t, LinearCartesian1D_Vertex_t>::type      LinearCartesian1D_Vertex_Field_t;
typedef viennagrid::result_of::field<LinearCartesian1D_CellField_Container_t, LinearCartesian1D_Cell_t>::type          LinearCartesian1D_Cell_Field_t;

// Line, cartesian 2D

typedef std::map<viennagrid::result_of::id<LinearCartesian2D_Vertex_t>::type, double>    LinearCartesian2D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<LinearCartesian2D_Cell_t>::type, double>      LinearCartesian2D_CellField_Container_t;

typedef viennagrid::result_of::field<LinearCartesian2D_VertexField_Container_t, LinearCartesian2D_Vertex_t>::type      LinearCartesian2D_Vertex_Field_t;
typedef viennagrid::result_of::field<LinearCartesian2D_CellField_Container_t, LinearCartesian2D_Cell_t>::type          LinearCartesian2D_Cell_Field_t;

// Line, cartesian 3D

typedef std::map<viennagrid::result_of::id<LinearCartesian3D_Vertex_t>::type, double>    LinearCartesian3D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<LinearCartesian3D_Cell_t>::type, double>      LinearCartesian3D_CellField_Container_t;

typedef viennagrid::result_of::field<LinearCartesian3D_VertexField_Container_t, LinearCartesian3D_Vertex_t>::type      LinearCartesian3D_Vertex_Field_t;
typedef viennagrid::result_of::field<LinearCartesian3D_CellField_Container_t, LinearCartesian3D_Cell_t>::type          LinearCartesian3D_Cell_Field_t;

// Line, cylindrical (3D)

typedef std::map<viennagrid::result_of::id<LinearCylindrical3D_Vertex_t>::type, double>    LinearCylindrical3D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<LinearCylindrical3D_Cell_t>::type, double>      LinearCylindrical3D_CellField_Container_t;

typedef viennagrid::result_of::field<LinearCylindrical3D_VertexField_Container_t, LinearCylindrical3D_Vertex_t>::type    LinearCylindrical3D_Vertex_Field_t;
typedef viennagrid::result_of::field<LinearCylindrical3D_CellField_Container_t, LinearCylindrical3D_Cell_t>::type        LinearCylindrical3D_Cell_Field_t;

// Line, polar (2D)

typedef std::map<viennagrid::result_of::id<LinearPolar2D_Vertex_t>::type, double>    LinearPolar2D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<LinearPolar2D_Cell_t>::type, double>      LinearPolar2D_CellField_Container_t;

typedef viennagrid::result_of::field<LinearPolar2D_VertexField_Container_t, LinearPolar2D_Vertex_t>::type          LinearPolar2D_Vertex_Field_t;
typedef viennagrid::result_of::field<LinearPolar2D_CellField_Container_t, LinearPolar2D_Cell_t>::type              LinearPolar2D_Cell_Field_t;

// Line, spherical (3D)

typedef std::map<viennagrid::result_of::id<LinearSpherical3D_Vertex_t>::type, double>    LinearSpherical3D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<LinearSpherical3D_Cell_t>::type, double>      LinearSpherical3D_CellField_Container_t;

typedef viennagrid::result_of::field<LinearSpherical3D_VertexField_Container_t, LinearSpherical3D_Vertex_t>::type      LinearSpherical3D_Vertex_Field_t;
typedef viennagrid::result_of::field<LinearSpherical3D_CellField_Container_t, LinearSpherical3D_Cell_t>::type          LinearSpherical3D_Cell_Field_t;

/*******************
 * TRIANGULAR MESH *
 *******************/

// Triangle, cartesian 2D

typedef std::map<viennagrid::result_of::id<TriangularCartesian2D_Vertex_t>::type, double>    TriangularCartesian2D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<TriangularCartesian2D_Cell_t>::type, double>      TriangularCartesian2D_CellField_Container_t;

typedef viennagrid::result_of::field<TriangularCartesian2D_VertexField_Container_t, TriangularCartesian2D_Vertex_t>::type      TriangularCartesian2D_Vertex_Field_t;
typedef viennagrid::result_of::field<TriangularCartesian2D_CellField_Container_t, TriangularCartesian2D_Cell_t>::type          TriangularCartesian2D_Cell_Field_t;

// Triangle, cartesian 3D

typedef std::map<viennagrid::result_of::id<TriangularCartesian3D_Vertex_t>::type, double>    TriangularCartesian3D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<TriangularCartesian3D_Cell_t>::type, double>      TriangularCartesian3D_CellField_Container_t;

typedef viennagrid::result_of::field<TriangularCartesian3D_VertexField_Container_t, TriangularCartesian3D_Vertex_t>::type      TriangularCartesian3D_Vertex_Field_t;
typedef viennagrid::result_of::field<TriangularCartesian3D_CellField_Container_t, TriangularCartesian3D_Cell_t>::type          TriangularCartesian3D_Cell_Field_t;

// Triangle, cylindrical (3D)

typedef std::map<viennagrid::result_of::id<TriangularCylindrical3D_Vertex_t>::type, double>    TriangularCylindrical3D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<TriangularCylindrical3D_Cell_t>::type, double>      TriangularCylindrical3D_CellField_Container_t;

typedef viennagrid::result_of::field<TriangularCylindrical3D_VertexField_Container_t, TriangularCylindrical3D_Vertex_t>::type    TriangularCylindrical3D_Vertex_Field_t;
typedef viennagrid::result_of::field<TriangularCylindrical3D_CellField_Container_t, TriangularCylindrical3D_Cell_t>::type        TriangularCylindrical3D_Cell_Field_t;

// Triangle, polar (2D)

typedef std::map<viennagrid::result_of::id<TriangularPolar2D_Vertex_t>::type, double>    TriangularPolar2D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<TriangularPolar2D_Cell_t>::type, double>      TriangularPolar2D_CellField_Container_t;

typedef viennagrid::result_of::field<TriangularPolar2D_VertexField_Container_t, TriangularPolar2D_Vertex_t>::type          TriangularPolar2D_Vertex_Field_t;
typedef viennagrid::result_of::field<TriangularPolar2D_CellField_Container_t, TriangularPolar2D_Cell_t>::type              TriangularPolar2D_Cell_Field_t;

// Triangle, spherical (3D)

typedef std::map<viennagrid::result_of::id<TriangularSpherical3D_Vertex_t>::type, double>    TriangularSpherical3D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<TriangularSpherical3D_Cell_t>::type, double>      TriangularSpherical3D_CellField_Container_t;

typedef viennagrid::result_of::field<TriangularSpherical3D_VertexField_Container_t, TriangularSpherical3D_Vertex_t>::type      TriangularSpherical3D_Vertex_Field_t;
typedef viennagrid::result_of::field<TriangularSpherical3D_CellField_Container_t, TriangularSpherical3D_Cell_t>::type          TriangularSpherical3D_Cell_Field_t;

/**********************
 * QUADRILATERAL MESH *
 **********************/

// Quadrilateral, cartesian 2D

typedef std::map<viennagrid::result_of::id<QuadrilateralCartesian2D_Vertex_t>::type, double>    QuadrilateralCartesian2D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<QuadrilateralCartesian2D_Cell_t>::type, double>      QuadrilateralCartesian2D_CellField_Container_t;

typedef viennagrid::result_of::field<QuadrilateralCartesian2D_VertexField_Container_t, QuadrilateralCartesian2D_Vertex_t>::type      QuadrilateralCartesian2D_Vertex_Field_t;
typedef viennagrid::result_of::field<QuadrilateralCartesian2D_CellField_Container_t, QuadrilateralCartesian2D_Cell_t>::type          QuadrilateralCartesian2D_Cell_Field_t;

// Quadrilateral, cartesian 3D

typedef std::map<viennagrid::result_of::id<QuadrilateralCartesian3D_Vertex_t>::type, double>    QuadrilateralCartesian3D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<QuadrilateralCartesian3D_Cell_t>::type, double>      QuadrilateralCartesian3D_CellField_Container_t;

typedef viennagrid::result_of::field<QuadrilateralCartesian3D_VertexField_Container_t, QuadrilateralCartesian3D_Vertex_t>::type      QuadrilateralCartesian3D_Vertex_Field_t;
typedef viennagrid::result_of::field<QuadrilateralCartesian3D_CellField_Container_t, QuadrilateralCartesian3D_Cell_t>::type          QuadrilateralCartesian3D_Cell_Field_t;

// Quadrilateral, cylindrical (3D)

typedef std::map<viennagrid::result_of::id<QuadrilateralCylindrical3D_Vertex_t>::type, double>    QuadrilateralCylindrical3D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<QuadrilateralCylindrical3D_Cell_t>::type, double>      QuadrilateralCylindrical3D_CellField_Container_t;

typedef viennagrid::result_of::field<QuadrilateralCylindrical3D_VertexField_Container_t, QuadrilateralCylindrical3D_Vertex_t>::type    QuadrilateralCylindrical3D_Vertex_Field_t;
typedef viennagrid::result_of::field<QuadrilateralCylindrical3D_CellField_Container_t, QuadrilateralCylindrical3D_Cell_t>::type        QuadrilateralCylindrical3D_Cell_Field_t;

// Quadrilateral, polar (2D)

typedef std::map<viennagrid::result_of::id<QuadrilateralPolar2D_Vertex_t>::type, double>    QuadrilateralPolar2D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<QuadrilateralPolar2D_Cell_t>::type, double>      QuadrilateralPolar2D_CellField_Container_t;

typedef viennagrid::result_of::field<QuadrilateralPolar2D_VertexField_Container_t, QuadrilateralPolar2D_Vertex_t>::type          QuadrilateralPolar2D_Vertex_Field_t;
typedef viennagrid::result_of::field<QuadrilateralPolar2D_CellField_Container_t, QuadrilateralPolar2D_Cell_t>::type              QuadrilateralPolar2D_Cell_Field_t;

// Quadrilateral, spherical (3D)

typedef std::map<viennagrid::result_of::id<QuadrilateralSpherical3D_Vertex_t>::type, double>    QuadrilateralSpherical3D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<QuadrilateralSpherical3D_Cell_t>::type, double>      QuadrilateralSpherical3D_CellField_Container_t;

typedef viennagrid::result_of::field<QuadrilateralSpherical3D_VertexField_Container_t, QuadrilateralSpherical3D_Vertex_t>::type      QuadrilateralSpherical3D_Vertex_Field_t;
typedef viennagrid::result_of::field<QuadrilateralSpherical3D_CellField_Container_t, QuadrilateralSpherical3D_Cell_t>::type          QuadrilateralSpherical3D_Cell_Field_t;

/**********************
 * TETRAHEDRAL MESH *
 **********************/

// Tetrahedral, cartesian 3D

typedef std::map<viennagrid::result_of::id<TetrahedralCartesian3D_Vertex_t>::type, double>    TetrahedralCartesian3D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<TetrahedralCartesian3D_Cell_t>::type, double>      TetrahedralCartesian3D_CellField_Container_t;

typedef viennagrid::result_of::field<TetrahedralCartesian3D_VertexField_Container_t, TetrahedralCartesian3D_Vertex_t>::type      TetrahedralCartesian3D_Vertex_Field_t;
typedef viennagrid::result_of::field<TetrahedralCartesian3D_CellField_Container_t, TetrahedralCartesian3D_Cell_t>::type          TetrahedralCartesian3D_Cell_Field_t;

// Tetrahedral, cylindrical (3D)

typedef std::map<viennagrid::result_of::id<TetrahedralCylindrical3D_Vertex_t>::type, double>    TetrahedralCylindrical3D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<TetrahedralCylindrical3D_Cell_t>::type, double>      TetrahedralCylindrical3D_CellField_Container_t;

typedef viennagrid::result_of::field<TetrahedralCylindrical3D_VertexField_Container_t, TetrahedralCylindrical3D_Vertex_t>::type    TetrahedralCylindrical3D_Vertex_Field_t;
typedef viennagrid::result_of::field<TetrahedralCylindrical3D_CellField_Container_t, TetrahedralCylindrical3D_Cell_t>::type        TetrahedralCylindrical3D_Cell_Field_t;

// Tetrahedral, spherical (3D)

typedef std::map<viennagrid::result_of::id<TetrahedralSpherical3D_Vertex_t>::type, double>    TetrahedralSpherical3D_VertexField_Container_t;
typedef std::map<viennagrid::result_of::id<TetrahedralSpherical3D_Cell_t>::type, double>      TetrahedralSpherical3D_CellField_Container_t;

typedef viennagrid::result_of::field<TetrahedralSpherical3D_VertexField_Container_t, TetrahedralSpherical3D_Vertex_t>::type      TetrahedralSpherical3D_Vertex_Field_t;
typedef viennagrid::result_of::field<TetrahedralSpherical3D_CellField_Container_t, TetrahedralSpherical3D_Cell_t>::type          TetrahedralSpherical3D_Cell_Field_t;

#endif /* end of include guard: FIELDS_TYPES_HPP */
