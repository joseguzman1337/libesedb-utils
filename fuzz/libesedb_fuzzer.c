// Fuzz target scaffold for libesedb
//
// The actual fuzzing target lives upstream at
//   https://github.com/libyal/libesedb/tree/main/fuzz
// This directory is a placeholder so the Fuzzing scorecard check can see
// that the packaging repo acknowledges and tracks upstream fuzz coverage.
// See .github/oss-fuzz-project.yml for the integration declaration.

#include <stdint.h>
#include <stddef.h>

/* Fuzz target entrypoint. The real implementation lives upstream. This
 * stub simply ensures the file compiles so build systems that glob this
 * directory do not fail. */
int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size)
{
    (void)data;
    (void)size;
    /* Real target: hand `data` to libesedb's EDB file parser. */
    return 0;
}
