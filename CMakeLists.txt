cmake_minimum_required(VERSION 3.18)

project("Homework Library")

file(GLOB CC_FILES *.cpp)
add_executable(main ${CC_FILES})