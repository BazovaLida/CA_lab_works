cmake_minimum_required(VERSION 3.16.3)

project("CA_lab_works" VERSION 1.0)

add_library(factor STATIC factorial.cpp)
add_executable("${PROJECT_NAME}" main.cpp)
target_link_libraries("${PROJECT_NAME}" factor)
