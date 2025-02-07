#include <stdio.h>
//macro（宏）自动把SIZE换为10000
#define SIZE 10000
//
// Created by ASUS on 24-10-11.
//
int main() {
        int size = 0;
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int min = numbers[0];
    for (int i = 1; i < 10; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    printf("%d", min);
}
