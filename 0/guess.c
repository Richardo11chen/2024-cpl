#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int max=100;
    int tries=7;
    printf("the computer will generate a number bet 1-%d\n"
           "you have %d chances.\n",
        max , tries);
    srand(time(NULL));
    int secret = rand()%max+1;

    while (tries>0) {
    printf("enter the number you want to guess\n:");
    int guess=0;
    scanf("%d",&guess);
    if (guess == secret) {
        printf("you guessed the secret\n");
        break;
    } else if (guess > secret) {
        printf("guess>secret\n");
    } else if (guess < secret) {
        printf("guess<secret\n");
        }
        tries--;
    }



    return 0;
}
//
// Created by ASUS on 24-9-29.
//

