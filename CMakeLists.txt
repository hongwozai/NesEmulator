cmake_minimum_required(VERSION 3.6)

project(NesEmulator)

set(CMAKE_CXX_STANDARD 11)

# exe
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)
add_executable(NesEmulator ${SRC})

# gtest
enable_testing()

list(FILTER SRC EXCLUDE REGEX Main.cpp)

add_executable(NesEmulatorTest ${SRC})
target_link_libraries(NesEmulatorTest gmock_main gtest gmock pthread)

add_test(NAME mytest COMMAND NesEmulatorTest)