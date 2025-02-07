#include <stdio.h>
//
// Created by ASUS on 24-10-26.
//
int Conver(int num);
int n;


int main() {
    scanf("%d",&n);
    int a[999][999]={0};//爆栈警告！！！（oj上就不会啦~）
    a[0][n/2]=1;
    int r=0,c=n/2;
    for(int i=2;i<n*n+1;i++) {
        r--,c++;
        r=Conver(r);
        c=Conver(c);

        if(a[r][c]!=0) {
            r++,c--;
            r=Conver(r);
            c=Conver(c);
            r++;
            r=Conver(r);
        }

        a[r][c]=i;
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}


int Conver(int num) {
    if(num<0) {
        num=n-1;
    }
    if(num>n-1) {
        num=0;
    }
    return num;
}