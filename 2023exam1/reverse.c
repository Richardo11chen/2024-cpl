//
// Created by ASUS on 24-10-28.
//
#include <stdio.h>
#include<ctype.h>
int main() {
    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    for(int i=n-1;i>=0;i--) {
        if(islower(str[i])) {
            str[i]=toupper(str[i]);
        }
        else if(isupper(str[i])) {
            str[i]=tolower(str[i]);
        }
        printf("%c",str[i]);
    }
}