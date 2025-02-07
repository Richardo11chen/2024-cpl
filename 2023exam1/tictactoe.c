//
// Created by ASUS on 24-10-28.
//
#include <stdio.h>
int main() {
    int t,x;
    scanf("%d%d",&t,&x);
    while(t--) {
        int win1=0,win2=0,win4=0;
        int n;
        scanf("%d",&n);
        int board[n][n];
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                scanf("%d",&board[i][j]);
            }
        }
        //row
        int row_num=0;
        for(int i=0;i<=n-x;i++) {
            for(int j=0;j<n;j++) {
                row_num=board[j][i];
                for(int k=i;k<i+x;k++) {
                    row_num&=board[j][k];
                }
                if(row_num==1) {
                    win1=1;
                }
                if(row_num==2) {
                    win2=2;
                }
                if(row_num==4) {
                    win4=4;
                }
            }
        }
        //col
        int col_num=0;
        for(int i=0;i<=n-x;i++) {
            for(int j=0;j<=n;j++) {
                col_num=board[i][j];
                for(int k=i;k<i+x;k++) {
                    col_num&=board[k][j];
                }
                if(col_num==1) {
                    win1=1;
                }
                if(col_num==2) {
                    win2=2;
                }
                if(col_num==4) {
                    win4=4;
                }
            }
        }
        //dia
        int dia_num=0;
        for(int i=0;i<=n-x;i++) {
            for(int j=0;j<=n-x;j++) {
                dia_num=board[i][j];
                for(int k=i,l=j;k<i+x,l<j+x;k++,l++) {
                    dia_num&=board[k][l];
                }
                if(dia_num==1) {
                    win1=1;
                }
                if(dia_num==2) {
                    win2=2;
                }
                if(dia_num==4) {
                    win4=4;
                }
            }
        }
        //anti_dia
                int anti_num=0;
                for(int i=0;i<=n-x;i++) {
                    for(int j=n-1;j>=x-1;j--) {
                        anti_num=board[i][j];
                        for(int k=i,l=j;k<i+x,l>j-x;k++,l--) {
                            anti_num&=board[k][l];
                        }
                        if(anti_num==1) {
                            win1=1;
                        }
                        if(anti_num==2) {
                            win2=2;
                        }
                        if(anti_num==4) {
                            win4=4;
                        }
                    }
               }


        int sum=win1+win2+win4;
        switch(sum) {
            case 1: printf("1\n"); break;
            case 2: printf("2\n"); break;
            case 4: printf("4\n"); break;
            default: printf("draw\n");
        }
    }

}
