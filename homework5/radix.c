//
// Created by ASUS on 24-11-6.
//
#include <stdio.h>
#include <tgmath.h>
#include <stdbool.h>

int n_convert(int n,int num) {
    int convert=0,count=0;
    while(num>0) {
        int mod=num%10;
        num/=10;
        convert+=mod*pow(n,count);
        count++;
    }
    return convert;
}

bool correct(int n,int num) {
    while(num>0) {
        int mod=num%10;
        num/=10;
        if(mod>=n)
            return false;
    }
    return true;
}

int main() {
    int p,q,r;
    int B=0;
    scanf("%d%d%d",&p,&q,&r);
    for(int i=2;i<=40;i++) {
        if(!correct(i,p)
            ||!correct(i,q)
            ||!correct(i,r)) {
            continue;
        }
        int cp=n_convert(i,p);
        int cq=n_convert(i,q);
        int cr=n_convert(i,r);
        if(cp*cq==cr) {
            B=i;
            break;
        }
    }
    printf("%d",B);
    return 0;
}