//
// Created by ASUS on 24-11-6.
//

#include <stdio.h>
#include <tgmath.h>

static char *ones[] = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
    "ten", "eleven", "twelve", "thirteen", "fourteen",
    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

static char *tens[] = {
    "0", "1", "twenty", "thirty", "forty",
    "fifty", "sixty", "seventy", "eighty", "ninety"};

void conver(int three) {
    if(0<three&&three<20) {
        printf("%s ",ones[three]);
    }
    if(20<=three&&three<100) {
        if(three%10==0) {
            printf("%s ",tens[three/10]);
        } else {
            printf("%s-%s ",tens[three/10],ones[three%10]);
        }
    }
    if(three>=100) {
        printf("%s hundred ",ones[three/100]);
        three%=100;
        if(0<three&&three<20) printf("and %s ",ones[three]);
        if(20<=three&&three<100) {
            if(three%10==0) {
                printf("and %s ",tens[three/10]);
            } else {
                printf("and %s-%s ",tens[three/10],ones[three%10]);
            }
        }
    }
}

int power_of_thousand(int exp) {
    int result = 1;
    for (int j = 0; j < exp; j++) {
        result *= 1000;
    }
    return result;
}

int main() {
    long long int n;
    scanf("%lld",&n);

    if(n==0) {
        printf("zero");
        return 0;
    }

    if(n<0) {
        printf("minus ");
        n=-n;
    }

    long long int n_=n;
    int count=0;
    while(n_>0) {
        n_/=1000;
        count++;
    }

    for(int i=count;i>0;i--) {
        int three=n/power_of_thousand(i-1);
        n=n%power_of_thousand(i-1);
        conver(three);
        if(three>0) {
            switch(i) {
                case 4: printf("billion ");break;
                case 3: printf("million ");break;
                case 2: printf("thousand ");break;
            }
        }
    }
}
