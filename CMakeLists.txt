cmake_minimum_required(VERSION 3.10)

project(matrixlib)

set(CMAKE_CXX_STANDARD 11)

add_library(matrixlib SHARED matrix.cpp)
