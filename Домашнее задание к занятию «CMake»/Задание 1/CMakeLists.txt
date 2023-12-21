cmake_minimum_required(VERSION 3.8)
project(FiguresProject)

# Установка стандарта C++ для проекта
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Добавление исполняемого файла
add_executable(FiguresProject main.cpp)

# Включение заголовочных файлов
include_directories(.)

# Список всех файлов исходного кода
set(SOURCE_FILES
    e_Triangle.cpp
    i_Triangle.cpp
    Parallelogram.cpp
    quadrilateral.cpp
    r_Triangle.cpp
    Rectangle.cpp
    Romb.cpp
    Square.cpp
    triangle.cpp
)

# Добавление файлов исходного кода к исполняемому файлу
target_sources(FiguresProject PRIVATE ${SOURCE_FILES})