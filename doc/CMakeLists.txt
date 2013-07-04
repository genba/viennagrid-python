cmake_minimum_required (VERSION 2.6)

set (TARGETS)

# Find executable sphinx-build and add target for Sphinx documentation if sphinx-build is found.
# If sphinx-build cannot be found, issue a warning and continue, but do not add target for Sphinx documentation.
find_program (SPHINX_BUILD_EXECUTABLE sphinx-build)
if (SPHINX_BUILD_EXECUTABLE)
	set (WRAPPER_LOCATION "${PROJECT_BINARY_DIR}/src") # TODO: find if CMake provides a better way to do this (like e.g. LIBRARY_PATH)
	set (SPHINX_SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/sphinx/source")
	
	# configured documentation tools and intermediate build results
	set (SPHINX_CONF_DIR "${CMAKE_CURRENT_BINARY_DIR}/sphinx")
	# Sphinx cache with pickled ReST documents
	set (SPHINX_CACHE_DIR "${CMAKE_CURRENT_BINARY_DIR}/sphinx/_doctrees")
	# HTML output directory
	set (SPHINX_HTML_DIR "${CMAKE_CURRENT_BINARY_DIR}/sphinx/html")

	configure_file("${SPHINX_SRC_DIR}/conf.py.in" "${SPHINX_CONF_DIR}/conf.py" @ONLY)
	add_custom_target (sphinx
	                   ${SPHINX_BUILD_EXECUTABLE} -q -b html -c "${SPHINX_CONF_DIR}" -d "${SPHINX_CACHE_DIR}" "${SPHINX_SRC_DIR}" "${SPHINX_HTML_DIR}"
	                   DEPENDS viennagrid_wrapper)
	set (TARGETS ${TARGETS} sphinx)
else (SPHINX_BUILD_EXECUTABLE)
	message (WARNING "sphinx-build not found")
endif (SPHINX_BUILD_EXECUTABLE)

add_custom_target (doc DEPENDS ${TARGETS})
