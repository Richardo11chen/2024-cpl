//
// Created by ASUS on 24-11-5.
//
// Created by hfwei on 2024/10/31.

#include <stdint.h>

int main(void) {
    int8_t small = -100;
    int32_t large = 100000;

    return 0;
}
//如果不想要判断是什么系统，从而确定例如long int的最大值/字节，提高代码可移植性，
//可以用int16_t这种来确定宽度，这些都带符号，无padding占位
//需要包括头文件<stdint.h>