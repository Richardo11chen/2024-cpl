#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char map[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf(" %c", &map[i][j]);
        }
    }

    char newmap[n+2][n+2];
    for (int i = 0; i < n+2; i++) {
        for (int j = 0; j < n+2; j++) {
            newmap[i][j]='o';
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            newmap[i][j] = map[i-1][j-1];
        }
    }

    int vectors[8][2] = {{-1,-1},{0, 1}, {0, -1}, {1, 0}, {-1, 0},{-1,1},{1,-1},{1,1}};

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int count = 0;
            for (int k = 0; k < 8; ++k) {
                int newI = i + vectors[k][0];
                int newJ = j + vectors[k][1];
                if (newmap[newI][newJ] == '*') {
                    count++;
                }
            }
            if(map[i-1][j-1] == 'o') {
                map[i-1][j-1] = count+'0';
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
}
