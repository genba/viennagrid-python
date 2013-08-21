#ifndef DOMAINS_TYPES_HPP
#define DOMAINS_TYPES_HPP

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
struct LinearCartesian1D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::line_tag,
	                                                          PointCartesian1D_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<LinearCartesian1D_DomainConfig>                                         LinearCartesian1D_Domain_t;

// Line, cartesian 2D
struct LinearCartesian2D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::line_tag,
	                                                          PointCartesian2D_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<LinearCartesian2D_DomainConfig>                                         LinearCartesian2D_Domain_t;

// Line, cartesian 3D
struct LinearCartesian3D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::line_tag,
	                                                          PointCartesian3D_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<LinearCartesian3D_DomainConfig>                                         LinearCartesian3D_Domain_t;

// Line, cylindrical (3D)
struct LinearCylindrical3D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::line_tag,
	                                                          PointCylindrical_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<LinearCylindrical3D_DomainConfig>                                       LinearCylindrical3D_Domain_t;

// Line, polar (2D)
struct LinearPolar2D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::line_tag,
	                                                          PointPolar_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<LinearPolar2D_DomainConfig>                                             LinearPolar2D_Domain_t;

// Line, spherical (3D)
struct LinearSpherical3D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::line_tag,
	                                                          PointSpherical_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<LinearSpherical3D_DomainConfig>                                         LinearSpherical3D_Domain_t;

/*******************
 * TRIANGULAR MESH *
 *******************/

// Triangle, cartesian 2D
struct TriangularCartesian2D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::triangle_tag,
	                                                          PointCartesian2D_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<TriangularCartesian2D_DomainConfig>                                     TriangularCartesian2D_Domain_t;

// Triangle, cartesian 3D
struct TriangularCartesian3D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::triangle_tag,
	                                                          PointCartesian3D_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<TriangularCartesian3D_DomainConfig>                                     TriangularCartesian3D_Domain_t;

// Triangle, cylindrical (3D)
struct TriangularCylindrical3D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::triangle_tag,
	                                                          PointCylindrical_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<TriangularCylindrical3D_DomainConfig>                                   TriangularCylindrical3D_Domain_t;

// Triangle, polar (2D)
struct TriangularPolar2D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::triangle_tag,
	                                                          PointPolar_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<TriangularPolar2D_DomainConfig>                                         TriangularPolar2D_Domain_t;

// Triangle, spherical (3D)
struct TriangularSpherical3D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::triangle_tag,
	                                                          PointSpherical_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<TriangularSpherical3D_DomainConfig>                                     TriangularSpherical3D_Domain_t;

/**********************
 * QUADRILATERAL MESH *
 **********************/

// Quadrilateral, cartesian 2D
struct QuadrilateralCartesian2D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::quadrilateral_tag,
	                                                          PointCartesian2D_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<QuadrilateralCartesian2D_DomainConfig>                                  QuadrilateralCartesian2D_Domain_t;
// Quadrilateral, cartesian 3D
struct QuadrilateralCartesian3D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::quadrilateral_tag,
	                                                          PointCartesian3D_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<QuadrilateralCartesian3D_DomainConfig>                                  QuadrilateralCartesian3D_Domain_t;
// Quadrilateral, cylindrical (3D)
struct QuadrilateralCylindrical3D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::quadrilateral_tag,
	                                                          PointCylindrical_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<QuadrilateralCylindrical3D_DomainConfig>                                QuadrilateralCylindrical3D_Domain_t;
// Quadrilateral, polar (2D)
struct QuadrilateralPolar2D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::quadrilateral_tag,
	                                                          PointPolar_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<QuadrilateralPolar2D_DomainConfig>                                      QuadrilateralPolar2D_Domain_t;
// Quadrilateral, spherical (3D)
struct QuadrilateralSpherical3D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::quadrilateral_tag,
	                                                          PointSpherical_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<QuadrilateralSpherical3D_DomainConfig>                                  QuadrilateralSpherical3D_Domain_t;

/********************
 * TETRAHEDRAL MESH *
 ********************/

// Tetrahedral, cartesian 3D
struct TetrahedralCartesian3D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::tetrahedron_tag,
	                                                          PointCartesian3D_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<TetrahedralCartesian3D_DomainConfig>                                    TetrahedralCartesian3D_Domain_t;
// Tetrahedral, cylindrical (3D)
struct TetrahedralCylindrical3D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::tetrahedron_tag,
	                                                          PointCylindrical_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<TetrahedralCylindrical3D_DomainConfig>                                  TetrahedralCylindrical3D_Domain_t;
// Tetrahedral, spherical (3D)
struct TetrahedralSpherical3D_DomainConfig {
	typedef viennagrid::config::result_of::full_domain_config<viennagrid::tetrahedron_tag,
	                                                          PointSpherical_t,
	                                                          viennagrid::storage::id_handle_tag>::type    type;
};
typedef viennagrid::domain_t<TetrahedralSpherical3D_DomainConfig>                                    TetrahedralSpherical3D_Domain_t;

#endif /* end of include guard: DOMAINS_TYPES_HPP */
