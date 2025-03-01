#include <stdio.h>

main() 
{
    int R = 5;
    double S, C;

    // 计算面积和周长
    S = 3.14 * R * R;
    C = 2 * 3.14 * R;

    // 输出结果，保留两位小数
    printf("圆的面积是：%.2f\n", S);
    printf("圆的周长是：%.2f\n", C);

    return 0;
}