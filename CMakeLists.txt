cmake_minimum_required(VERSION 3.13.4)
set(CMAKE_CXX_STANDARD 11)
project(particlefire-revision-testing)

# See if boost is installed
find_package(Boost COMPONENTS unit_test_framework REQUIRED)
if(Boost_FOUND)
    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost_LIBRARY_DIRS ${Boost_LIBRARY_DIRS}")
    message(STATUS "Boost_LIBRARIES ${Boost_LIBRARIES}")
    include_directories(
        ${Boost_INCLUDE_DIRS}
        ${Boost_LIBRARY_DIRS})
    # Compile options for Boost
    add_compile_options(-lunit_test_framework)
endif()

# See if SDL2 is installed
find_package(SDL2 REQUIRED)
if(SDL2_FOUND)
    message(STATUS "SDL2_INCLUDE_DIRS: ${SDL2_INCLUDE_DIRS}")
    include_directories(${SDL2_INCLUDE_DIRS})
    # Compile options for SDL
    add_compile_options(-lSDL2main -lSDL2)
endif()

# Enable testing
include(CTest)

# Set up project folders variables
set(PARTICLEFIRE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(PARTICLEFIRE_BIN ${PARTICLEFIRE_DIR}/bin) 

# Include sources before tests
add_subdirectory(source)
add_subdirectory(tests)