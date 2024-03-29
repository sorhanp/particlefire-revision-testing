# Set target name for test source files
set(PARTICLEFIRE_TEST
    particlefire_tests)

# Create list of unit tests, new unit test files need to be appended here
set(UNIT_TEST_LIST
    particle
    screen
    swarm)

# Loop through UNIT_TEST_LIST and add test source -files to UNIT_TEST_SOURCE_LIST -list
foreach(NAME IN LISTS UNIT_TEST_LIST)
    list(APPEND UNIT_TEST_SOURCE_LIST ${NAME}.test.cpp)
endforeach()
  
# Inform user about the files included for testing  
message(STATUS ":-------------------------------:")  
message(STATUS "The test files are as follows:")  

foreach(NAME IN LISTS UNIT_TEST_SOURCE_LIST)
    message(STATUS ${NAME})
endforeach()

message(STATUS ":-------------------------------:")

# Create executable by including files from UNIT_TEST_SOURCE_LIST
add_executable(${PARTICLEFIRE_TEST}
    main.cpp
    ${UNIT_TEST_SOURCE_LIST})

# Link the library "particlefire" to executable
target_link_libraries(${PARTICLEFIRE_TEST}
PUBLIC particlefire)

# Link boost and SDL2 libraries to executable
target_link_libraries(${PARTICLEFIRE_TEST}
PUBLIC ${Boost_LIBRARIES}
PUBLIC ${SDL2_LIBRARIES})

# Add tests, COMMAND can be the target
add_test(
    NAME ${PARTICLEFIRE_TEST}
    COMMAND ${PARTICLEFIRE_TEST} --log_level=all --log_format=XML --log_sink=../log.xml --report_level=no --report_format=XML --report_sink=../report.xml --use_alt_stack=1 --show_progress=1
)