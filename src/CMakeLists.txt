cmake_minimum_required (VERSION 2.6)
project (ViennaGridWrapper)
set (version 0.1)
set (release 0.1.0)

set (DOXYGEN_INPUT "${CMAKE_CURRENT_SOURCE_DIR}" PARENT_SCOPE)

# Find Python header files (Python.h)
find_package (PythonLibs REQUIRED)
include_directories (${PYTHON_INCLUDE_PATH})

# Find Boost.Python 1.53.0
find_package (Boost 1.53.0 REQUIRED COMPONENTS python)
include_directories (${Boost_INCLUDE_DIRS})

# Add include path for ViennaGrid
include_directories (../inc/viennagrid)
# Add include path for ViennaData
include_directories (../inc/viennadata)

set (VIENNAGRID_WRAPPER_POINTS_SRC
        points/types.hpp
        points/forward.hpp
        points/cartesian.hpp
        points/cartesian.cpp
        points/cylindrical.hpp
        points/cylindrical.cpp
        points/polar.hpp
        points/polar.cpp
        points/spherical.hpp
        points/spherical.cpp)

set (VIENNAGRID_WRAPPER_DOMAINS_SRC
        domains/types.hpp
        domains/forward.hpp
        domains/linear.hpp
        domains/linear.cpp
        domains/triangular.hpp
        domains/triangular.cpp
        domains/quadrilateral.hpp
        domains/quadrilateral.cpp
        domains/tetrahedral.hpp
        domains/tetrahedral.cpp)

set (VIENNAGRID_WRAPPER_SEGMENTATIONS_SRC
        segmentations/types.hpp
        segmentations/linear.hpp
        segmentations/linear.cpp
        segmentations/triangular.hpp
        segmentations/triangular.cpp
        segmentations/quadrilateral.hpp
        segmentations/quadrilateral.cpp
        segmentations/tetrahedral.hpp
        segmentations/tetrahedral.cpp)

set (VIENNAGRID_WRAPPER_SEGMENTS_SRC
        segments/types.hpp
        segments/linear.hpp
        segments/linear.cpp
        segments/triangular.hpp
        segments/triangular.cpp
        segments/quadrilateral.hpp
        segments/quadrilateral.cpp
        segments/tetrahedral.hpp
        segments/tetrahedral.cpp)

set (VIENNAGRID_WRAPPER_CELLS_SRC
        cells/types.hpp
        cells/linear.hpp
        cells/linear.cpp
        cells/triangular.hpp
        cells/triangular.cpp
        cells/quadrilateral.hpp
        cells/quadrilateral.cpp
        cells/tetrahedral.hpp
        cells/tetrahedral.cpp)

set (VIENNAGRID_WRAPPER_VERTICES_SRC
        vertices/types.hpp
        vertices/linear.hpp
        vertices/linear.cpp
        vertices/triangular.hpp
        vertices/triangular.cpp
        vertices/quadrilateral.hpp
        vertices/quadrilateral.cpp
        vertices/tetrahedral.hpp
        vertices/tetrahedral.cpp)

set (VIENNAGRID_WRAPPER_EDGES_SRC
        edges/types.hpp
        edges/linear.hpp
        edges/linear.cpp
        edges/triangular.hpp
        edges/triangular.cpp
        edges/quadrilateral.hpp
        edges/quadrilateral.cpp
        edges/tetrahedral.hpp
        edges/tetrahedral.cpp)

set (VIENNAGRID_WRAPPER_FACETS_SRC
        facets/types.hpp
        facets/linear.hpp
        facets/linear.cpp
        facets/triangular.hpp
        facets/triangular.cpp
        facets/quadrilateral.hpp
        facets/quadrilateral.cpp
        facets/tetrahedral.hpp
        facets/tetrahedral.cpp)

set (VIENNAGRID_WRAPPER_ALGORITHMS_SRC
        algorithms/apply_voronoi.hpp
        algorithms/apply_voronoi.cpp
        algorithms/cell_centroid.hpp
        algorithms/cell_centroid.cpp
        algorithms/cell_circumcenter.hpp
        algorithms/cell_circumcenter.cpp
        algorithms/cell_refine.hpp
        algorithms/cell_refine.cpp
        algorithms/cell_surface.hpp
        algorithms/cell_surface.cpp
        algorithms/cell_volume.hpp
        algorithms/cell_volume.cpp
        algorithms/domain_surface.hpp
        algorithms/domain_surface.cpp
        algorithms/domain_volume.hpp
        algorithms/domain_volume.cpp
        algorithms/is_boundary.hpp
        algorithms/is_boundary.cpp
        algorithms/is_interface.hpp
        algorithms/is_interface.cpp
        algorithms/refine.hpp
        algorithms/refine.cpp
        algorithms/refine_uniformly.hpp
        algorithms/refine_uniformly.cpp
        algorithms/scale.hpp
        algorithms/scale.cpp
        algorithms/segment_surface.hpp
        algorithms/segment_surface.cpp
        algorithms/segment_volume.hpp
        algorithms/segment_volume.cpp
        algorithms/spanned_volume.hpp
        algorithms/spanned_volume.cpp)

set (VIENNAGRID_WRAPPER_SRC
        wrapper.cpp
        ${VIENNAGRID_WRAPPER_POINTS_SRC}
        ${VIENNAGRID_WRAPPER_DOMAINS_SRC}
        ${VIENNAGRID_WRAPPER_SEGMENTATIONS_SRC}
        ${VIENNAGRID_WRAPPER_SEGMENTS_SRC}
        ${VIENNAGRID_WRAPPER_CELLS_SRC}
        ${VIENNAGRID_WRAPPER_VERTICES_SRC}
        ${VIENNAGRID_WRAPPER_EDGES_SRC}
        ${VIENNAGRID_WRAPPER_FACETS_SRC}
        ${VIENNAGRID_WRAPPER_ALGORITHMS_SRC})

python_add_module (wrapper ${VIENNAGRID_WRAPPER_SRC})
target_link_libraries (wrapper ${Boost_LIBRARIES})
set_target_properties (wrapper PROPERTIES VERSION ${release} SOVERSION ${version})
