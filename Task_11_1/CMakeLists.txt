cmake_minimum_required(VERSION 3.0)
project(GreetingApp)

# Устанавливаем путь к заголовочным файлам
include_directories(${CMAKE_SOURCE_DIR}/include)

# Создаем статическую библиотеку с именем GreetLib
add_library(GreetLib STATIC src/Greeter.cpp)

# Создаем исполняемый файл
add_executable(GreetingApp src/main.cpp)

# Линкуем исполняемый файл с статической библиотекой
target_link_libraries(GreetingApp GreetLib)
