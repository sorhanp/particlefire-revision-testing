# Set target name for project files to be tested
set(TEST_TARGETS
    particlefire)

# Create library from test files
add_library(${TEST_TARGETS}
    particle.cpp
    particle.h
    screen.cpp
    screen.h
    swarm.cpp
    swarm.h)

# Include library directory as an Interface
target_include_directories(${TEST_TARGETS}
    INTERFACE ./)