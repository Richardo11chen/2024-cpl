//
// Created by ASUS on 24-10-11.
//
#include <stdio.h>
#define SIZE 100000
int main() {
    int size;
    scanf("%d",&size);
    int number[SIZE]={0};
    for(int i=0;i<size;i++) {
        scanf("%d",&number[i]);
    }

    int min=number[0];

    for(int i=1;i<size;i++) {
        if(number[i]<min) {
            min=number[i];
        }
    }
    printf("%d",min);
}