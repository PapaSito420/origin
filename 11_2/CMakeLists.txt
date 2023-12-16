cmake_minimum_required(VERSION 3.8)
project(zadanie_11_2)

include_directories(libs)

add_subdirectory(libs)
add_executable(zadanie_11_2 11_2.cpp)
target_link_libraries(zadanie_11_2 greed_lib)

