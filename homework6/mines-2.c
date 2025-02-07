#include <stdbool.h>
#include <stdio.h>
//
// Created by ASUS on 24-11-23.
//
#define N 72000000
char map[600][600][600];
int bucket1[N][4];
int wrong[N];
int bucketwen[1][4];
int vectors[][3]={{0,0,1},{0,0,-1},
                  {0,1,0},{0,-1,0},
                  {1,0,0},{-1,0,0}};

int main() {
    int n;
    int a=0,b=0,c=0;
    bool flag=true;
    char wen=0;
    scanf("%d",&n);

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            for (int k=0;k<n;k++) {
                scanf(" %c",&map[i][j][k]);
                if (map[i][j][k]=='?') {
                    bucketwen[0][0]=i;
                    bucketwen[0][1]=j;
                    bucketwen[0][2]=k;
                }
                if (map[i][j][k]!='*'&&map[i][j][k]!='?') {
                    bucket1[a][0]=i;
                    bucket1[a][1]=j;
                    bucket1[a][2]=k;
                    bucket1[a][3]=map[i][j][k]-'0';
                    a++;
                }
            }
        }
    }

    for (int i=0;i<a;i++) {
        int count = 0;
        int countwen=0;
        for (int k = 0; k < 6; ++k) {
            int newI = bucket1[i][0] + vectors[k][0];
            int newJ = bucket1[i][1] + vectors[k][1];
            int newK = bucket1[i][2] + vectors[k][2];
            if (newI>=0&&newI<n && newJ>=0&&newJ<n && newK>=0&&newK<n )
            {
                if (map[newI][newJ][newK] == '*') {
                    count++;
                }
                if (map[newI][newJ][newK] == '?') {
                    countwen++;
                }
            }
        }
        if (count+countwen!=bucket1[i][3]) {
            wrong[b]=i;
            b++;
        }
        if (count>bucket1[i][3] || count+countwen<bucket1[i][3]) {
            flag=false;
        }

    }

    if (flag) {
        int aroundwen[6][4];
        for (int k = 0; k < 6; ++k) {
            int newi = bucketwen[0][0] + vectors[k][0];
            int newj = bucketwen[0][1] + vectors[k][1];
            int newk = bucketwen[0][2] + vectors[k][2];
            if (newi>=0&&newi<n && newj>=0&&newj<n && newk>=0&&newk<n ) {
                aroundwen[c][0]=newi;
                aroundwen[c][1]=newj;
                aroundwen[c][2]=newk;
                if (map[newi][newj][newk]!='*'){
                    aroundwen[c][3]=map[newi][newj][newk]-'0';
                } else {
                    aroundwen[c][3]=9;
                }
                c++;
            }
        }

            bool flag1=true;
            for (int i=0;i<c;i++) {
                int count=0;
                if (aroundwen[i][3]==9) {
                    continue;
                }
                for (int l = 0; l < 6; ++l) {
                    int newI = aroundwen[i][0] + vectors[l][0];
                    int newJ = aroundwen[i][1] + vectors[l][1];
                    int newK = aroundwen[i][2] + vectors[l][2];
                    if (newI>=0&&newI<n && newJ>=0&&newJ<n && newK>=0&&newK<n ){
                        if (map[newI][newJ][newK] == '*'||map[newI][newJ][newK] == '?') {
                            count++;
                        }
                    }
                }
                if (count!=aroundwen[i][3]) {
                    flag1=false;
                }
            }

        if (flag1) {
            wen='*';
        }
            bool flag2=true;
        for (int i=0;i<c;i++) {
            int count=0;
            if (aroundwen[i][3]==9) {
                continue;
            }
            for (int l = 0; l < 6; ++l) {
                int newI = aroundwen[i][0] + vectors[l][0];
                int newJ = aroundwen[i][1] + vectors[l][1];
                int newK = aroundwen[i][2] + vectors[l][2];
                if (newI>=0&&newI<n && newJ>=0&&newJ<n && newK>=0&&newK<n ){
                    if (map[newI][newJ][newK] == '*') {
                        count++;
                    }
                }
            }
            if (count!=aroundwen[i][3]) {
                flag2=false;
            }
        }

        if (flag2) {
            int count1=0;
            for (int i=0;i<c;i++) {
                if (aroundwen[i][3]==9) {
                    count1++;
                }
            }
            wen=count1+'0';
        }

        if (!flag1 && !flag2) {
            flag=false;
        }

        }
        if (flag) {
            printf("valid\n");
            printf("%c",wen);
        } else {
            printf("invalid\n");
            for (int i=0;i<b;i++) {
                printf("%d %d %d\n",bucket1[wrong[i]][0]+1,bucket1[wrong[i]][1]+1,bucket1[wrong[i]][2]+1);
            }
        }
    }
