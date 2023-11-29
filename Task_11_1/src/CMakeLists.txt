cmake_minimum_required(VERSION 3.0)
project(FirstCMP)
include_directories(include)
set(FIRST_EXE main.cpp)

add_executable(FirstCMP $(FIRST_EXE)
add_subdirectory(include)
target_link_libraries(GreetingApp FirstCMP)