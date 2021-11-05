#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define fn(decl, type) type decl
#define let(decl, type) const type decl
#define let_mut(decl, type) type decl

#define print printf
#define loop while(true)
#define Ok(); return 0
#define Err(); return 1

#define enum union

// Rust like return impl
#define Result_impl(T, E) \
typedef struct { \
    bool is_valid; \
    union { \
        T data; \
        E err; \
    }; \
} Result_##T##_##E;

#define Result(T, E) Result_##T##_##E

#define Result_unwrap_impl(T, E) \
T Result_##T##_unwrap (Result(T, E) result) { \
    if (result.is_valid) \
        return result.data; \
\
    fprintf(stderr, "%s\n", result.err); \
    exit(1); \
}
