#include <stdio.h>

/* 定义求两个整数中较大值的函数 */
int max(int x, int y)
{
    int z; // 用于存储比较结果
    if (x > y)
        z = x;  // 如果x较大则赋值x
    else
        z = y;  // 否则赋值y
    return (z); // 返回较大值
}

/* 主函数 */
int main()
{
    int a, b, c; // 定义变量：a-第一个数，b-第二个数，c-存储最大值

    // 显示输入提示信息
    printf("请输入两个整数，用逗号分隔（示例：12,34）：");
    scanf_s("%d,%d", &a, &b); // 读取用户输入的两个整数（注意需要用逗号分隔）
    //不用scanf_s的话vs2022会报错无法输出结果，微软编译器立大功

    c = max(a, b); // 调用max函数获取较大值

    printf("max=%d\n", c); // 输出结果
    return 0; // 程序正常结束
}