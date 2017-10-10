get_filename_component(tutorial ${CMAKE_CURRENT_SOURCE_DIR} NAME)
cmake_minimum_required(VERSION 3.5.1)

project(${tutorial} CXX)

SET(CMAKE_INCLUDE_CURRENT_DIR ON)
SET(CMAKE_CXX_STANDARD 11)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake")

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

string(REPLACE "-" "_" file ${tutorial})

add_executable(${tutorial} ${file})
target_link_libraries(${tutorial} ${SDL2_LIBRARIES})
