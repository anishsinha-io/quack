cmake_minimum_required(VERSION 3.20)
project(chapter4 C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(quack)
add_executable(chapter4 main.c)
target_link_libraries(chapter4 PRIVATE quack)