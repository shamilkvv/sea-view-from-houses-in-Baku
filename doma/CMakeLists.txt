cmake_minimum_required(VERSION 3.10)
project(doma)
add_executable(doma main.cpp)
target_link_libraries(doma gtest)