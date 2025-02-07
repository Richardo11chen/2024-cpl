#include <stdio.h>
//
// Created by ASUS on 24-10-18.
//
int main() {
    int n;
    scanf("%d", &n);
    char str[n+1];
    scanf("%s", str);
    for(int i=0, j=n-1; i<j; j--, i++) {
        if(str[i]=='?' || str[j]=='?') {
            if(str[i]!='?') {
                str[j]=str[i];
            } else {
                str[i]=str[j];
            }
        }
    }
    printf("%s", str);
}