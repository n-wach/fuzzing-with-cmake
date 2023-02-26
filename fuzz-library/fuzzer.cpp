#include <cstdint>
#include <cstddef>

extern "C" int LibraryFunction(const uint8_t *data, size_t size);

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  LibraryFunction(data, size);
  return 0;
}
