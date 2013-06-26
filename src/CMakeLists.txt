cmake_minimum_required (VERSION 2.6)

find_package (PythonLibs REQUIRED)
include_directories (${PYTHON_INCLUDE_PATH})

# Find Boost.Python 1.53.0
find_package (Boost 1.53.0 REQUIRED COMPONENTS python)
include_directories (${Boost_INCLUDE_DIRS})

# Include ViennaGrid
include_directories (../inc/ViennaGrid)
include_directories (../inc/ViennaGrid/external)

set (VIENNAGRID_WRAPPER_POINTS_SRC
        points/types.hpp
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
        domains/triangular.hpp
        domains/triangular.cpp)

set (VIENNAGRID_WRAPPER_SEGMENTS_SRC
        domains/types.hpp
        domains/triangular.hpp
        domains/triangular.cpp)

set (VIENNAGRID_WRAPPER_SRC
        wrapper.cpp
        ${VIENNAGRID_WRAPPER_POINTS_SRC}
        ${VIENNAGRID_WRAPPER_DOMAINS_SRC}
        ${VIENNAGRID_WRAPPER_SEGMENTS_SRC})

add_library (viennagrid_wrapper SHARED ${VIENNAGRID_WRAPPER_SRC})
target_link_libraries (viennagrid_wrapper ${Boost_LIBRARIES})
