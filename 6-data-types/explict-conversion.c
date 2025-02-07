//
// Created by ASUS on 24-11-5.
//
// Created by hfwei on 2024/10/31.

// Created by hfwei on 2024/10/30.

#include <limits.h>
#include <stdio.h>

int main() {
    double pi = 3.14159;

    // to obtain its fractional part
    double fraction = pi - (int) pi;

    // to compute num * num
    int num = 100000000; // (8 zeros)

    printf("LLONG_MAX = %lld\n", LLONG_MAX);
    long long llint = ((long long) num) * num;//后面的num进行了隐式类型转换
    printf("i = %lld\n", llint);

    return 0;
}