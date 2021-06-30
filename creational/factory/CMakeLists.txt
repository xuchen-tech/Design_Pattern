cmake_minimum_required(VERSION 3.5.1)

project(simple_factory)

add_executable(simple_factory main.cpp SimpleFactory.cpp ConcreateProduct1.cpp ConcreateProduct2.cpp)