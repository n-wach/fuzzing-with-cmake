add_compile_options(-fsanitize=address,fuzzer)
add_link_options(-fsanitize=address,fuzzer)

find_package(Protobuf REQUIRED)
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS session.proto)
include_directories(${Protobuf_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_executable(fuzz-proto fuzzer.cpp ${PROTO_SRCS} ${PROTO_HDRS})
target_link_libraries(fuzz-proto protobuf::libprotobuf)
