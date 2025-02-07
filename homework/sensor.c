//
// Created by ASUS on 24-10-7.
#include <stdio.h>
int main() {
    char name[21];
    int pre;
    double frac,factor;
    char unit;
    scanf("%s %d %lf %lf %c",name,&pre,&frac,&factor,&unit);
    double sciEexp = pre + frac;
    double conv = (pre + frac) * factor;
    char new_unit = unit + 'A' - 'a';
    printf("%.2s: %d (%.5f) | %.5E %.5f %c",
        name,pre,frac,sciEexp,conv,new_unit);
    return 0;


}
