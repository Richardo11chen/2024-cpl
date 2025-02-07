//
// Created by ASUS on 24-10-23.
//
#include <stdio.h>
int main() {
    int arr[]={0,0,3,0,0,0,0,0,0,0,0,0,0,14,15,16,0,18};
    int n;
    scanf("%d",&n);

    int x[17];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
        switch(x[i]) {
            case 3: x[i]=3;
            break;
            case 14: x[i]=14;
            break;
            case 15: x[i]=15;
            break;
            case 16: x[i]=16;
            break;
            case 18: x[i]=18;
            break;
            default: x[i]=0;
            break;
        }
    }


    int result_1=-1;
    for(int i=0;i<n;i++) {
        result_1&=x[i];
    }

    int result_2=0;
    for(int i=0;i<n;i++) {
        result_2|=x[i];
    }

    int result_3=0;
    for(int i=0;i<n;i++) {
        result_3^=x[i];
    }

    printf("%d %d %d",result_1,result_2,result_3);


}