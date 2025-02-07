#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
// Created by ASUS on 24-10-21.
//
int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char str[16];
        bool t=true;
        char final_str[22];
        scanf("%s", str);
        int len = strlen(str);
        for (int i = 0; i < len; i++) {
            if(str[i]=='Z') {
                t=false;
                break;
            }
        }

        if(t) {
            int num=abs(atoi(str));
            int arr[21]={0};
            int i=0;

            if(num==0) {
                i=1;
            } else {
                while(num>0) {
                    int remainder=num%3;
                    arr[i]=remainder;
                    num=num/3;
                    i++;
                }
            }

                for(int j=0; j<=i-1; j++) {
                    if(arr[j]==2) {
                        arr[j+1]++;
                    }
                    if(arr[j]==3) {
                        arr[j+1]++;
                        arr[j]=0;
                    }
                }

                if(arr[i]==1) {
                    for(int j=i;j>=0;j--) {
                        if(arr[j]==2) {
                            final_str[i-j]='Z';
                        } if(arr[j]==1) {
                            final_str[i-j]='1';
                        } if(arr[j]==0) {
                            final_str[i-j]='0';
                        }
                    }
                    final_str[i+1]='\0';
                    if(str[0]=='-') {
                        for(int j=0;j<=i;j++) {
                            if(final_str[j]=='1') {
                                final_str[j]='Z';
                            }  else if(final_str[j]=='Z') {
                                final_str[j]='1';
                            }
                        }
                        final_str[i+1]='\0';
                    }
                } else {
                    for(int j=i-1;j>=0;j--) {
                        if(arr[j]==2) {
                            final_str[i-j-1]='Z';
                        } if(arr[j]==1) {
                            final_str[i-j-1]='1';
                        } if(arr[j]==0) {
                            final_str[i-j-1]='0';
                        }
                        final_str[i]='\0';
                    }
                    if(str[0]=='-') {
                        for(int j=0;j<i;j++) {
                            if(final_str[j]=='1') {
                                final_str[j]='Z';
                            }   else if(final_str[j]=='Z') {
                                final_str[j]='1';
                            }
                        }
                        final_str[i]='\0';
                    }
                }
            }

            if(t) {
                printf("%s\n",final_str);
            } else {
                printf("Radix Error\n");
            }

        }
    }

