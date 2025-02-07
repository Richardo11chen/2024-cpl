#include<stdio.h>
#define PI 3.14
int main() {
    int n,d=1;
    double sum=0;
    char a="m";
    printf("input n:");
    scanf("%d",&n);
    while(d<=n)
    {
        sum=sum+PI*d;
        d=d+1;
    }
    printf("sum=:%f",sum);
    putchar(a);


    return 0;
}
// Created by ASUS on 24-9-20.
//
