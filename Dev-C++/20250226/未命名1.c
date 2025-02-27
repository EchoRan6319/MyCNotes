#include <stdio.h>

//使用#define 标识符 常量，计算圆的面积
#define PI 3.14;

int main()
{
    int r=5;
    double S=PI*r*r;
    printf("%.2f\n",S);
    return 0;
}
