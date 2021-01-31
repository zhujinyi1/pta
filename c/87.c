//计算标准体重
#include<stdio.h>
int main()
{
    double w;
    int a;
    scanf("%d",&a);
    w=2.0*(a-100)*0.9;
    printf("%.1lf",w);
    return 0;
}