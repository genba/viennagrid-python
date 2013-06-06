#ifndef TYPES_HPP_O176Z3NS
#define TYPES_HPP_O176Z3NS

#include <viennagrid/forwards.hpp>
#include <viennagrid/domain/domain.hpp>
#include <viennagrid/domain/element_creation.hpp>
#include <viennagrid/point.hpp>

#include "../points/types.hpp"

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

#endif /* end of include guard: TYPES_HPP_O176Z3NS */
