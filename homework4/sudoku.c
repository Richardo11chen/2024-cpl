//
// Created by ASUS on 24-10-25.
//
#include <stdbool.h>
#include <stdio.h>
int main() {
    int sudoku[9][9];
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            scanf("%d", &sudoku[i][j]);
        }
    }

    bool t=true;
    for(int i = 0; i < 9; i++) {
        int arr[9]={0};
        for(int j = 0; j < 9; j++) {
            arr[sudoku[j][i]-1]++;
        }
        for(int j = 0; j < 9; j++) {
            if(arr[j]==0) {
                t=false;
                break;
            }
        }
        if(t==false) {
            break;
        }
    }

    for(int i = 0; i < 9; i++) {
        int arr[9]={0};
        for(int j = 0; j < 9; j++) {
            arr[sudoku[i][j]-1]++;
        }
        for(int j = 0; j < 9; j++) {
            if(arr[j]==0) {
                t=false;
                break;
            }
        }
        if(t==false) {
            break;
        }
    }

    for(int i = 0; i <=6; i+=3) {
        for(int j = 0; j<=6; j+=3) {
            int arr[9]={0};
            for(int k = i; k<i+3; k++) {
                for(int l=j; l<j+3; l++) {
                    arr[sudoku[k][l]-1]++;
                }
            }
            for(int k = 0; k < 9; k++) {
                if(arr[k]==0) {
                    t=false;
                    break;
                }
            }
            if(t==false) {
                break;
            }
        }
        if(t==false) {
            break;
        }
    }

    if(t==true) {
        printf("Yes");
    } else {
        printf("No");
    }

}