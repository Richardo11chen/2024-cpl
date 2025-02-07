//
// Created by ASUS on 24-11-5.
//
// Created by hfwei on 2024/10/30.
// Run on Windows and Linux

#include <limits.h>
#include <stdio.h>

int main() {
    // INT_MIN = -2147483648
    // INT_MAX = 2147483647 (10 digits; ~ 2 Billion)
    printf("INT_MIN = %d\n", INT_MIN);
    printf("INT_MAX = %d\n\n", INT_MAX);

    // printf("UINT_MIN = %u\n", 0U);
    // printf("UINT_MAX = %u\n\n", UINT_MAX);

    //long int:windows下和int相同，Linux下好和long long int相同
    printf("LONG_MIN = %ld\n", LONG_MIN);
    printf("LONG_MAX = %ld\n\n", LONG_MAX);

    // printf("ULONG_MIN = %lu\n", 0UL);
    // printf("ULONG_MAX = %lu\n\n", ULONG_MAX);

    // long long int: >= 64 bits

    // LLONG_MIN = -9223372036854775808
    // LLONG_MAX = 9223372036854775807 (19 digits)
    printf("LLONG_MIN = %lld\n", LLONG_MIN);
    printf("LLONG_MAX = %lld\n\n", LLONG_MAX);

    // printf("ULONG_LONG_MIN = %llu\n", 0ULL);
    // printf("ULONG_LONG_MAX = %llu\n\n", ULONG_LONG_MAX);
    //
    // printf("ULLONG_MAX = %llu\n\n", ULLONG_MAX);

    return 0;
}