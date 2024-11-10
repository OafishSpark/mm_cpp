CMake_minimum_required(VERSION 3.11)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror -Wall")

file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS "./source/*")

project(manual_ml)

add_executable(manual_ml main.cpp ${SRC_FILES})
target_include_directories(manual_ml PUBLIC ./headers/)
