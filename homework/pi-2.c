//
// Created by ASUS on 24-10-7.
//
#include <math.h>
#include <stdio.h>

int main() {
    double pi_1,pi_2;
    pi_1 = (log(pow(5280,3)*pow(236674+30303*sqrt(61),3)+744))/sqrt(427);
    pi_2 = 4*(6*atan(1.0/8)+2*atan(1.0/57)+atan(1.0/239));
    printf("%.15f\n%.15f",pi_1,pi_2);
    return 0;
}
