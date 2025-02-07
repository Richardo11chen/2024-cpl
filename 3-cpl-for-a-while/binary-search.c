//
// Created by ASUS on 24-10-12.
//
#include <stdio.h>
#define LEN 10
//file scope文件作用域
//int dictionary[LEN] = {1,1,2,3,5,8,13,21,34,55};

int BinarySearch(int key,const int dict[],int len);

int main() {
    const int dictionary[LEN] = {1,1,2,3,5,8,13,21,34,55};
    int key=0;
    scanf("%d",&key);

    int index=BinarySearch(key,dictionary,LEN);

    if (index == -1) {
        printf("Not Found\n");
    } else {
        printf("%d\n",index);
    }
}

int BinarySearch(int key,const int dict[],int len) {
    int low=0;
    int high=len-1;

    while (low<=high) {
        int mid=(low+high)/2;
        if (key==dict[mid]) {
            return mid;//下面的条件时去掉
            //high=mid-1;//用于一连串key输出最左边的index
        } else if (key<dict[mid]) {
            high=mid-1;
        } else {
            low=mid+1;
        }
    }
    return -1;
}