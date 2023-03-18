# Using libfuzzer and libprotobuf-mutator with CMake

Here are some extremely simple setups for using libfuzzer and libprotobuf-mutator with CMake. 
Created because all the examples I could find were too darn complicated for my limited CMake experience...

## Requirements

These generally require the *latest* version of [LLVM](https://github.com/llvm/llvm-project) 
(clang, lld, etc.) to build. I recommend building it from source. You'll also want to install 
[libprotobuf-mutator](https://github.com/google/libprotobuf-mutator).

## Contents

I build up from the basics:

 - `fuzz`: basic example from libfuzzer's documentation
 - `fuzz-library`: connecting to a C library
 - `fuzz-proto`: adding protobufs
 - `fuzz-proto-mutator`: use libprotobuf-mutator to mutate protobufs
 - `fuzz-library-proto-mutator`: use libprotobuf-mutator to mutate protobufs, for fuzzing a C library

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details
