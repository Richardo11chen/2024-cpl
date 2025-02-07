#include <stdio.h>
//
// Created by ASUS on 24-10-18.
//
int main() {
    int n;
    scanf("%d", &n);
    int arr[2000]={0};
    for(int i=1;i<n+1;i++) {
        for(int j=1;j<n+1;j++) {
            if(j%i==0) {
                if(arr[j-1]==0) {
                    arr[j-1]=1;
                } else {
                    arr[j-1]=0;
                }
            }
        }
    }
    for(int i=0;i<n;i++) {
        if(arr[i]==1) {
            printf("%d ",i+1);
        }
    }
}