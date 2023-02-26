#include "session.pb.h"

void foo(const Session& session) {
  const char *data = session.data().c_str();
  size_t size = session.data().size();
  if (size > 0 && data[0] == 'H')
    if (size > 1 && data[1] == 'I')
      if (size > 2 && data[2] == '!')
        __builtin_trap();
}

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  Session session;
  session.ParseFromArray(data, size);
  foo(session);
  return 0;
}
