//
// Created by ASUS on 24-10-28.
//
#include <stdio.h>
int main() {
    int n,k,b,l;
    int cout=0;

    scanf("%d%d%d%d",&n,&k,&b,&l);
    int fact_b=b;
    int arr[1000]={0};
    for (int i = 0; i < n; i++) {
        arr[i] = l;
    }
    int alivesum=n;
    for(int j=0;j<n;j++) {
        if(alivesum==1) {
            break;
        }

        if(arr[j]>0) {
            cout++;
        }
        if(cout==k) {
            if(fact_b>0) {
                arr[j]--;
                fact_b--;
            } else {
                fact_b=b;
            }

            if(arr[j]==0) {
                alivesum--;
            }
            cout=0;
        }
        if(j==n-1) {
            j=-1;
        }
    }
    for(int j=0;j<n;j++) {
        if(arr[j]>0) {
            printf("%d\n",j+1);
        }
    }
}