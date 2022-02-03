cmake_minimum_required(VERSION 3.22.2)
project(gtkmm_tutorial)

add_subdirectory(hello)

add_executable(gtkmm_app main.cpp)
target_link_libraries(gtkmm_app PRIVATE hello)