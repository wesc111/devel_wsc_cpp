cmake_minimum_required(VERSION 3.10)
project(CPPExamples)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add subdirectories for each example
add_subdirectory(examples/hello_world)
add_subdirectory(examples/calculator)
add_subdirectory(examples/file_io)
add_subdirectory(examples/data_structures)
