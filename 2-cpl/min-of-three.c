#include <stdio.h>
//
// Created by ASUS on 24-10-9.
int main() {
    int a, b, c, min;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        min = b;
    } else {
        min = a;
    }
    if (min > c) {
        min = c;
    }

    printf("%d", min);

    return 0;
}

//还有一种方法 a<b     else
//
//            a<c     b<c


//if else 三种表示 leap year
int main() {    //first
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                leap = 1;
            } else {
                leap = 0;
            }
        } else {
            leap = 1;
        }
    } else {
        leap = 0;
    }


    if (year % 4 != 0) {    //second
        leap = 0;
    } else {
        if (year % 100 != 0) {
            leap = 1;
        } else {
            if (year % 400 != 0) {
                leap = 0;
            } else {
                leap = 1;
            }
        }
    }


    if (year % 4 != 0) {
        leap = 0;               //third
    } else if (year % 100 != 0) {
        leap = 1;
    } else if (year % 400 != 0) {
        leap = 0;
    } else {
        leap = 1;
    }

    //if的充要条件 短路求值
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        leap = 1;
    } else {
        leap = 0; //若leap初始为0，则else可省略
    }


    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;  //也可以这么写
}
