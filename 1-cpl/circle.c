#include <stdio.h>
//
// Created by ASUS on 24-10-7.
//
int main() {
    int radius=10;
    double circumference=radius*2*3.14159;
    double area=3.14159*radius*radius;
    printf("radius = %d\ncircumference = %.2f\narea = %.2f\n",
        radius,circumference,area);
    return 0;
}