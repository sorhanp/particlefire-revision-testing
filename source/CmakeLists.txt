# Set name for project files to be tested
set(PARTICLEFIRE_TEST
    particlefire)

# Add files for testing
add_library(${PARTICLEFIRE_TEST}
    particle.cpp
    particle.h
    screen.cpp
    screen.h
    swarm.cpp
    swarm.h)

install(TARGETS ${PARTICLEFIRE_TEST}
    ARCHIVE DESTINATION ${PARTICLEFIRE_BIN})