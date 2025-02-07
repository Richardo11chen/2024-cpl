#include <stdio.h>
//
// Created by ASUS on 24-10-11.
//
int main() {
    int n;
    char *ones[] = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen","twenty"};

    char *tens[] = {
        "0", "1", "twenty", "thirty", "forty",
        "fifty", "sixty", "seventy", "eighty", "ninety"};


    scanf("%d", &n);
    if(n>99) {
        int ge=n%10;
        int shi=n/10%10;
        int bai=n/100;
        if(n%100==0) {
            printf("%s hundred",ones[bai]);
        } else {
            if(n%100>20) {
                int geshi=n%100;
                if(geshi%10==0) {
                    printf("%s hundred and %s", ones[bai], tens[shi]);
                } else {
                    printf("%s hundred and %s-%s", ones[bai], tens[shi], ones[ge]);
                }
            } else {
                int geshi=n%100;
                printf("%s hundred and %s",ones[bai],ones[geshi]);
            }
        }
    } else if(20<n && n<=99) {
        int ge=n%10;
        int shi=n/10;
        if(n%10==0) {
            printf("%s",tens[shi]);
        } else {
            printf("%s-%s",tens[shi], ones[ge]);
        }
    } else {
        printf("%s", ones[n]);
    }

}

