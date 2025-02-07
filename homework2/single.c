//
// Created by ASUS on 24-10-11.
//

#include <stdio.h>

int main() {
    int n,x;
    scanf("%d",&n);
    int arr[10000]={0};
    for(int i=0;i<2*n-1;i++) {
        scanf("%d",&x);
        arr[x]++;
    }
    for(int i=0;i<10000;i++) {
        if(arr[i]==1) {
            printf("%d ",i);
        }
    }
    return 0;


}
