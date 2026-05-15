cmake_minimum_required(VERSION 3.10)

project(referenceAndPointer)

set(CMAKE_CXX_STANDARD 17)

add_executable(referenceAndPointer main.cpp)
target_link_options(referenceAndPointer PRIVATE -mconsole)
