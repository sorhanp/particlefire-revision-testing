cmake_minimum_required(VERSION 3.13.4)
set(CMAKE_CXX_STANDARD 11)
project(particlefire-revision-testing)

include(CTest)

# Set up project folders
set(PARTICLEFIRE_DIR CMAKE_CURRENT_SOURCE_DIR)
set(PARTICLEFIRE_BIN PARTICLEFIRE_DIR/bin) 

add_subdirectory(source)
#add_subdirectory(tests)