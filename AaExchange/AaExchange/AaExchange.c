#define _CRT_SECURE_NO_WARNINGS // ���ð�ȫ�Ծ���
#include <stdio.h>

int main() {
    char ch;

    // ��ʾ�û�����һ����ĸ
    printf("������һ����ĸ: ");
    scanf("%c", &ch); // ����ʹ�� scanf

    // �ж��Ƿ�Ϊ��д��ĸ
    if (ch >= 'A' && ch <= 'Z') {
        // ת��ΪСд��ĸ
        ch = ch + 32;
        printf("ת�������ĸΪ: %c\n", ch);
    }
    // �ж��Ƿ�ΪСд��ĸ
    else if (ch >= 'a' && ch <= 'z') {
        // ת��Ϊ��д��ĸ
        ch = ch - 32;
        printf("ת�������ĸΪ: %c\n", ch);
    }
    // ���������ĸ
    else {
        printf("����Ĳ�����ĸ��\n");
    }

    return 0;
}//done