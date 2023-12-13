cmake_minimum_required(VERSION 3.8)

project(Rabbits_race)

include_directories(libs)
add_subdirectory(libs)
add_executable(Rabits_race main.cpp)
target_link_libraries(Rabits_race vihicles_lib races_lib )