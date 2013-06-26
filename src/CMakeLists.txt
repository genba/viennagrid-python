cmake_minimum_required (VERSION 2.6)

find_package (PythonLibs REQUIRED)
include_directories (${PYTHON_INCLUDE_PATH})

FIND_PACKAGE(Boost)
IF(Boost_FOUND)
  INCLUDE_DIRECTORIES("${Boost_INCLUDE_DIRS}")
  SET(Boost_USE_STATIC_LIBS OFF)
  SET(Boost_USE_MULTITHREADED ON)
  SET(Boost_USE_STATIC_RUNTIME OFF)
  FIND_PACKAGE(Boost COMPONENTS python)
ELSEIF(NOT Boost_FOUND)
  MESSAGE(FATAL_ERROR "Unable to find correct Boost version. Did you set BOOST_ROOT?")
ENDIF()
# http://preney.ca/paul/archives/107

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
