#include <stdio.h>
int main() {
    int X=0;
    scanf("%x",&X);
    float a=*(float*)&X;
    printf("%d\n",X);
    printf("%u\n",X);
    printf("%.6f\n",a);
    printf("%.3e\n",a);
}