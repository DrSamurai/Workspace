cmake_minimum_required(VERSION 3.24)
project(PriorityQueue)

set(CMAKE_CXX_STANDARD 17)

add_executable(PriorityQueue main.cpp PriorityQ.cpp PriorityQ.h Node.cpp Node.h)
