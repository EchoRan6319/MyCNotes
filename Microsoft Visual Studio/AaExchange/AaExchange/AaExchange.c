#define _CRT_SECURE_NO_WARNINGS // 禁用安全性警告
#include <stdio.h>

int main() {
    char ch;

    // 提示用户输入一个字母
    printf("请输入一个字母: ");
    scanf("%c", &ch); // 继续使用 scanf

    // 判断是否为大写字母
    if (ch >= 'A' && ch <= 'Z') {
        // 转换为小写字母
        ch = ch + 32;
        printf("转换后的字母为: %c\n", ch);
    }
    // 判断是否为小写字母
    else if (ch >= 'a' && ch <= 'z') {
        // 转换为大写字母
        ch = ch - 32;
        printf("转换后的字母为: %c\n", ch);
    }
    // 如果不是字母
    else {
        printf("输入的不是字母！\n");
    }

    return 0;
}//done