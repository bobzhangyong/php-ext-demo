cmake_minimum_required(VERSION 2.8)
project(testc C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(./t1)

add_subdirectory(t1)

add_executable(testc main.c)

target_link_libraries(testc t1)