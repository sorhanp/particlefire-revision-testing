cmake_minimum_required(VERSION 3.13.4)
set(CMAKE_CXX_STANDARD 11)
project(particlefire-revision-testing)

# See if boost is installed
find_package(Boost 1.67.0 COMPONENTS system filesystem REQUIRED)
if(Boost_FOUND)
    message(STATUS "Boost libraries found!")
    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
    message(STATUS "Boost_VERSION: ${Boost_VERSION}")
    include_directories(${Boost_INCLUDE_DIRS})
    #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lboost_system -fopenmp")
endif()
 

# Enable testing
include(CTest)

# Set up project folders variables
set(PARTICLEFIRE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(PARTICLEFIRE_BIN ${PARTICLEFIRE_DIR}/bin) 

# Compile options for SDL
add_compile_options(-lSDL2main -lSDL2)

# Include sources before tests
add_subdirectory(source)
add_subdirectory(tests)