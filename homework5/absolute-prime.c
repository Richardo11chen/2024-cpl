//
// Created by ASUS on 24-11-5.
//
#include <stdbool.h>
#include <stdio.h>
#include <tgmath.h>



bool Yes_prime(int x) {
    bool flag=true;
    for (int i = 2; i <= sqrt(x + 0.5); i++) {
        if (x % i == 0) {
            flag=false;
        }
    }
    return flag;
}

int Flip(int i) {
    int i_=i;
    int flip=0;
    int weishu=0;
    while(i_>0) {
        i_/=10;
        weishu++;
    }
    i_=i;
    for(int j=weishu;j>0;j--) {
        int mod=i_%10;
        i_/=10;
        flip+=mod*pow(10,j-1);
    }
    return flip;
}

int main() {
    int n,num=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++) {
        int flip=Flip(i);
        if(Yes_prime(i)&&Yes_prime(flip)) {
            num++;
        }
    }
    printf("%d",num);
}