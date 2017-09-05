cmake_minimum_required(VERSION 3.0.2)

SET(CMAKE_INCLUDE_CURRENT_DIR ON)
SET(CMAKE_CXX_STANDARD 11)

include_directories(./src)

project(cli-game-of-life)

add_executable(15-puzzle tui.cpp ./src/puzzle.cpp)
