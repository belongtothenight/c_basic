/* Written by belongtothenight / Da-Chuan Chen
 *
 * Following <C How to Program with an introduction
 * to C++> eighth edition by Paul Deitel and Harvey
 * Deitel
 *
 * Arithmetic Overflow
 * Boundary numbers
 */

#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include "config.h"

#define PRINT_LIMIT_INT(x) #x": %d\n", x
//printf("x: %d\n", x);
#define PRINT_LIMIT_UINT(x) #x": %u\n", x
//printf("x: %u\n", x);
#define PRINT_LIMIT_LONG(x) #x": %ld\n", x
//printf("x: %ld\n", x);
#define PRINT_LIMIT_ULONG(x) #x": %lu\n", x
//printf("x: %lu\n", x);
#define PRINT_LIMIT_LLONG(x) #x": %lld\n", x
//printf("x: %lld\n", x);
#define PRINT_LIMIT_ULLONG(x) #x": %llu\n", x
//printf("x: %llu\n", x);

int main (int argc, char *argv[]) {
#ifdef OS_LINUX
    printf("OS_LINUX\n");
    printf(PRINT_LIMIT_ULONG(SIZE_MAX));
#endif
#ifdef OS_WIN
    printf("OS_WIN\n");
    printf(PRINT_LIMIT_ULLONG(SIZE_MAX));
#endif
    //printf(PRINT_LIMIT_INT(SSIZE_MAX));
    //printf(PRINT_LIMIT_INT(PHYS_ADDR_MAX));
    printf(PRINT_LIMIT_INT(USHRT_MAX));
    printf(PRINT_LIMIT_INT(SHRT_MAX));
    printf(PRINT_LIMIT_INT(SHRT_MIN));
    printf(PRINT_LIMIT_INT(INT_MAX));
    printf(PRINT_LIMIT_INT(INT_MIN));
    printf(PRINT_LIMIT_UINT(UINT_MAX));
    printf(PRINT_LIMIT_LONG(LONG_MAX));
    printf(PRINT_LIMIT_LONG(LONG_MIN));
    printf(PRINT_LIMIT_ULONG(ULONG_MAX));
    printf(PRINT_LIMIT_LLONG(LLONG_MAX));
    printf(PRINT_LIMIT_LLONG(LLONG_MIN));
    printf(PRINT_LIMIT_ULLONG(ULLONG_MAX));
    //printf(PRINT_LIMIT_INT(UINTPTR_MAX));
}
