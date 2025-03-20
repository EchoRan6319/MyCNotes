#include <stdio.h>
#include <stdlib.h>

int length(char* s);

int main() {
    char str[100]; // 可以根据实际情况增大数组长度
    printf("请输入字符串:\n");
    if (scanf_s("%99s", str, (unsigned)_countof(str)) != 1) { // 使用 scanf_s 并检查返回值
        printf("输入错误。\n");
        return EXIT_FAILURE;
    }

    int len = length(str); // 调用 length 函数计算字符串长度

    printf("字符串有 %d 个字符。\n", len);
    return EXIT_SUCCESS;
}

//求字符串长度  
int length(char* s) {
    int i = 0;
    while (*s != '\0') {
        i++;
        s++;
    }
    return i;
}