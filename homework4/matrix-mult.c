#include <stdio.h>
//
// Created by ASUS on 24-10-24.
//
int main() {
    int m,n,p;
    scanf("%d %d %d\n",&m,&n,&p);
    int A[m][n],B[n][p];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&A[i][j]);
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<p;j++) {
            scanf("%d",&B[i][j]);
        }
    }
    int C[m][p];
    for(int i=0;i<m;i++) {
        for(int j=0;j<p;j++) {
            C[i][j]=0;
            for(int k=0;k<n;k++) {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    for(int i=0;i<m;i++) {
        for(int j=0;j<p;j++) {
            printf("%d ",C[i][j]);
        }
        if(i<m-1) {
            printf("\n");
        }
    }
}