//
// Created by ASUS on 24-10-22.
//
#define LEN_L 5
#define LEN_R 6
#include <stdio.h>

int L[LEN_L]={1,3,5,7,9};
int R[LEN_R]={0,2,4,6,8,10};

void Merge(const int L[],int l_len,const int R[],int r_len);
int main() {

    Merge(L,LEN_L,R,LEN_R);

    return 0;
}

/**
 * 
 * @param L array
 * @param l_len 
 * @param R 
 * @param r_len 
 */
void Merge(const int L[],int l_len,const int R[],int r_len) {
    int l=0,r=0;
    while(l<l_len && r<r_len) {
        if(L[l]<R[r]) {
            printf("%d ",L[l]);
            l++;
        } else {
            printf("%d ",R[r]);
            r++;
        }
    }

    while(r<r_len) {
        printf("%d ",R[r]);
        r++;
    }

    while(l<l_len) {
        printf("%d ",L[l]);
        l++;
    }
}