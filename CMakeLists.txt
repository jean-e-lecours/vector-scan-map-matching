cmake_minimum_required(VERSION 3.20)
project(vsmm VERSION 1.0.0)
set (CMAKE_CXX_STANDARD 17)

add_library(gnuplotcpp INTERFACE incl/gnuplot/gnuplot.hpp)
add_library(libvsmm STATIC incl/vsmm/vsmm.hpp src/vsmm.cpp)

add_executable(vsmm main.cpp)

target_link_libraries(vsmm PRIVATE libvsmm)