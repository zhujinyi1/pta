//求整数平均值
#include<stdio.h>
int main()
{
    int a,b,c,d,sum;
    double ave;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    sum = a+b+c+d;
    ave = (double)sum/4.0;
    printf("Sum = %d; Average = %.1lf",sum,ave);
    return 0;
}