# CMakeLists files of this project


cmake_minimum_required (VERSION 2.8.11)

# define global variables here.

# EIGEN_ROOT is the parent directory of the Eigen folder that contains files like Array, Core, Dense, etc.
SET(EIGEN_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/../eigen)

project (tbmsearch)

SET (CMAKE_BUILD_TYPE Release)
# SET (CMAKE_BUILD_TYPE Debug)

add_subdirectory (source)

