cmake_minimum_required (VERSION 2.6)

set (TARGETS)

# Find executable sphinx-build and add target for Sphinx documentation if sphinx-build is found.
# If sphinx-build cannot be found, issue a warning and continue, but do not add target for Sphinx documentation.
find_program (SPHINX_BUILD_EXECUTABLE sphinx-build)
if (SPHINX_BUILD_EXECUTABLE)
	set (DISTUTILS_PACKAGE_PATH "${CMAKE_BINARY_DIR}/viennagrid-python")
	set (SPHINX_SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/sphinx")
	
	# configured documentation tools and intermediate build results
	set (SPHINX_CONF_DIR "${CMAKE_CURRENT_BINARY_DIR}/sphinx")
	# Sphinx cache with pickled ReST documents
	set (SPHINX_CACHE_DIR "${CMAKE_CURRENT_BINARY_DIR}/sphinx/_doctrees")
	# HTML output directory
	set (SPHINX_HTML_DIR "${CMAKE_CURRENT_BINARY_DIR}/sphinx/html")
	# LaTeX output directory
	set (SPHINX_LATEX_DIR "${CMAKE_CURRENT_BINARY_DIR}/sphinx/latex")

	configure_file("${SPHINX_SRC_DIR}/conf.py.in" "${SPHINX_CONF_DIR}/conf.py" @ONLY)
	add_custom_target (sphinx-html
	                   ${SPHINX_BUILD_EXECUTABLE} -q -b html -c "${SPHINX_CONF_DIR}" -d "${SPHINX_CACHE_DIR}" "${SPHINX_SRC_DIR}" "${SPHINX_HTML_DIR}"
	                   DEPENDS packagesrc)
	add_custom_target (sphinx-pdf
	                   ${SPHINX_BUILD_EXECUTABLE} -b latex -c "${SPHINX_CONF_DIR}" -d "${SPHINX_CACHE_DIR}" "${SPHINX_SRC_DIR}" "${SPHINX_LATEX_DIR}"
	                   DEPENDS packagesrc)
	add_custom_target (sphinx DEPENDS sphinx-html sphinx-pdf)
	set (TARGETS ${TARGETS} sphinx)
else (SPHINX_BUILD_EXECUTABLE)
	message (WARNING "sphinx-build not found")
endif (SPHINX_BUILD_EXECUTABLE)

# Find Doxygen
find_package (Doxygen)
# Target for Doxygen documentation
if (DOXYGEN_FOUND)
	set (DOXYFILE_TEMPLATE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/doxygen/Doxyfile.in")
	set (DOXYFILE_PATH "${CMAKE_CURRENT_BINARY_DIR}/doxygen/Doxyfile")
	set (DOXYGEN_OUTPUT_DIR "${CMAKE_CURRENT_BINARY_DIR}/doxygen")
	
	configure_file("${DOXYFILE_TEMPLATE_PATH}" "${DOXYFILE_PATH}" @ONLY)
	add_custom_target (doxygen ${DOXYGEN_EXECUTABLE} ${DOXYFILE_PATH})
	set (TARGETS ${TARGETS} doxygen)
else (DOXYGEN_FOUND)
	message (WARNING "doxygen not found")
endif (DOXYGEN_FOUND)

if (TARGETS)
	add_custom_target (doc DEPENDS ${TARGETS})
else (TARGETS)
	message (WARNING "no targets for documentation have been created")
endif (TARGETS)
