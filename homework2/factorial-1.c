//
// Created by ASUS on 24-10-11.
//
#include <stdio.h>

/* int main() {
    int n;
    int sum=0;
    int factorial=1;
    int arr[n];
    scanf("%d",&n);
    int N=n;
        for (int i = 1; i <= N; i++) {
            if(n>0){
                for(int j=1;j<=n;j++) {
                    factorial=factorial*j;
                }
                n=N-i;
                int m1=factorial%10007;
                sum=sum+m1;
                factorial=1;

            }
        }

printf("%d",sum);

    int m=sum%10007;
    printf("%d",m);
    return 0;

}
*/

#include <stdio.h>

const int Mod = 10007;
long long int n, fac = 1, sum = 0;

int main(void) {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        fac = fac *i%Mod;
        sum=(sum+fac)%Mod;
    }
    printf("%lld", sum);
    return 0;
}