#include "session.pb.h"
#include "src/libfuzzer/libfuzzer_macro.h"

DEFINE_BINARY_PROTO_FUZZER(const Session& session) {
  const char *data = session.data().c_str();
  size_t size = session.data().size();
  if (size > 0 && data[0] == 'H')
    if (size > 1 && data[1] == 'I')
      if (size > 2 && data[2] == '!')
        __builtin_trap();
}
