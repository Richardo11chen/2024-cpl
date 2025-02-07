#include <stdbool.h>
#include <stdio.h>
//
// Created by ASUS on 24-10-26.
//
//函数声明
//function prototype scope函数原型作用域
bool IsLeapYear(int year);//year(formal parameter 形参)可以取任何名字，单纯占位，甚至可以去掉

//block scope块作用域
int main() {
    int year;
    scanf("%d", &year);

    //int year:actual argument（实参）
    bool leap = IsLeapYear(year);
    if (leap) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

//函数定yi
bool IsLeapYear(int year) {
    bool leap = false;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        leap = true;
    }
    return leap;
}