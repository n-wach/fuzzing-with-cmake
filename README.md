# Using libfuzzer and libprotobuf-mutator with CMake

Extremely simple setups for using libfuzzer and libprotobuf-mutator with CMake. 

Maybe I'm just dumb and don't know CMake... but the examples I found elsewhere were too complicated. I decided to
build up from the basics:

 - `fuzz`: basic example from libfuzzer's documentation
 - `fuzz-library`: connecting to a C library
 - `fuzz-proto`: adding protobufs
 - `fuzz-proto-mutator`: use libprotobuf-mutator to mutate protobufs
 - `fuzz-library-proto-mutator`: use libprotobuf-mutator to mutate protobufs, for fuzzing a C library
