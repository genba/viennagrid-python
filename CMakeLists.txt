cmake_minimum_required (VERSION 2.6)
project (ViennaGridPython)

set (LIBRARY_OUTPUT_PATH "${CMAKE_BINARY_DIR}/lib")

enable_testing ()

add_subdirectory (src)               # source code of the wrapper (viennagrid_wrapper)
add_subdirectory (test)              # tests for viennagrid_wrapper
add_subdirectory (viennagrid-python) # high-level Python package viennagrid
add_subdirectory (doc)               # Sphinx and Doxygen documentation
