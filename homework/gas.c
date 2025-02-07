#include <stdio.h>
//
// Created by ASUS on 24-10-8.
//
int main() {
    double P,L,T;
    scanf("%lf %lf %lf",&P,&L,&T);
    double V = L*L*L;
    double R = 8.314;
    double n = P * V/R/T;

    printf("%.4e",n);

    return 0;
}
