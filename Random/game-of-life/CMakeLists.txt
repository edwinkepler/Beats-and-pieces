cmake_minimum_required(VERSION 2.8.11)

if("${CMAKE_CXX_COMPILER_ID}" MATCHES "(GNU|Clang)")
    set(CMAKE_CXX_FLAGS "-std=c++11")
endif()

add_executable(game_of_life tui.cpp src/game_of_life.hpp)

