//
// Created by ASUS on 24-11-22.
//
#include <stdio.h>
char str[105][105];
int main() {
    int R,C;
    int count=0;
    scanf("%d%d",&R,&C);
    getchar();
    for (int i=0;i<R;i++) {
        for (int j=0;j<C;j++) {
            scanf("%c",&str[i][j]);
        }
        getchar();
    }
    for (int i=0;i<R;i++) {
        for (int j=0;j<C-1;j++) {
            if (str[i][j]=='/'&&str[i][j+1]=='\\') {
                int lef=j,rig=j+1,dow=i+1;
                int m,n;
                while (lef>=0&&rig<=C-1&&dow<=R-1) {
                    int mid=(i+dow)/2;
                    int xmid=(i+dow)/2+1;
                    for (m=lef,n=rig;m<=j,n>=j+1;
                        m++,n--,mid--,xmid++) {
                        if (!(str[mid][m]=='/'&&
                            str[xmid][m]=='\\'&&
                            str[mid][n]=='\\'&&
                            str[xmid][n]=='/')) {
                            break;
                        }
                    }
                    if (m==j+1) {
                        count++;
                    }
                    lef--;rig++;dow+=2;
                }
            }
        }
    }

    printf("%d",count);
}