add_compile_options(-fsanitize=address,fuzzer)
add_link_options(-fsanitize=address,fuzzer)

find_package(Protobuf REQUIRED)
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS session.proto)
include_directories(${Protobuf_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(/usr/local/include/libprotobuf-mutator)

include(FetchContent)
FetchContent_Declare(
        protobuf-mutator-libfuzzer
        GIT_REPOSITORY https://github.com/google/libprotobuf-mutator.git
        GIT_TAG        master
)
FetchContent_MakeAvailable(protobuf-mutator-libfuzzer)

add_executable(fuzz-proto-mutator fuzzer.cpp ${PROTO_SRCS} ${PROTO_HDRS})
target_link_libraries(fuzz-proto-mutator protobuf::libprotobuf protobuf-mutator-libfuzzer)
