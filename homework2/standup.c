//
// Created by ASUS on 24-10-11.
//
#include <stdio.h>
int main() {
    int n;
    int sum=0;
    int x=0;
    scanf("%d", &n);
    int arr[n+1];
    for(int i=0;i<n+1;i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++) {
        sum=sum+arr[i];
        if(arr[i+1]>0&&sum<i+1) {
            int add=i+1-sum;
                x=x+add;
                sum=sum+add;
        }
    }
    printf("%d\n", x);
}



