cmake_minimum_required (VERSION 2.6)
project (ViennaGridPythonPackage)

find_package (PythonInterp REQUIRED)

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

set (OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/build/timestamp")

add_custom_command (OUTPUT  ${OUTPUT}
                    COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_CURRENT_SOURCE_DIR}/viennagrid" "${CMAKE_CURRENT_BINARY_DIR}/viennagrid"
                    COMMAND ${CMAKE_COMMAND} -E copy "${LIBRARY_OUTPUT_PATH}/viennagrid_wrapper.so" "${CMAKE_CURRENT_BINARY_DIR}/viennagrid"
                    COMMAND python "${SETUP_PY}" sdist
                    COMMAND ${CMAKE_COMMAND} -E touch ${OUTPUT}
                    DEPENDS viennagrid_wrapper)

add_custom_target (package ALL DEPENDS ${OUTPUT})

install (CODE "execute_process (COMMAND python \"${SETUP_PY}\" install)")
