/*#include <stdio.h>

int A[1000000];
int B[1000000];
int re[1000000];


int max_sum(int b,int t,int lindex,int hindex) {
    int mid;
    while (lindex<=hindex) {
        int mindex=(lindex+hindex)/2;
        mid=A[mindex];

        if(mid+b==t) {
            return mid+b;
        }
        if(mid+b>t) {
            hindex=mindex-1;
        }
        if(mid+b<t) {
            lindex=mindex+1;
        }
    }
    return mid+b;

}
int main() {
    int n,m,t;
    scanf("%d%d%d",&n,&m,&t);

    for(int i=0;i<n;i++) {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&B[i]);
    }

    int minres=-1;
    int res=0;
    int lindex=0,hindex=n-1;

    for(int i=0;i<m;i++) {
        res=t-max_sum(B[i],t,lindex,hindex);
            re[i]=res;
        if(res>0) {
            minres=res;
        }
    }

    for (int i=0;i<m;i++) {
        if(re[i]<minres&&re[i]>=0) {
            minres=re[i];
        }
    }


        printf("%d",minres);

}
*/
#include <stdio.h>

int A[1000000];
int B[1000000];
int re[1000000];


int max_sum(int b,int t,int lindex,int hindex) {
    int mindex = (lindex+hindex)/2;
    int mid;
    while (lindex<=hindex) {
        mindex=(lindex+hindex)/2;
        mid=A[mindex];
        //printf("lindex=%d,hindex=%d\n",lindex,hindex);
        //printf("mindex = %d\n",mindex);
        //printf("mid = %d,b = %d\n",mid,b);

        if(mid+b==t) {
            return mid+b;
        }
        else if(mid+b>t) {
            hindex=mindex-1;
        }
        else if(mid+b<t) {
            lindex=mindex+1;
        }
    }
    if(A[mindex]+b>t&&mindex!=0)
    {
        return A[mindex-1]+b;
    }

    return mid+b;

}
int main() {
    int n,m,t;
    scanf("%d%d%d",&n,&m,&t);

    for(int i=0;i<n;i++) {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&B[i]);
    }

    int minres=-1;
    int res=0;
    int lindex=0,hindex=n-1;

    for(int i=0;i<m;i++) {
        res=t-max_sum(B[i],t,lindex,hindex);
        printf("res=%d\n",res);
        re[i]=res;
        if(minres<0) {
            minres=res;
        }
        else
        {
            if(res>=0&&res<minres)
            {
                minres = res;
            }
        }
    }
    if(minres<0)
    {
        minres = -1;
    }

    printf("%d\n",minres);

}