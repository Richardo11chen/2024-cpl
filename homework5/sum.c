#include <stdio.h>
#include <math.h>
//
// Created by ASUS on 24-10-29.
//
int num(int i,int t);




int main() {
    int n,t,sum=0;
    scanf("%d%d",&n,&t);
    for(int i=1;i<=n;i++) {
        sum+=num(i,t);
    }
    printf("%d",sum);
}

int num(int i,int t) {
    int num=0;
    for(int j=1;j<=i;j++) {
        num+=t*pow(10,j-1);
    }
    return num;
}

