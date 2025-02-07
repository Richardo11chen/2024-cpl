#include <stdio.h>
//
// Created by ASUS on 24-10-12.
//
void PrintChar(char ch,int count);
void NewLine(void);//void:不接受任何参数

int main() {
    int line;
    scanf("%d", &line);
    for (int i = 0; i < line; i++) {

        PrintChar(' ', line-1-i);
        PrintChar('*',2*i+1);

        if(i<line-1) {
            printf("\n");
            //NewLine()
        }
    }
}

void PrintChar(char ch,int count) {
    for (int i = 0; i < count; i++) {
        printf("%c",ch);
    }
    return;//可加可不加
}
void NewLine(void) {
    printf("\n");
}