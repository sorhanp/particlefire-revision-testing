# Set target name for project files to be tested
set(PARTICLEFIRE_TEST
    particlefire)

# Create library from test files
add_library(${PARTICLEFIRE_TEST}
    particle.cpp
    particle.h
    screen.cpp
    screen.h
    swarm.cpp
    swarm.h)

# Install library to bin-directory for testing
install(TARGETS ${PARTICLEFIRE_TEST}
    ARCHIVE DESTINATION ${PARTICLEFIRE_BIN})