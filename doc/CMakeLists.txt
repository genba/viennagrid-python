cmake_minimum_required (VERSION 2.6)

set (TARGETS)

find_package (LATEX)

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
	if (PDFLATEX_COMPILER)
		add_custom_command (TARGET sphinx-pdf
		                    POST_BUILD
		                    COMMAND ${PDFLATEX_COMPILER} ViennaGridforPython
		                    COMMAND ${PDFLATEX_COMPILER} ViennaGridforPython
		                    WORKING_DIRECTORY "${SPHINX_LATEX_DIR}")
	else (PDFLATEX_COMPILER)
		if (LATEX_COMPILER)
			add_custom_command (TARGET sphinx-pdf
			                    POST_BUILD
			                    COMMAND ${LATEX_COMPILER} ViennaGridforPython
			                    COMMAND ${LATEX_COMPILER} ViennaGridforPython
			                    WORKING_DIRECTORY "${SPHINX_LATEX_DIR}")
		endif (LATEX_COMPILER)
	endif (PDFLATEX_COMPILER)
	set (SPHINX_GENERATE_LATEX_DOC ON CACHE BOOL "Include target to generate LaTeX documentation in target 'sphinx'?")
	if (SPHINX_GENERATE_LATEX_DOC)
		add_custom_target (sphinx DEPENDS sphinx-html sphinx-pdf)
	else (SPHINX_GENERATE_LATEX_DOC)
		add_custom_target (sphinx DEPENDS sphinx-html)
	endif (SPHINX_GENERATE_LATEX_DOC)
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
	
	set (DOXYGEN_GENERATE_DOC ON CACHE BOOL "Include target to generate Doxygen documentation in target 'doc'?")
	if (DOXYGEN_GENERATE_DOC)
		set (TARGETS ${TARGETS} doxygen)
	endif (DOXYGEN_GENERATE_DOC)
else (DOXYGEN_FOUND)
	message (WARNING "doxygen not found")
endif (DOXYGEN_FOUND)

if (TARGETS)
	add_custom_target (doc DEPENDS ${TARGETS})
else (TARGETS)
	message (WARNING "no targets for documentation have been created")
endif (TARGETS)
