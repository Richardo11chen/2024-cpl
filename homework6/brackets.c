//
// Created by ASUS on 24-11-22.
//

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int top=0;
char stack[200000]={0};
bool isleft(char i) {
    return i=='('||i=='['||i=='{';
}
bool ispair(char j,char i) {
    return j==')'&&i=='('
        || j==']'&&i=='['
        || j=='}'&&i=='{';
}
void push(char i) {
    stack[top++]=i;
}
char pop() {

        return stack[--top];

}
int main() {
    int T;

    scanf("%d",&T);
    while (T--) {
        bool is=true;
        char str[200000]={0};
        top=0;
        scanf("%s",str);

        for (int i=0;i<strlen(str);i++) {
            if (isleft(str[i])) {
                push(str[i]);
            } else {
                if (top==0||
                    !ispair(str[i],pop())) {
                    is=false;

                }
            }
        }
        if (top != 0) {
            is = false;
        }

        if (is) {
            printf("True\n");
        } else {
            printf("False\n");
        }

    }
}
