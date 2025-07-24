cmake_minimum_required(VERSION 3.10)

project(matrix_test)

set(CMAKE_CXX_STANDARD 11)

find_library(matrixlib_LIBRARY matrixlib)

add_executable(matrix_test matrix_test.cpp)
target_link_libraries(matrix_test matrixlib_LIBRARY)
