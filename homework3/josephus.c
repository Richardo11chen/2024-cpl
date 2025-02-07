#include <stdio.h>
int main() {
    int n,k;
    int cout=0;

    scanf("%d%d",&n,&k);
    int arr[1000]={0};
    for (int i = 0; i < n; i++) {
        arr[i] = 1;
    }
    int alivesum=n;
    for(int j=0;j<n;j++) {
        if(alivesum==1) {
            break;
        }
            if(arr[j]==1) {
                cout+=1;
            }
            if(cout==k) {
                arr[j]=0;
                alivesum-=1;
                cout=0;
            }
        if(j==n-1) {
            j=-1;
        }
    }
    for(int j=0;j<n;j++) {
        if(arr[j]==1) {
            printf("%d\n",j+1);
        }
    }
}

