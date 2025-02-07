//
// Created by ASUS on 24-10-22.
//
#define MAX_LEN 10000
#define RANGE 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int numbers[MAX_LEN];

    int size=0;
    scanf("%d",&size);

    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        numbers[i] = rand()%RANGE;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    for (int i = 1; i < size; i++) {
        int key = numbers[i];
        int j = i - 1;
        while (j>=0&&numbers[j] > key) {
            numbers[j+1] = numbers[j];
            j--;
        }
        numbers[j+1] = key;
    }


    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

