//
// Created by ASUS on 24-11-5.
//
#include <limits.h>
#include <stdio.h>

int main() {
    printf("UINT_MAX = %u\n", UINT_MAX);

    unsigned int max = UINT_MAX;
    unsigned int one = 1U;
    unsigned int two = 2U;
//U是为了显示是无符号的整数
    printf("max + one = %u\n", max + one);
    printf("one - two = %u\n", one - two);

    return 0;
}
//overflow(溢出) wrap（无符号是回绕）