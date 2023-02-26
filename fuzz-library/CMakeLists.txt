add_compile_options(-fsanitize=address,fuzzer)
add_link_options(-fsanitize=address,fuzzer)

add_library(library SHARED library.c)

add_executable(fuzz-library fuzzer.cpp)
target_link_libraries(fuzz-library library)
