//
// Created by ASUS on 24-11-5.
//
#include <stdio.h>

int main() {
    const int array[] = {0, 1, 2, 3, 4};
    int i = -1;

    size_t size = sizeof array / sizeof array[0];
    printf("The size of the array is %zu\n", size);

    // size: size_t (unsigned long long int)
    // i: int (signed int)
    // i = -1 其二进制补码：11111111111111看为无符位是最大整形
    if (i <= size) {
        printf("i <= length of array\n");
    } else {
        printf("i > length of array\n");
    }

    return 0;
}
//⚠️Be careful when MIXING signed and unsigned types!!!
