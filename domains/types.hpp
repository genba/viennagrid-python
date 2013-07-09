#ifndef TYPES_HPP_O176Z3NS
#define TYPES_HPP_O176Z3NS

#include <viennagrid/forwards.hpp>
#include <viennagrid/domain/domain.hpp>
#include <viennagrid/domain/element_creation.hpp>
#include <viennagrid/point.hpp>
#include <viennagrid/topology/quadrilateral.hpp>

#include "../points/types.hpp"

/***************
 * LINEAR MESH *
 ***************/

// Line, cartesian 1D
typedef viennagrid::result_of::domain_config<viennagrid::line_tag,
                                             PointCartesian1D_t,
                                             viennagrid::storage::id_handle_tag>::type    LinearCartesian1D_DomainConfig;
typedef viennagrid::result_of::domain<LinearCartesian1D_DomainConfig>::type               LinearCartesian1D_Domain_t;

// Line, cartesian 2D
typedef viennagrid::result_of::domain_config<viennagrid::line_tag,
                                             PointCartesian2D_t,
                                             viennagrid::storage::id_handle_tag>::type    LinearCartesian2D_DomainConfig;
typedef viennagrid::result_of::domain<LinearCartesian2D_DomainConfig>::type               LinearCartesian2D_Domain_t;

// Line, cartesian 3D
typedef viennagrid::result_of::domain_config<viennagrid::line_tag,
                                             PointCartesian3D_t,
                                             viennagrid::storage::id_handle_tag>::type    LinearCartesian3D_DomainConfig;
typedef viennagrid::result_of::domain<LinearCartesian3D_DomainConfig>::type               LinearCartesian3D_Domain_t;

// Line, cylindrical (3D)
typedef viennagrid::result_of::domain_config<viennagrid::line_tag,
                                             PointCylindrical_t,
                                             viennagrid::storage::id_handle_tag>::type    LinearCylindrical3D_DomainConfig;
typedef viennagrid::result_of::domain<LinearCylindrical3D_DomainConfig>::type             LinearCylindrical3D_Domain_t;

// Line, polar (2D)
typedef viennagrid::result_of::domain_config<viennagrid::line_tag,
                                             PointPolar_t,
                                             viennagrid::storage::id_handle_tag>::type    LinearPolar2D_DomainConfig;
typedef viennagrid::result_of::domain<LinearPolar2D_DomainConfig>::type                   LinearPolar2D_Domain_t;

// Line, spherical (3D)
typedef viennagrid::result_of::domain_config<viennagrid::line_tag,
                                             PointSpherical_t,
                                             viennagrid::storage::id_handle_tag>::type    LinearSpherical3D_DomainConfig;
typedef viennagrid::result_of::domain<LinearSpherical3D_DomainConfig>::type               LinearSpherical3D_Domain_t;

/*******************
 * TRIANGULAR MESH *
 *******************/

// Triangle, cartesian 2D
typedef viennagrid::result_of::domain_config<viennagrid::triangle_tag,
                                             PointCartesian2D_t,
                                             viennagrid::storage::id_handle_tag>::type    TriangularCartesian2D_DomainConfig;
typedef viennagrid::result_of::domain<TriangularCartesian2D_DomainConfig>::type           TriangularCartesian2D_Domain_t;

// Triangle, cartesian 3D
typedef viennagrid::result_of::domain_config<viennagrid::triangle_tag,
                                             PointCartesian3D_t,
                                             viennagrid::storage::id_handle_tag>::type    TriangularCartesian3D_DomainConfig;
typedef viennagrid::result_of::domain<TriangularCartesian3D_DomainConfig>::type           TriangularCartesian3D_Domain_t;

// Triangle, cylindrical (3D)
typedef viennagrid::result_of::domain_config<viennagrid::triangle_tag,
                                             PointCylindrical_t,
                                             viennagrid::storage::id_handle_tag>::type    TriangularCylindrical3D_DomainConfig;
typedef viennagrid::result_of::domain<TriangularCylindrical3D_DomainConfig>::type         TriangularCylindrical3D_Domain_t;

// Triangle, polar (2D)
typedef viennagrid::result_of::domain_config<viennagrid::triangle_tag,
                                             PointPolar_t,
                                             viennagrid::storage::id_handle_tag>::type    TriangularPolar2D_DomainConfig;
