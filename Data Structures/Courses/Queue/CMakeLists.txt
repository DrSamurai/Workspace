cmake_minimum_required(VERSION 3.24)
project(Queue)

set(CMAKE_CXX_STANDARD 17)

add_executable(Queue ArrayBased/main.cpp ArrayBased/Queue.cpp ArrayBased/Queue.h NodeBased/Node.cpp NodeBased/Node.h NodeBased/Queue.cpp NodeBased/Queue.h)
