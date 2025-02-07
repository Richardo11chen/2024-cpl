//
// Created by ASUS on 24-10-11.
//
#include <stdio.h>


int main() {
    int a, b, c;
    int max,mid,min;
    scanf("%d%d%d",&a,&b,&c);
    int numbers[3]={a,b,c};
    min=a;
    for(int i=1;i<3;i++) {
        if(numbers[i]<min) {
            min=numbers[i];
        }
    }

    max=a;
    for(int i=1;i<3;i++) {
        if(numbers[i]>max) {
            max=numbers[i];
        }
    }

    mid=a+b+c-max-min;

    printf("%d %d %d\n",min,mid,max);

    if(min+mid<=max) {
        printf("not triangle");
        return(0);
    }

    if(min==mid&&mid==max) {
        printf("equilateral triangle");
        return(0);
    }

    if(min*min+mid*mid==max*max) {
        printf("right triangle");
        return(0);
    }

    if(min*min+mid*mid>max*max) {
        printf("acute ");
    }

    if(min*min+mid*mid<max*max) {
        printf("obtuse ");
    }

    if(max==mid || min==mid) {
        printf("isosceles triangle");
    }



    return 0;
}
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // 判断是否能构成三角形
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("not triangle\n");
    } else {
        // 判断是否是等边三角形
        if (a == b && b == c) {
            printf("equilateral triangle\n");
        } else {
            // 判断是否是直角三角形
            if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
                printf("right triangle\n");
            } else {
                // 判断是否是锐角或钝角三角形
                if (a*a + b*b > c*c && a*a + c*c > b*b && b*b + c*c > a*a) {
                    // 锐角三角形
                    printf("acute");
                } else {
                    // 钝角三角形
                    printf("obtuse");
                }

                // 判断是否是等腰三角形
                if (a == b || a == c || b == c) {
                    printf(" isosceles");
                }

                // 输出triangle
                printf(" triangle\n");
            }
        }
    }

    return 0;
}