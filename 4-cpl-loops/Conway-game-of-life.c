#include <windows.h>
#define SIZE 6

#include <stdio.h>

const int board[SIZE][SIZE] = {
    {0},
    {0,1,1,0,0,0},
    {0,1,1,0,0,0},
    {0,0,0,1,1,0},
    {0,0,0,1,1,0},
    {0}
};
int main() {
    int old_board[SIZE+2][SIZE+2]={0};
    for(int i=1;i<=SIZE;i++) {
        for(int j=1;j<=SIZE;j++) {
            old_board[i][j]=board[i-1][j-1];
        }
    }

    int new_board[SIZE+2][SIZE+2]={0};

    for(int i=1;i<=10;i++) {
        for(int i=1;i<=SIZE;i++) {
            for(int j=1;j<=SIZE;j++) {
                int num_of_live_neighbours=
                    old_board[i-1][j-1]+
                    old_board[i-1][j]+
                    old_board[i-1][j+1]+
                    old_board[i][j-1]+
                    old_board[i][j+1]+
                    old_board[i+1][j-1]+
                    old_board[i+1][j]+
                    old_board[i+1][j+1];

                if(old_board[i][j]==1) {
                    new_board[i][j]=(num_of_live_neighbours==2||num_of_live_neighbours==3);
                    //if(num_of_live_neighbours==2||num_of_live_neighbours==3) {
                    //    new_board[i][j]=1;
                    //} else {
                    //    new_board[i][j]=0;
                    //}
                } else {
                    new_board[i][j]=num_of_live_neighbours==3;
                    //if(num_of_live_neighbours==3) {
                    //    new_board[i][j]=1;
                    //} else {
                    //    new_board[i][j]=0;
                    //}

                }
            }
        }
        for(int i=1;i<=SIZE;i++) {
            for(int j=1;j<=SIZE;j++) {
                printf("%c ", new_board[i][j] ? '*' : ' ');
            }
            printf("\n");
        }

        Sleep(1000);
        system("cls");


        for(int i=1;i<=SIZE;i++) {
            for(int j=1;j<=SIZE;j++) {
                old_board[i][j]=new_board[i][j];
            }
        }
    }

}