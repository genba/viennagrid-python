cmake_minimum_required (VERSION 2.6)

find_package (PythonInterp REQUIRED)

add_test (wrapper python ${CMAKE_CURRENT_SOURCE_DIR}/test_wrapper.py "${PROJECT_BINARY_DIR}/src")
add_test (points python ${CMAKE_CURRENT_SOURCE_DIR}/test_points.py "${PROJECT_BINARY_DIR}/src")
add_test (domains  python ${CMAKE_CURRENT_SOURCE_DIR}/test_domains.py "${PROJECT_BINARY_DIR}/src")
add_test (algorithms  python ${CMAKE_CURRENT_SOURCE_DIR}/test_algorithms.py "${PROJECT_BINARY_DIR}/src")
