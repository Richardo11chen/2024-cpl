
#include <stdio.h>

int arr[107374]={0};

int main() {
    int n,q;
    scanf("%d%d",&n,&q);
    arr[0]=1;
    arr[1<<n]=1;
    int knot=1;
    int cishu=1<<n;
    int lim=0;
    while (q--) {
        char QorA;

        scanf(" %c",&QorA);
        if (QorA=='Q') {

            printf("%d\n",knot);
            int i=0;
            int index=0;
            for (i=index;
                i<cishu;
                i=index) {
                int t=1;
                if (arr[i]!=0) {
                    while (1) {
                        if (arr[i+t]!=0) {
                            break;
                        }
                        t*=2;
                    }
                    index=i+t;
                    printf("%d ",arr[i]-1);
                }
                }
            printf("\n");
        }
        else {
            int id,m;
            int spacetwo=1;
            scanf("%d%d",&id,&m);
            while (spacetwo < m) {
                spacetwo *= 2;
            }

            int length=0;
            int index1=0,index2=0;

            while (length<spacetwo) {
                int i=0;
                for (i=index2;
                    i<=cishu;
                    i=index2) {
                    int t=1;
                    if (arr[i]!=0) {
                        while (1) {
                            if (arr[i+t]!=0) {
                                break;
                            }
                            t*=2;
                        }
                        index2=i+t;
                        if (arr[i]==1&&arr[i+t]!=0) {
                            index1=i;
                            length=t;
                            break;
                        }
                    }
                }
            }

            while (length>spacetwo) {
                index2=index1+length/2;
                arr[index2]=1;
                knot++;
                if (index2>lim) {
                    lim=index2;
                }
                length=index2-index1;
            }
            arr[index1]+=id;


        }
    }
    return 0;
}
