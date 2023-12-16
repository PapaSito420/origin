cmake_minimum_required(VERSION 3.8)
project(zadanie_11_3)

include_directories(libs)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_subdirectory(libs)
add_executable(zadanie_11_3 main.cpp)
target_link_libraries(zadanie_11_3 leaver_lib)

