//
// Created by ASUS on 24-10-11.
//
#include <stdio.h>
int main() {
    int N;
    int sum=0;
    scanf("%d", &N);
    while (N!=495) {
        int ge=N%10;
        int shi=N/10%10;
        int bai=N/100;
        int max,mid,min;
        if(ge>shi) {
            max=ge;
        } else {
            max=shi;
        }
        if(bai>max) {
            max=bai;
        }

        if(ge<shi) {
            min=ge;
        } else {
            min=shi;
        }
        if(bai<min) {
            min=bai;
        }

        mid=ge+shi+bai-min-max;

        int MAX=max*100+mid*10+min;
        int MIN=min*100+mid*10+max;
        int new=MAX-MIN;
        int diff=N-new;


        if(diff>0) {
            sum=sum+diff;
        }

        N=new;
    }
    printf("%d\n",sum);
    return 0;
}