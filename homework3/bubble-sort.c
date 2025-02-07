#include <stdio.h>
/*#include <stdio.h>
//
// Created by ASUS on 24-10-18.
//
int main() {
    int T;
    scanf("%d", &T);
    while(T>0){

        int n,k,bool;
        int max=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > max) {
                    max = a[j];
                }
            }
            if(i == n - 1) {
                if(a[i]<max) {
                    bool=0;
                    break;
                } else {
                    bool=1;
                }
            }
        }
        if(bool==1) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }

        T--;
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int T, n;
    scanf("%d", &T);

    while (T>0) {
        scanf("%d", &n);
        int a[n];

        // 读取数组元素
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        // 使用小z的错误冒泡排序代码进行排序
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 2; j++) { // 注意这里的条件是n - i - 2
                if (a[j] > a[j + 1]) {
                    int tmp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = tmp;
                }
            }
        }

        // 检查排序结果
        int isSorted = 1; // 假设数组已排序
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                isSorted = 0; // 发现未排序的情况
                break;
            }
        }

        // 输出结果
        if (isSorted) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
        T--;
    }

    return 0;
}
*/
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int max=a[0];
        for (int i = 1; i < n-1; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }
        if(max>a[n-1]) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    }

}