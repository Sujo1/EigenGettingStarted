CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

PROJECT(Eigen_Getting_Started)

FIND_PACKAGE(Eigen3 REQUIRED )

add_executable(hello_Eigen hello_Eigen.cpp)
