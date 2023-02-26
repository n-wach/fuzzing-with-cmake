add_compile_options(-fsanitize=address,fuzzer)
add_link_options(-fsanitize=address,fuzzer)

add_executable(fuzz fuzzer.cpp)
