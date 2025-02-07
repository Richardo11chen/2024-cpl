#include <stdio.h>
//
// Created by ASUS on 24-10-13.
//
int main() {
    int min;
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

/*    int n=-1;
    int arr[]={0};
    while(scanf("%d",&arr[++n])!=EOF);
*/
    for (int i = 0; i < n - 1; i++) {
        min = arr[i];
        int min_index=i;
        for(int j=i+1;j<n;j++) {
            if(arr[j]<min) {
                min = arr[j];
                min_index=j;
            }
        }
        arr[min_index]=arr[i];
        arr[i]=min;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}