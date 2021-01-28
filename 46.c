//计算152的各位数字
#include<stdio.h>
int main()
{
    int a = 152,b,c,d;
    b=a%10;
    c=a/10%10;
    d=a/100%10;
    printf("%d = %d + %d*10 + %d*100",a,b,c,d);
    return 0;
}