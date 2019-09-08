cmake_minimum_required(VERSION 3.13.4)
set(CMAKE_CXX_STANDARD 11)
project(particlefire-revision-testing)

include(CTest)

add_subdirectory(source)
add_subdirectory(tests)