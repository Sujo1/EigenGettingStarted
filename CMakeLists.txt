CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

PROJECT(Eigen_Getting_Started)

FIND_PACKAGE(Eigen3 REQUIRED NO_MODULE)

add_executable(hello_Eigen hello_Eigen.cpp)
