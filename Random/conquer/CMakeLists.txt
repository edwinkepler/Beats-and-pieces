cmake_minimum_required(VERSION 3.0.2)

SET(CMAKE_INCLUDE_CURRENT_DIR ON)
SET(CMAKE_CXX_STANDARD 11)

project(conquer)

add_executable(conquer tui.cpp citizen.cpp)
