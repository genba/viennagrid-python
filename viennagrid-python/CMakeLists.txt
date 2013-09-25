cmake_minimum_required (VERSION 2.6)
project (ViennaGridPythonPackage)

find_package (PythonInterp REQUIRED)

set (PYTHON_SRC_FILES
          "${CMAKE_CURRENT_SOURCE_DIR}/viennagrid/__init__.py"
          "${CMAKE_CURRENT_SOURCE_DIR}/viennagrid/config.py"
          "${CMAKE_CURRENT_SOURCE_DIR}/viennagrid/io.py"
          "${CMAKE_CURRENT_SOURCE_DIR}/viennagrid/algorithms.py"
          "${CMAKE_CURRENT_SOURCE_DIR}/viennagrid/accessors.py")

set (SETUP_PY_IN "${CMAKE_CURRENT_SOURCE_DIR}/setup.py")
set (SETUP_PY    "${CMAKE_CURRENT_BINARY_DIR}/setup.py")

set (README_IN   "${CMAKE_CURRENT_SOURCE_DIR}/README.txt")
set (README      "${CMAKE_CURRENT_BINARY_DIR}/README.txt")

set (MANIFEST_IN "${CMAKE_CURRENT_SOURCE_DIR}/MANIFEST.in")
set (MANIFEST    "${CMAKE_CURRENT_BINARY_DIR}/MANIFEST.in")

set (LICENSE_IN  "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE.txt")
set (LICENSE     "${CMAKE_CURRENT_BINARY_DIR}/LICENSE.txt")

set (CHANGES_IN  "${CMAKE_CURRENT_SOURCE_DIR}/CHANGES.txt")
set (CHANGES     "${CMAKE_CURRENT_BINARY_DIR}/CHANGES.txt")

configure_file (${SETUP_PY_IN} ${SETUP_PY} @ONLY)
configure_file (${README_IN} ${README} @ONLY)
configure_file (${MANIFEST_IN} ${MANIFEST} @ONLY)
configure_file (${LICENSE_IN} ${LICENSE} @ONLY)
configure_file (${CHANGES_IN} ${CHANGES} @ONLY)

# Targert packagesrc to gather the Python source code files and the wrapper shared object
# in order to create a Python package

set (PACKAGESRC_OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/packagesrc")

add_custom_command (OUTPUT ${PACKAGESRC_OUTPUT}
                    COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_CURRENT_SOURCE_DIR}/viennagrid" "${CMAKE_CURRENT_BINARY_DIR}/viennagrid"
                    COMMAND ${CMAKE_COMMAND} -E copy "${LIBRARY_OUTPUT_PATH}/wrapper.so" "${CMAKE_CURRENT_BINARY_DIR}/viennagrid"
                    COMMAND python "${SETUP_PY}" sdist
                    COMMAND ${CMAKE_COMMAND} -E touch ${PACKAGESRC_OUTPUT}
                    SOURCES ${PYTHON_SRC_FILES}
                    DEPENDS wrapper ${PYTHON_SRC_FILES})

add_custom_target (packagesrc ALL DEPENDS ${PACKAGESRC_OUTPUT})

# Targert packagedoc to gather the Sphinx documentation files in order to add them
# to the Python package

set (PACKAGEDOC_OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/packagedoc")

add_custom_command (OUTPUT ${PACKAGEDOC_OUTPUT}
                    COMMAND ${CMAKE_COMMAND} -E make_directory "${CMAKE_CURRENT_BINARY_DIR}/doc"
                    COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_CURRENT_BINARY_DIR}/../doc/sphinx/html" "${CMAKE_CURRENT_BINARY_DIR}/doc"
                    COMMAND ${CMAKE_COMMAND} -E remove "${CMAKE_CURRENT_BINARY_DIR}/doc/.buildinfo"
                    COMMAND ${CMAKE_COMMAND} -E remove "${CMAKE_CURRENT_BINARY_DIR}/doc/objects.inv"
                    COMMAND python "${SETUP_PY}" sdist
                    COMMAND ${CMAKE_COMMAND} -E touch ${PACKAGEDOC_OUTPUT}
                    DEPENDS ${PACKAGESRC_OUTPUT} sphinx)

add_custom_target (packagedoc ALL DEPENDS ${PACKAGEDOC_OUTPUT})

add_custom_target (package ALL DEPENDS packagesrc packagedoc)

install (CODE "execute_process (COMMAND python \"${SETUP_PY}\" install)")
