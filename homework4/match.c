//
// Created by ASUS on 24-10-26.


#include <stdio.h>
int position[1250001][4]={0};

int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int new_a[502][502]={0};
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            scanf("%d",&new_a[i][j]);
            if(position[new_a[i][j]][0]==0) {
                position[new_a[i][j]][0]=i;
                position[new_a[i][j]][1]=j;
                continue;
            }
            position[new_a[i][j]][2]=i;
            position[new_a[i][j]][3]=j;
        }
    }

    for(int k=1;k<=n*m/2;k++) {
        int r_1=0,c_1=0,r_2=0,c_2=0;
        r_1=position[k][0];
        c_1=position[k][1];
        r_2=position[k][2];
        c_2=position[k][3];

        int sum=0;
        for(int i=r_1-1;i>=0;i--) {
            sum+=new_a[i][c_1];
        }
        for(int i=r_2-1;i>=0;i--) {
            sum+=new_a[i][c_2];
        }
        if(sum==0) {
            printf("%d ",k);
            new_a[r_1][c_1]=0;
            new_a[r_2][c_2]=0;
            continue;
        }

        sum=0;
        for(int i=r_1+1;i<=n+1;i++) {
            sum+=new_a[i][c_1];
        }
        for(int i=r_2+1;i<=n+1;i++) {
            sum+=new_a[i][c_2];
        }
        if(sum==0) {
            printf("%d ",k);
            new_a[r_1][c_1]=0;
            new_a[r_2][c_2]=0;
            continue;
        }

        sum=0;
        for(int i=c_1+1;i<=m+1;i++) {
            sum+=new_a[r_1][i];
        }
        for(int i=c_2+1;i<=m+1;i++) {
            sum+=new_a[r_2][i];
        }
        if(sum==0) {
            printf("%d ",k);
            new_a[r_1][c_1]=0;
            new_a[r_2][c_2]=0;
            continue;
        }

        sum=0;
        for(int i=c_1-1;i>=0;i--) {
            sum+=new_a[r_1][i];
        }
        for(int i=c_2-1;i>=0;i--) {
            sum+=new_a[r_2][i];
        }
        if(sum==0) {
            printf("%d ",k);
            new_a[r_1][c_1]=0;
            new_a[r_2][c_2]=0;
        }

    }

}
