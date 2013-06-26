cmake_minimum_required (VERSION 2.6)
project (ViennaGridWrapper)

# Find Python header files (Python.h)
find_package (PythonLibs REQUIRED)
include_directories (${PYTHON_INCLUDE_PATH})

# Find Boost.Python 1.53.0
find_package (Boost 1.53.0 REQUIRED COMPONENTS python)
include_directories (${Boost_INCLUDE_DIRS})

# Add include path for ViennaGrid
include_directories (../inc/ViennaGrid)
# Add include path for ViennaData
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
        domains/triangular.cpp
        domains/quadrilateral.hpp
        domains/quadrilateral.cpp
        domains/tetrahedral.hpp
        domains/tetrahedral.cpp)

set (VIENNAGRID_WRAPPER_SEGMENTS_SRC
        segments/types.hpp
        segments/triangular.hpp
        segments/triangular.cpp
        segments/quadrilateral.hpp
        segments/quadrilateral.cpp
        segments/tetrahedral.hpp
        segments/tetrahedral.cpp)

set (VIENNAGRID_WRAPPER_CELLS_SRC
        cells/types.hpp
        cells/triangular.hpp
        cells/triangular.cpp
        cells/quadrilateral.hpp
        cells/quadrilateral.cpp
        cells/tetrahedral.hpp
        cells/tetrahedral.cpp)

set (VIENNAGRID_WRAPPER_SRC
        wrapper.cpp
        ${VIENNAGRID_WRAPPER_POINTS_SRC}
        ${VIENNAGRID_WRAPPER_DOMAINS_SRC}
        ${VIENNAGRID_WRAPPER_SEGMENTS_SRC}
        ${VIENNAGRID_WRAPPER_CELLS_SRC})

add_library (viennagrid_wrapper SHARED ${VIENNAGRID_WRAPPER_SRC})
target_link_libraries (viennagrid_wrapper ${Boost_LIBRARIES})
