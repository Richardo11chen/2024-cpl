//
// Created by ASUS on 24-11-26.
//
#include <stdio.h>
#include <string.h>

char stack[10000];
int top = 0;

void push(char c) {
    stack[top++] = c;
}

void pop() {
    if (top != 0) {
        stack[--top] = 0;
    } else {
        printf("Empty\n");
    }
}

void Top() {
    if (top != 0) {
        printf("%c", stack[top - 1]);
    } else {
        printf("Empty\n");
    }
}

void print() {
    if (top != 0) {
        for (int i = top - 1; i >= 0; i--) {
            printf("| %c |\n", stack[i]);
        }
        printf("|===|");
    } else {
        printf("Empty\n");
    }
}

int main() {
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        char str[7];
        scanf(" %s", str);
        if (strcmp(str, "pop") == 0) {
            pop();
        } else if (strcmp(str, "push") == 0) {
            char c = 0;
            scanf(" %c", &c);
            push(c);
        } else if (strcmp(str, "top") == 0) {
            Top();
        } else if (strcmp(str, "print") == 0) {
            print();
        }
    }
}