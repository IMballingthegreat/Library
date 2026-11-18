cmake_minimum_required(VERSION 3.20)
project(Librarymanagement LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Librarymanagement main.cpp manager.cpp student.cpp validation.cpp)

target_compile_features(Librarymanagement
    PRIVATE cxx_std_20
)

target_compile_options(Librarymanagement
    PRIVATE
        -Wall
        -Wextra
        -Wpedantic
)