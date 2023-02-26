cmake_minimum_required(VERSION 3.10)

project(basic-fuzzing)

add_subdirectory(fuzz)
add_subdirectory(fuzz-library)
add_subdirectory(fuzz-proto)
add_subdirectory(fuzz-proto-mutator)
add_subdirectory(fuzz-library-proto-mutator)
