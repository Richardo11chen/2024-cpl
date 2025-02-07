#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <tgmath.h>
//
// Created by ASUS on 24-10-19.
//
int main() {
    int n, ten;
    bool t;
    scanf("%d\n", &n);
    while (n--) {
        ten = 0;
        t = true;
        char str[15];
        scanf("%s", str);
        int strlong = strlen(str);
        for (int i = 0; i < strlong; i++) {
            if (str[i] != '0' && str[i] != '1' && str[i] != 'Z') {
                t = false;
                break;
            }
            if (str[i] == '1') {
                ten += 1 * pow(3, strlong-i-1);
            }
            if (str[i] == 'Z') {
                ten += -1 * pow(3, strlong-i-1);
            }
            if (str[i] == '0') {
                ten += 0;
            }
        }
        if (t == true) {
            printf("%d\n", ten);
        } else {
            printf("Radix Error\n");
        }
    }
}
