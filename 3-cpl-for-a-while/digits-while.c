#include <stdio.h>
//
// Created by ASUS on 24-10-12.
//
int main() {
    int number,digits;
    scanf("%d",&number);

    /*  while(number>0) {
        number/=10;
        digits++;
    }
    */

    do {
        number/=10;
        digits++;
    } while (number>0);
    printf("%d",digits);
}