typedef viennagrid::result_of::domain<TriangularPolar2D_DomainConfig>::type               TriangularPolar2D_Domain_t;

// Triangle, spherical (3D)
typedef viennagrid::result_of::domain_config<viennagrid::triangle_tag,
                                             PointSpherical_t,
                                             viennagrid::storage::id_handle_tag>::type    TriangularSpherical3D_DomainConfig;
typedef viennagrid::result_of::domain<TriangularSpherical3D_DomainConfig>::type           TriangularSpherical3D_Domain_t;

/**********************
 * QUADRILATERAL MESH *
 **********************/

// Quadrilateral, cartesian 2D
typedef viennagrid::result_of::domain_config<viennagrid::quadrilateral_tag,
                                             PointCartesian2D_t,
                                             viennagrid::storage::id_handle_tag>::type    QuadrilateralCartesian2D_DomainConfig;
typedef viennagrid::result_of::domain<QuadrilateralCartesian2D_DomainConfig>::type        QuadrilateralCartesian2D_Domain_t;
// Quadrilateral, cartesian 3D
typedef viennagrid::result_of::domain_config<viennagrid::quadrilateral_tag,
                                             PointCartesian3D_t,
                                             viennagrid::storage::id_handle_tag>::type    QuadrilateralCartesian3D_DomainConfig;
typedef viennagrid::result_of::domain<QuadrilateralCartesian3D_DomainConfig>::type        QuadrilateralCartesian3D_Domain_t;
// Quadrilateral, cylindrical (3D)
typedef viennagrid::result_of::domain_config<viennagrid::quadrilateral_tag,
                                             PointCylindrical_t,
                                             viennagrid::storage::id_handle_tag>::type    QuadrilateralCylindrical3D_DomainConfig;
typedef viennagrid::result_of::domain<QuadrilateralCylindrical3D_DomainConfig>::type      QuadrilateralCylindrical3D_Domain_t;
// Quadrilateral, polar (2D)
typedef viennagrid::result_of::domain_config<viennagrid::quadrilateral_tag,
                                             PointPolar_t,
                                             viennagrid::storage::id_handle_tag>::type    QuadrilateralPolar2D_DomainConfig;
typedef viennagrid::result_of::domain<QuadrilateralPolar2D_DomainConfig>::type            QuadrilateralPolar2D_Domain_t;
// Quadrilateral, spherical (3D)
typedef viennagrid::result_of::domain_config<viennagrid::quadrilateral_tag,
                                             PointSpherical_t,
                                             viennagrid::storage::id_handle_tag>::type    QuadrilateralSpherical3D_DomainConfig;
typedef viennagrid::result_of::domain<QuadrilateralSpherical3D_DomainConfig>::type        QuadrilateralSpherical3D_Domain_t;

/********************
 * TETRAHEDRAL MESH *
 ********************/

// Tetrahedral, cartesian 3D
typedef viennagrid::result_of::domain_config<viennagrid::tetrahedron_tag,
                                             PointCartesian3D_t,
                                             viennagrid::storage::id_handle_tag>::type    TetrahedralCartesian3D_DomainConfig;
typedef viennagrid::result_of::domain<TetrahedralCartesian3D_DomainConfig>::type          TetrahedralCartesian3D_Domain_t;
// Tetrahedral, cylindrical (3D)
typedef viennagrid::result_of::domain_config<viennagrid::tetrahedron_tag,
                                             PointCylindrical_t,
                                             viennagrid::storage::id_handle_tag>::type    TetrahedralCylindrical3D_DomainConfig;
typedef viennagrid::result_of::domain<TetrahedralCylindrical3D_DomainConfig>::type        TetrahedralCylindrical3D_Domain_t;
// Tetrahedral, spherical (3D)
typedef viennagrid::result_of::domain_config<viennagrid::tetrahedron_tag,
                                             PointSpherical_t,
                                             viennagrid::storage::id_handle_tag>::type    TetrahedralSpherical3D_DomainConfig;
typedef viennagrid::result_of::domain<TetrahedralSpherical3D_DomainConfig>::type          TetrahedralSpherical3D_Domain_t;

#endif /* end of include guard: TYPES_HPP_O176Z3NS */
