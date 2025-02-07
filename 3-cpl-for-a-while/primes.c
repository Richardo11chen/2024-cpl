#include <stdbool.h>
#include <stdio.h>
//
// Created by ASUS on 24-10-12.
//
bool IsPrime(int max);

int main() {
    int max;
    int count=0;
    scanf("%d", &max);

    //i的作用域封闭在该for循环中
    for (int i = 2; i <= max; i++) {

        if(IsPrime(i)) {
            count++;
            printf("%d ", i);
        }
    }
    printf("\n %d",count);
}

bool IsPrime(int num) {
        for(int j = 2; j *j<=num; j++) {
            if (num % j == 0) {
                return false;
            }
        }

    return true;
}