#include <stdio.h>
//
// Created by ASUS on 24-11-25.
//
int map[700][700];
long long int value_recording[601][601];
int maxvalue_coordinate[360000][2];
long long int first(int xlocation,int ylocation,int d) {
    long long int valuesum=map[xlocation][ylocation];
    for (int i=1;i<=d;i++) {
        for (int j=ylocation-i,k=ylocation+i,l=0;j<=ylocation;j++,k--,l++) {
            if (l!=0&&l!=i) {
                valuesum+=map[xlocation+l][j]+map[xlocation-l][j]
                        +map[xlocation+l][k]+map[xlocation-l][k];
            } else if (l==0) {
                valuesum+=map[xlocation][j]+map[xlocation][k];
            } else {
                valuesum+=map[xlocation+l][k]+map[xlocation-l][j];
            }
        }
    }
    return  valuesum;
}

long long int next(long long int firstvalue,int x,int y,int d) {
    long long int nextvalue=firstvalue;
    for (int i=y-d-1,l=0;i<=y-1;i++,l++) {
        if (i==y-d-1) {
            nextvalue-=map[x][i];
        } else {
            nextvalue-=map[x+l][i]+map[x-l][i];
        }
    }
    for (int i=y+d,l=0;i>=y;i--,l++) {
        if (l==0) {
            nextvalue+=map[x][i];
        } else {
            nextvalue+=map[x+l][i]+map[x-l][i];
        }
    }
    return nextvalue;
}
int main() {
    int n,m,d;
    scanf("%d%d%d",&n,&m,&d);
    for (int i=50;i<n+50;i++) {
        for (int j=50;j<m+50;j++) {
            scanf("%d",&map[i][j]);
        }
    }
    long long int nextvalue=0;
    long long int maxvalue=0;
    for (int i=50;i<n+50;i++) {
        long long int firstvalue=first(i,50,d);
        value_recording[i-49][1]=firstvalue;
        if (i==50) {
            maxvalue=firstvalue;
        } else {
            if (firstvalue>maxvalue) {
                maxvalue=firstvalue;
            }
        }
        for (int j=51;j<m+50;j++) {
            if (j==51) {
                nextvalue=firstvalue;
            }
                nextvalue=next(nextvalue,i,j,d);

            value_recording[i-49][j-49]=nextvalue;
            if (nextvalue>maxvalue) {
                maxvalue=nextvalue;
            }
        }
    }

    int count=0,k=0;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            if (value_recording[i][j]==maxvalue) {
                count++;
                maxvalue_coordinate[k][0]=i;
                maxvalue_coordinate[k][1]=j;
                k++;
            }
        }
    }

    printf("%lld %d\n",maxvalue,count);
    for (int i=0;i<k;i++) {
        printf("%d %d\n",maxvalue_coordinate[i][0],maxvalue_coordinate[i][1]);
    }
}