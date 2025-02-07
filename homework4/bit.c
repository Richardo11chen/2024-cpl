#include <stdio.h>
#include <tgmath.h>
//
// Created by ASUS on 24-10-22.
//
/*int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int max=a>=b?a:b;
    int arr_a[33]={0};
    int arr_b[33]={0};
    if(a==0) {
        arr_a[0]=0;
    }
    if(b==0) {
        arr_b[0]=0;
    }

    int m=0;
    while(a!=0) {
        int remainder=a%2;
        a=a/2;
        arr_a[m]=remainder;
        m++;
    }
    int n=0;
    while(b!=0) {
        int remainder=b%2;
        b=b/2;
        arr_b[n]=remainder;
        n++;
    }


    int arr[max];
    //&与
    for(int i=0;i<max;i++) {
        if(arr_a[i]==1&&arr_b[i]==1) {
            arr[max-1-i]=1;
        } else {
            arr[max-1-i]=0;
        }
    }
    //  for(int i=0;i<max;i++) {
    //      printf("%d",arr[i]);
    //  }
    int result=0;
    for(int i=max-1;i>=0;i--) {
        result+=arr[i]*pow(2,max-1-i);
    }
    printf("%d\n",result);

}
*/
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",a&b);
    printf("%d\n",a|b);
    printf("%d\n",a^b);
    printf("%d\n",~a);
    printf("%d\n",a<<b);
    printf("%d\n",a>>b);
    printf("%d\n",(a>>b)&1);
    int cnt=0;
    while(a) {
        cnt+=a&1;
        a>>=1;
    }
    printf("%d\n",cnt);
}