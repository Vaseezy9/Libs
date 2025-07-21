cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)

add_library(matrixlib SHARED matrix.h)

set(SRCFiles main.cpp)
set(incDirs ${CMAKE_CURRENT_SOURCE_DIR}/../lib)
set(libDirs ${CMAKE_CURRENT_SOURCE_DIR}/../lib)
set(libraries matrixlib)

add_executable(exe main.cpp)
target_link_libraries(exe ${libraries})
