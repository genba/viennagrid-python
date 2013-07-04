cmake_minimum_required (VERSION 2.6)

set (TARGETS)

# Find executable sphinx-build and add target for Sphinx documentation if sphinx-build is found.
# If sphinx-build cannot be found, issue a warning and continue, but do not add target for Sphinx documentation.
find_program (SPHINX_BUILD_EXECUTABLE sphinx-build)
if (SPHINX_BUILD_EXECUTABLE)
	set (WRAPPER_LOCATION "${CMAKE_CURRENT_BIN_DIR}/src")
	set (SPHINX_SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/sphinx/source")
	
	# configured documentation tools and intermediate build results
	set (SPHINX_CONF_DIR "${SPHINX_SRC_DIR}")
	# Sphinx cache with pickled ReST documents
	set (SPHINX_CACHE_DIR "${CMAKE_CURRENT_BINARY_DIR}/_doctrees")
	# HTML output directory
	set (SPHINX_HTML_DIR "${CMAKE_CURRENT_BINARY_DIR}/html")

	configure_file("${CMAKE_CURRENT_SOURCE_DIR}/sphinx/generate-sphinx-doc.sh.in" "${CMAKE_CURRENT_BINARY_DIR}/generate-sphinx-doc.sh" @ONLY)
	add_custom_target (sphinx /bin/sh "${CMAKE_CURRENT_BINARY_DIR}/generate-sphinx-doc.sh")
	set (TARGETS ${TARGETS} sphinx)
else (SPHINX_BUILD_EXECUTABLE)
	message (WARNING "sphinx-build not found")
endif (SPHINX_BUILD_EXECUTABLE)

add_custom_target (doc DEPENDS ${TARGETS})
