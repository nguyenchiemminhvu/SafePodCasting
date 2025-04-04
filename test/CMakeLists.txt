cmake_minimum_required(VERSION 3.11...3.20)

# Project name
project(SafePodCastingTest)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# GoogleTest requires at least C++11
set(gtest_disable_pthreads on)
add_subdirectory(googletest)

# Include directories
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../
    ${CMAKE_CURRENT_SOURCE_DIR}/gtest
    ${CMAKE_CURRENT_SOURCE_DIR}/gtest/include
)

# Add compile options
add_compile_options(-std=c++17 -fpermissive -g -fprofile-arcs -ftest-coverage)

# List of test files
set(TEST_SOURCES
    main.cpp
    test_SafePodCasting.cpp
)

# Add the executable for tests
add_executable(SafePodCasting ${TEST_SOURCES})

# Link GoogleTest to the test executable
target_link_libraries(SafePodCasting gtest gtest_main gcov gmock)

# Enable testing
enable_testing()

# Add test cases
add_test(NAME SafePodCasting COMMAND SafePodCasting)

# Custom taret: generate coverage
add_custom_target(coverage
    COMMAND ${CMAKE_COMMAND} -E env TEST_EXECUTABLE=$<TARGET_FILE:SafePodCasting> bash ${CMAKE_SOURCE_DIR}/generate_coverage.sh
    DEPENDS SafePodCasting
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Running tests and generating coverage report"
)