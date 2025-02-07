//
// Created by ASUS on 24-10-13.
//
#define LEN 21
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

char string[LEN]="";

bool IsPalindrome(const char str[]);//int len可以省略

int main() {
    scanf("%20s", string);

//   int len=0;
//    while(string[len]!='\0') {
//        len++;
//        }
    int len = strlen(string);
    printf("the length of \"%s\" is %d.\n",string,len);


    if(IsPalindrome) {
        printf("yes");
    } else {
        printf("no");
    }
}

bool IsPalindrome(const char str[]) {
    int len = strlen(string);
    for(int i=0,j=len-1;i<j;i++,j--) {
        if(string[i]!=string[j]) {
            return false;
        }
    }
    return true;
}