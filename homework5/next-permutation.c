//
// Created by ASUS on 24-11-1.
//
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    int index_1=0,index_2=0;
    int min=arr[n-1];
    for(int i=n-1;i>0;i--) {
        if(arr[i-1]>arr[i]) {
            continue;
        }
        if(arr[i-1]<arr[i]) {
            min=arr[i-1];
            index_1=i-1;
            break;
        }
    }

    int bigger_t_min=arr[n-1];
    for(int i=n-1;i>0;i--) {
        if(arr[i]>min) {
            bigger_t_min=arr[i];
            index_2=i;
            break;
        }
    }

    arr[index_1]=bigger_t_min;
    arr[index_2]=min;

    int count=1;
    int newarr[n];
    for(int i=0;i<n;i++) {
        newarr[i]=arr[i];
    }
    for(int i=n-1;i>index_1;i--) {
        newarr[i]=arr[index_1+count];
        count++;
    }

    for(int i=0;i<n;i++) {
        printf("%d",newarr[i]);
    }
}