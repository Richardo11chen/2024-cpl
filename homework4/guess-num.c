#include <stdio.h>
#include <limits.h>
#include <tgmath.h>
//
// Created by ASUS on 24-10-2
/*int main() {
    int guess;
    printf("Enter a number: ");
    scanf("%d", &guess);
    int lef=0,rig=INT_MAX;
    int x =rig/2;
    while (lef<=rig) {
        if (guess == x) {
            printf("%d is guessed\n", guess);
            return 0;
        }
        if (guess > x) {
            lef=x+1;
            x=lef+(rig-lef)/2;
        }
        else {
            rig=x-1;
            x=lef+(rig-lef)/2;
        }
    }
}
*/
#include <stdio.h>
#include <limits.h>
#include <stdint.h> // 为了使用 uint32_t，但在这个例子中我们实际上不需要它，因为 we use unsigned long long

int main() {
    unsigned long long guess;
    printf("Enter a number (0 to ULLONG_MAX): ");
    if (scanf("%llu", &guess) != 1 || guess < 0) {
        // 注意：对于无符号类型，我们不需要检查 guess > ULLONG_MAX，因为那是不可能的
        printf("Invalid input. Please enter a number between 0 and ULLONG_MAX.\n");
        return 1;
    }

    unsigned long long left = 0, right = UINT_MAX; // 使用 ULLONG_MAX 来表示 unsigned long long 的最大值
    unsigned long long mid;
    int iterations = 0; // 添加迭代次数计数器，用于调试或展示

    while (left <= right) {
        iterations++;
        mid = left + (right - left) / 2; // 计算中点，避免整数溢出（这里对于无符号类型也是安全的）

        if (guess == mid) {
            printf("%llu is guessed in %d iterations\n", guess, iterations);
            return 0;
        } else if (guess > mid) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // 理论上，这个分支永远不会被执行到，因为 guess 是在有效范围内的
    // 但为了代码的完整性，还是保留了这个输出语句
    printf("Number not guessed (this should never happen)\n");

    return 0;

}
