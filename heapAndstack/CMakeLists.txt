cmake_minimum_required(VERSION 3.10)

project(heapAndstack)

set(CMAKE_CXX_STANDARD 17)

add_executable(heapAndstack main.cpp ParentA.cpp ElementC.cpp)
target_link_options(heapAndstack PRIVATE -mconsole)