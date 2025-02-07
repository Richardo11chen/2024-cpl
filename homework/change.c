#include <stdio.h>
//
// Created by ASUS on 24-10-7.
//
int main() {
    int num;
    scanf("%d",&num);
    int n50=num/50;
    num=num%50;
    int n20=num/20;
    num=num%20;
    int n10=num/10;
    num=num%10;
    int n5=num/5;
    num=num%5;
    int n1=num/1;
    printf("%d\n%d\n%d\n%d\n%d",
        n50,n20,n10,n5,n1);
    return 0;
}