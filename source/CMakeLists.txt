# Set target name for project files to be tested
set(PARTICLEFIRE
    particlefire)

# Create library from test files
add_library(${PARTICLEFIRE}
    particle.cpp
    particle.h
    screen.cpp
    screen.h
    swarm.cpp
    swarm.h)

# Include library directory as an Interface
target_include_directories(${PARTICLEFIRE}
    INTERFACE ./)

# Install library to bin-directory for testing
install(TARGETS ${PARTICLEFIRE}
    ARCHIVE DESTINATION ${PARTICLEFIRE_BIN})