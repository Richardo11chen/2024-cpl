#include <stdio.h>
#include <math.h>
//
// Created by ASUS on 24-10-8.
//
int main() {
    long long int p,q;
    scanf("%lld %lld",&p,&q);
    double a= -q/2.0+sqrt(q*q/4.0+p*p*p/27.0);
    double b= -q/2.0-sqrt(q*q/4.0+p*p*p/27.0);
    double c= q*q/4.0+p*p*p/27.0;
    if (c>=0) {
        double tmp1,tmp2;

        if (a>=0) {
            tmp1=pow(a,1.0/3.0);
        } else {
            tmp1=-pow(-a,1.0/3.0);
        }
        if (b>=0) {
            tmp2=pow(b,1.0/3.0);
        } else {
            tmp2=-pow(-b,1.0/3.0);
        }

        double x=tmp1+tmp2;

        printf("%.3lf",x);
    }
        return 0;
}