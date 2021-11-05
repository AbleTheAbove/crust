#include "rust.h"

fn(main(), int) {
   let_mut(a, int) = 7;
   a += 1;
   print("Hello, World!\n", a);
   Ok();
}

typedef const char *ErrString;
typedef void *MemHandle;
Result_impl(MemHandle, ErrString)
Result_unwrap_impl(MemHandle, ErrString)
fn (gimmy_memory(size_t n_bytes), Result(MemHandle, ErrString)){
    Result(MemHandle, ErrString) possible =
        {.is_valid = true, .data = malloc(n_bytes)};

    if (!possible.data)
    {
        possible.is_valid = false;
        possible.err = "memory allocation failure";
    }
    return possible;
}
