#include <stdbool.h>
#include <stdio.h>


#define fn(decl, type) type decl
#define let(decl, type) const type decl
#define let_mut(decl, type) type decl

#define print printf
#define loop while(true)
#define Ok(); return 0
#define Err(); return 1

#define enum union
