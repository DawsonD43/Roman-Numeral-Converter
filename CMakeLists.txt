CMAKE_MINIMUM_REQUIRED(VERSION 3.20)
project(roman_numeral_converter)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/main.cpp src/Roman.cpp include/Roman.h)

add_executable(Converter ${SOURCE_FILES})