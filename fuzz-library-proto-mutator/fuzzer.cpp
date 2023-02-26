#include "session.pb.h"
#include "src/libfuzzer/libfuzzer_macro.h"

extern "C" void LibraryFunction(const char *data, size_t size);

DEFINE_BINARY_PROTO_FUZZER(const Session& session) {
  const char *data = session.data().c_str();
  size_t size = session.data().size();
  LibraryFunction(data, size);
}
